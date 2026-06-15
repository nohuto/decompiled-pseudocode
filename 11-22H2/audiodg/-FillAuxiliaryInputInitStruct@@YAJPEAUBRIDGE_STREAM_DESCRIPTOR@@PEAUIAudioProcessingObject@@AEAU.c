/*
 * XREFs of ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x14004F2CC
 * Callers:
 *     ?RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14004F5DC (-RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREA.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x14001624C (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x14004A240 (--1-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall FillAuxiliaryInputInitStruct(
        struct BRIDGE_STREAM_DESCRIPTOR *a1,
        struct IAudioProcessingObject *a2,
        struct APOInitSystemEffects2 *a3)
{
  HRESULT v6; // eax
  int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  void *v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v14; // eax
  int v15; // eax
  void *v16; // rcx
  LPVOID pv; // [rsp+30h] [rbp-30h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-28h] BYREF
  struct _GUID v20; // [rsp+40h] [rbp-20h] BYREF
  char v21; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IMMDevice *v23; // [rsp+98h] [rbp+38h] BYREF

  ppv = 0LL;
  v6 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_17;
  }
  v23 = 0LL;
  v8 = *(_QWORD *)ppv;
  v23 = 0LL;
  v9 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(v8 + 40))(ppv, *((_QWORD *)a1 + 6), &v23);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
      (const char *)(unsigned int)v9);
LABEL_5:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v23);
    goto LABEL_17;
  }
  pv = 0LL;
  lpVtbl = a2->lpVtbl;
  *(_QWORD *)&v20.Data1 = &pv;
  *(_QWORD *)v20.Data4 = 0LL;
  v21 = 1;
  v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, unsigned __int8 *))lpVtbl->GetRegistrationProperties)(
         a2,
         v20.Data4);
  if ( v21 )
  {
    v11 = **(void ***)&v20.Data1;
    **(_QWORD **)&v20.Data1 = *(_QWORD *)v20.Data4;
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( v7 < 0 )
  {
    v12 = (unsigned int)v7;
    v13 = 25LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
      (const char *)v12);
    wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    goto LABEL_5;
  }
  v14 = *((_DWORD *)a1 + 2);
  v20 = *(struct _GUID *)((char *)a1 + 24);
  v15 = FillAPOInitSystemEffectsStructure(v23, (struct _GUID *)pv, &v20, 0, v14, a3);
  v7 = v15;
  if ( v15 < 0 )
  {
    v12 = (unsigned int)v15;
    v13 = 27LL;
    goto LABEL_11;
  }
  v16 = pv;
  pv = 0LL;
  if ( v16 )
    CoTaskMemFree(v16);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v23);
  v7 = 0;
LABEL_17:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&ppv);
  return (unsigned int)v7;
}
