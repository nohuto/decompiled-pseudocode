/*
 * XREFs of ??1?$_Temporary_owner_del@PEAXV_lambda_2bb65f39da56ce77b91824536c9c4563_@@@std@@QEAA@XZ @ 0x180088814
 * Callers:
 *     ??$MakeAlignedSharedBuffer@X@Engine@Spectre@@YA?AV?$shared_ptr@X@std@@_KPEBX0@Z @ 0x1800885F4 (--$MakeAlignedSharedBuffer@X@Engine@Spectre@@YA-AV-$shared_ptr@X@std@@_KPEBX0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Temporary_owner_del<void *,_lambda_2bb65f39da56ce77b91824536c9c4563_>::~_Temporary_owner_del<void *,_lambda_2bb65f39da56ce77b91824536c9c4563_>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
    _aligned_free(*(void **)a1);
}
