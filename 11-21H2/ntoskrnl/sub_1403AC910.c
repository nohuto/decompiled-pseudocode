/*
 * XREFs of sub_1403AC910 @ 0x1403AC910
 * Callers:
 *     sub_140A500C0 @ 0x140A500C0 (sub_140A500C0.c)
 * Callees:
 *     sub_1403AC640 @ 0x1403AC640 (sub_1403AC640.c)
 *     sub_1403ACD34 @ 0x1403ACD34 (sub_1403ACD34.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14050DA84 @ 0x14050DA84 (sub_14050DA84.c)
 */

char __fastcall sub_1403AC910(ULONG_PTR Argument)
{
  _QWORD *v1; // rbp
  char result; // al
  __int64 v3; // rdx
  __int16 v4; // bx
  int v5; // ebx
  _WORD v6[148]; // [rsp+60h] [rbp-8h] BYREF

  v1 = (_QWORD *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_QWORD *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFC0uLL) = Argument;
  result = (unsigned __int8)memset((void *)(((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0xC0uLL);
  v3 = *(_QWORD *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( *(_DWORD *)(v3 + 40) >= 2u )
  {
    if ( *(_DWORD *)(qword_140C4E390 + 228) == 5 )
    {
      v4 = v6[144];
      *(_QWORD *)(((unsigned __int64)*((unsigned int *)KeGetCurrentPrcb() + 9) << 7) + qword_140C4C770 + 16) = v1 + 16;
      _disable();
      v5 = v4 & 0x200;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) != 1 )
      {
        do
          _mm_pause();
        while ( *(_DWORD *)v3 );
      }
      if ( *((_DWORD *)KeGetCurrentPrcb() + 9) == dword_140D014D0 )
        result = sub_1403AC640(v3);
      else
        result = sub_1403ACD34();
      if ( v5 )
        _enable();
    }
    else
    {
      return sub_14050DA84(*v1);
    }
  }
  return result;
}
