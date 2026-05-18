/*
 * XREFs of ??0SceneNode@Engine@Spectre@@AEAA@V?$shared_ptr@VScene@Engine@Spectre@@@std@@_K@Z @ 0x18003B028
 * Callers:
 *     ?CreateNodeInternal@Scene@Engine@Spectre@@AEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@AEB_K@Z @ 0x180040B38 (-CreateNodeInternal@Scene@Engine@Spectre@@AEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@A.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?NotifyTransformChanged@SceneNode@Engine@Spectre@@AEAAXXZ @ 0x180012728 (-NotifyTransformChanged@SceneNode@Engine@Spectre@@AEAAXXZ.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??0?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@QEAA@XZ @ 0x180030E4C (--0-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V12@U-$less@_ea_180030E4C.c)
 *     ?SetAttribute@SceneNode@Engine@Spectre@@QEAAXW4ESceneAttribute@23@_N@Z @ 0x18003D348 (-SetAttribute@SceneNode@Engine@Spectre@@QEAAXW4ESceneAttribute@23@_N@Z.c)
 *     ?TryAttachToScene@SceneNode@Engine@Spectre@@AEAAXXZ @ 0x18003DF88 (-TryAttachToScene@SceneNode@Engine@Spectre@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=22
Spectre::Engine::SceneNode *__fastcall Spectre::Engine::SceneNode::SceneNode(
        Spectre::Engine::SceneNode *this,
        _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  std::_Ref_count_base *v9; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &Spectre::Engine::SceneNode::`vftable';
  *((_QWORD *)this + 3) = *(_QWORD *)(*a2 + 104LL);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>((_QWORD *)this + 9, a2);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_BYTE *)this + 104) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 1065353216;
  *((_DWORD *)this + 43) = 1065353216;
  *((_DWORD *)this + 44) = 1065353216;
  *((_DWORD *)this + 45) = 1065353216;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 28) = 1065353216LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *(_QWORD *)((char *)this + 244) = 1065353216LL;
  *(_QWORD *)((char *)this + 252) = 0LL;
  *((_DWORD *)this + 65) = 0;
  *((_QWORD *)this + 33) = 1065353216LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 1065353216;
  *((_QWORD *)this + 36) = 1065353216LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *(_QWORD *)((char *)this + 308) = 1065353216LL;
  *(_QWORD *)((char *)this + 316) = 0LL;
  *((_DWORD *)this + 81) = 0;
  *((_QWORD *)this + 41) = 1065353216LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 87) = 1065353216;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = v4;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 15LL;
  *((_BYTE *)this + 400) = 0;
  std::map<std::string,std::string>::map<std::string,std::string>((_QWORD *)this + 54);
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  Spectre::Engine::SceneNode::NotifyTransformChanged(this);
  LOBYTE(v5) = 1;
  Spectre::Engine::SceneNode::SetAttribute(this, 0LL, v5);
  LOBYTE(v6) = 1;
  Spectre::Engine::SceneNode::SetAttribute(this, 1LL, v6);
  LOBYTE(v7) = 1;
  Spectre::Engine::SceneNode::SetAttribute(this, 2LL, v7);
  LOBYTE(v8) = 1;
  Spectre::Engine::SceneNode::SetAttribute(this, 16LL, v8);
  Spectre::Engine::SceneNode::TryAttachToScene(this);
  v9 = (std::_Ref_count_base *)a2[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return this;
}
