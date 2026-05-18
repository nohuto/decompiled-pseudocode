/*
 * XREFs of ?GetSceneNodes@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEBA?AV?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@PEAVSceneNode@23@AEBVCamera@23@@Z @ 0x180095840
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy@?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@AEAAXXZ @ 0x18002A47C (-_Tidy@-$vector@U-$pair@PEBVMutex@Engine@Spectre@@_N@std@@V-$allocator@U-$pair@PEBVMutex@Engine@.c)
 *     ?GetWorldPosition@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@XZ @ 0x18003C334 (-GetWorldPosition@SceneNode@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@XZ.c)
 *     ?GetSceneNode@Component@Engine@Spectre@@QEBA?AV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@XZ @ 0x18004328C (-GetSceneNode@Component@Engine@Spectre@@QEBA-AV-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ??$_Emplace_reallocate@AEBQEAVSceneNode@Engine@Spectre@@@?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@QEAAPEAPEAVSceneNode@Engine@Spectre@@QEAPEAV234@AEBQEAV234@@Z @ 0x180070BAC (--$_Emplace_reallocate@AEBQEAVSceneNode@Engine@Spectre@@@-$vector@PEAVSceneNode@Engine@Spectre@@.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@std@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@2@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@0@0U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095500 (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UNodeInfo@DistanceFromCameraS.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@std@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@2@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@0@0U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800955CC (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UNodeInfo@Distan_ea_1800955CC.c)
 *     ?Traverse@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBAXAEBVCamera@23@UVector3@Math@Utils@3@AEAV?$vector@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@V?$allocator@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@PEAVSceneNode@23@@Z @ 0x1800959E0 (-Traverse@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBAXAEBVCamera@23@UVector3@Math@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall Spectre::Engine::DistanceFromCameraSceneNodeTraversal::GetSceneNodes(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r14d
  _QWORD *v8; // rdi
  Spectre::Engine::SceneNode **SceneNode; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rsi
  _QWORD *v13; // rax
  __int64 v14; // r8
  char v15; // [rsp+30h] [rbp-99h]
  __int128 v16; // [rsp+38h] [rbp-91h] BYREF
  __int64 v17; // [rsp+48h] [rbp-81h]
  __int64 v18; // [rsp+50h] [rbp-79h] BYREF
  int v19; // [rsp+58h] [rbp-71h]
  __int64 v20; // [rsp+60h] [rbp-69h] BYREF
  std::_Ref_count_base *v21; // [rsp+68h] [rbp-61h]
  __int64 *v22; // [rsp+80h] [rbp-49h]
  _QWORD v23[4]; // [rsp+88h] [rbp-41h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-21h] BYREF

  v4 = a4;
  v22 = a2;
  v8 = 0LL;
  SceneNode = (Spectre::Engine::SceneNode **)Spectre::Engine::Component::GetSceneNode(a4, &v20);
  Spectre::Engine::SceneNode::GetWorldPosition(*SceneNode, (__int64)&v18);
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  v16 = 0LL;
  v17 = 0LL;
  v20 = v18;
  LODWORD(v21) = v19;
  Spectre::Engine::DistanceFromCameraSceneNodeTraversal::Traverse(a1, v4, (unsigned int)&v20, (unsigned int)&v16, a3);
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 8) != 1 )
    {
      std::string::string(v23, (__int64)"Unsupported sorting order");
      v13 = std::string::string(
              &v20,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\eng"
                       "ine\\distancefromcamerascenenodetraversal.cpp");
      Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v13, v14, (const char *)v23, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    std::stable_sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>>,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
      (char *)v16,
      *((char **)&v16 + 1),
      v15);
  }
  else
  {
    std::stable_sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>>,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
      (char *)v16,
      *((char **)&v16 + 1),
      v15);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v10 = (_QWORD *)*((_QWORD *)&v16 + 1);
  if ( (_QWORD)v16 != *((_QWORD *)&v16 + 1) )
  {
    v11 = (_QWORD *)(v16 + 8);
    do
    {
      if ( v8 == (_QWORD *)a2[2] )
      {
        std::vector<Spectre::Engine::SceneNode *>::_Emplace_reallocate<Spectre::Engine::SceneNode * const &>(
          a2,
          (__int64)v8,
          v11);
      }
      else
      {
        *v8 = *v11;
        a2[1] += 8LL;
      }
      v8 = (_QWORD *)a2[1];
      v11 += 2;
    }
    while ( v11 - 1 != v10 );
  }
  std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::_Tidy((__int64)&v16);
  return a2;
}
