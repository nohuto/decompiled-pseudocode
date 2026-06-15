/*
 * XREFs of ?DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z @ 0x18002032C
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18002A104 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     GetContainerId @ 0x18001FDF0 (GetContainerId.c)
 *     GetEndpointFormFactor @ 0x18001FF00 (GetEndpointFormFactor.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F560 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     IsSpatialComboEndpointDeterminationDisabled @ 0x180049F84 (IsSpatialComboEndpointDeterminationDisabled.c)
 *     ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x18004BE30 (--_GARM_EVENT@@UEAAPEAXI@Z.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x18004C0C4 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EBC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall SpatialPolicy::DetectComboEndpoint(const struct _tlgProvider_t *a1, struct IMMDevice *a2)
{
  char v4; // di
  int ContainerId; // eax
  unsigned int v6; // ebx
  int EndpointFormFactor; // r14d
  __int64 v8; // rcx
  __int64 v9; // rax
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  int v11; // eax
  void *v12; // rsi
  ARM_EVENT *v13; // rbx
  void *v14; // rcx
  __int64 v16; // rdx
  void *v17; // [rsp+28h] [rbp-49h] BYREF
  __int64 *v18; // [rsp+30h] [rbp-41h] BYREF
  int v19; // [rsp+38h] [rbp-39h]
  __int128 v20; // [rsp+40h] [rbp-31h]
  void *v21; // [rsp+50h] [rbp-21h]
  __int128 v22; // [rsp+58h] [rbp-19h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+68h] [rbp-9h] BYREF
  __int128 v24; // [rsp+70h] [rbp-1h]
  void *v25; // [rsp+80h] [rbp+Fh]
  __int64 (__fastcall ***v26)(); // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v4 = 0;
  v19 = 0;
  if ( !(unsigned __int8)IsSpatialComboEndpointDeterminationDisabled() )
  {
    v18 = 0LL;
    ContainerId = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 **))a2->lpVtbl->OpenPropertyStore)(
                    a2,
                    0LL,
                    &v18);
    v6 = ContainerId;
    if ( ContainerId < 0 )
    {
      v16 = 340LL;
    }
    else
    {
      EndpointFormFactor = GetEndpointFormFactor((__int64)v18);
      v8 = (unsigned int)(EndpointFormFactor - 1);
      if ( (v8 & 0xFFFFFFFD) != 0 )
      {
LABEL_18:
        v6 = 0;
LABEL_19:
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v18);
        return v6;
      }
      ContainerId = GetContainerId(v8, v18, &v22);
      v6 = ContainerId;
      if ( ContainerId >= 0 )
      {
        v9 = v22;
        if ( !(_QWORD)v22 )
          v9 = *((_QWORD *)&v22 + 1) + 1LL;
        if ( v9 )
          goto LABEL_18;
        v17 = 0LL;
        GetId = a2->lpVtbl->GetId;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &v17,
          0LL);
        v11 = ((__int64 (__fastcall *)(struct IMMDevice *, void **))GetId)(a2, &v17);
        v6 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x167,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v11,
            (int)v17);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v17);
          goto LABEL_19;
        }
        v12 = v17;
        v13 = (ARM_EVENT *)operator new(0x48uLL);
        *(_QWORD *)&v22 = v13;
        if ( v13 )
        {
          *(_QWORD *)&v20 = a1;
          DWORD2(v20) = EndpointFormFactor;
          v21 = v12;
          v23 = off_18017AF28;
          v24 = v20;
          v25 = v12;
          v26 = &v23;
          v4 = 1;
          v19 = 1;
          *(_QWORD *)v13 = &ARM_EVENT::`vftable';
          *((_QWORD *)v13 + 8) = 0LL;
          std::function<void (void)>::operator=((char *)v13 + 8, &v23);
        }
        else
        {
          v13 = 0LL;
        }
        if ( (v4 & 1) != 0 )
          std::_Func_class<void,>::_Tidy(&v23);
        if ( v13 )
        {
          if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v13, 0LL) )
          {
            v14 = 0LL;
            v17 = 0LL;
            goto LABEL_16;
          }
          ARM_EVENT::`scalar deleting destructor'(v13, 1u);
        }
        v14 = v17;
LABEL_16:
        if ( v14 )
          CoTaskMemFree(v14);
        goto LABEL_18;
      }
      v16 = 350LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)ContainerId,
      (int)v17);
    goto LABEL_19;
  }
  return 0LL;
}
