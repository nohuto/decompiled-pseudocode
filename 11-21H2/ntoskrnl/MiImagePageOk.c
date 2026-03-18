/*
 * XREFs of MiImagePageOk @ 0x140271020
 * Callers:
 *     MiSoftFaultMappedView @ 0x140270A00 (MiSoftFaultMappedView.c)
 *     MiWaitForCollidedFaultComplete @ 0x14027FEF8 (MiWaitForCollidedFaultComplete.c)
 * Callees:
 *     MiUnlockVadTree @ 0x1402806E0 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 */

_BOOL8 __fastcall MiImagePageOk(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v7; // r8
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 Address; // rax
  __int64 v13; // rdx
  int v14; // ecx

  v4 = *(_QWORD *)(a2 + 40);
  v5 = a4;
  if ( v4 >= 0 )
    return 1LL;
  v7 = *(_QWORD *)(a2 + 16);
  if ( (v7 & 0x400) == 0 || (((unsigned __int64)v4 >> 60) & 7) == 3 )
    return 1LL;
  v9 = *(_QWORD *)(a2 + 16);
  if ( qword_140C50780 && (v7 & 0x10) == 0 )
    v9 = ~qword_140C50780 & v7;
  v10 = v9 >> 16;
  if ( (*(_DWORD *)(*(_QWORD *)v10 + 56LL) & 0x20) == 0 )
    return 1LL;
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 96LL) + 40LL);
  if ( !v11 || (v11 & 0xFFFFFFFFFFFFFFF8uLL) == 8 || (v11 & 3) == 2 )
    return 1LL;
  if ( a1 >= 0xFFFF800000000000uLL )
  {
    if ( (MiFlags & 0x8000) == 0 || (v7 & 0x40) == 0 )
      return 1LL;
LABEL_18:
    if ( !v5 )
      return 0LL;
    goto LABEL_19;
  }
  if ( !a4 )
  {
    MiLockVadTree(1LL);
    Address = MiLocateAddress(a1);
    LOBYTE(v13) = 17;
    v5 = Address;
    MiUnlockVadTree(1LL, v13);
    goto LABEL_18;
  }
LABEL_19:
  v14 = *(_DWORD *)(v5 + 48);
  return (v14 & 0x70) == 0x20
      && ((v14 & 0xF80) == 0x80
       || (*(_DWORD *)(v5 + 64) & 0x8000000) != 0 && (v11 & 4) == 0
       || (MiFlags & 0x400) != 0 && (*(_BYTE *)(v10 + 34) & 2) != 0);
}
