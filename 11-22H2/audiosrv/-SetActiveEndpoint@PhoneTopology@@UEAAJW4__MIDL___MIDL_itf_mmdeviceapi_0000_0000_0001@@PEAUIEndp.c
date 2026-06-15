/*
 * XREFs of ?SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x1801656D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180028C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0SetCellularRoutingWorkItem@@QEAA@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z @ 0x180163C24 (--0SetCellularRoutingWorkItem@@QEAA@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z.c)
 *     ?AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z @ 0x180163DF4 (-AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneTopology::SetActiveEndpoint(
        PhoneTopology *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        struct IEndpointDevice *a3)
{
  unsigned int v6; // esi
  int v7; // r15d
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  char *v12; // r14
  __int64 v13; // rcx
  char *v14; // r14
  SetCellularRoutingWorkItem *v15; // rax
  struct PhoneTopologyWorkItem *v16; // rax
  int v17; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v20; // [rsp+28h] [rbp-30h]
  int v21; // [rsp+60h] [rbp+8h] BYREF
  SetCellularRoutingWorkItem *v22; // [rsp+70h] [rbp+18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
  v6 = 0;
  v7 = 0;
  if ( !a3 )
  {
    v6 = -2147467261;
    goto LABEL_33;
  }
  v8 = (*(__int64 (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)a3 + 56LL))(a3);
  v9 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, int *))(*(_QWORD *)a3 + 48LL))(a3, &v21);
  if ( v9 < 0 )
  {
    v6 = v9;
    goto LABEL_33;
  }
  v10 = v21;
  if ( a2 == eRender )
  {
    if ( v21 == *((_DWORD *)this + 194) )
    {
      v11 = v8;
      if ( *(_QWORD *)(v8 + 24) >= 8uLL )
        v11 = *(_QWORD *)v8;
      v12 = (char *)this + 256;
      if ( !(unsigned int)_o__wcsnicmp(v11, (char *)this + 256, 260LL) )
      {
LABEL_15:
        if ( !v7 )
          goto LABEL_33;
        goto LABEL_26;
      }
      v10 = v21;
    }
    else
    {
      v12 = (char *)this + 256;
    }
    *((_DWORD *)this + 194) = v10;
    if ( *(_QWORD *)(v8 + 24) >= 8uLL )
      v8 = *(_QWORD *)v8;
    StringCchCopyW(v12, 260LL, (char *)v8);
    v7 = 1;
    goto LABEL_15;
  }
  if ( v21 != *((_DWORD *)this + 325) )
  {
    v14 = (char *)this + 780;
    goto LABEL_23;
  }
  v13 = v8;
  if ( *(_QWORD *)(v8 + 24) >= 8uLL )
    v13 = *(_QWORD *)v8;
  v14 = (char *)this + 780;
  if ( (unsigned int)_o__wcsnicmp(v13, (char *)this + 780, 260LL) )
  {
    v10 = v21;
LABEL_23:
    *((_DWORD *)this + 325) = v10;
    if ( *(_QWORD *)(v8 + 24) >= 8uLL )
      v8 = *(_QWORD *)v8;
    StringCchCopyW(v14, 260LL, (char *)v8);
LABEL_26:
    if ( *((_QWORD *)this + 3) )
    {
      v15 = (SetCellularRoutingWorkItem *)operator new(0x438uLL);
      v22 = v15;
      if ( v15
        && (v16 = SetCellularRoutingWorkItem::SetCellularRoutingWorkItem(v15, (PhoneTopology *)((char *)this + 256))) != 0LL )
      {
        v17 = PhoneTopology::AddWorkItemToQueue(this, v16);
        if ( v17 < 0 )
          v6 = v17;
      }
      else
      {
        v6 = -2147024882;
      }
    }
  }
LABEL_33:
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
