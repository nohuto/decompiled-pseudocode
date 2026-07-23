/*
 * XREFs of sub_1407EEEB8 @ 0x1407EEEB8
 * Callers:
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 * Callees:
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall sub_1407EEEB8(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  signed __int64 *v4; // rbx
  __int64 v5; // rdi
  struct _EX_RUNDOWN_REF *v6; // rcx

  v3 = 0LL;
  v4 = (signed __int64 *)(*((_QWORD *)PsInitialSystemProcess + 269) + 80LL);
  v5 = sub_140347C10((__int64)v4, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    sub_14029F350(v4, 0, v5, (__int64)v4);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  v6 = *(struct _EX_RUNDOWN_REF **)(a2 + 48);
  if ( v6 && sub_140347810(v6 + 1) )
    v3 = *(_QWORD *)(a2 + 48);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  sub_1402AFC00((ULONG_PTR)v4);
  return v3;
}
