/*
 * XREFs of ?OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801AFA80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180123724 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x18014DA70 (-GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     ?GetToggleEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x18014DAB0 (-GetToggleEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     ??$GetAttachedObject@UIMagnifierControllerProxy@@VMagnifierControllerProxy@@@InputSite@@QEAA?AV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@XZ @ 0x1801AEC28 (--$GetAttachedObject@UIMagnifierControllerProxy@@VMagnifierControllerProxy@@@InputSite@@QEAA-AV-.c)
 *     ??4?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801AF6C8 (--4-$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetDeviceState@MagnifierProcessor@@AEAA?AV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@PEBUHitTestInfo@@@Z @ 0x1801AF8C0 (-GetDeviceState@MagnifierProcessor@@AEAA-AV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Micros.c)
 *     ?HitTestClient@Magnifier@InputTraceLogging@@SAX_N0@Z @ 0x1801AF9FC (-HitTestClient@Magnifier@InputTraceLogging@@SAX_N0@Z.c)
 *     ?Active@MagnifierRecognizer@@QEAA_NXZ @ 0x1801B025C (-Active@MagnifierRecognizer@@QEAA_NXZ.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x1801B0510 (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801B05B8 (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall MagnifierProcessor::OnHitTest(
        MagnifierProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 *v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 *v10; // rsi
  __int64 *Attached; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *DeviceState; // rax
  __int64 v16; // rsi
  unsigned __int8 GesturesEnabled; // al
  __int64 v18; // rcx
  __int64 v19; // rax
  bool v20; // al
  bool v21; // al
  __int64 (__fastcall *v22)(__int64, GUID *, __int64 *); // rbx
  int v23; // eax
  __int64 v25; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v26; // [rsp+28h] [rbp-18h] BYREF
  __int64 v27[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v30; // [rsp+88h] [rbp+48h] BYREF
  __int64 v31; // [rsp+98h] [rbp+58h] BYREF

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
      v25 = 0LL;
      v8 = 0LL;
      v30 = 0LL;
      v9 = *(_QWORD *)(*((_QWORD *)a3 + 22) + 104LL);
      v10 = *(__int64 **)(v9 - 24);
      v26 = *(__int64 **)(v9 - 16);
      if ( v10 != v26 )
      {
        while ( 1 )
        {
          Attached = InputSite::GetAttachedObject<IMagnifierControllerProxy,MagnifierControllerProxy>(*v10, &v31);
          v12 = 0LL;
          if ( v27 != Attached )
          {
            v12 = *Attached;
            *Attached = 0LL;
          }
          v13 = v7;
          v7 = v12;
          v25 = v12;
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v13 + 16) + 8LL))(v13 + 16);
          v14 = v31;
          if ( v31 )
          {
            v31 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 16) + 8LL))(v14 + 16);
          }
          if ( v12 )
            break;
          if ( ++v10 == v26 )
            goto LABEL_31;
        }
        Microsoft::WRL::ComPtr<InputSite>::operator=(&v30, v10);
        v26 = 0LL;
        DeviceState = MagnifierProcessor::GetDeviceState((__int64)this, v27, (__int64)a2);
        v16 = 0LL;
        if ( &v31 != DeviceState )
        {
          v16 = *DeviceState;
          *DeviceState = 0LL;
        }
        v31 = 0LL;
        v26 = (__int64 *)v16;
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v31);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v27);
        *(_BYTE *)(v16 + 16) = BamoMagnifierControllerProxy::GetToggleEnabled((BamoMagnifierControllerProxy *)(v12 + 8));
        GesturesEnabled = BamoMagnifierControllerProxy::GetGesturesEnabled((BamoMagnifierControllerProxy *)(v12 + 8));
        *(_BYTE *)(v16 + 17) = GesturesEnabled;
        LOBYTE(v18) = *(_BYTE *)(v16 + 16);
        InputTraceLogging::Magnifier::HitTestClient(v18, GesturesEnabled);
        v19 = *(_QWORD *)MagnifierRecognizer::TimeFromPerfCount(v16 + 32, &v31, *((_QWORD *)a2 + 2))
            - *(_QWORD *)(v16 + 24);
        v20 = *(_BYTE *)(v16 + 33) && 1000000LL * *(_QWORD *)(v16 + 64) >= v19;
        *(_BYTE *)(v16 + 18) = v20;
        MagnifierRecognizer::Reset((MagnifierRecognizer *)(v16 + 32), (MagnifierProcessor *)((char *)this + 80));
        v21 = *(_BYTE *)(v16 + 16) || *(_BYTE *)(v16 + 17);
        *(_BYTE *)(v16 + 32) = v21;
        *(_BYTE *)(v16 + 35) = *(_BYTE *)(v16 + 17);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)(v16 + 112));
        Microsoft::WRL::ComPtr<MagnifierControllerProxy>::operator=((__int64 *)(v16 + 120), &v25);
        Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v16 + 128), &v30);
        if ( MagnifierRecognizer::Active((MagnifierRecognizer *)(v16 + 32)) )
        {
          v22 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v16;
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v6);
          v23 = v22(v16, &GUID_00000000_0000_0000_c000_000000000046, v6);
          if ( v23 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x63,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\mag"
                   "nifierprocessor.cpp",
              (const char *)(unsigned int)v23,
              v25);
          *(_DWORD *)a4 = 1;
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v26);
        v8 = v30;
      }
LABEL_31:
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 16) + 8LL))(v7 + 16);
    }
  }
  return 0LL;
}
