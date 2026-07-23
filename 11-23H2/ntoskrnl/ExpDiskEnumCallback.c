/*
 * XREFs of ExpDiskEnumCallback @ 0x140412AE0
 * Callers:
 *     BcdEnumerateDisks @ 0x140680EC0 (BcdEnumerateDisks.c)
 * Callees:
 *     ExpGetPartitionTableInfo @ 0x1409FCE24 (ExpGetPartitionTableInfo.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

char __fastcall ExpDiskEnumCallback(const WCHAR *a1, __int64 a2, __int64 a3)
{
  char v4; // di
  __int64 v5; // rax
  _QWORD *v6; // r10
  unsigned int v7; // r8d

  v4 = 0;
  if ( (int)ExpGetPartitionTableInfo(a1) >= 0 && MEMORY[0] == 1 )
  {
    v5 = 0LL;
    if ( MEMORY[4] )
    {
      v6 = *(_QWORD **)a3;
      while ( 1 )
      {
        v7 = v5 + 1;
        if ( *(_QWORD *)(144 * v5 + 0x60) == *v6 && *(_QWORD *)(144 * v5 + 0x68) == v6[1] )
          break;
        v5 = v7;
        if ( v7 >= MEMORY[4] )
          return v4;
      }
      *(_DWORD *)(a3 + 8) = v7;
      v4 = 1;
      *(_BYTE *)(a3 + 12) = 1;
    }
  }
  return v4;
}
