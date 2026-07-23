/*
 * XREFs of MiAdvanceToLastUntrimmableVa @ 0x1403584FC
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14025C400 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x14025CFD0 (MiComputePxeWalkAction.c)
 * Callees:
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 */

unsigned __int64 __fastcall MiAdvanceToLastUntrimmableVa(unsigned __int64 a1)
{
  unsigned int v2; // edi
  unsigned __int64 Address; // r10
  int v4; // eax
  int v5; // ecx
  _QWORD **v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rcx

  v2 = 0;
  MiLockVadTree(1);
  Address = (unsigned __int64)MiLocateAddress(a1);
  while ( Address )
  {
    v4 = *(_DWORD *)(Address + 48);
    v5 = v4 & 0x70;
    if ( v5 != 16
      && v5 != 48
      && ((v4 & 0x200000) == 0 || (v4 & 0x800000) == 0 && (v4 & 0x180000u) < 0x100000)
      && v5 != 80 )
    {
      break;
    }
    ++v2;
    a1 = ((*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) << 12) | 0xFFF;
    if ( v2 > 0x100 )
      break;
    v6 = *(_QWORD ***)(Address + 8);
    v7 = Address;
    if ( v6 )
    {
      v8 = *v6;
      for ( Address = *(_QWORD *)(Address + 8); v8; v8 = (_QWORD *)*v8 )
        Address = (unsigned __int64)v8;
    }
    else
    {
      while ( 1 )
      {
        Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Address || *(_QWORD *)Address == v7 )
          break;
        v7 = Address;
      }
    }
  }
  MiUnlockVadTree(1, 0x11u);
  return a1;
}
