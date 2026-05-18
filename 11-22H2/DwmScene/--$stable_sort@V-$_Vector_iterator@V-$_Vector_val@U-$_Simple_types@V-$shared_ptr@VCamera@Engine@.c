/*
 * XREFs of ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@@std@@@std@@P6A_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@2@0@Z@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@@std@@@0@0P6A_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@0@1@Z@Z @ 0x180063AAC
 * Callers:
 *     ?RenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@5@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067B00 (-RenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEB.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??$_Get_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YA?AU?$pair@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@_J@0@_J@Z @ 0x18003A430 (--$_Get_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YA.c)
 *     ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@0P6A_NAEBV10@1@Z@Z @ 0x18003A764 (--$_Insertion_sort_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@s.c)
 *     ??$_Return_temporary_buffer@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x18003A9A4 (--$_Return_temporary_buffer@V-$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAXQEAV-$shared.c)
 *     ??$_Stable_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@0_J01P6A_NAEBV10@2@Z@Z @ 0x18003AA60 (--$_Stable_sort_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@.c)
 *     ??1?$_Optimistic_temporary_buffer@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18003B308 (--1-$_Optimistic_temporary_buffer@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@QEAA@XZ.c)
 *     _alloca_probe @ 0x1800E3880 (_alloca_probe.c)
 */

void __fastcall std::stable_sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Engine::Camera>>>>,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  char *v7; // r9
  void *v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-C8h]
  _QWORD v10[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v11; // [rsp+50h] [rbp-B0h] BYREF

  v4 = ((char *)a2 - (char *)a1) >> 4;
  if ( v4 <= 32 )
  {
    std::_Insertion_sort_unchecked<std::shared_ptr<Spectre::Engine::Component> *,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
      a1,
      a2,
      (__int64 (__fastcall *)(__int64 *, __int64 *))Spectre::Engine::CameraRenderPrioritySortPredicate);
    return;
  }
  v5 = v4 - v4 / 2;
  v6 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v5 != 0x7FFFFFFFFFFFFFFFLL )
    v6 = v4 - v4 / 2;
  if ( v5 <= 0x100 )
    goto LABEL_9;
  std::_Get_temporary_buffer<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>(&v8, v6);
  v5 = v9;
  if ( v9 <= 0x100 )
  {
    std::_Return_temporary_buffer<std::shared_ptr<Spectre::Engine::Component>>(v8);
    v5 = 256LL;
LABEL_9:
    v7 = &v11;
    goto LABEL_10;
  }
  v7 = (char *)v8;
LABEL_10:
  v10[0] = v7;
  v10[1] = v5;
  std::_Stable_sort_unchecked<std::shared_ptr<Spectre::Engine::Component> *,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
    a1,
    a2,
    v4,
    (__int64)v7,
    v5,
    (unsigned __int8 (__fastcall *)(__int64, __int64))Spectre::Engine::CameraRenderPrioritySortPredicate);
  std::_Optimistic_temporary_buffer<std::shared_ptr<Spectre::Engine::Camera>>::~_Optimistic_temporary_buffer<std::shared_ptr<Spectre::Engine::Camera>>((__int64)v10);
}
