/*
 * XREFs of ?DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z @ 0x1800524A4
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@@Z @ 0x180045CF8 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x180051980 (--_GARM_EVENT@@UEAAPEAXI@Z.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800519F0 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     IsSpatialComboEndpointDeterminationDisabled @ 0x180051AE0 (IsSpatialComboEndpointDeterminationDisabled.c)
 *     GetContainerId @ 0x180053A60 (GetContainerId.c)
 *     GetEndpointFormFactor @ 0x180053AF4 (GetEndpointFormFactor.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18005BAA8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall SpatialPolicy::DetectComboEndpoint(const struct _tlgProvider_t *a1, struct IMMDevice *a2)
{
  char v4; // si
  int ContainerId; // eax
  unsigned int v6; // ebx
  int EndpointFormFactor; // r14d
  __int64 v8; // rcx
  __int64 v9; // rax
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  int v12; // eax
  void *v13; // rbx
  ARM_EVENT *v14; // rdi
  __int64 v15; // rdx
  void *v16; // [rsp+28h] [rbp-49h] BYREF
  __int64 v17; // [rsp+30h] [rbp-41h] BYREF
  int v18; // [rsp+38h] [rbp-39h]
  __int128 v19; // [rsp+40h] [rbp-31h]
  void *v20; // [rsp+50h] [rbp-21h]
  _QWORD v21[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+68h] [rbp-9h] BYREF
  __int128 v23; // [rsp+70h] [rbp-1h]
  void *v24; // [rsp+80h] [rbp+Fh]
  __int64 (__fastcall ***v25)(); // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v4 = 0;
  v18 = 0;
  if ( !IsSpatialComboEndpointDeterminationDisabled() )
  {
    v17 = 0LL;
    ContainerId = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(
                    a2,
                    0LL,
                    &v17);
    v6 = ContainerId;
    if ( ContainerId < 0 )
    {
      v15 = 343LL;
    }
    else
    {
      EndpointFormFactor = GetEndpointFormFactor(v17);
      v8 = (unsigned int)(EndpointFormFactor - 1);
      if ( (v8 & 0xFFFFFFFD) != 0 )
      {
LABEL_8:
        v6 = 0;
LABEL_9:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
        return v6;
      }
      ContainerId = GetContainerId(v8, v17, v21);
      v6 = ContainerId;
      if ( ContainerId >= 0 )
      {
        v9 = v21[0];
        if ( !v21[0] )
          v9 = v21[1] + 1LL;
        if ( v9 )
          goto LABEL_8;
        v16 = 0LL;
        GetId = a2->lpVtbl->GetId;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &v16,
          0LL);
        v12 = ((__int64 (__fastcall *)(struct IMMDevice *, void **))GetId)(a2, &v16);
        v6 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x16A,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v12,
            (int)v16);
        }
        else
        {
          v13 = v16;
          v14 = (ARM_EVENT *)operator new(0x48uLL);
          v21[0] = v14;
          if ( v14 )
          {
            *(_QWORD *)&v19 = a1;
            DWORD2(v19) = EndpointFormFactor;
            v20 = v13;
            v22 = off_180176718;
            v23 = v19;
            v24 = v13;
            v25 = &v22;
            v4 = 1;
            v18 = 1;
            *(_QWORD *)v14 = &ARM_EVENT::`vftable';
            *((_QWORD *)v14 + 8) = 0LL;
            std::function<void (void)>::operator=((__int64)v14 + 8);
          }
          else
          {
            v14 = 0LL;
          }
          if ( (v4 & 1) != 0 )
            std::_Func_class<void,>::_Tidy(&v22);
          if ( v14 )
          {
            if ( !PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v14, 0LL) )
            {
              v6 = 0;
              ARM_EVENT::`scalar deleting destructor'(v14, 1);
              goto LABEL_19;
            }
            v16 = 0LL;
          }
          v6 = 0;
        }
LABEL_19:
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v16);
        goto LABEL_9;
      }
      v15 = 353LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)ContainerId,
      (int)v16);
    goto LABEL_9;
  }
  return 0LL;
}
