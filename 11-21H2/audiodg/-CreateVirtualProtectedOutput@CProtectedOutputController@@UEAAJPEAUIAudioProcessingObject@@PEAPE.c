/*
 * XREFs of ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14005A9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ??_GCVirtualProtectedOutput@@QEAAPEAXI@Z @ 0x14005A83C (--_GCVirtualProtectedOutput@@QEAAPEAXI@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCVirtualProtectedOutput@@PEAV312@1@Z @ 0x14005ACE8 (-NewNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CProtectedOutputController::CreateVirtualProtectedOutput(
        CProtectedOutputController *this,
        struct IAudioProcessingObject *a2,
        struct IAudioVirtualProtectedOutput **a3)
{
  int v5; // ebx
  CVirtualProtectedOutput *v6; // rax
  CVirtualProtectedOutput *v7; // rdi
  __int64 v8; // rax
  __int64 *v9; // rcx
  struct IAudioVirtualProtectedOutput *v11; // [rsp+50h] [rbp+18h] BYREF
  CVirtualProtectedOutput *v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
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
        v12 = v6;
        v5 = ((__int64 (__fastcall *)(CVirtualProtectedOutput *, GUID *, struct IAudioVirtualProtectedOutput **))CVirtualProtectedOutput::`vftable')(
               v6,
               &GUID_562462dd_4f9a_4110_9d6a_c3ca0407ff76,
               &v11);
        if ( v5 >= 0 )
        {
          v8 = ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::NewNode(
                 (char *)this + 16,
                 &v12,
                 *((_QWORD *)this + 3));
          v9 = (__int64 *)*((_QWORD *)this + 3);
          if ( v9 )
            *v9 = v8;
          else
            *((_QWORD *)this + 2) = v8;
          *((_QWORD *)this + 3) = v8;
          *a3 = v11;
          return (unsigned int)v5;
        }
      }
      else
      {
        v5 = -2147024882;
        v7 = 0LL;
      }
      if ( v11 )
      {
        (*(void (__fastcall **)(struct IAudioVirtualProtectedOutput *))(*(_QWORD *)v11 + 16LL))(v11);
        v11 = 0LL;
      }
      if ( v7 )
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
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_8a78b0fe90e638a027f0a1224aa299fc_Traceguids, v5);
  }
  AudDGTraceLoggingErrorHelper("CProtectedOutputController::CreateVirtualProtectedOutput", 0x56u, v5);
  return (unsigned int)v5;
}
