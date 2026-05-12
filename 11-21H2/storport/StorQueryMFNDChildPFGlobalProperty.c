/*
 * XREFs of StorQueryMFNDChildPFGlobalProperty @ 0x1C0091040
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0038954 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     StorLogMFNDQueryChildPFProperty @ 0x1C0067428 (StorLogMFNDQueryChildPFProperty.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDChildPFGlobalProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // rdi
  size_t v6; // r15
  int v7; // ebx
  __int64 Pool; // rax
  _BYTE *v9; // rsi
  _DWORD v11[16]; // [rsp+50h] [rbp-68h] BYREF

  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  memset(v11, 0, sizeof(v11));
  *a3 = 0LL;
  if ( (*(_BYTE *)(a1 + 111) & 1) != 0 )
  {
    if ( v4 && v6 >= 0x208 )
    {
      Pool = RaidAllocatePool(64LL, 512LL, 1179476306LL, *(_QWORD *)(a1 + 8));
      v9 = (_BYTE *)Pool;
      if ( Pool )
      {
        v11[0] = 10;
        v11[10] = v11[10] & 0xFFFFFF00 | 0xD2;
        v7 = StorSendMFNDCommand(a1, Pool, 512, (unsigned int)v11);
        if ( v7 >= 0 )
        {
          memset(v4, 0, v6);
          v4[2] = 33554944;
          *v4 = 520;
          v4[1] = 520;
          *((_WORD *)v4 + 6) = 1;
          *((_WORD *)v4 + 7) = *(_WORD *)v9;
          *((_BYTE *)v4 + 16) = v9[2];
          *((_BYTE *)v4 + 17) = v9[3];
          *((_BYTE *)v4 + 18) = v9[4];
          *a3 = 520LL;
        }
        ExFreePoolWithTag(v9, 0x464D6152u);
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
      v7 = -1073741789;
    }
  }
  else
  {
    v7 = -1073741637;
  }
  if ( v7 < 0 )
    v4 = 0LL;
  StorLogMFNDQueryChildPFProperty(a1, (__int64)v4, 0, v7);
  return (unsigned int)v7;
}
