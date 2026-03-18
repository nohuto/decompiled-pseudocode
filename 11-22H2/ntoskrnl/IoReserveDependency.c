/*
 * XREFs of IoReserveDependency @ 0x140839800
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406C99AC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9A08 (PnpAcquireDependencyRelationsLock.c)
 *     PipSetDependency @ 0x140839894 (PipSetDependency.c)
 */

__int64 __fastcall IoReserveDependency(__int64 a1, _WORD *a2, int a3)
{
  unsigned int v3; // ebx
  _DWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  _DWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  _WORD *v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]

  v5[1] = 0;
  v7[1] = 0;
  if ( a1 && a2 && *a2 && (a3 & 3) != 0 && (a3 & 0xFFFFFFFC) == 0 )
  {
    v7[0] = 1;
    v8 = a2;
    v9 = a3;
    v5[0] = 0;
    v6 = a1;
    PnpAcquireDependencyRelationsLock(1);
    v3 = PipSetDependency(v5, v7);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
