/*
 * XREFs of ?UnboostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18009DC50
 * Callers:
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180092F30 (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009C9E8 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UndockedSearchAppExperienceManager::UnboostDiskIoImportance(UndockedSearchAppExperienceManager *this)
{
  __int64 (__fastcall ****v1)(_QWORD, GUID *, __int64 *); // rbx
  int v2; // eax
  __int64 v3; // rdx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 64);
  if ( *((_QWORD *)this + 8) )
  {
    RmActivityImportanceInitialize(&v6);
    LOWORD(v6) = v6 & 0xFBFF;
    v7 = 0LL;
    v2 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
           v1,
           &v7);
    if ( v2 < 0 )
    {
      v3 = 3132LL;
    }
    else
    {
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 72LL))(v7, v6, 128LL);
      if ( v2 >= 0 )
      {
LABEL_4:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
        return;
      }
      v3 = 3134LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2,
      v4);
    goto LABEL_4;
  }
}
