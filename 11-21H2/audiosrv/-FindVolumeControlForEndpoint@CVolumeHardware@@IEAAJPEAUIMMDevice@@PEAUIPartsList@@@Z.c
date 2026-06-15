/*
 * XREFs of ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180045754
 * Callers:
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180044E0C (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800462C0 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800C9BF0 (WPP_SF_qS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeHardware::FindVolumeControlForEndpoint(
        CVolumeHardware *this,
        struct IUnknown *a2,
        struct IPartsList *a3)
{
  int v6; // ebx
  CEndpointStoreCache *v7; // rcx
  struct IUnknown *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 *v12; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v13; // [rsp+38h] [rbp-8h] BYREF
  int v14; // [rsp+78h] [rbp+38h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+48h] BYREF

  v13 = 0LL;
  v14 = 0;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_972200849a753c8240eefd9f39169899_Traceguids, this);
  }
  if ( a2 )
  {
    v12 = 0LL;
    pv = 0LL;
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))a2->lpVtbl[1].QueryInterface)(
           a2,
           &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
           23LL);
    if ( v6 < 0 )
      goto LABEL_32;
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))a2->lpVtbl[1].Release)(a2, &pv);
    if ( v6 < 0 )
      goto LABEL_32;
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          34,
          (unsigned int)&WPP_972200849a753c8240eefd9f39169899_Traceguids,
          (_DWORD)this,
          (__int64)pv);
        v7 = WPP_GLOBAL_Control;
      }
      if ( v7 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v7 + 7) & 0x10000) != 0
        && *((_BYTE *)v7 + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)v7 + 2), 35LL, &WPP_972200849a753c8240eefd9f39169899_Traceguids, this);
      }
    }
    v8 = v13;
    if ( v13 != a2 )
    {
      ATL::AtlComQIPtrAssign(&v13, a2, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21);
      v8 = v13;
    }
    if ( v8 )
    {
      v6 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v8->lpVtbl[3].Release)(v8, &v14);
      if ( v6 < 0 )
        goto LABEL_32;
    }
    v9 = *v12;
    v10 = v14
        ? (*(__int64 (__fastcall **)(__int64 *, struct IPartsList *, GUID *, GUID *, char *))(v9 + 72))(
            v12,
            a3,
            &GUID_35caf6e4_f3b3_4168_bb4b_55e77a461c7e,
            &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
            (char *)this + 248)
        : (*(unsigned __int64 (__fastcall **)(__int64 *, struct IPartsList *, GUID *, char *))(v9 + 32))(
            v12,
            a3,
            &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
            (char *)this + 248);
    v6 = v10;
    if ( v10 < 0 )
      goto LABEL_32;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_972200849a753c8240eefd9f39169899_Traceguids, this);
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, char *))(**((_QWORD **)this + 31) + 104LL))(
           *((_QWORD *)this + 31),
           23LL,
           &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
           (char *)this + 256);
    if ( v6 < 0 )
LABEL_32:
      AudSrvTraceLoggingErrorHelper("CVolumeHardware::FindVolumeControlForEndpoint", 0x549u, v6);
    CoTaskMemFree(pv);
    pv = 0LL;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
  }
  else
  {
    v6 = -2147467261;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
  return (unsigned int)v6;
}
