/*
 * XREFs of ?OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801CDEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180059150 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VVirtualTouchpadControllerProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A0E90 (--1-$ComPtr@VVirtualTouchpadControllerProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013E3CC (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x18016C1B0 (-GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     ?GetToggleEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x18016C1F0 (-GetToggleEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     ??$GetAttachedObject@UIMagnifierControllerProxy@@VMagnifierControllerProxy@@@InputSite@@QEAA?AV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@XZ @ 0x1801CD038 (--$GetAttachedObject@UIMagnifierControllerProxy@@VMagnifierControllerProxy@@@InputSite@@QEAA-AV-.c)
 *     ??4?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801CDAFC (--4-$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetDeviceState@MagnifierProcessor@@AEAA?AV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@PEBUHitTestInfo@@@Z @ 0x1801CDCF0 (-GetDeviceState@MagnifierProcessor@@AEAA-AV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Micros.c)
 *     ?HitTestClient@Magnifier@InputTraceLogging@@SAX_N0@Z @ 0x1801CDE28 (-HitTestClient@Magnifier@InputTraceLogging@@SAX_N0@Z.c)
 *     ?Active@MagnifierRecognizer@@QEAA_NXZ @ 0x1801CE694 (-Active@MagnifierRecognizer@@QEAA_NXZ.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x1801CE944 (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801CE9EC (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall MagnifierProcessor::OnHitTest(
        MagnifierProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 *v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 *v9; // rdi
  __int64 *v10; // r13
  __int64 *Attached; // rax
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 *DeviceState; // rax
  __int64 v17; // rdi
  unsigned __int8 GesturesEnabled; // al
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // cc
  char v22; // al
  char v23; // al
  __int64 (__fastcall *v24)(__int64, GUID *, __int64 *); // rbx
  int v25; // eax
  __int64 v26; // [rsp+20h] [rbp-20h] BYREF
  __int64 v27; // [rsp+28h] [rbp-18h] BYREF
  __int64 v28[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v31; // [rsp+88h] [rbp+48h] BYREF
  __int64 v32; // [rsp+98h] [rbp+58h] BYREF

  *(_DWORD *)a4 = 0;
  if ( (*(_BYTE *)a2 & 8) != 0 && *(char *)a2 >= 0 && (*((_BYTE *)a2 + 32) & 4) != 0 )
  {
    v6 = (__int64 *)((char *)a4 + 8);
    if ( *((_QWORD *)a4 + 1) )
    {
      *(_DWORD *)a4 = 1;
    }
    else
    {
      v7 = 0LL;
      v32 = 0LL;
      v31 = 0LL;
      v8 = *(_QWORD *)(*((_QWORD *)a3 + 22) + 104LL);
      v9 = *(__int64 **)(v8 - 24);
      v10 = *(__int64 **)(v8 - 16);
      while ( 1 )
      {
        if ( v9 == v10 )
        {
          Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v31);
          Microsoft::WRL::ComPtr<VirtualTouchpadControllerProxy>::~ComPtr<VirtualTouchpadControllerProxy>(&v32);
          return 0LL;
        }
        Attached = InputSite::GetAttachedObject<IMagnifierControllerProxy,MagnifierControllerProxy>(*v9, &v26);
        v12 = 0LL;
        if ( &v32 != Attached )
        {
          v12 = *Attached;
          *Attached = 0LL;
        }
        v13 = v7;
        v7 = v12;
        v32 = v12;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v13 + 16) + 8LL))(v13 + 16);
        v14 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 16) + 8LL))(v14 + 16);
        }
        if ( v12 )
          break;
        ++v9;
      }
      Microsoft::WRL::ComPtr<InputSite>::operator=(&v31, v9);
      v27 = 0LL;
      DeviceState = MagnifierProcessor::GetDeviceState((__int64)this, v28, (__int64)a2);
      v17 = 0LL;
      if ( &v26 != DeviceState )
      {
        v17 = *DeviceState;
        *DeviceState = 0LL;
      }
      v26 = 0LL;
      v27 = v17;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v26);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v28);
      *(_BYTE *)(v17 + 16) = BamoMagnifierControllerProxy::GetToggleEnabled((BamoMagnifierControllerProxy *)(v12 + 8));
      GesturesEnabled = BamoMagnifierControllerProxy::GetGesturesEnabled((BamoMagnifierControllerProxy *)(v12 + 8));
      *(_BYTE *)(v17 + 17) = GesturesEnabled;
      LOBYTE(v19) = *(_BYTE *)(v17 + 16);
      InputTraceLogging::Magnifier::HitTestClient(v19, GesturesEnabled);
      v20 = *(_QWORD *)MagnifierRecognizer::TimeFromPerfCount(v17 + 32, v28, *((_QWORD *)a2 + 2))
          - *(_QWORD *)(v17 + 24);
      if ( !*(_BYTE *)(v17 + 33) || (v21 = 1000000LL * *(_QWORD *)(v17 + 64) < v20, v22 = 1, v21) )
        v22 = 0;
      *(_BYTE *)(v17 + 18) = v22;
      MagnifierRecognizer::Reset((MagnifierRecognizer *)(v17 + 32), (MagnifierProcessor *)((char *)this + 80));
      if ( *(_BYTE *)(v17 + 16) || (v23 = 0, *(_BYTE *)(v17 + 17)) )
        v23 = 1;
      *(_BYTE *)(v17 + 32) = v23;
      *(_BYTE *)(v17 + 35) = *(_BYTE *)(v17 + 17);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)(v17 + 112));
      Microsoft::WRL::ComPtr<MagnifierControllerProxy>::operator=((__int64 *)(v17 + 120), &v32);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v17 + 128), &v31);
      if ( MagnifierRecognizer::Active((MagnifierRecognizer *)(v17 + 32)) )
      {
        v24 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v17;
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v6);
        v25 = v24(v17, &GUID_00000000_0000_0000_c000_000000000046, v6);
        if ( v25 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x63,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magni"
                 "fierprocessor.cpp",
            (const char *)(unsigned int)v25,
            v26);
        *(_DWORD *)a4 = 1;
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v27);
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v12 + 16) + 8LL))(v12 + 16);
    }
  }
  return 0LL;
}
