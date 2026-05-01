/*
 * XREFs of ?BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x18002BB00
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18002B450 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18010D260 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z @ 0x180423140 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z.c)
 * Callees:
 *     ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18002B96C (-BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ??$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N$$QEAH2@Z @ 0x18002BCA8 (--$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHA.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x1800EAA48 (-EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::BoostPriority(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  HSTRING v6; // rcx
  PCWSTR StringRawBuffer; // rax
  HSTRING v8; // rcx
  __int64 v10; // rcx
  int v11; // eax
  PTP_TIMER *v12; // rdi
  PTP_TIMER ThreadpoolTimer; // rax
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+58h] [rbp+10h] BYREF
  PCWSTR v19; // [rsp+60h] [rbp+18h] BYREF
  PCWSTR v20; // [rsp+68h] [rbp+20h] BYREF

  v18 = a2;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      goto LABEL_6;
    if ( (*(_BYTE *)(a1 + 132) & 0x20) != 0 )
      goto LABEL_6;
    if ( *(_BYTE *)(a1 + 140) )
      goto LABEL_6;
    *(_BYTE *)(a1 + 140) = 1;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 120LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v5 >= 0 )
      goto LABEL_6;
    v14 = 1203LL;
LABEL_16:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v5,
      v15);
    goto LABEL_6;
  }
  CSingleViewShellExperience::BoostDiskIo((CSingleViewShellExperience *)a1, a2, a3, a4, v15);
  if ( !*(_BYTE *)(a1 + 141) )
  {
    v10 = *(_QWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 141) = 1;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 120LL))(v10, a1);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x47B,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v11,
        v15);
  }
  v5 = CSingleViewShellExperience::EnsureUnboostCallback((CSingleViewShellExperience *)a1);
  if ( v5 < 0 )
  {
    v14 = 1150LL;
    goto LABEL_16;
  }
  v12 = (PTP_TIMER *)(a1 + 144);
  pftDueTime = (struct _FILETIME)-300000000LL;
  if ( !*(_QWORD *)(a1 + 144) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(
                        lambda_acbcada56500a27ebda644c8cbf644cb_::_lambda_invoker_cdecl_,
                        (PVOID)a1,
                        0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      a1 + 144,
      ThreadpoolTimer);
  }
  if ( *v12 )
    SetThreadpoolTimer(*v12, &pftDueTime, 0, 0);
LABEL_6:
  v6 = *(HSTRING *)(a1 + 16);
  pftDueTime.dwLowDateTime = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
  v8 = *(HSTRING *)(a1 + 8);
  v19 = StringRawBuffer;
  v20 = WindowsGetStringRawBuffer(v8, 0LL);
  return SingleViewExperienceTelemetry::OnPriorityBoostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,int,bool &>(
           (unsigned int)&v20,
           (unsigned int)&v19,
           (unsigned int)&v18,
           (int)a1 + 141,
           (__int64)&pftDueTime,
           a1 + 140);
}
