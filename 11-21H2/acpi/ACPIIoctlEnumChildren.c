/*
 * XREFs of ACPIIoctlEnumChildren @ 0x1C001F2D4
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001410 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0020500 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C0095160 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C001F4D8 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     AMLIFindNameSpaceObject @ 0x1C001F5E4 (AMLIFindNameSpaceObject.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall ACPIIoctlEnumChildren(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  bool v4; // cf
  unsigned int v5; // r13d
  _IRP *MasterIrp; // r15
  int v7; // ebx
  int MdlAddress; // ecx
  unsigned int v9; // ebx
  char *v10; // rax
  char *v11; // rsi
  PVOID *v12; // rdi
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rcx
  size_t MdlAddress_low; // rdi
  char *Pool2; // rax
  unsigned int v19; // [rsp+68h] [rbp+10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h]

  a2->IoStatus.Information = 0LL;
  v4 = *(_DWORD *)(a3 + 16) < 0x10u;
  v19 = 0;
  if ( v4 )
  {
    v14 = -1073741820;
    goto LABEL_21;
  }
  v5 = *(_DWORD *)(a3 + 8);
  if ( v5 < 0x14 )
  {
    v14 = -1073741789;
    goto LABEL_21;
  }
  v20 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 760);
  if ( !v20 )
  {
    v14 = -1073741810;
    goto LABEL_21;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1214866753 )
  {
    v14 = -1073741585;
    goto LABEL_21;
  }
  v7 = *(_DWORD *)&MasterIrp->AllocationProcessorNumber;
  MdlAddress = (int)MasterIrp->MdlAddress;
  if ( (MasterIrp->AllocationProcessorNumber & 3) == 3 || (v7 & 7) == 0 || (v7 & 4) != 0 && !MdlAddress )
  {
    v14 = -1072431089;
    goto LABEL_21;
  }
  v9 = *(_DWORD *)&MasterIrp->AllocationProcessorNumber & 1;
  if ( MdlAddress )
  {
    MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
    Pool2 = (char *)ExAllocatePool2(64LL, MdlAddress_low, 1383097153LL);
    v11 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, (char *)&MasterIrp->MdlAddress + 4, MdlAddress_low);
      _strupr(v11);
      goto LABEL_11;
    }
LABEL_31:
    v14 = -1073741670;
    goto LABEL_21;
  }
  v10 = (char *)ExAllocatePool2(64LL, 2LL, 1383097153LL);
  v11 = v10;
  if ( !v10 )
    goto LABEL_31;
  *v10 = 0;
  v9 |= 2u;
LABEL_11:
  v12 = (PVOID *)ExAllocatePool2(64LL, 40LL, 1383097153LL);
  if ( v12 )
  {
    v13 = ExAllocatePool2(64LL, 40LL, 1383097153LL);
    v12[1] = (PVOID)v13;
    if ( v13 )
    {
      v14 = AMLIFindNameSpaceObject(v20, v12, v9, v11);
      if ( v14 >= 0 )
      {
        v14 = ACPIIoctlEnumChildrenPopulateOutputBuffer(MasterIrp, v5, &v19, v12);
        a2->IoStatus.Information = v19;
      }
    }
    else
    {
      v14 = -1073741670;
    }
  }
  else
  {
    v14 = -1073741670;
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0x52706341u);
  if ( v12 )
  {
    v15 = (__int64)v12[1];
    if ( v15 )
    {
      dword_1C0081AC8 = 0;
      byte_1C0081ACC = 0;
      FreeDataBuffs(v15, 1u);
      ExFreePoolWithTag(v12[1], 0x52706341u);
      v12[1] = 0LL;
    }
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    FreeDataBuffs((__int64)v12, 1u);
    ExFreePoolWithTag(v12, 0x52706341u);
  }
LABEL_21:
  a2->IoStatus.Status = v14;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v14;
}
