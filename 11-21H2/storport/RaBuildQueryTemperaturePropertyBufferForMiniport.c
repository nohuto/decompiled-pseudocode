/*
 * XREFs of RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C004D658
 * Callers:
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C0039DBC (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0053958 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RtlULongAdd @ 0x1C004F844 (RtlULongAdd.c)
 */

__int64 __fastcall RaBuildQueryTemperaturePropertyBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, ULONG *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v8; // rbp
  NTSTATUS v9; // eax
  __int64 v10; // r9
  _DWORD *v11; // r10
  ULONG v12; // edi
  unsigned int v13; // esi
  __int64 Pool; // rax
  int v15; // eax
  __int64 result; // rax
  ULONG pulResult; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a2 + 184);
  pulResult = 0;
  if ( *(_DWORD *)v4 == 1 )
    v8 = *(_QWORD *)(v4 + 24);
  else
    v8 = v4;
  if ( *(_DWORD *)v4 != 1 )
    v4 = 0LL;
  v9 = RtlULongAdd(0x1Cu, *(_DWORD *)(v5 + 8), &pulResult);
  v12 = pulResult;
  v13 = v9;
  if ( v9 >= 0 )
  {
    Pool = RaidAllocatePool(64LL, pulResult, 1918067026LL, v10);
    v11 = (_DWORD *)Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 28;
      *(_DWORD *)(Pool + 16) = 2954240;
      *(_QWORD *)(Pool + 4) = 0x54415245504D4554LL;
      if ( v4 )
        v15 = *(_DWORD *)(v4 + 1264);
      else
        v15 = *(_DWORD *)(v8 + 3996);
      v11[3] = v15;
      v11[6] = v12 - 28;
      v11[7] = 40;
      v11[8] = 40;
    }
    else
    {
      v13 = -1073741670;
    }
  }
  result = v13;
  *a3 = v11;
  *a4 = v12;
  return result;
}
