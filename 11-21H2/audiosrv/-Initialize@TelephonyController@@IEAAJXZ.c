/*
 * XREFs of ?Initialize@TelephonyController@@IEAAJXZ @ 0x180160CDC
 * Callers:
 *     ?CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z @ 0x1801603B8 (-CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180009D48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x18010D968 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 *     ?GetProviderId@TelephonyController@@AEAAJPEAUIKsControl@@PEAI@Z @ 0x180160724 (-GetProviderId@TelephonyController@@AEAAJPEAUIKsControl@@PEAI@Z.c)
 *     ?NewNode@?$CAtlList@IV?$CElementTraits@I@ATL@@@ATL@@AEAAPEAVCNode@12@IPEAV312@0@Z @ 0x180161634 (-NewNode@-$CAtlList@IV-$CElementTraits@I@ATL@@@ATL@@AEAAPEAVCNode@12@IPEAV312@0@Z.c)
 *     ?RemoveAll@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x1801618F0 (-RemoveAll@-$CAtlMap@IV-$CComPtr@UIKsControl@@@ATL@@V-$CElementTraits@I@2@V-$CElementTraits@V-$C.c)
 *     ?SetAt@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@IAEBV?$CComPtr@UIKsControl@@@2@@Z @ 0x180161BD0 (-SetAt@-$CAtlMap@IV-$CComPtr@UIKsControl@@@ATL@@V-$CElementTraits@I@2@V-$CElementTraits@V-$CComP.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall TelephonyController::Initialize(struct IUnknown **this)
{
  int v2; // r15d
  HRESULT v3; // ebx
  unsigned int v4; // esi
  int ProviderId; // eax
  __int64 v6; // rax
  TelephonyController *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rcx
  LPVOID pv; // [rsp+30h] [rbp-89h] BYREF
  LPVOID v12; // [rsp+38h] [rbp-81h] BYREF
  __int64 v13; // [rsp+40h] [rbp-79h] BYREF
  struct IKsControl *v14; // [rsp+48h] [rbp-71h] BYREF
  __int64 v15; // [rsp+50h] [rbp-69h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-61h] BYREF
  __int64 v17; // [rsp+60h] [rbp-59h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-51h] BYREF
  __int64 v19; // [rsp+70h] [rbp-49h] BYREF
  __int64 v20; // [rsp+78h] [rbp-41h] BYREF
  __int64 v21; // [rsp+80h] [rbp-39h] BYREF
  __int64 v22; // [rsp+88h] [rbp-31h] BYREF
  __int64 v23; // [rsp+90h] [rbp-29h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp-21h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-9h] BYREF
  unsigned int v28; // [rsp+B8h] [rbp-1h] BYREF
  unsigned int v29; // [rsp+BCh] [rbp+3h] BYREF
  LPVOID ppv; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v31; // [rsp+C8h] [rbp+Fh] BYREF
  GUID v32; // [rsp+D0h] [rbp+17h] BYREF

  ppv = 0LL;
  v31 = 0LL;
  v28 = 0;
  v2 = 0;
  v3 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         1u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  if ( v3 < 0
    || (v3 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(
               ppv,
               2LL,
               9LL,
               &v31),
        v3 < 0)
    || (v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v31 + 24LL))(v31, &v28), v3 < 0) )
  {
LABEL_42:
    ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::RemoveAll(this + 15);
    ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll((__int64)(this + 3));
    if ( this[24] )
      ATL::AtlComPtrAssign(this + 24, 0LL);
  }
  else
  {
    v4 = 0;
    if ( v28 )
    {
      do
      {
        v27 = 0LL;
        v26 = 0LL;
        v25 = 0LL;
        v14 = 0LL;
        v24 = 0LL;
        v13 = 0LL;
        v23 = 0LL;
        v22 = 0LL;
        v21 = 0LL;
        v20 = 0LL;
        v19 = 0LL;
        v18 = 0LL;
        v17 = 0LL;
        v16 = 0LL;
        v12 = 0LL;
        pv = 0LL;
        v15 = 0LL;
        v32 = GUID_00000000_0000_0000_0000_000000000000;
        v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v31 + 32LL))(v31, v4, &v27);
        if ( v3 < 0 )
          goto LABEL_41;
        v3 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v27 + 24LL))(
               v27,
               &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
               23LL);
        if ( v3 >= 0 )
        {
          ProviderId = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v21 + 32LL))(v21, 0LL, &v19);
          if ( ProviderId < 0
            || (ProviderId = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v19 + 64LL))(
                               v19,
                               &v18),
                ProviderId < 0)
            || (ProviderId = (**v18)(v18, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v13), ProviderId < 0)
            || (ProviderId = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v13 + 56LL))(v13, &v32),
                ProviderId < 0) )
          {
LABEL_40:
            v3 = ProviderId;
            goto LABEL_41;
          }
          v6 = *(_QWORD *)&v32.Data1 - *(_QWORD *)&GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data1;
          if ( *(_QWORD *)&v32.Data1 == *(_QWORD *)&GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data1 )
            v6 = *(_QWORD *)v32.Data4 - *(_QWORD *)GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data4;
          if ( !v6 )
          {
            v2 = 1;
            ProviderId = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 96LL))(v13, &v22);
            if ( ProviderId < 0 )
              goto LABEL_40;
            if ( !this[24] )
            {
              ProviderId = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v22 + 64LL))(v22, &v12);
              if ( ProviderId < 0 )
                goto LABEL_40;
              ProviderId = (*(__int64 (__fastcall **)(LPVOID, LPVOID, __int64 *))(*(_QWORD *)ppv + 40LL))(
                             ppv,
                             v12,
                             &v26);
              if ( ProviderId < 0 )
                goto LABEL_40;
              ProviderId = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, char *))(*(_QWORD *)v26 + 24LL))(
                             v26,
                             &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
                             23LL,
                             0LL,
                             (char *)this + 192);
              if ( ProviderId < 0 )
                goto LABEL_40;
              if ( !this[24] )
                goto LABEL_39;
            }
            ProviderId = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &v15);
            if ( ProviderId < 0 )
              goto LABEL_40;
            ProviderId = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 32LL))(v15, 0LL, &v24);
            if ( ProviderId < 0 )
              goto LABEL_40;
            ProviderId = (**v24)(v24, &GUID_9c2c4058_23f5_41de_877a_df3af236a09e, &v17);
            if ( ProviderId < 0 )
              goto LABEL_40;
            ProviderId = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v17 + 64LL))(
                           v17,
                           &v16);
            if ( ProviderId < 0 )
              goto LABEL_40;
            ProviderId = (**v16)(v16, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v23);
            if ( ProviderId < 0 )
              goto LABEL_40;
            ProviderId = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 96LL))(v23, &v20);
            if ( ProviderId < 0 )
              goto LABEL_40;
            ProviderId = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v20 + 64LL))(v20, &pv);
            if ( ProviderId < 0 )
              goto LABEL_40;
            ProviderId = (*(__int64 (__fastcall **)(LPVOID, LPVOID, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, pv, &v25);
            if ( ProviderId < 0 )
              goto LABEL_40;
            ProviderId = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v25 + 24LL))(
                           v25,
                           &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
                           23LL);
            if ( ProviderId < 0 )
              goto LABEL_40;
            if ( !v14 )
            {
LABEL_39:
              v3 = -2147023728;
LABEL_41:
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
              CoTaskMemFree(pv);
              pv = 0LL;
              CoTaskMemFree(v12);
              v12 = 0LL;
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
              goto LABEL_42;
            }
            ProviderId = TelephonyController::GetProviderId(v7, v14, &v29);
            if ( ProviderId < 0 )
              goto LABEL_40;
            ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::SetAt(
              this + 15,
              v29,
              &v14);
            v8 = ATL::CAtlList<unsigned int,ATL::CElementTraits<unsigned int>>::NewNode(this + 3, v29, this[4]);
            v9 = (__int64 *)this[4];
            if ( v9 )
              *v9 = v8;
            else
              this[3] = (struct IUnknown *)v8;
            this[4] = (struct IUnknown *)v8;
          }
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
        CoTaskMemFree(pv);
        pv = 0LL;
        CoTaskMemFree(v12);
        v12 = 0LL;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
        ++v4;
      }
      while ( v4 < v28 );
      if ( v2 )
        goto LABEL_38;
    }
    v3 = -2147023728;
  }
LABEL_38:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
  return (unsigned int)v3;
}
