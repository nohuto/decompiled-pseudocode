/*
 * XREFs of rimHidP_GetLinkCollectionNodes @ 0x1C018519C
 * Callers:
 *     RIMIsParallelDevice @ 0x1C018AF60 (RIMIsParallelDevice.c)
 *     RIMRetrieveLinkCollection @ 0x1C018BDCC (RIMRetrieveLinkCollection.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall rimHidP_GetLinkCollectionNodes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax

  if ( !*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 160) )
    return 3221225659LL;
  v11 = SGDGetUserSessionState(v8, v7, v9, v10);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v11 + 160))(a1, a2, a3);
}
