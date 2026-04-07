/*
 * XREFs of ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180019AC0
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180018690 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800198F0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001C720 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18005EC80 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x18009BA00 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x1800B32B0 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800BE8B0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x1800D0920 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x1800E91B0 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x18005F104 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::ValidateVisual(CRenderDataVisual *this)
{
  int v1; // eax
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v6; // edi
  int v8; // eax
  int v9; // eax
  int updated; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 2) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(CRenderDataVisual *, _QWORD))(*(_QWORD *)this + 88LL))(this, 0LL);
    v4 = v3;
    if ( v3 < 0 )
    {
      v11 = (unsigned int)v3;
      v12 = 129LL;
      goto LABEL_25;
    }
    *((_DWORD *)this + 22) &= ~2u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 8) != 0 )
  {
    v8 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 176LL))(this);
    v4 = v8;
    if ( v8 < 0 )
    {
      v11 = (unsigned int)v8;
      v12 = 136LL;
      goto LABEL_25;
    }
    *((_DWORD *)this + 22) &= ~8u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x10) != 0 )
  {
    updated = CVisual::UpdateTransform(this);
    v4 = updated;
    if ( updated < 0 )
    {
      v11 = (unsigned int)updated;
      v12 = 143LL;
      goto LABEL_25;
    }
    *((_DWORD *)this + 22) &= ~0x10u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x20) != 0 )
  {
    v13 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 160LL))(this);
    v4 = v13;
    if ( v13 < 0 )
    {
      v11 = (unsigned int)v13;
      v12 = 150LL;
      goto LABEL_25;
    }
    *((_DWORD *)this + 22) &= ~0x20u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x40) != 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                           + 408LL))(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
           *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
           (char *)this + 204);
    v4 = v9;
    if ( v9 >= 0 )
    {
      *((_DWORD *)this + 22) &= ~0x40u;
      goto LABEL_8;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x3C3u);
    v11 = v4;
    v12 = 157LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
      (const char *)v11);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)v4);
    return v4;
  }
LABEL_8:
  if ( (*((_BYTE *)this + 88) & 4) == 0 )
    return 0LL;
  v5 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 200LL))(this);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_DWORD *)this + 22) &= ~4u;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x94,
    (int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
