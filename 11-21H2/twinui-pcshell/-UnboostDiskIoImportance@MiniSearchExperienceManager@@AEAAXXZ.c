/*
 * XREFs of ?UnboostDiskIoImportance@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A4760
 * Callers:
 *     ?UnboostPriority@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A4808 (-UnboostPriority@MiniSearchExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009C9E8 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall MiniSearchExperienceManager::UnboostDiskIoImportance(MiniSearchExperienceManager *this)
{
  __int64 (__fastcall ****v1)(_QWORD, GUID *, __int64 *); // rbx
  int v2; // eax
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 40);
  if ( *((_QWORD *)this + 5) )
  {
    RmActivityImportanceInitialize(&v5);
    LOWORD(v5) = v5 & 0xFBFF;
    v6 = 0LL;
    v2 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
           v1,
           &v6);
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 72LL))(v6, v5, 128LL);
      if ( v2 >= 0 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
        return;
      }
      v3 = 1187LL;
    }
    else
    {
      v3 = 1185LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_7;
  }
}
