/*
 * XREFs of ?LoadWindowsOnlyPivot@CMultitaskingViewFrame@@UEAAJXZ @ 0x18056E230
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D7A4 (--4-$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?4UISwitchItemFilteredCollection@@@?$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UISwitchItemFilteredCollection@@@12@@Z @ 0x1805607D0 (--$-4UISwitchItemFilteredCollection@@@-$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV.c)
 *     ?SwitchItemFilteredCollection_CreateInstance@@YAJPEAUIObservableObjectArray@@AEBU_GUID@@PEAPEAX@Z @ 0x180568274 (-SwitchItemFilteredCollection_CreateInstance@@YAJPEAUIObservableObjectArray@@AEBU_GUID@@PEAPEAX@.c)
 */

__int64 __fastcall CMultitaskingViewFrame::LoadWindowsOnlyPivot(CMultitaskingViewFrame *this)
{
  struct IObservableObjectArray *v2; // rbx
  const struct _GUID *v3; // rdx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  void *v10; // [rsp+30h] [rbp+10h] BYREF
  struct IObservableObjectArray *v11; // [rsp+38h] [rbp+18h] BYREF

  v11 = (struct IObservableObjectArray *)*((_QWORD *)this + 302);
  v2 = v11;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  v4 = SwitchItemFilteredCollection_CreateInstance(v2, v3, &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v10 + 104LL))(v10);
    v5 = v4;
    if ( v4 >= 0 )
    {
      Microsoft::WRL::ComPtr<IObservableObjectArray>::operator=<ISwitchItemFilteredCollection>(
        (__int64 *)&v11,
        (__int64 *)&v10);
      v7 = *((_QWORD *)this + 314);
      if ( !v7
        || (v4 = (*(__int64 (__fastcall **)(__int64, struct IObservableObjectArray *))(*(_QWORD *)v7 + 32LL))(v7, v11),
            v5 = v4,
            v4 >= 0) )
      {
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=(
          (__int64 *)this + 301,
          (__int64 *)&v11);
        v5 = 0;
        goto LABEL_10;
      }
      v6 = 713LL;
    }
    else
    {
      v6 = 708LL;
    }
  }
  else
  {
    v6 = 707LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
    (const char *)(unsigned int)v4);
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  return v5;
}
