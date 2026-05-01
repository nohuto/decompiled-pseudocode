/*
 * XREFs of ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1800A37B4
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800A2F28 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18009EBDC (-BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x1800A38E4 (-EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ??$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N$$QEAH2@Z @ 0x1800A3AA4 (--$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::BoostPriority(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  struct _TP_TIMER **v8; // rdi
  struct _TP_TIMER *v9; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  HSTRING v11; // rcx
  PCWSTR StringRawBuffer; // rax
  HSTRING v13; // rcx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF
  int v19; // [rsp+58h] [rbp+10h] BYREF
  PCWSTR v20; // [rsp+60h] [rbp+18h] BYREF
  PCWSTR v21; // [rsp+68h] [rbp+20h] BYREF

  v19 = a2;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      goto LABEL_9;
    if ( (*(_BYTE *)(a1 + 132) & 0x20) != 0 )
      goto LABEL_9;
    if ( *(_BYTE *)(a1 + 140) )
      goto LABEL_9;
    *(_BYTE *)(a1 + 140) = 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 120LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v7 >= 0 )
      goto LABEL_9;
    v15 = 1195LL;
LABEL_16:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7,
      v16);
    goto LABEL_9;
  }
  CSingleViewShellExperience::BoostDiskIo((CSingleViewShellExperience *)a1, a2, a3, a4, v16);
  if ( !*(_BYTE *)(a1 + 141) )
  {
    v5 = *(_QWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 141) = 1;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 120LL))(v5, a1);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x473,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v6,
        v16);
  }
  v7 = CSingleViewShellExperience::EnsureUnboostCallback((CSingleViewShellExperience *)a1);
  if ( v7 < 0 )
  {
    v15 = 1142LL;
    goto LABEL_16;
  }
  v8 = (struct _TP_TIMER **)(a1 + 144);
  pftDueTime = (struct _FILETIME)-300000000LL;
  v9 = *(struct _TP_TIMER **)(a1 + 144);
  if ( v9
    || (ThreadpoolTimer = CreateThreadpoolTimer(
                            lambda_377f401a7dbbea4e6b7b813ece399ce2_::_lambda_invoker_cdecl_,
                            (PVOID)a1,
                            0LL),
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
          (struct _TP_TIMER **)(a1 + 144),
          ThreadpoolTimer),
        (v9 = *v8) != 0LL) )
  {
    SetThreadpoolTimer(v9, &pftDueTime, 0, 0);
  }
LABEL_9:
  v11 = *(HSTRING *)(a1 + 16);
  pftDueTime.dwLowDateTime = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(v11, 0LL);
  v13 = *(HSTRING *)(a1 + 8);
  v20 = StringRawBuffer;
  v21 = WindowsGetStringRawBuffer(v13, 0LL);
  return SingleViewExperienceTelemetry::OnPriorityBoostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,int,bool &>(
           (unsigned int)&v21,
           (unsigned int)&v20,
           (unsigned int)&v19,
           (int)a1 + 141,
           (__int64)&pftDueTime,
           a1 + 140);
}
