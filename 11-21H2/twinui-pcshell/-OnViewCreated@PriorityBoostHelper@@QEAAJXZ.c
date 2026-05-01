/*
 * XREFs of ?OnViewCreated@PriorityBoostHelper@@QEAAJXZ @ 0x1800C8E68
 * Callers:
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800C9000 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009C9E8 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x18009D9C0 (-BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800C8D08 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x1800C8D7C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PriorityBoostHelper::OnViewCreated(PriorityBoostHelper *this)
{
  const char *v2; // r9
  int v3; // eax
  HANDLE EventW; // rax
  const char *v5; // r9
  struct _TP_WAIT *ThreadpoolWait; // rax
  struct _TP_WAIT *v7; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _TP_TIMER *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+48h] [rbp+10h] BYREF

  if ( GetCurrentThreadId() != *((_DWORD *)this + 26) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x81,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v2);
  if ( *((_DWORD *)this + 27) )
  {
    v3 = PriorityBoostHelper::BoostPriorityHelper(this);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x85,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
        (const char *)(unsigned int)v3);
  }
  EventW = CreateEventW(0LL, 1, 0, L"ShellStartReadyEvent");
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 11,
    EventW);
  if ( *((_QWORD *)this + 11) )
  {
    ThreadpoolWait = CreateThreadpoolWait(
                       lambda_6d93f2ff4c7f7497f8e3b07a35aecc4b_::_lambda_invoker_cdecl_,
                       (PVOID)*((unsigned int *)this + 29),
                       0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::reset(
      (struct _TP_WAIT **)this + 10,
      ThreadpoolWait);
    v7 = (struct _TP_WAIT *)*((_QWORD *)this + 10);
    if ( v7 )
    {
      SetThreadpoolWait(v7, *((HANDLE *)this + 11), 0LL);
      pftDueTime = (struct _FILETIME)-1200000000LL;
      ThreadpoolTimer = CreateThreadpoolTimer(
                          lambda_6cd121ce747f2a58a1ddadc2635efaab_::_lambda_invoker_cdecl_,
                          (PVOID)*((unsigned int *)this + 28),
                          0LL);
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)this + 9,
        ThreadpoolTimer);
      v9 = (struct _TP_TIMER *)*((_QWORD *)this + 9);
      if ( v9 )
      {
        SetThreadpoolTimer(v9, &pftDueTime, 0, 0);
        v16 = 0LL;
        v10 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 8) + 24LL),
                &v16);
        v11 = retaddr;
        if ( v10 < 0 )
        {
          v14 = 163LL;
        }
        else
        {
          v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 88LL))(v16, 1LL);
          v11 = retaddr;
          if ( v10 >= 0 )
          {
LABEL_10:
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
            return 0LL;
          }
          v14 = 165LL;
        }
        wil::details::in1diag3::_Log_Hr(
          v11,
          (void *)v14,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
          (const char *)(unsigned int)v10);
        goto LABEL_10;
      }
      v13 = 159LL;
    }
    else
    {
      v13 = 146LL;
    }
  }
  else
  {
    v13 = 138LL;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)v13,
           (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
           v5);
}
