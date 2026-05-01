/*
 * XREFs of ?GetChildren@CMultitaskingViewElementBase@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1804B9A90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1801243A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewElementBase::GetChildren(
        CMultitaskingViewElementBase *this,
        struct IObjectArray **a2)
{
  const struct _GUID *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v13; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  v6 = CEnumerableObjectCollection::CreateInstance(v5, v4, &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = (_QWORD *)*((_QWORD *)this + 2);
    v10 = &v9[*((_QWORD *)this + 3)];
    while ( v9 != v10 )
    {
      v6 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v13 + 40LL))(v13, *v9);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 53LL;
        goto LABEL_9;
      }
      ++v9;
    }
    v6 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v13)(
           v13,
           &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
           a2);
    v7 = v6;
    if ( v6 >= 0 )
      goto LABEL_10;
    v8 = 55LL;
  }
  else
  {
    v8 = 49LL;
  }
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
    (const char *)(unsigned int)v6);
LABEL_10:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  return v7;
}
