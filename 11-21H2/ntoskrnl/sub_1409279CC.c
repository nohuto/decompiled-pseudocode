/*
 * XREFs of sub_1409279CC @ 0x1409279CC
 * Callers:
 *     sub_14066D440 @ 0x14066D440 (sub_14066D440.c)
 *     sub_1406E9FB0 @ 0x1406E9FB0 (sub_1406E9FB0.c)
 *     sub_1409276D0 @ 0x1409276D0 (sub_1409276D0.c)
 *     sub_1409286EC @ 0x1409286EC (sub_1409286EC.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1409279CC(ULONG_PTR BugCheckParameter1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 v3; // r9
  __int64 *v4; // rdx
  __int16 v5; // ax
  __int64 v7; // rdx
  _OWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( sub_140347810((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112)) )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1360) )
    {
      sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v8, v3);
      ExAcquireFastMutex(&stru_140C48CC0);
      *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1360) + 2LL) = *(_QWORD *)(BugCheckParameter1 + 1400) != 0LL;
      v4 = *(__int64 **)(BugCheckParameter1 + 1408);
      if ( v4 )
      {
        v5 = *(_WORD *)(BugCheckParameter1 + 2412);
        if ( v5 == 332 || v5 == 452 )
        {
          v7 = *v4;
          if ( v7 )
            *(_BYTE *)(v7 + 2) = *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1360) + 2LL);
        }
      }
      KeReleaseGuardedMutex(&stru_140C48CC0);
      sub_1402D0930((__int64)v8, 0LL);
    }
    sub_1402AD030(v2);
  }
}
