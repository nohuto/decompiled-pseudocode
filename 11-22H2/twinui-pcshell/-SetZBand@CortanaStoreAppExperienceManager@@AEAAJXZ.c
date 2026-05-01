/*
 * XREFs of ?SetZBand@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x18045C424
 * Callers:
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x18017D618 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800BA2B8 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::SetZBand(CortanaStoreAppExperienceManager *this)
{
  int v2; // ecx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_BYTE *)this + 260) != 0 ? 18 : 10;
  if ( *((_DWORD *)this + 66) != v2 )
  {
    *((_DWORD *)this + 66) = v2;
    if ( *((_QWORD *)this + 30) )
    {
      if ( *((_QWORD *)this + 29) )
      {
        v9 = 0LL;
        v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
               (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 29,
               &v9);
        v4 = v3;
        if ( v3 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 40LL))(v9, *((unsigned int *)this + 66));
          if ( v6 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x45F,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
              (const char *)(unsigned int)v6);
          v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 30) + 48LL))(
                 *((_QWORD *)this + 30),
                 *((unsigned int *)this + 66));
          v4 = v3;
          if ( v3 >= 0 )
          {
            v4 = 0;
            goto LABEL_12;
          }
          v5 = 1120LL;
        }
        else
        {
          v5 = 1118LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
LABEL_12:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
        return v4;
      }
    }
  }
  return 0LL;
}
