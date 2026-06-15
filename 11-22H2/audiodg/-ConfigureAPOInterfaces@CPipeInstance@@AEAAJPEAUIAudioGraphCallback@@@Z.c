/*
 * XREFs of ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x14001470C
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007080 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400148CC (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140015AC4 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140028500 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002850C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052984 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DF4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::ConfigureAPOInterfaces(CPipeInstance *this, struct IAudioGraphCallback *a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // r14
  CPipeInstance *v5; // rbp
  __int64 Prev; // rax
  unsigned __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // edi
  _QWORD *v13; // rbx
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v5 = this;
  if ( !a2 )
    return 0;
  v15 = *((_QWORD *)this + 3);
  if ( v15 )
  {
    do
    {
      Prev = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(this, &v15);
      this = *(CPipeInstance **)Prev;
      if ( *(_DWORD *)(*(_QWORD *)Prev + 40LL) == 2
        && ((unsigned int)(*((_DWORD *)v5 + 28) - 2) <= 1 || !**((_DWORD **)this + 4)) )
      {
        v2 = (unsigned int)(v2 + 1);
      }
    }
    while ( v15 );
    if ( (_DWORD)v2 )
    {
      v7 = 8LL * (unsigned int)v2;
      if ( !is_mul_ok((unsigned int)v2, 8uLL) )
        v7 = -1LL;
      v8 = operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
      v3 = v8;
      if ( !v8 )
      {
        v12 = -2147024882;
LABEL_33:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            55LL,
            &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids,
            (unsigned int)v12);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::ConfigureAPOInterfaces", 0x1159u, v12);
        return (unsigned int)v12;
      }
      memset_0(v8, 0, 8 * v2);
      v10 = 0LL;
      v15 = *((_QWORD *)v5 + 3);
      while ( v15 )
      {
        v11 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(v9, &v15);
        v9 = *(_QWORD *)v11;
        if ( *(_DWORD *)(*(_QWORD *)v11 + 40LL) == 2 )
        {
          v9 = *(_QWORD *)(v9 + 32);
          if ( ((unsigned int)(*((_DWORD *)v5 + 28) - 2) <= 1 || !*(_DWORD *)v9) && (unsigned int)v10 < (unsigned int)v2 )
          {
            v12 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo(v9 + 40, &v3[v10]);
            if ( v12 < 0 )
              goto LABEL_19;
            v10 = (unsigned int)(v10 + 1);
          }
        }
      }
    }
  }
  v12 = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, CPipeInstance *, _QWORD, _QWORD *))(*(_QWORD *)a2 + 24LL))(
          a2,
          v5,
          (unsigned int)v2,
          v3);
  if ( v3 )
  {
LABEL_19:
    if ( (_DWORD)v2 )
    {
      v13 = v3;
      do
      {
        if ( *v13 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 16LL))(*v13);
          *v13 = 0LL;
        }
        ++v13;
        --v2;
      }
      while ( v2 );
    }
    operator delete[](v3);
  }
  if ( v12 < 0 )
    goto LABEL_33;
  return (unsigned int)v12;
}
