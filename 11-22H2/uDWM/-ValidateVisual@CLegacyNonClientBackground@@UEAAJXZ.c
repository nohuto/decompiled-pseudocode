/*
 * XREFs of ?ValidateVisual@CLegacyNonClientBackground@@UEAAJXZ @ 0x18001C040
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001BEDC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18001C1C0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009EDE0 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLegacyNonClientBackground::ValidateVisual(CLegacyNonClientBackground *this)
{
  struct CBaseLegacyMilBrushProxy *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  CBaseObject *v5; // rbx
  int v6; // eax
  unsigned int v7; // esi
  int v8; // eax
  struct CBaseGeometryProxy *v10; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v15; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 70) || !*((_QWORD *)this + 37) || !*((_QWORD *)this + 39) )
    goto LABEL_9;
  v2 = (struct CBaseLegacyMilBrushProxy *)*((_QWORD *)this + 38);
  if ( !v2 || (v10 = (struct CBaseGeometryProxy *)*((_QWORD *)this + 40)) == 0LL )
  {
LABEL_5:
    v15 = 0LL;
    v3 = CDrawGeometryInstruction::Create(
           *((struct CBaseLegacyMilBrushProxy **)this + 37),
           *((struct CBaseGeometryProxy **)this + 39),
           &v15);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
        (const char *)(unsigned int)v3,
        v13);
      goto LABEL_15;
    }
    v5 = v15;
    v6 = CRenderDataVisual::AddInstruction(this, v15);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
        (const char *)(unsigned int)v6,
        v13);
      goto LABEL_21;
    }
    if ( v5 )
      CBaseObject::Release(v5);
LABEL_9:
    v8 = CRenderDataVisual::ValidateVisual(this);
    v4 = v8;
    if ( v8 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
      (const char *)(unsigned int)v8,
      v13);
    return v4;
  }
  v15 = 0LL;
  v11 = CDrawGeometryInstruction::Create(v2, v10, &v15);
  v4 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
      (const char *)(unsigned int)v11,
      v13);
LABEL_15:
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v15);
    return v4;
  }
  v5 = v15;
  v12 = CRenderDataVisual::AddInstruction(this, v15);
  v7 = v12;
  if ( v12 >= 0 )
  {
    if ( v5 )
      CBaseObject::Release(v5);
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
    (const char *)(unsigned int)v12,
    v13);
LABEL_21:
  if ( v5 )
    CBaseObject::Release(v5);
  return v7;
}
