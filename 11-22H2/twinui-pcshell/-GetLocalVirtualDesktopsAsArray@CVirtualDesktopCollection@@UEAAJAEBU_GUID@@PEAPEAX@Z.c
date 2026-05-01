/*
 * XREFs of ?GetLocalVirtualDesktopsAsArray@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805FBF90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopCollection::GetLocalVirtualDesktopsAsArray(
        CVirtualDesktopCollection *this,
        const struct _GUID *a2,
        void **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  _QWORD *v10; // rbp
  int v11; // eax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v15; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  v6 = CEnumerableObjectCollection::CreateInstance((__int64)this, a2, &v15);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = (_QWORD *)*((_QWORD *)this + 6);
    v10 = &v9[*((_QWORD *)this + 7)];
    while ( v9 != v10 )
    {
      v6 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v15 + 40LL))(v15, *v9);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 262LL;
        goto LABEL_11;
      }
      ++v9;
    }
    if ( v15 )
    {
      v11 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v15)(v15, a2, a3);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1815,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
          (const char *)(unsigned int)v11,
          v13);
    }
    else
    {
      *a3 = 0LL;
    }
    v7 = 0;
  }
  else
  {
    v8 = 259LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v6);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v15);
  return v7;
}
