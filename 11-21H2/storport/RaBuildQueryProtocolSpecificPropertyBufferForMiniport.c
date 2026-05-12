/*
 * XREFs of RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C004D4DC
 * Callers:
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C0039B18 (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C005366C (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RtlULongAdd @ 0x1C004F844 (RtlULongAdd.c)
 */

__int64 __fastcall RaBuildQueryProtocolSpecificPropertyBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, ULONG *a4)
{
  _DWORD *v4; // r14
  __int64 v5; // rdi
  unsigned int v7; // r15d
  ULONG v8; // esi
  ULONG v9; // r12d
  __int64 v10; // rbp
  ULONG v11; // edx
  ULONG v12; // ecx
  NTSTATUS v13; // ebx
  _DWORD *v14; // r10
  __int64 v15; // r9
  __int64 Pool; // rax
  int v17; // eax
  _QWORD *v18; // rax
  ULONG v20; // [rsp+60h] [rbp+8h] BYREF
  ULONG pulResult; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v22; // [rsp+70h] [rbp+18h]

  v22 = a3;
  v4 = *(_DWORD **)(a2 + 24);
  v5 = *(_QWORD *)(a1 + 64);
  v20 = 0;
  pulResult = 0;
  v7 = v4[6];
  v8 = 0;
  v9 = v4[7];
  if ( *(_DWORD *)v5 == 1 )
    v10 = *(_QWORD *)(v5 + 24);
  else
    v10 = v5;
  if ( *(_DWORD *)v5 != 1 )
    v5 = 0LL;
  v11 = v4[7];
  v12 = 80;
  if ( v7 >= 0x28 )
  {
    v13 = RtlULongAdd(0x50u, v9, &pulResult);
    if ( v13 < 0 )
      goto LABEL_17;
    v11 = pulResult;
    v12 = v7 - 40;
  }
  v13 = RtlULongAdd(v12, v11, &v20);
  if ( v13 < 0 )
  {
    v8 = v20;
  }
  else
  {
    v8 = v20;
    Pool = RaidAllocatePool(64LL, v20, 1918067026LL, v15);
    v14 = (_DWORD *)Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 28;
      *(_DWORD *)(Pool + 16) = 2954240;
      *(_QWORD *)(Pool + 4) = 0x4C4F434F544F5250LL;
      if ( v5 )
        v17 = *(_DWORD *)(v5 + 1264);
      else
        v17 = *(_DWORD *)(v10 + 3996);
      v14[3] = v17;
      v14[6] = v8 - 28;
      v14[7] = 48;
      v14[8] = 48;
      v14[9] = v4[2];
      v14[10] = v4[3];
      v14[11] = v4[4];
      v14[12] = v4[5];
      v14[16] = v4[9];
      v14[17] = v4[10];
      v14[18] = v4[11];
      v14[13] = v7 >= 0x28 ? 0x2C : 0;
      v14[14] = v9;
    }
    else
    {
      v13 = -1073741670;
    }
  }
LABEL_17:
  v18 = v22;
  *a4 = v8;
  *v18 = v14;
  return (unsigned int)v13;
}
