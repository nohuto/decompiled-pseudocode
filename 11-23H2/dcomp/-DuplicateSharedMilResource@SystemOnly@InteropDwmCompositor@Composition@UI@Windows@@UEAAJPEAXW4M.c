/*
 * XREFs of ?DuplicateSharedMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJPEAXW4MIL_RESOURCE_TYPE@@_NPEAIPEAPEAUIUnknown@@@Z @ 0x18015BA50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateOrDuplicateMilResourceInternal@InteropDwmCompositor@Composition@UI@Windows@@AEAAJW4MIL_RESOURCE_TYPE@@_NPEAXPEAIPEAPEAUIUnknown@@1@Z @ 0x18015B730 (-CreateOrDuplicateMilResourceInternal@InteropDwmCompositor@Composition@UI@Windows@@AEAAJW4MIL_RE.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropDwmCompositor::SystemOnly::DuplicateSharedMilResource(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        _DWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // r13
  int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = a1 - 1288;
  *a5 = 0;
  *a6 = 0LL;
  v10 = Windows::UI::Composition::InteropDwmCompositor::CreateOrDuplicateMilResourceInternal(
          (DirectComposition::CDevice **)(a1 - 1288),
          a3,
          1,
          a2,
          a5,
          a6,
          a4);
  if ( v10 == -2147467262 )
  {
    LOBYTE(v11) = a4;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD *, _QWORD *))(*(_QWORD *)(*(_QWORD *)(v6 + 456) + 72LL)
                                                                                           + 40LL))(
            *(_QWORD *)(v6 + 456) + 72LL,
            a2,
            a3,
            v11,
            a5,
            a6);
    if ( v10 < 0 )
    {
      v12 = 168LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropdwmcompositor.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  else if ( v10 < 0 )
  {
    v12 = 172LL;
    goto LABEL_4;
  }
  return 0LL;
}
