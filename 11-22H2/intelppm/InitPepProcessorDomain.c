/*
 * XREFs of InitPepProcessorDomain @ 0x1C003E4C8
 * Callers:
 *     InitPepPerfStates @ 0x1C0043864 (InitPepPerfStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitPepProcessorDomain(__int64 a1, int a2, int a3)
{
  __int64 Pool2; // rax
  unsigned int v7; // r9d

  Pool2 = ExAllocatePool2(64LL, 24LL, 1919119952LL);
  v7 = 0;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 4) = 5LL;
    *(_DWORD *)Pool2 = 1;
    *(_DWORD *)(Pool2 + 16) = 1;
    *(_DWORD *)(Pool2 + 12) = a2;
    *(_DWORD *)(Pool2 + 20) = a3;
    *(_QWORD *)(a1 + 1208) = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
