/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250
 * Callers:
 *     MmFlushImageSection @ 0x14023E840 (MmFlushImageSection.c)
 *     sub_14023E9A0 @ 0x14023E9A0 (sub_14023E9A0.c)
 *     sub_14023FA50 @ 0x14023FA50 (sub_14023FA50.c)
 *     sub_140246A0C @ 0x140246A0C (sub_140246A0C.c)
 *     sub_1402483DC @ 0x1402483DC (sub_1402483DC.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_14027F9DC @ 0x14027F9DC (sub_14027F9DC.c)
 *     sub_14028494C @ 0x14028494C (sub_14028494C.c)
 *     sub_140287C84 @ 0x140287C84 (sub_140287C84.c)
 *     sub_14029E440 @ 0x14029E440 (sub_14029E440.c)
 *     sub_1402C0900 @ 0x1402C0900 (sub_1402C0900.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14030F1E0 (MmDoesFileHaveUserWritableReferences.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_140325830 @ 0x140325830 (sub_140325830.c)
 *     sub_140355EE8 @ 0x140355EE8 (sub_140355EE8.c)
 *     sub_140393EC0 @ 0x140393EC0 (sub_140393EC0.c)
 *     sub_1403EAC70 @ 0x1403EAC70 (sub_1403EAC70.c)
 *     sub_14058A4E8 @ 0x14058A4E8 (sub_14058A4E8.c)
 *     sub_14058A6D4 @ 0x14058A6D4 (sub_14058A6D4.c)
 *     sub_14058B540 @ 0x14058B540 (sub_14058B540.c)
 *     sub_14058B784 @ 0x14058B784 (sub_14058B784.c)
 *     sub_140591724 @ 0x140591724 (sub_140591724.c)
 *     sub_1405A4940 @ 0x1405A4940 (sub_1405A4940.c)
 *     sub_1405E29C8 @ 0x1405E29C8 (sub_1405E29C8.c)
 *     sub_140657010 @ 0x140657010 (sub_140657010.c)
 *     sub_140B50C78 @ 0x140B50C78 (sub_140B50C78.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461C46 @ 0x140461C46 (sub_140461C46.c)
 */

__int64 __fastcall ExTryAcquireSpinLockExclusiveAtDpcLevel(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v3 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v7 = *(_DWORD *)(v3 + 24);
      *(_DWORD *)(v3 + 24) = v7 + 1;
      if ( v7 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    result = sub_140461C46(a1);
    v5 = result;
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    if ( !_InterlockedCompareExchange(a1, 0x80000000, 0) )
      return 1LL;
    v5 = 0;
  }
  v6 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v6 && *((_BYTE *)CurrentPrcb + 32) <= 1u )
  {
    v8 = *(_DWORD *)(v6 + 24) - 1;
    *(_DWORD *)(v6 + 24) = v8;
    if ( !v8 )
      sub_140418E4C(CurrentPrcb);
  }
  return v5;
}
