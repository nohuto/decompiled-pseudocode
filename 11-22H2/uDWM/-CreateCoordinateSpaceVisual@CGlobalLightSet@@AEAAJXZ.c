/*
 * XREFs of ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180040320
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18003F6F8 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180017304 (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180037EFC (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ @ 0x1800403DC (-InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ.c)
 *     ?Create@CDCompositionInteropVisual@@SAJPEAPEAV1@@Z @ 0x1800418B4 (-Create@CDCompositionInteropVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800541A4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalLightSet::CreateCoordinateSpaceVisual(CGlobalLightSet *this)
{
  struct CDCompositionInteropVisual **v1; // rdi
  CBaseObject *v3; // rcx
  int v4; // esi
  int inserted; // edi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (struct CDCompositionInteropVisual **)((char *)this + 96);
  v3 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    *v1 = 0LL;
    CBaseObject::Release(v3);
  }
  v4 = CDCompositionInteropVisual::Create(v1);
  if ( v4 < 0 )
  {
    v9 = 358LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v4,
      v11);
    return (unsigned int)v4;
  }
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((char *)this + 104);
  v4 = CVisual::Create((struct CVisual **)this + 13);
  if ( v4 < 0 )
  {
    v9 = 361LL;
    goto LABEL_11;
  }
  inserted = VisualCollection::InsertRelative(
               (struct CDCompositionInteropVisual *)((char *)*v1 + 32),
               *((_QWORD *)this + 13),
               0LL,
               0,
               v11);
  if ( inserted < 0 )
  {
    v10 = 364LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)inserted,
      v12);
    return (unsigned int)inserted;
  }
  inserted = CGlobalLightSet::PositionCoordinateSpaceVisual(this);
  if ( inserted < 0 )
  {
    v10 = 367LL;
    goto LABEL_14;
  }
  v6 = CGlobalLightSet::InsertInteropVisualIntoTree(this);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x172,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
    (const char *)(unsigned int)v6,
    v12);
  return v7;
}
