/*
 * XREFs of ?CreateMarginsProp@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C0082D50
 * Callers:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C004EC00 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0083090 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00B0AE8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowMargins::CWindowMarginProp::CreateMarginsProp(struct tagWND *a1, const struct FRAME_MARGIN *a2)
{
  CWindowProp *v4; // rax
  int v5; // edx
  int v6; // r8d
  CWindowProp *v7; // rbx
  int v8; // edx
  int v9; // r8d

  v4 = (CWindowProp *)Win32AllocPoolZInit(32LL, 1668118357LL);
  v7 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    *(_QWORD *)v4 = &WindowMargins::CWindowMarginProp::`vftable';
    *((_QWORD *)v4 + 3) = 0LL;
    if ( (unsigned int)CWindowProp::SetProp(v4, a1) )
    {
      *((_QWORD *)v7 + 3) = *(_QWORD *)a2;
    }
    else
    {
      (**(void (__fastcall ***)(CWindowProp *))v7)(v7);
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          10,
          2,
          26,
          10,
          (__int64)&WPP_5d8c16ef74033e1c3b6bd48607943c03_Traceguids,
          *(_QWORD *)a1);
      }
    }
  }
  else
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        26,
        11,
        (__int64)&WPP_5d8c16ef74033e1c3b6bd48607943c03_Traceguids,
        *(_QWORD *)a1,
        23);
    }
  }
}
