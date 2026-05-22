/*
 * XREFs of ?CreateMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAUIUnknown@@@Z @ 0x18015B660
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateOrDuplicateMilResourceInternal@InteropDwmCompositor@Composition@UI@Windows@@AEAAJW4MIL_RESOURCE_TYPE@@_NPEAXPEAIPEAPEAUIUnknown@@1@Z @ 0x18015B730 (-CreateOrDuplicateMilResourceInternal@InteropDwmCompositor@Composition@UI@Windows@@AEAAJW4MIL_RE.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropDwmCompositor::SystemOnly::CreateMilResource(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // r14
  unsigned int v7; // ebp
  int v8; // ebx
  __int64 v9; // rdx
  char v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0;
  v4 = a1 - 1288;
  *a4 = 0LL;
  v11 = 1;
  v7 = a2;
  v8 = Windows::UI::Composition::InteropDwmCompositor::CreateOrDuplicateMilResourceInternal(
         a1 - 1288,
         a2,
         0LL,
         0LL,
         a3,
         a4,
         v11);
  if ( v8 == -2147467262 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, _QWORD *))(*(_QWORD *)(*(_QWORD *)(v4 + 456) + 72LL)
                                                                        + 24LL))(
           *(_QWORD *)(v4 + 456) + 72LL,
           v7,
           a3,
           a4);
    if ( v8 < 0 )
    {
      v9 = 71LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropdwmcompositor.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
  }
  else if ( v8 < 0 )
  {
    v9 = 75LL;
    goto LABEL_4;
  }
  return 0LL;
}
