/*
 * XREFs of sub_1403AC88C @ 0x1403AC88C
 * Callers:
 *     sub_1403AC640 @ 0x1403AC640 (sub_1403AC640.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1403AC88C(unsigned int a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // r8
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( a1 == *((_DWORD *)KeGetCurrentPrcb() + 9) )
  {
    v1 = __readcr2();
    __writecr2(v1);
    return __rdtsc();
  }
  else
  {
    v3 = (unsigned __int64)a1 << 7;
    _InterlockedExchange((volatile __int32 *)(v3 + qword_140C4C770), 6);
    while ( *(_DWORD *)(v3 + qword_140C4C770) == 6 )
      _mm_pause();
    while ( *(_DWORD *)(v3 + qword_140C4C770) )
      _mm_pause();
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    return *(_QWORD *)(v3 + qword_140C4C770 + 8);
  }
}
