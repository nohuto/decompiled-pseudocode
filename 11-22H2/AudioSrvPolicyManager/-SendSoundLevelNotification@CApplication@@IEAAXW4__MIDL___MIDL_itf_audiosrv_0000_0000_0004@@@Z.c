/*
 * XREFs of ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180009BE0
 * Callers:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180009330 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180009590 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180009030 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     WPP_SF_d @ 0x18001F3E8 (WPP_SF_d.c)
 *     WPP_SF_SSd @ 0x1800239F0 (WPP_SF_SSd.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18002A000 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     McTemplateU0zq_EventWriteTransfer @ 0x18002BB2C (McTemplateU0zq_EventWriteTransfer.c)
 */

void __fastcall CApplication::SendSoundLevelNotification(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  PVOID v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbp
  PVOID v8; // rcx
  _QWORD *v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, a2);
  }
  v9 = *(_QWORD **)(a1 + 72);
  while ( v9 )
  {
    v7 = *ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v5, &v9);
    if ( (*(_BYTE *)(v7 + 448) & 1) != 0 && !*(_DWORD *)(v7 + 416) )
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SSd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          14LL,
          &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
          L"SoundLevelChanged",
          *(_QWORD *)(a1 + 24),
          *(_DWORD *)(v7 + 160));
      }
      if ( Microsoft_Windows_AudioEnableBits < 0 )
        McTemplateU0zq_EventWriteTransfer(v8, v6, *(_QWORD *)(a1 + 24), a2);
      CProcess::SendPBMNotification(v7, 0LL);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
