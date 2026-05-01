/*
 * XREFs of ?LoadTabsOnlyPivot@CMultitaskingViewFrame@@UEAAJXZ @ 0x1804B1750
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?4UISwitchItemFilteredCollection@@@?$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UISwitchItemFilteredCollection@@@12@@Z @ 0x1804A0E5C (--$-4UISwitchItemFilteredCollection@@@-$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV.c)
 *     ?SwitchItemFilteredCollection_CreateInstance@@YAJPEAUIObservableObjectArray@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AB784 (-SwitchItemFilteredCollection_CreateInstance@@YAJPEAUIObservableObjectArray@@AEBU_GUID@@PEAPEAX@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewFrame::LoadTabsOnlyPivot(CMultitaskingViewFrame *this)
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
    v4 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v10 + 128LL))(v10);
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
        Microsoft::WRL::ComPtr<ISnappedWindow>::operator=((__int64 *)this + 301, (__int64 *)&v11);
        v5 = 0;
        goto LABEL_10;
      }
      v6 = 732LL;
    }
    else
    {
      v6 = 727LL;
    }
  }
  else
  {
    v6 = 726LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
    (const char *)(unsigned int)v4);
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  return v5;
}
