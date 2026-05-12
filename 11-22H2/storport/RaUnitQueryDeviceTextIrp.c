/*
 * XREFs of RaUnitQueryDeviceTextIrp @ 0x1C00A245C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00076A0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     StorGetIdentityVendorId @ 0x1C001F89C (StorGetIdentityVendorId.c)
 *     StorGetIdentityProductId @ 0x1C001F8E4 (StorGetIdentityProductId.c)
 *     RtlStringCchPrintfW @ 0x1C001F9BC (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     PortGetDeviceType @ 0x1C00A1420 (PortGetDeviceType.c)
 */

__int64 __fastcall RaUnitQueryDeviceTextIrp(__int64 a1, IRP *a2)
{
  unsigned int Length; // ebp
  wchar_t *Pool; // rax
  int v6; // ebx
  wchar_t *v7; // rdi
  unsigned int v8; // r8d
  IRP *v9; // rcx
  char **DeviceType; // rax
  __int64 v12; // rax
  _BYTE *v13; // r9
  _BYTE *v14; // rax
  _BYTE *v15; // r9
  _BYTE v16[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v17[24]; // [rsp+40h] [rbp-48h] BYREF

  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  Pool = (wchar_t *)RaidAllocatePool(256LL, 512LL, 1414619474LL, *(_QWORD *)(a1 + 8));
  v6 = 0;
  v7 = Pool;
  if ( Pool )
  {
    if ( Length )
    {
      if ( Length == 1 )
      {
        RtlStringCchPrintfW(
          Pool,
          0x100uLL,
          L"Bus Number %d, Target Id %d, LUN %d",
          *(unsigned __int8 *)(a1 + 96),
          *(unsigned __int8 *)(a1 + 97),
          *(unsigned __int8 *)(a1 + 98));
      }
      else
      {
        ExFreePoolWithTag(Pool, 0x54516152u);
        v7 = 0LL;
        v6 = -1073741637;
      }
      goto LABEL_5;
    }
    if ( (*(_DWORD *)(a1 + 1872) & 1) != 0 )
    {
      RtlStringCchPrintfW(Pool, 0x100uLL, L"VM passthrough LUN device");
    }
    else
    {
      StorGetIdentityVendorId((__int64 *)(a1 + 104), (__int64)v16);
      StorGetIdentityProductId(a1 + 104, (__int64)v17);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 0x10) == 0 )
      {
        if ( (*(_DWORD *)(a1 + 1872) & 0x20) != 0 )
        {
          RtlStringCchPrintfW(v7, 0x100uLL, L"NVMe %hs %hs Device", v17, "ZNSDisk");
        }
        else
        {
          DeviceType = PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F);
          RtlStringCchPrintfW(v7, 0x100uLL, L"%hs %hs SCSI %hs Device", v16, v17, *DeviceType);
        }
        goto LABEL_5;
      }
      v12 = *(_QWORD *)(a1 + 152);
      if ( v12 )
      {
        v13 = (_BYTE *)(v12 + 8);
        v14 = (_BYTE *)(v12 + 25);
        if ( !*v13 )
        {
          v15 = v14;
LABEL_22:
          RtlStringCchPrintfW(v7, 0x100uLL, L"%hs", v15);
          goto LABEL_5;
        }
      }
      else
      {
        v15 = *(_BYTE **)(a1 + 144);
        if ( v15 )
          goto LABEL_22;
        v14 = v17;
        v13 = v16;
      }
      RtlStringCchPrintfW(v7, 0x100uLL, L"%hs %hs", v13, v14);
    }
LABEL_5:
    a2->IoStatus.Information = (unsigned __int64)v7;
    v8 = v6;
    v9 = a2;
    return RaidCompleteRequestEx(v9, 0, v8);
  }
  v9 = a2;
  if ( Length <= 1 )
    v8 = -1073741801;
  else
    v8 = -1073741637;
  return RaidCompleteRequestEx(v9, 0, v8);
}
