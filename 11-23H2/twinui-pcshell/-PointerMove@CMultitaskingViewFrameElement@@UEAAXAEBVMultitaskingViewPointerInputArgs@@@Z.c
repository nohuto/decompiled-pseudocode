/*
 * XREFs of ?PointerMove@CMultitaskingViewFrameElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18057D720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180575350 (-PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewFrameElement::PointerMove(
        CMultitaskingViewFrameElement *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 71);
  if ( v4 )
  {
    v9 = *((_QWORD *)this + 71);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    (*(void (__fastcall **)(__int64, const struct MultitaskingViewPointerInputArgs *))(*(_QWORD *)v4 + 40LL))(v4, a2);
  }
  else
  {
    CMultitaskingViewElementBase::PointerMove(this, a2);
    v5 = (__int64 *)((char *)this + 576);
    if ( !*((_QWORD *)this + 72) )
      return;
    v6 = 0LL;
    v9 = 0LL;
    if ( &v9 != v5 )
    {
      v6 = *v5;
      v9 = *v5;
      *v5 = 0LL;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct MultitaskingViewPointerInputArgs *))(*(_QWORD *)v6 + 24LL))(
           v6,
           *((unsigned int *)this + 25),
           a2);
    if ( v7 >= 0 )
    {
      v9 = 0LL;
      v10 = *((_QWORD *)this + 71);
      *((_QWORD *)this + 71) = v6;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x16B,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
}
