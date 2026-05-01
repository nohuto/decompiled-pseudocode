/*
 * XREFs of ?UpdateScrollButtonEnablement@CScrollViewerHost@@UEAAXXZ @ 0x1804C1040
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIScrollButtonContainer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollButtonContainer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804C0368 (--$As@UIScrollButtonContainer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComP.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CScrollViewerHost::UpdateScrollButtonEnablement(CScrollViewerHost *this)
{
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  double v7; // xmm0_8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 248);
  if ( *v2 )
  {
    v3 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollButtonContainer>(v2, (__int64 *)&v9);
    if ( v3 >= 0 )
    {
      if ( (*(double (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 48LL))(*((_QWORD *)this + 30)) >= 0.0001 )
      {
        v7 = (*(double (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 48LL))(*((_QWORD *)this + 30));
        v4 = v9;
        v5 = *v9;
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7 - 100.0) & _xmm) >= 0.0001 )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD))(v5 + 24))(v9, 0LL);
          goto LABEL_10;
        }
        v6 = 1LL;
      }
      else
      {
        v4 = v9;
        v5 = *v9;
        v6 = 2LL;
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(v5 + 24))(v4, v6);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB5,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
        (const char *)(unsigned int)v3);
    }
  }
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
}
