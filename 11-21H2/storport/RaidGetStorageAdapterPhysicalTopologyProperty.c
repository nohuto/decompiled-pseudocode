/*
 * XREFs of RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C0002DE0
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C0084C68 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C0002D20 (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0020490 (StorpLogPhysicalTopologyInfo.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall RaidGetStorageAdapterPhysicalTopologyProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  _DWORD *v4; // r14
  int v6; // ebx
  bool v8; // cf
  size_t v9; // rbp
  int v10; // eax
  _DWORD *v11; // r13
  int v12; // esi
  unsigned int v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // rbx
  unsigned int v17; // [rsp+88h] [rbp+10h] BYREF
  PVOID P; // [rsp+90h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v4 = *(_DWORD **)(a2 + 24);
  v6 = a2;
  P = 0LL;
  v17 = 0;
  v8 = *(_DWORD *)(v3 + 16) < 8u;
  v9 = *(unsigned int *)(v3 + 8);
  *a3 = 0LL;
  if ( v8 )
  {
    return (unsigned int)-1073741585;
  }
  else if ( (unsigned int)v9 < 0x38 )
  {
    if ( (unsigned int)v9 < 8 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *a3 = 8LL;
      v12 = 0;
      *v4 = 56;
      v4[1] = 56;
    }
  }
  else
  {
    v10 = RaBuildQueryPhysicalTopologyBufferForMiniport(*(_QWORD *)(a1 + 8), a2, (__int64 *)&P, &v17);
    v11 = P;
    v12 = v10;
    if ( v10 >= 0 )
    {
      v12 = RaidAdapterSendSrbIoControlSynchronously(a1, v6, (_DWORD)P, v17, 0LL, 0, 64);
      if ( (int)(v12 + 0x80000000) < 0 || v12 == -2147483643 )
      {
        v14 = v11[8];
        memset(v4, 0, v9);
        v15 = v9;
        if ( (unsigned int)v9 >= v14 )
          v15 = v14;
        v16 = v15;
        memmove(v4, v11 + 7, v15);
        *v4 = 56;
        *a3 = v16;
        if ( v12 >= 0 && !*(_BYTE *)(a1 + 5216) && v4[1] <= (unsigned int)v9 )
        {
          *(_BYTE *)(a1 + 5216) = 1;
          StorpLogPhysicalTopologyInfo(a1, v4, (unsigned int)v9);
        }
      }
    }
    if ( v11 )
      ExFreePoolWithTag(v11, 0x72536152u);
  }
  return (unsigned int)v12;
}
