/*
 * XREFs of ?OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ @ 0x18009A810
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180099A78 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180099AB4 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18009B848 (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18009BCFC (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAcrylicSheet::OnGlobalTimeUpdated(CAcrylicSheet *this)
{
  char v2; // di
  __int64 v3; // rax
  __int64 v4; // rax
  int updated; // eax
  unsigned int v6; // ebx
  _BYTE v8[56]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v9; // [rsp+58h] [rbp-60h]
  _BYTE v10[56]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v11; // [rsp+98h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  CVisual::SetDirtyFlags(this, 0x8000);
  v11 = 0LL;
  v9 = 0LL;
  v2 = 0;
  v3 = *((_QWORD *)this + 73);
  if ( v3 && *(_BYTE *)(v3 + 72) )
  {
    v2 = 1;
    std::function<void (void)>::operator=((__int64)v10, (__int64)this + 360);
  }
  v4 = *((_QWORD *)this + 71);
  if ( v4 && *(_BYTE *)(v4 + 72) )
  {
    std::function<void (void)>::operator=((__int64)v8, (__int64)this + 424);
  }
  else if ( !v2 )
  {
    goto LABEL_10;
  }
  updated = CAcrylicSheet::UpdateTransition(this);
  v6 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26C,
      (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_15;
  }
LABEL_10:
  if ( v11 )
    std::_Func_class<void,>::operator()((__int64)v10);
  if ( v9 )
    std::_Func_class<void,>::operator()((__int64)v8);
  v6 = 0;
LABEL_15:
  std::_Func_class<void,>::_Tidy(v8);
  std::_Func_class<void,>::_Tidy(v10);
  return v6;
}
