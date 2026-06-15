/*
 * XREFs of ?CreateBridgeStreamToTargetStreamGroup@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140063540
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddHead@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x140006830 (-AddHead@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140006EE0 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006F40 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007080 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x1400099F4 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14005C1B4 (-CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAU.c)
 *     ?CreateBridgeToApo@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005C5D4 (-CreateBridgeToApo@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@.c)
 *     ?ValidateBridgeStreamDescriptor@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@@Z @ 0x140076608 (-ValidateBridgeStreamDescriptor@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@@Z.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAUIStreamInstanceInternal@@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J4U_GUID@@@Z @ 0x1400777D4 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAUIStreamInstanceInternal@@KW4SYSTEM_AUDIO_STREAM.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CStreamGroup::CreateBridgeStreamToTargetStreamGroup(
        CStreamGroup *this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IStreamGroup *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct SYSTEM_AUDIO_STREAM *v4; // r13
  struct _RTL_CRITICAL_SECTION *v8; // r14
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  __int64 (__fastcall *v16)(__int64, struct IAudioProcessingObject **); // r12
  int v17; // eax
  __int64 v18; // rdx
  struct _RTL_CRITICAL_SECTION *v19; // rcx
  int v20; // r9d
  CPipeInstance *v21; // rbx
  int BridgeToApo; // r12d
  __int64 v23; // rdx
  struct SYSTEM_AUDIO_STREAM *v24; // r9
  int v25; // eax
  void (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, __int64, _QWORD, __int64); // rdi
  __int64 v30; // rax
  int v31; // eax
  struct _RTL_CRITICAL_SECTION *v32; // rdi
  __int64 v33; // r8
  __int64 result; // rax
  ATL::CAtlException *v35; // rbx
  struct SYSTEM_AUDIO_STREAM *v36; // [rsp+30h] [rbp-B8h]
  struct IAudioProcessingObject *v37; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+50h] [rbp-98h] BYREF
  __int64 v40; // [rsp+58h] [rbp-90h] BYREF
  CPipeInstance *v41; // [rsp+60h] [rbp-88h] BYREF
  struct _RTL_CRITICAL_SECTION *v42; // [rsp+68h] [rbp-80h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-78h]
  GUID v44; // [rsp+80h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v45; // [rsp+90h] [rbp-58h]
  ATL::CAtlException *v46; // [rsp+98h] [rbp-50h] BYREF
  GUID v47; // [rsp+A0h] [rbp-48h]
  char v48; // [rsp+B0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  char *v50; // [rsp+F0h] [rbp+8h] BYREF
  struct SYSTEM_AUDIO_STREAM *v51; // [rsp+108h] [rbp+20h]

  v51 = a4;
  v4 = a4;
  v41 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  v42 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v45 = v8;
  *((_DWORD *)v4 + 236) = 0;
  if ( *((_BYTE *)this + 337) )
  {
    v9 = 132LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)0x80070057LL);
    if ( v8 )
      LeaveCriticalSection(v8);
    v11 = -2147024809;
    goto LABEL_60;
  }
  v10 = ValidateBridgeStreamDescriptor(a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)(unsigned int)v10);
LABEL_22:
    if ( !v8 )
      goto LABEL_60;
    v19 = v8;
LABEL_24:
    LeaveCriticalSection(v19);
    goto LABEL_60;
  }
  v12 = *((_DWORD *)this + 70);
  if ( v12 != *(_DWORD *)a2 && (v12 != 2 || *((_DWORD *)a2 + 2) != 2) )
  {
    v9 = 138LL;
    goto LABEL_14;
  }
  if ( *((_QWORD *)this + 32) != *((_QWORD *)a2 + 5) )
  {
    v9 = 139LL;
    goto LABEL_14;
  }
  if ( !IsEqualGUID((const struct _GUID *)((char *)a2 + 24), (const struct _GUID *)((char *)this + 264))
    && !IsEqualGUID((const struct _GUID *)((char *)a2 + 24), &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
  {
    v9 = 145LL;
    goto LABEL_14;
  }
  v37 = 0LL;
  v38 = 0LL;
  (**(void (__fastcall ***)(struct IStreamGroup *, GUID *, __int64 *))a3)(
    a3,
    &GUID_78c8e80a_c79b_465b_be08_cd0c3ec0edda,
    &v38);
  if ( v38 )
  {
    v16 = *(__int64 (__fastcall **)(__int64, struct IAudioProcessingObject **))(*(_QWORD *)v38 + 24LL);
    v37 = 0LL;
    v17 = v16(v38, &v37);
    v11 = v17;
    if ( v17 < 0 )
    {
      v18 = 153LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)v17);
LABEL_21:
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v38);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v37);
      goto LABEL_22;
    }
  }
  v20 = (int)v37;
  if ( !v37 )
    goto LABEL_57;
  v17 = CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo(
          0,
          *((struct IUnknown **)this + 36),
          a2,
          v37,
          *((struct CPipeInstance **)this + 6),
          *((struct tWAVEFORMATEX **)this + 31),
          v36,
          &v41);
  v11 = v17;
  if ( v17 < 0 )
  {
    v18 = 166LL;
    goto LABEL_20;
  }
  v21 = v41;
  BridgeToApo = CPipeInstance::Initialize(v41);
  if ( BridgeToApo < 0 )
  {
    v23 = 167LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)(unsigned int)BridgeToApo);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v38);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v37);
    if ( v8 )
      LeaveCriticalSection(v8);
    v11 = BridgeToApo;
    goto LABEL_60;
  }
  BridgeToApo = CPipeInstance::ConnectAPOs(v21, 0LL);
  if ( BridgeToApo < 0 )
  {
    v23 = 168LL;
    goto LABEL_30;
  }
  BridgeToApo = CPipeInstance::CreateBridgeToApo(v21, a2, v37, v24);
  if ( BridgeToApo < 0 )
  {
    v23 = 169LL;
    goto LABEL_30;
  }
  v39 = 0LL;
  v44 = GUID_00000000_0000_0000_0000_000000000000;
  v25 = CStreamInstance::CreateStreamInstance(&v39, 0LL, *(unsigned int *)a2, v21, v21, 0LL, 0LL, &v44);
  v11 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)(unsigned int)v25);
LABEL_39:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v39);
    goto LABEL_21;
  }
  v41 = 0LL;
  v26 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 41);
  v27 = 0LL;
  v40 = 0LL;
  if ( v26 )
  {
    (**v26)(v26, &GUID_764792a0_18e2_400b_9cb9_2dc44605fce0, &v40);
    v27 = v40;
  }
  if ( v27 )
  {
    v28 = v39;
    v29 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v39 + 56LL);
    v30 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 64LL))((char *)this + 24);
    v31 = v29(v28, v40, *((_QWORD *)this + 37), v30);
    v11 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB9,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)v31);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v40);
      goto LABEL_39;
    }
  }
  *(_QWORD *)&v44.Data1 = &v40;
  *(_QWORD *)v44.Data4 = &v39;
  v47 = v44;
  v48 = 1;
  v32 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  *(_QWORD *)&v44.Data1 = (char *)this + 56;
  wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
    &v50,
    v39);
  try
  {
    ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::AddHead(
      (__int64 *)this + 12,
      &v50,
      v33);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v50);
  }
  catch ( ATL::CAtlException *v46 )
  {
    v35 = v46;
    if ( *(_DWORD *)v46 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v50) = *(_DWORD *)v35;
    v11 = (unsigned int)v50;
    if ( (int)v50 >= 0 )
    {
      v4 = v51;
      v8 = v42;
      v32 = lpCriticalSection;
      goto LABEL_54;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)(unsigned int)v50);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    if ( v40 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 64LL))(v39);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v40);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v39);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v38);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v37);
    v19 = v42;
    if ( v42 )
      goto LABEL_24;
LABEL_60:
    ATL::CAutoPtr<CPipeInstance>::Free(&v41);
    result = v11;
  }
LABEL_54:
  if ( v32 )
    LeaveCriticalSection(v32);
  v48 = 0;
  *((_QWORD *)v4 + 4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 88LL))(v39);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v40);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v39);
LABEL_57:
  PublishDeviceGraphWnfState(v14, v13, v15, v20);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v38);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v37);
  if ( v8 )
    LeaveCriticalSection(v8);
  v11 = 0;
  goto LABEL_60;
}
