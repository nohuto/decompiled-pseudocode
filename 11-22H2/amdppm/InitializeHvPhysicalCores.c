/*
 * XREFs of InitializeHvPhysicalCores @ 0x1C0005694
 * Callers:
 *     RegisterHvPackage @ 0x1C0025620 (RegisterHvPackage.c)
 * Callees:
 *     GetHvLpCountForPhysicalCore @ 0x1C002495C (GetHvLpCountForPhysicalCore.c)
 */

__int64 __fastcall InitializeHvPhysicalCores(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // r10
  __int64 Pool2; // rax
  int HvLpCountForPhysicalCore; // eax
  _QWORD *v10; // rax

  v2 = 0;
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 1080) + 320LL);
  v6 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    do
    {
      v7 = v6;
      if ( *((_DWORD *)v6 + 6) == a2 )
        break;
      v6 = (_QWORD *)*v6;
      v7 = 0LL;
    }
    while ( v6 != v3 );
    if ( v7 )
      goto LABEL_10;
  }
  Pool2 = ExAllocatePool2(64LL, 40LL, 1919119952LL);
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 24) = a2;
    HvLpCountForPhysicalCore = GetHvLpCountForPhysicalCore(a2);
    *((_DWORD *)v7 + 4) = HvLpCountForPhysicalCore;
    v10 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v10 != v3 )
      __fastfail(3u);
    *v7 = v3;
    v7[1] = v10;
    *v10 = v7;
    v3[1] = v7;
LABEL_10:
    *(_QWORD *)(a1 + 1248) = v7;
    ++*((_DWORD *)v7 + 5);
    return v2;
  }
  return (unsigned int)-1073741670;
}
