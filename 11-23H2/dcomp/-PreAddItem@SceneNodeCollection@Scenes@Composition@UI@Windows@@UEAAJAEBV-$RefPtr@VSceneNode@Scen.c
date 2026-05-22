/*
 * XREFs of ?PreAddItem@SceneNodeCollection@Scenes@Composition@UI@Windows@@UEAAJAEBV?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x1801926F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateRoot@SceneNode@Scenes@Composition@UI@Windows@@QEAAXPEAV12345@@Z @ 0x1801447E8 (-UpdateRoot@SceneNode@Scenes@Composition@UI@Windows@@QEAAXPEAV12345@@Z.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneNodeCollection::PreAddItem(
        __int64 a1,
        Windows::UI::Composition::Scenes::SceneNode **a2)
{
  Windows::UI::Composition::Scenes::SceneNode *v2; // rax
  __int64 v4; // rdx
  __int64 v6; // r9
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a2;
  if ( !*a2 )
  {
    Windows::UI::Composition::OriginateInvalidArgument(18, (__int64)L"value");
    v4 = 143LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialnodecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v6 = *((_QWORD *)v2 + 20);
  if ( *(_QWORD *)(v6 + 208) )
  {
    Windows::UI::Composition::OriginateInvalidArgument(24, (__int64)L"value");
    v4 = 148LL;
    goto LABEL_3;
  }
  v7 = *(_QWORD *)(a1 + 72);
  if ( v2 == *(Windows::UI::Composition::Scenes::SceneNode **)(v7 + 232) )
  {
    Windows::UI::Composition::OriginateInvalidArgument(25, (__int64)L"value");
    v4 = 153LL;
    goto LABEL_3;
  }
  *(_QWORD *)(v6 + 208) = v7;
  Windows::UI::Composition::Scenes::SceneNode::UpdateRoot(
    *a2,
    *(struct Windows::UI::Composition::Scenes::SceneNode **)(*(_QWORD *)(a1 + 72) + 232LL));
  return 0LL;
}
