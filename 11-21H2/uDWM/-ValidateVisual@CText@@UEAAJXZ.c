/*
 * XREFs of ?ValidateVisual@CText@@UEAAJXZ @ 0x180028BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x180028070 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180029D90 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::ValidateVisual(CText *this)
{
  int v2; // eax
  int v3; // edi
  __int64 v5; // rdx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_BYTE *)this + 88) & 2) != 0 || (v3 = CText::ValidateResources(this), v3 >= 0) )
  {
    v2 = CVisual::ValidateVisual(this);
    v3 = v2;
    if ( v2 < 0 )
    {
      v6 = 144LL;
    }
    else
    {
      if ( (*((_BYTE *)this + 88) & 4) == 0 )
        return 0LL;
      v2 = (*(__int64 (__fastcall **)(CText *))(*(_QWORD *)this + 200LL))(this);
      v3 = v2;
      if ( v2 >= 0 )
      {
        *((_DWORD *)this + 22) &= ~4u;
        return 0LL;
      }
      v6 = 148LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)(unsigned int)v2);
    v5 = 245LL;
    goto LABEL_11;
  }
  v5 = 243LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"clientcore\\windows\\dwm\\udwm\\text.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
