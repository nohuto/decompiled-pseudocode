/*
 * XREFs of ?RebuildInternal@SceneNode@Scenes@Composition@UI@Windows@@UEAAJXZ @ 0x180143C90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateChildren@?$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Composition@UI@Windows@@QEAAJXZ @ 0x1801445F4 (-UpdateChildren@-$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Compos.c)
 *     ?UpdateComponents@?$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Composition@UI@Windows@@QEAAJXZ @ 0x1801446EC (-UpdateComponents@-$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Comp.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneNode::RebuildInternal(
        Windows::UI::Composition::Scenes::SceneNode *this)
{
  char *v1; // rsi
  int updated; // edi
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this - 176;
  if ( *((_BYTE *)this + 48) )
  {
    updated = Windows::UI::Composition::Scenes::SceneNodeGeneratedT<Windows::UI::Composition::Scenes::SceneObject>::UpdateChildren((char *)this - 176);
    if ( updated < 0 )
    {
      v4 = 178LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialnode.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    *((_BYTE *)this + 48) = 0;
  }
  if ( *((_BYTE *)this + 49) )
  {
    updated = Windows::UI::Composition::Scenes::SceneNodeGeneratedT<Windows::UI::Composition::Scenes::SceneObject>::UpdateComponents(v1);
    if ( updated < 0 )
    {
      v4 = 184LL;
      goto LABEL_4;
    }
    *((_BYTE *)this + 49) = 0;
  }
  *((_BYTE *)this + 16) &= ~1u;
  return 0LL;
}
