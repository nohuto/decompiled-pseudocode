/*
 * XREFs of StorAdapterNVMeEnumerate @ 0x1C00AB530
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015938 (RaidAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C00164A4 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C00177A8 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidDeleteBusEnumerator @ 0x1C0018608 (RaidDeleteBusEnumerator.c)
 *     StorAdapterNVMeFindNSIDInActiveNameSpaceIDList @ 0x1C0023338 (StorAdapterNVMeFindNSIDInActiveNameSpaceIDList.c)
 *     StorUnitReleaseIdentifyNamespaceResources @ 0x1C0023364 (StorUnitReleaseIdentifyNamespaceResources.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaidCreateBusEnumerator @ 0x1C003EDCC (RaidCreateBusEnumerator.c)
 *     RaidInitializeBusEnumerator @ 0x1C003EDFC (RaidInitializeBusEnumerator.c)
 *     StorProcessNVMeEnumeratorFillInfo @ 0x1C00747F0 (StorProcessNVMeEnumeratorFillInfo.c)
 *     StorProcessNVMeModifiedNodes @ 0x1C0074A18 (StorProcessNVMeModifiedNodes.c)
 *     StorProcessNVMeUnitEnumerator @ 0x1C0074ADC (StorProcessNVMeUnitEnumerator.c)
 *     StorAdapterNVMeInitializeEnumUnitIdentifyInfo @ 0x1C009F400 (StorAdapterNVMeInitializeEnumUnitIdentifyInfo.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C00AB8B4 (StorGetNVMeIdentifyInfo.c)
 */

__int64 __fastcall StorAdapterNVMeEnumerate(__int64 a1, int *a2, _BYTE *a3)
{
  _BYTE *v3; // r12
  int v5; // r14d
  char v6; // r15
  _DWORD *v7; // rsi
  bool v9; // zf
  unsigned int v10; // r13d
  __int64 v11; // rdx
  int Unit; // ebx
  __int64 v13; // r8
  int v14; // r10d
  _DWORD *Pool; // rax
  int v16; // eax
  char v17; // r12
  char v18; // al
  _QWORD *i; // rdi
  int v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+28h] [rbp-D8h]
  char v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23; // [rsp+51h] [rbp-AFh]
  char v24; // [rsp+52h] [rbp-AEh]
  int v25; // [rsp+54h] [rbp-ACh]
  _BYTE v26[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h]
  char v28; // [rsp+BCh] [rbp-44h]
  char v29; // [rsp+BDh] [rbp-43h]
  __int64 v30[15]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v31; // [rsp+138h] [rbp+38h] BYREF
  char v32; // [rsp+1A0h] [rbp+A0h]
  char v35; // [rsp+1B8h] [rbp+B8h] BYREF

  v3 = a3;
  memset_0(v30, 0, 0x88uLL);
  v5 = 0;
  v6 = 0;
  v32 = 0;
  v7 = 0LL;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  if ( !*(_QWORD *)(a1 + 5912) )
    return 3221225659LL;
  *(_DWORD *)(a1 + 6064) &= ~1u;
  v9 = (*(_BYTE *)(a1 + 104) & 0x40) == 0;
  *(_QWORD *)(a1 + 6068) = 0LL;
  if ( !v9 && (*(_DWORD *)(a1 + 4764) & 1) != 0 )
  {
    v32 = 1;
    v25 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 4776) + 10LL);
LABEL_6:
    v6 = 1;
    v10 = 0;
    goto LABEL_7;
  }
  if ( (*(_BYTE *)(a1 + 111) & 0x40) != 0 )
    goto LABEL_6;
  Pool = (_DWORD *)RaidAllocatePool(64LL, 4096LL, 1229873490LL, *(_QWORD *)(a1 + 8));
  v7 = Pool;
  if ( !Pool )
    goto LABEL_6;
  if ( (int)StorGetNVMeIdentifyInfo(a1, 0, 0, 2, v20, v21, 0, Pool) >= 0 )
  {
    if ( !*v7 )
    {
      *(_DWORD *)(a1 + 6064) |= 1u;
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
  RaidCreateBusEnumerator(v30);
  Unit = RaidInitializeBusEnumerator(v30, a1);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 5912) + 516LL) )
  {
    while ( 1 )
    {
      if ( v32 && v5 != v25 )
        goto LABEL_32;
      memset_0(v26, 0, 0x60uLL);
      Unit = RaidBusEnumeratorGetUnit(v30, (unsigned int)(unsigned __int8)v5 + 1, (__int64)v26);
      if ( Unit < 0 )
      {
        Unit = -1073741801;
        goto LABEL_49;
      }
      v14 = v5 + 1;
      if ( !v6 && !StorAdapterNVMeFindNSIDInActiveNameSpaceIDList(v7, v10, v14) )
      {
        v29 = 0;
        StorProcessNVMeUnitEnumerator(v30, (__int64)v26);
        RaidBusEnumeratorReleaseUnit(v30, (__int64)v26);
        goto LABEL_32;
      }
      v22 = 0;
      v35 = 0;
      v16 = StorAdapterNVMeInitializeEnumUnitIdentifyInfo(a1, v14, (__int64)v26, &v22, &v35);
      v17 = v35;
      Unit = v16;
      if ( v16 >= 0 )
      {
        if ( v35 )
        {
          Unit = StorProcessNVMeEnumeratorFillInfo((__int64)v30, (__int64)v26);
          if ( Unit >= 0 )
          {
            StorProcessNVMeUnitEnumerator(v30, (__int64)v26);
            goto LABEL_28;
          }
        }
        else
        {
          Unit = -1073741637;
        }
      }
      if ( v28 )
        StorUnitReleaseIdentifyNamespaceResources(v27);
LABEL_28:
      RaidBusEnumeratorReleaseUnit(v30, (__int64)v26);
      if ( v17 && Unit >= 0 )
      {
        ++*(_DWORD *)(a1 + 6068);
        v24 = 1;
      }
      else if ( v22 )
      {
        ++*(_DWORD *)(a1 + 6072);
        v18 = 1;
        v3 = a3;
        goto LABEL_37;
      }
LABEL_32:
      if ( (unsigned int)++v5 >= *(_DWORD *)(*(_QWORD *)(a1 + 5912) + 516LL) )
      {
        v3 = a3;
        v18 = v23;
        goto LABEL_37;
      }
    }
  }
  v18 = 0;
LABEL_37:
  if ( Unit < 0 )
  {
LABEL_49:
    for ( i = v31; i != &v31; i = (_QWORD *)*i )
      StorUnitReleaseIdentifyNamespaceResources(*(i - 1));
  }
  else
  {
    if ( v18 )
    {
      Unit = -1073741637;
      goto LABEL_49;
    }
    if ( !v24 )
    {
      Unit = -1073741275;
      goto LABEL_49;
    }
    StorProcessNVMeModifiedNodes((__int64)v30, v11, v13);
    if ( *(_BYTE *)(a1 + 106) )
    {
      *(_BYTE *)(a1 + 106) = 0;
      *(_QWORD *)(a1 + 4200) = MEMORY[0xFFFFF78000000014];
    }
    if ( (*(_BYTE *)(a1 + 104) & 0x40) != 0 )
    {
      if ( a2 )
        *a2 = Unit;
      if ( v3 )
        *v3 = 1;
    }
  }
  RaidDeleteBusEnumerator((__int64)v30);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x494E6152u);
  return (unsigned int)Unit;
}
