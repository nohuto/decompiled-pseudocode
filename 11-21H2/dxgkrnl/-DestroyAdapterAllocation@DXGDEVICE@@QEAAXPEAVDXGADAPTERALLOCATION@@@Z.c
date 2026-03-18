/*
 * XREFs of ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C019EA24
 * Callers:
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C01950A0 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019DC2C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C02D5C7C (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C002BC60 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::DestroyAdapterAllocation(DXGDEVICE *this, struct DXGADAPTERALLOCATION *a2)
{
  char v3; // r10
  __int64 v4; // r8
  __int64 v5; // r11
  char v6; // dl
  __int64 v7; // rcx
  int v8; // [rsp+40h] [rbp-C8h]
  int v9; // [rsp+48h] [rbp-C0h]
  int v10; // [rsp+50h] [rbp-B8h]
  int v11; // [rsp+60h] [rbp-A8h]
  int v12; // [rsp+68h] [rbp-A0h]
  int v13; // [rsp+70h] [rbp-98h]
  int v14; // [rsp+78h] [rbp-90h]
  int v15; // [rsp+88h] [rbp-80h]
  int v16; // [rsp+E0h] [rbp-28h]
  int v17; // [rsp+E8h] [rbp-20h]

  v3 = (char)this;
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    if ( bTracingEnabled )
    {
      v4 = *((_QWORD *)a2 + 14);
      v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v6 = (*((_DWORD *)a2 + 1) >> 21) & 0x3F;
      v7 = *(_QWORD *)(*((_QWORD *)this + 5) + 64LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
          v7,
          &EventDestroyAdapterAllocation,
          v4,
          *(_QWORD *)(v7 + 80),
          v3,
          v5,
          0,
          v4,
          v8,
          v9,
          v10,
          0,
          v11,
          v12,
          v13,
          v14,
          (char)a2,
          v15,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          v16,
          v17,
          v6,
          0);
    }
  }
  else if ( *((_QWORD *)a2 + 1) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 136LL))(
      *((_QWORD *)this + 95),
      0LL);
    *((_QWORD *)a2 + 1) = 0LL;
  }
}
