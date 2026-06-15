/*
 * XREFs of ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x14004FC44
 * Callers:
 *     ?RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14004FF1C (-RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRI.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140014CE0 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall FillAuxiliaryInputInitStruct(
        struct BRIDGE_STREAM_DESCRIPTOR *a1,
        struct IAudioProcessingObject *a2,
        struct APOInitSystemEffects2 *a3)
{
  int v6; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v7; // eax
  struct IMMDevice *v9; // [rsp+30h] [rbp-20h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-18h] BYREF
  struct _GUID v11; // [rsp+40h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+38h] BYREF

  ppv = 0LL;
  v6 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  v9 = 0LL;
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)ppv + 40LL))(
           ppv,
           *((_QWORD *)a1 + 5),
           &v9);
  pv = 0LL;
  if ( v6 >= 0 )
  {
    v6 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, LPVOID *))a2->lpVtbl->GetRegistrationProperties)(
           a2,
           &pv);
    if ( v6 >= 0 )
    {
      v7 = *((_DWORD *)a1 + 2);
      v11 = *(struct _GUID *)((char *)a1 + 12);
      v6 = FillAPOInitSystemEffectsStructure(v9, (struct _GUID *)pv, &v11, 0, v7, a3);
    }
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v9);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppv);
  return (unsigned int)v6;
}
