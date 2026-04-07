/*
 * XREFs of ?OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ @ 0x1800A3670
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18006BA24 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A2984 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800A29C0 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x1800A3F1C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAcrylicSheet::OnGlobalTimeUpdated(CAcrylicSheet *this, __int64 a2)
{
  int v3; // eax
  char v4; // di
  __int64 v5; // rax
  __int64 v6; // rax
  int updated; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  _BYTE v11[56]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v12; // [rsp+58h] [rbp-60h]
  _BYTE v13[56]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v14; // [rsp+98h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v3 = *((_DWORD *)this + 22);
  if ( (v3 & 0x8000) == 0 )
  {
    *((_DWORD *)this + 22) = v3 | 0x8000;
    CVisual::PropagateDirtyChildren(this);
  }
  v14 = 0LL;
  v12 = 0LL;
  v4 = 0;
  v5 = *((_QWORD *)this + 69);
  if ( v5 && *(_BYTE *)(v5 + 72) )
  {
    v4 = 1;
    std::function<void (void)>::operator=((__int64)v13, (__int64)this + 336);
  }
  v6 = *((_QWORD *)this + 67);
  if ( v6 && *(_BYTE *)(v6 + 72) )
  {
    std::function<void (void)>::operator=((__int64)v11, (__int64)this + 400);
  }
  else if ( !v4 )
  {
    goto LABEL_12;
  }
  updated = CAcrylicSheet::UpdateTransition(this);
  v8 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x215,
      (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_17;
  }
LABEL_12:
  if ( v14 )
    std::_Func_class<void,>::operator()((__int64)v13);
  if ( v12 )
    std::_Func_class<void,>::operator()((__int64)v11);
  v8 = 0;
LABEL_17:
  std::_Func_class<void,>::_Tidy((__int64)v11, a2);
  std::_Func_class<void,>::_Tidy((__int64)v13, v9);
  return v8;
}
