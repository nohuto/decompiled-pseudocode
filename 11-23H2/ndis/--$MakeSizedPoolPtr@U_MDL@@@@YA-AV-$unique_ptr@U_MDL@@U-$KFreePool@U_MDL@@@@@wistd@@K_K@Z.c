/*
 * XREFs of ??$MakeSizedPoolPtr@U_MDL@@@@YA?AV?$unique_ptr@U_MDL@@U?$KFreePool@U_MDL@@@@@wistd@@K_K@Z @ 0x1C011FFD8
 * Callers:
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C011FCF0 (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MakeSizedPoolPtr<_MDL>(_QWORD *a1, __int64 a2, __int64 a3)
{
  _OWORD *Pool2; // rax

  Pool2 = (_OWORD *)ExAllocatePool2(64LL, a3, 1833780302);
  if ( Pool2 )
  {
    *a1 = Pool2;
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    Pool2[2] = 0LL;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
