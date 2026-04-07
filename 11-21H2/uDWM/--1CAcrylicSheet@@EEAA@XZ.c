/*
 * XREFs of ??1CAcrylicSheet@@EEAA@XZ @ 0x180099970
 * Callers:
 *     ??_GCAcrylicSheet@@EEAAPEAXI@Z @ 0x180099AF0 (--_GCAcrylicSheet@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18009B280 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18009BCFC (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

void __fastcall CAcrylicSheet::~CAcrylicSheet(CAcrylicSheet *this)
{
  int v2; // eax
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CAcrylicSheet::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CAcrylicSheet::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 37) = &CAcrylicSheet::`vftable'{for `IArrangementSheet'};
  v2 = CAcrylicSheet::StopAnimations(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      42LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v2);
  std::_Func_class<void,>::_Tidy((char *)this + 424);
  std::_Func_class<void,>::_Tidy((char *)this + 360);
  v3 = (CBaseObject *)*((_QWORD *)this + 44);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 41);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 40);
  if ( v7 )
    CBaseObject::Release(v7);
  CRenderDataVisual::~CRenderDataVisual(this);
}
