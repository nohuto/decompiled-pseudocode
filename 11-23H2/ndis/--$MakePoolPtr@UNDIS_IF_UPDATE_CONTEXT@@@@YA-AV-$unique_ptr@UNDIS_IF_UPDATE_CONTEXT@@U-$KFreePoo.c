/*
 * XREFs of ??$MakePoolPtr@UNDIS_IF_UPDATE_CONTEXT@@@@YA?AV?$unique_ptr@UNDIS_IF_UPDATE_CONTEXT@@U?$KFreePool@UNDIS_IF_UPDATE_CONTEXT@@@@@wistd@@K@Z @ 0x1C010C568
 * Callers:
 *     NdisIfUpdateInterface @ 0x1C0037C70 (NdisIfUpdateInterface.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MakePoolPtr<NDIS_IF_UPDATE_CONTEXT>(__int64 *a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rdx

  Pool2 = ExAllocatePool2(64LL, 40LL, 1718174798);
  v3 = 0LL;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    v3 = Pool2;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
  }
  *a1 = v3;
  return a1;
}
