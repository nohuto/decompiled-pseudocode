/*
 * XREFs of ?SetUIContentRoot@UIContext@UI@Windows@@UEAAJPEAUIUIContentRoot@23@@Z @ 0x180018930
 * Callers:
 *     ?RuntimeClassInitialize@UIContext@UI@Windows@@QEAAJPEAUIUIContentRoot@23@@Z @ 0x180018DE8 (-RuntimeClassInitialize@UIContext@UI@Windows@@QEAAJPEAUIUIContentRoot@23@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180018C44 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@UIUIContentRoot@UI@Windows@@@WRL@Microsoft@@YAJPEAUIUIContentRoot@UI@Windows@@PEAVWeakRef@01@@Z @ 0x180018E10 (--$AsWeak@UIUIContentRoot@UI@Windows@@@WRL@Microsoft@@YAJPEAUIUIContentRoot@UI@Windows@@PEAVWeak.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::UIContext::SetUIContentRoot(
        Windows::UI::UIContext *this,
        struct Windows::UI::IUIContentRoot *a2)
{
  __int64 *v2; // rax
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = (__int64 *)((char *)this + 56);
  if ( !a2 )
  {
    v8 = *v2;
    *v2 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    return 0LL;
  }
  v10 = (char *)this + 56;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v10);
  v5 = Microsoft::WRL::AsWeak<Windows::UI::IUIContentRoot>(a2, v4);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x47,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtuicontext.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
