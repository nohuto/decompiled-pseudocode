/*
 * XREFs of sub_14069B58C @ 0x14069B58C
 * Callers:
 *     sub_14069B030 @ 0x14069B030 (sub_14069B030.c)
 *     sub_14069B48C @ 0x14069B48C (sub_14069B48C.c)
 *     sub_1407A98B0 @ 0x1407A98B0 (sub_1407A98B0.c)
 *     sub_1407B0A20 @ 0x1407B0A20 (sub_1407B0A20.c)
 *     sub_1407B0C70 @ 0x1407B0C70 (sub_1407B0C70.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall sub_14069B58C(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  int v4; // eax

  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) != 2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( !v3 )
      return v2;
    ExAcquirePushLockSharedEx(v3 - 16, 0LL);
    v4 = *(_DWORD *)(a1 + 416) & 6;
    if ( v4 == 4 )
    {
      v2 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      if ( v4 != 6 )
      {
LABEL_8:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 - 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v3 - 16));
        sub_1402AFC00(v3 - 16);
        return v2;
      }
      v2 = *(_QWORD *)(v3 + 16);
    }
    if ( v2 )
      v2 &= -(__int64)(ObReferenceObjectSafe(v2) != 0);
    goto LABEL_8;
  }
  ObfReferenceObject((PVOID)a1);
  return a1;
}
