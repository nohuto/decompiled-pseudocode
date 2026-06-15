/*
 * XREFs of ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14005DED0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     ??_GCVirtualProtectedOutput@@QEAAPEAXI@Z @ 0x14005DD20 (--_GCVirtualProtectedOutput@@QEAAPEAXI@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCVirtualProtectedOutput@@PEAV312@1@Z @ 0x14005E1B8 (-NewNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CProtectedOutputController::CreateVirtualProtectedOutput(
        CProtectedOutputController *this,
        struct IAudioProcessingObject *a2,
        struct IAudioVirtualProtectedOutput **a3)
{
  int v5; // edi
  CVirtualProtectedOutput *v6; // rax
  CVirtualProtectedOutput *v7; // rbx
  CVirtualProtectedOutput *v8; // rax
  __int64 v10; // rax
  __int64 *v11; // rcx
  struct IAudioVirtualProtectedOutput *v12; // [rsp+50h] [rbp+18h] BYREF
  CVirtualProtectedOutput *v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
    {
      v5 = -2147024809;
    }
    else
    {
      v6 = (CVirtualProtectedOutput *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v7 = v6;
      if ( v6 )
      {
        *((_DWORD *)v6 + 4) = 0;
        *((_DWORD *)v6 + 5) = 0;
        *(_QWORD *)v6 = &CVirtualProtectedOutput::`vftable';
        *((_QWORD *)v6 + 1) = this;
      }
      else
      {
        v7 = 0LL;
      }
      v13 = v7;
      if ( v7 )
      {
        v5 = (**(__int64 (__fastcall ***)(CVirtualProtectedOutput *, GUID *, struct IAudioVirtualProtectedOutput **))v7)(
               v7,
               &GUID_562462dd_4f9a_4110_9d6a_c3ca0407ff76,
               &v12);
        if ( v5 >= 0 )
        {
          v10 = ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::NewNode(
                  (char *)this + 16,
                  &v13,
                  *((_QWORD *)this + 3));
          v11 = (__int64 *)*((_QWORD *)this + 3);
          if ( v11 )
            *v11 = v10;
          else
            *((_QWORD *)this + 2) = v10;
          *((_QWORD *)this + 3) = v10;
          *a3 = v12;
          return (unsigned int)v5;
        }
      }
      else
      {
        v5 = -2147024882;
      }
      v8 = v7;
      if ( v12 )
      {
        (*(void (__fastcall **)(struct IAudioVirtualProtectedOutput *))(*(_QWORD *)v12 + 16LL))(v12);
        v12 = 0LL;
        v8 = v7;
      }
      if ( v8 )
        CVirtualProtectedOutput::`scalar deleting destructor'(v7);
    }
  }
  else
  {
    v5 = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_54b82945556c3d10a6b677da0424b62c_Traceguids, v5);
  }
  AudDGTraceLoggingErrorHelper("CProtectedOutputController::CreateVirtualProtectedOutput", 0x56u, v5);
  return (unsigned int)v5;
}
