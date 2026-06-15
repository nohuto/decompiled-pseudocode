/*
 * XREFs of ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005F450
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140009D48 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000A8E8 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000C240 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140015C54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J@Z @ 0x14001F73C (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400249FC (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140024ACC (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x1400299EC (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140053D58 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005939C (-CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessin.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14005944C (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CStreamGroup::CreateBridgeStream(
        CStreamGroup *this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IStreamGroup *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct SYSTEM_AUDIO_STREAM *v4; // r13
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64, struct IAudioProcessingObject **); // rdi
  int ApoEndpointInstance; // eax
  __int64 v16; // rdx
  CPipeInstance *v17; // rbx
  struct SYSTEM_AUDIO_STREAM *v18; // r9
  int v19; // eax
  void (__fastcall ***v20)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  struct ISubmixInternal *v21; // rax
  CStreamInstance *v22; // rbx
  int v23; // eax
  __int64 v24; // r8
  ATL::CAtlException *v26; // rbx
  struct SYSTEM_AUDIO_STREAM *v27; // [rsp+28h] [rbp-90h]
  CStreamInstance *v28; // [rsp+40h] [rbp-78h] BYREF
  struct IAudioProcessingObject *v29; // [rsp+48h] [rbp-70h] BYREF
  __int64 v30; // [rsp+50h] [rbp-68h] BYREF
  struct ISubmixInternal *v31; // [rsp+58h] [rbp-60h] BYREF
  CPipeInstance *v32; // [rsp+60h] [rbp-58h] BYREF
  __int128 v33; // [rsp+68h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+78h] [rbp-40h] BYREF
  ATL::CAtlException *v35; // [rsp+80h] [rbp-38h] BYREF
  __int128 v36; // [rsp+88h] [rbp-30h]
  char v37; // [rsp+98h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  char *v39; // [rsp+C0h] [rbp+8h] BYREF
  struct SYSTEM_AUDIO_STREAM *v40; // [rsp+D8h] [rbp+20h]

  v40 = a4;
  v4 = a4;
  v32 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v34 = v8;
  *((_DWORD *)v4 + 236) = 0;
  if ( !*((_BYTE *)this + 337) )
  {
    if ( !a2 )
    {
      v9 = -2147467261;
LABEL_7:
      v10 = 135LL;
      goto LABEL_8;
    }
    if ( *(_DWORD *)a2 > 2u )
    {
      v9 = -2147024809;
      goto LABEL_7;
    }
    v11 = *((_DWORD *)this + 70);
    if ( v11 != *(_DWORD *)a2 && (v11 != 2 || *((_DWORD *)a2 + 2) != 2) )
    {
      v9 = -2147024809;
      v10 = 138LL;
      goto LABEL_8;
    }
    if ( *((_QWORD *)this + 32) != *((_QWORD *)a2 + 4) )
    {
      v9 = -2147024809;
      v10 = 139LL;
      goto LABEL_8;
    }
    v12 = *(_QWORD *)((char *)a2 + 12) - *((_QWORD *)this + 33);
    if ( !v12 )
      v12 = *(_QWORD *)((char *)a2 + 20) - *((_QWORD *)this + 34);
    if ( v12 )
    {
      v13 = *(_QWORD *)((char *)a2 + 12) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( !v13 )
        v13 = *(_QWORD *)((char *)a2 + 20) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( v13 )
      {
        v9 = -2147024809;
        v10 = 145LL;
        goto LABEL_8;
      }
    }
    v29 = 0LL;
    v30 = 0LL;
    (**(void (__fastcall ***)(struct IStreamGroup *, GUID *, __int64 *))a3)(
      a3,
      &GUID_78c8e80a_c79b_465b_be08_cd0c3ec0edda,
      &v30);
    if ( v30 )
    {
      v14 = *(__int64 (__fastcall **)(__int64, struct IAudioProcessingObject **))(*(_QWORD *)v30 + 24LL);
      v29 = 0LL;
      ApoEndpointInstance = v14(v30, &v29);
      v9 = ApoEndpointInstance;
      if ( ApoEndpointInstance < 0 )
      {
        v16 = 153LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
          (const char *)(unsigned int)ApoEndpointInstance);
LABEL_26:
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v30);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v29);
        goto LABEL_56;
      }
    }
    if ( v29 )
    {
      ApoEndpointInstance = CPipeInstance::CreateBridgeStreamPipeInstance(
                              *((struct IDeviceGraphObjectCache **)this + 36),
                              a2,
                              v29,
                              *((struct CPipeInstance **)this + 6),
                              *((struct tWAVEFORMATEX **)this + 31),
                              v27,
                              &v32);
      v9 = ApoEndpointInstance;
      if ( ApoEndpointInstance < 0 )
      {
        v16 = 165LL;
        goto LABEL_25;
      }
      v17 = v32;
      ApoEndpointInstance = CPipeInstance::Initialize(v32);
      v9 = ApoEndpointInstance;
      if ( ApoEndpointInstance < 0 )
      {
        v16 = 167LL;
        goto LABEL_25;
      }
      ApoEndpointInstance = CPipeInstance::ConnectAPOs(v17, 0LL);
      v9 = ApoEndpointInstance;
      if ( ApoEndpointInstance < 0 )
      {
        v16 = 168LL;
        goto LABEL_25;
      }
      ApoEndpointInstance = CPipeInstance::CreateApoEndpointInstance(v17, a2, v29, v18);
      v9 = ApoEndpointInstance;
      if ( ApoEndpointInstance < 0 )
      {
        v16 = 169LL;
        goto LABEL_25;
      }
      v28 = 0LL;
      v19 = CStreamInstance::CreateStreamInstance(&v28, 0, *(_DWORD *)a2, (__int64)v17, (__int64)v17, 0LL);
      v9 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB1,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
          (const char *)(unsigned int)v19);
LABEL_38:
        if ( v28 )
          CStreamInstance::`scalar deleting destructor'(v28);
        v28 = 0LL;
        goto LABEL_26;
      }
      v32 = 0LL;
      v20 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 41);
      v21 = 0LL;
      v31 = 0LL;
      if ( v20 )
      {
        (**v20)(v20, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v31);
        v21 = v31;
      }
      if ( v21 )
      {
        v22 = v28;
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 64LL))((char *)this + 24);
        v23 = CStreamInstance::ConnectToRightSubmix(v22, v31, *((const struct CPipeInstance **)this + 37));
        v9 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB9,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
            (const char *)(unsigned int)v23);
LABEL_46:
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v31);
          goto LABEL_38;
        }
      }
      *(_QWORD *)&v33 = &v31;
      *((_QWORD *)&v33 + 1) = &v28;
      v36 = v33;
      v37 = 1;
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
      try
      {
        *(_QWORD *)&v33 = (char *)this + 56;
        v39 = (char *)v28;
        ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead(
          (__int64 *)this + 12,
          (__int64)&v39,
          v24);
      }
      catch ( ATL::CAtlException *v35 )
      {
        v26 = v35;
        if ( *(_DWORD *)v35 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v39) = *(_DWORD *)v26;
        v9 = (unsigned int)v39;
        if ( (int)v39 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC9,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
            (const char *)(unsigned int)v39);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&v33);
          if ( v31 )
            CStreamInstance::DisconnectFromRightSubmix(v28, v31);
          goto LABEL_46;
        }
        v4 = v40;
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&v33);
      *((_QWORD *)v4 + 4) = *((_QWORD *)v28 + 1);
      v28 = 0LL;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v31);
      if ( v28 )
        CStreamInstance::`scalar deleting destructor'(v28);
    }
    PublishDeviceGraphWnfState();
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v30);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v29);
    v9 = 0;
    goto LABEL_56;
  }
  v9 = -2147024809;
  v10 = 132LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
    (const char *)v9);
LABEL_56:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v34);
  ATL::CAutoPtr<CPipeInstance>::Free(&v32);
  return v9;
}
