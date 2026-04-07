/*
 * XREFs of ??1CAcrylicSheet@@EEAA@XZ @ 0x1800A28E0
 * Callers:
 *     ??_GCAcrylicSheet@@EEAAPEAXI@Z @ 0x1800A2A00 (--_GCAcrylicSheet@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18006BA24 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1A98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800A3C68 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 */

void __fastcall CAcrylicSheet::~CAcrylicSheet(CBaseObject **this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rdx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *this = (CBaseObject *)&CAcrylicSheet::`vftable';
  v2 = CAcrylicSheet::StopAnimations((CAcrylicSheet *)this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v2);
  std::_Func_class<void,>::_Tidy((__int64)(this + 50), v3);
  std::_Func_class<void,>::_Tidy((__int64)(this + 42), v4);
  v5 = this[41];
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = this[40];
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = this[39];
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = this[38];
  if ( v8 )
    CBaseObject::Release(v8);
  CRenderDataVisual::~CRenderDataVisual(this);
}
