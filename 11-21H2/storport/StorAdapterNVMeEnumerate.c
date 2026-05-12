/*
 * XREFs of StorAdapterNVMeEnumerate @ 0x1C008607C
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001A238 (RaidAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidCreateBusEnumerator @ 0x1C001593C (RaidCreateBusEnumerator.c)
 *     RaidInitializeBusEnumerator @ 0x1C001597C (RaidInitializeBusEnumerator.c)
 *     RaidDeleteBusEnumerator @ 0x1C001A9D8 (RaidDeleteBusEnumerator.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C001B154 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C001BF3C (RaidBusEnumeratorReleaseUnit.c)
 *     StorAdapterNVMeFindNSIDInActiveNameSpaceIDList @ 0x1C0023DB4 (StorAdapterNVMeFindNSIDInActiveNameSpaceIDList.c)
 *     StorUnitReleaseIdentifyNamespaceResources @ 0x1C0023DE0 (StorUnitReleaseIdentifyNamespaceResources.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     StorProcessNVMeEnumeratorFillInfo @ 0x1C0065D10 (StorProcessNVMeEnumeratorFillInfo.c)
 *     StorProcessNVMeModifiedNodes @ 0x1C0065F38 (StorProcessNVMeModifiedNodes.c)
 *     StorProcessNVMeUnitEnumerator @ 0x1C0065FFC (StorProcessNVMeUnitEnumerator.c)
 *     StorAdapterNVMeInitializeEnumUnitIdentifyInfo @ 0x1C0084424 (StorAdapterNVMeInitializeEnumUnitIdentifyInfo.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C0086400 (StorGetNVMeIdentifyInfo.c)
 */

__int64 __fastcall StorAdapterNVMeEnumerate(__int64 a1, int *a2, _BYTE *a3)
{
  _BYTE *v3; // r13
  int v5; // r14d
  char v6; // r15
  _DWORD *v7; // rsi
  bool v9; // zf
  unsigned int v10; // r12d
  __int64 v11; // rdx
  int Unit; // ebx
  __int64 v13; // r8
  _DWORD *Pool; // rax
  int v15; // eax
  char v16; // r13
  char v17; // al
  __int64 *i; // rdi
  int v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+28h] [rbp-D8h]
  char v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22; // [rsp+51h] [rbp-AFh]
  char v23; // [rsp+52h] [rbp-AEh]
  int v24; // [rsp+54h] [rbp-ACh]
  __int64 v25[12]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26[26]; // [rsp+C0h] [rbp-40h] BYREF
  char v27; // [rsp+1A0h] [rbp+A0h]
  char v30; // [rsp+1B8h] [rbp+B8h] BYREF

  v3 = a3;
  memset(v26, 0, 0x88uLL);
  v5 = 0;
  v6 = 0;
  v27 = 0;
  v7 = 0LL;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  if ( !*(_QWORD *)(a1 + 5848) )
    return 3221225659LL;
  *(_DWORD *)(a1 + 5936) &= ~1u;
  v9 = (*(_BYTE *)(a1 + 104) & 0x40) == 0;
  *(_QWORD *)(a1 + 5940) = 0LL;
  if ( !v9 && (*(_DWORD *)(a1 + 4700) & 1) != 0 )
  {
    v27 = 1;
    v24 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 4712) + 10LL);
LABEL_6:
    v6 = 1;
    v10 = 0;
    goto LABEL_7;
  }
  if ( (*(_BYTE *)(a1 + 111) & 8) != 0 )
    goto LABEL_6;
  Pool = (_DWORD *)RaidAllocatePool(64LL, 4096LL, 1229873490LL, *(_QWORD *)(a1 + 8));
  v7 = Pool;
  if ( !Pool )
    goto LABEL_6;
  if ( (int)StorGetNVMeIdentifyInfo(a1, 0, 0, 2, v19, v20, 0, Pool) >= 0 )
  {
    if ( !*v7 )
    {
      *(_DWORD *)(a1 + 5936) |= 1u;
      ExFreePoolWithTag(v7, 0x494E6152u);
      return 3221226021LL;
    }
  }
  else
  {
    v6 = 1;
  }
  v10 = 1024;
LABEL_7:
  RaidCreateBusEnumerator(v26);
  Unit = RaidInitializeBusEnumerator(v26, a1);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 5848) + 516LL) )
  {
    while ( 1 )
    {
      if ( v27 && v5 != v24 )
        goto LABEL_32;
      memset(v25, 0, sizeof(v25));
      Unit = RaidBusEnumeratorGetUnit(v26, (unsigned int)(unsigned __int8)v5 + 1, (__int64)v25);
      if ( Unit < 0 )
      {
        Unit = -1073741801;
        goto LABEL_49;
      }
      if ( !v6 && !StorAdapterNVMeFindNSIDInActiveNameSpaceIDList(v7, v10, v5 + 1) )
      {
        BYTE5(v25[11]) = 0;
        StorProcessNVMeUnitEnumerator(v26, (__int64)v25);
        RaidBusEnumeratorReleaseUnit(v26, (__int64)v25);
        goto LABEL_32;
      }
      v21 = 0;
      v30 = 0;
      v15 = StorAdapterNVMeInitializeEnumUnitIdentifyInfo(a1, v5 + 1, (__int64)v25, &v21, &v30);
      v16 = v30;
      Unit = v15;
      if ( v15 >= 0 )
      {
        if ( v30 )
        {
          Unit = StorProcessNVMeEnumeratorFillInfo((__int64)v26, (__int64)v25);
          if ( Unit >= 0 )
          {
            StorProcessNVMeUnitEnumerator(v26, (__int64)v25);
            goto LABEL_28;
          }
        }
        else
        {
          Unit = -1073741637;
        }
      }
      if ( BYTE4(v25[11]) )
        StorUnitReleaseIdentifyNamespaceResources(v25[1]);
LABEL_28:
      RaidBusEnumeratorReleaseUnit(v26, (__int64)v25);
      if ( v16 && Unit >= 0 )
      {
        ++*(_DWORD *)(a1 + 5940);
        v23 = 1;
      }
      else if ( v21 )
      {
        ++*(_DWORD *)(a1 + 5944);
        v17 = 1;
        v3 = a3;
        goto LABEL_37;
      }
LABEL_32:
      if ( (unsigned int)++v5 >= *(_DWORD *)(*(_QWORD *)(a1 + 5848) + 516LL) )
      {
        v3 = a3;
        v17 = v22;
        goto LABEL_37;
      }
    }
  }
  v17 = 0;
LABEL_37:
  if ( Unit < 0 )
  {
LABEL_49:
    for ( i = (__int64 *)v26[15]; i != &v26[15]; i = (__int64 *)*i )
      StorUnitReleaseIdentifyNamespaceResources(*(i - 1));
  }
  else
  {
    if ( v17 )
    {
      Unit = -1073741637;
      goto LABEL_49;
    }
    if ( !v23 )
    {
      Unit = -1073741275;
      goto LABEL_49;
    }
    StorProcessNVMeModifiedNodes((__int64)v26, v11, v13);
    if ( *(_BYTE *)(a1 + 106) )
    {
      *(_BYTE *)(a1 + 106) = 0;
      *(_QWORD *)(a1 + 4136) = MEMORY[0xFFFFF78000000014];
    }
    if ( (*(_BYTE *)(a1 + 104) & 0x40) != 0 )
    {
      if ( a2 )
        *a2 = Unit;
      if ( v3 )
        *v3 = 1;
    }
  }
  RaidDeleteBusEnumerator((__int64)v26);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x494E6152u);
  return (unsigned int)Unit;
}
