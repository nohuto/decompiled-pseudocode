/*
 * XREFs of HamIpcChannelAddCallback @ 0x180002750
 * Callers:
 *     HamCreateActivityForProcess @ 0x180001B20 (HamCreateActivityForProcess.c)
 *     HamCreateExtendedExecution @ 0x18001CAE0 (HamCreateExtendedExecution.c)
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x180008A60 (HampIpcChannelObjectCompareObjectsForTree.c)
 */

__int64 __fastcall HamIpcChannelAddCallback(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // r8
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  int v6; // esi
  unsigned __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 40);
  RtlAcquireSRWLockExclusive(v1 + 8);
  *(_DWORD *)(v1 + 16) = GetCurrentThreadId();
  v4 = *(_QWORD *)(a1 + 40) + 24LL;
  v5 = *(_QWORD *)v4;
  v6 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 32LL) & 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 32LL) & 1) != 0 )
  {
    if ( !v5 )
    {
LABEL_13:
      LOBYTE(v3) = 0;
      goto LABEL_14;
    }
    v5 ^= v4;
  }
  LOBYTE(v3) = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( (int)HampIpcChannelObjectCompareObjectsForTree(a1, v5, v3) < 0 )
      {
        v7 = *(_QWORD *)v5;
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_13;
          v7 ^= v5;
        }
        if ( !v7 )
          goto LABEL_13;
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_15;
          v7 ^= v5;
        }
        if ( !v7 )
        {
LABEL_15:
          LOBYTE(v3) = 1;
          break;
        }
      }
      v5 = v7;
    }
  }
LABEL_14:
  RtlRbInsertNodeEx(v4, v5, v3, a1);
  *(_DWORD *)(v1 + 16) = 0;
  return RtlReleaseSRWLockExclusive(v1 + 8);
}
