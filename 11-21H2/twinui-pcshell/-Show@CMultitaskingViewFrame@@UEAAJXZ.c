/*
 * XREFs of ?Show@CMultitaskingViewFrame@@UEAAJXZ @ 0x1804B2560
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MultitaskingViewFrameShown@AEAIAEAIAEAUCRect@Geometry@@@MultitaskingViewTelemetry@@SAXAEAI0AEAUCRect@Geometry@@@Z @ 0x1804AFA5C (--$MultitaskingViewFrameShown@AEAIAEAIAEAUCRect@Geometry@@@MultitaskingViewTelemetry@@SAXAEAI0AE.c)
 *     ?_CloakWindow@CMultitaskingViewFrame@@AEAAJ_N@Z @ 0x1804B271C (-_CloakWindow@CMultitaskingViewFrame@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewFrame::Show(CMultitaskingViewFrame *this)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(__int64, GUID *, __int64 *); // rbx
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  v2 = *((_QWORD *)this + 314);
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    v4 = v3(v2, &GUID_b406b6c5_d8ab_475a_b797_5e5d2d5d22c4, &v14);
    if ( v4 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 72LL))(v14);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 315) + 392LL))(*((_QWORD *)this + 315), 0LL);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EF,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
        (const char *)(unsigned int)v4);
    }
  }
  (*(void (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)this + 310) + 24LL))(*((_QWORD *)this + 310), &GUID_NULL);
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 310) + 32LL))(*((_QWORD *)this + 310), v5);
  v6 = CMultitaskingViewFrame::_CloakWindow(this, 0);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v13 = 0;
    v8 = *((_QWORD *)this + 304);
    if ( v8 )
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 24LL))(v8, &v13);
    v12 = 0;
    v9 = *((_QWORD *)this + 306);
    if ( v9 )
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 24LL))(v9, &v12);
    MultitaskingViewTelemetry::MultitaskingViewFrameShown<unsigned int &,unsigned int &,Geometry::CRect &>(
      &v13,
      &v12,
      (CMultitaskingViewFrame *)((char *)this + 2552));
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  return v7;
}
