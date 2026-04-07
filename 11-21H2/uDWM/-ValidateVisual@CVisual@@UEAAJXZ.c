/*
 * XREFs of ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180029D90
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x180028AC0 (-ValidateVisual@CImage@@UEAAJXZ.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x180028BA0 (-ValidateVisual@CText@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029A50 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800C26E0 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x18005F104 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ValidateVisual(CVisual *this)
{
  int v1; // eax
  int v3; // eax
  unsigned int v4; // edi
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // edi
  int updated; // eax
  unsigned int v13; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 2) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(CVisual *, _QWORD))(*(_QWORD *)this + 88LL))(this, 0LL);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
    *((_DWORD *)this + 22) &= ~2u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 8) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 176LL))(this);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x88,
        (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    *((_DWORD *)this + 22) &= ~8u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x10) != 0 )
  {
    updated = CVisual::UpdateTransform(this);
    v13 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8F,
        (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)updated);
      return v13;
    }
    *((_DWORD *)this + 22) &= ~0x10u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x20) != 0 )
  {
    v8 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 160LL))(this);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    *((_DWORD *)this + 22) &= ~0x20u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x40) == 0 )
    return 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 16LL)
                                                          + 408LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
          (char *)this + 204);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *((_DWORD *)this + 22) &= ~0x40u;
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x3C3u);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9D,
    (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)v11);
  return v11;
}
