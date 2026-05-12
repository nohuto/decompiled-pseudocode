/*
 * XREFs of RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C004D828
 * Callers:
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x1C003B7BC (RaidSetStorageAdapterProtocolSpecificProperty.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1C0053B14 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     RtlULongAdd @ 0x1C004F844 (RtlULongAdd.c)
 */

__int64 __fastcall RaBuildSetProtocolSpecificPropertyBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, ULONG *a4)
{
  __int64 v4; // r14
  _DWORD *v5; // r15
  _DWORD *v6; // rbx
  ULONG v7; // esi
  __int64 v8; // r13
  size_t v9; // r12
  __int64 v10; // rbp
  ULONG v11; // edx
  ULONG v12; // ecx
  NTSTATUS v13; // edi
  __int64 v14; // r9
  __int64 Pool; // rax
  int v16; // eax
  __int64 v17; // rcx
  ULONG v19; // [rsp+70h] [rbp+8h] BYREF
  ULONG pulResult; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v21; // [rsp+80h] [rbp+18h]
  ULONG *v22; // [rsp+88h] [rbp+20h]

  v22 = a4;
  v21 = a3;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = (_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  v19 = 0;
  v6 = 0LL;
  pulResult = 0;
  v7 = 0;
  v8 = (unsigned int)v5[4];
  v9 = (unsigned int)v5[5];
  if ( *(_DWORD *)v4 == 1 )
    v10 = *(_QWORD *)(v4 + 24);
  else
    v10 = v4;
  if ( *(_DWORD *)v4 != 1 )
    v4 = 0LL;
  v11 = v5[5];
  v12 = 80;
  if ( (unsigned int)v8 >= 0x28 )
  {
    v13 = RtlULongAdd(0x50u, v9, &pulResult);
    if ( v13 < 0 )
      goto LABEL_17;
    v11 = pulResult;
    v12 = v8 - 40;
  }
  v13 = RtlULongAdd(v12, v11, &v19);
  if ( v13 < 0 )
  {
    v7 = v19;
  }
  else
  {
    v7 = v19;
    Pool = RaidAllocatePool(64LL, v19, 1918067026LL, v14);
    v6 = (_DWORD *)Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 28;
      *(_DWORD *)(Pool + 16) = 2987004;
      *(_QWORD *)(Pool + 4) = 0x4F544F5250544553LL;
      if ( v4 )
        v16 = *(_DWORD *)(v4 + 1264);
      else
        v16 = *(_DWORD *)(v10 + 3996);
      v6[3] = v16;
      v6[6] = v7 - 28;
      v6[7] = 72;
      v6[8] = 72;
      v6[9] = *v5;
      v6[10] = v5[1];
      v6[11] = v5[2];
      v6[12] = v5[3];
      v6[16] = v5[7];
      v6[17] = v5[8];
      v6[18] = v5[9];
      v6[19] = v5[10];
      v6[13] = (unsigned int)v8 >= 0x40 ? 0x44 : 0;
      v17 = (unsigned int)v6[13] + 36LL;
      v6[14] = v9;
      memmove((char *)v6 + v17, (char *)v5 + v8, v9);
    }
    else
    {
      v13 = -1073741670;
      v7 = 0;
    }
  }
LABEL_17:
  *v21 = v6;
  *v22 = v7;
  return (unsigned int)v13;
}
