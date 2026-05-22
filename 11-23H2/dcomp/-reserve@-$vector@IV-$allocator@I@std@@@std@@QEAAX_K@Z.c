/*
 * XREFs of ?reserve@?$vector@IV?$allocator@I@std@@@std@@QEAAX_K@Z @ 0x180033F34
 * Callers:
 *     ?RebuildInternal@CompositionGradientBrush@Composition@UI@Windows@@UEAAJXZ @ 0x180033C30 (-RebuildInternal@CompositionGradientBrush@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?RebuildInternal@ShapeVisual@Composition@UI@Windows@@UEAAJXZ @ 0x180033D40 (-RebuildInternal@ShapeVisual@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?RebuildInternal@CompositionContainerShape@Composition@UI@Windows@@UEAAJXZ @ 0x180033E30 (-RebuildInternal@CompositionContainerShape@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?RebuildInternal@AnimationController@Composition@UI@Windows@@UEAAJXZ @ 0x180034290 (-RebuildInternal@AnimationController@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?UpdateChildren@?$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Composition@UI@Windows@@QEAAJXZ @ 0x1801445F4 (-UpdateChildren@-$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Compos.c)
 *     ?UpdateComponents@?$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Composition@UI@Windows@@QEAAJXZ @ 0x1801446EC (-UpdateComponents@-$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Comp.c)
 *     ?GenerateAnimators@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAJXZ @ 0x180186C5C (-GenerateAnimators@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@DebugPropertyRegistration@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVDebugReference@Private@234@V?$span@$$CBI$0?0@gsl@@@Z @ 0x18019FBE0 (-RuntimeClassInitialize@DebugPropertyRegistration@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall std::vector<unsigned int>::reserve(char *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  SIZE_T v4; // rsi
  __int64 v5; // rbp
  HANDLE ProcessHeap; // rax
  _QWORD *v7; // rbx
  void *v8; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 2;
  if ( a2 <= result )
    return result;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v4 = 4 * a2;
  v5 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 2;
  if ( 4 * a2 >= 0x1000 )
  {
    if ( v4 + 39 < v4 )
      std::_Throw_bad_array_new_length();
    v8 = operator new(v4 + 39);
    if ( v8 )
    {
      v7 = (_QWORD *)(((unsigned __int64)v8 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v7 - 1) = v8;
      goto LABEL_6;
    }
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
    goto LABEL_17;
  }
  if ( !v4 )
  {
    v7 = 0LL;
    goto LABEL_6;
  }
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, v4);
  if ( !v7 )
LABEL_17:
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
LABEL_6:
  memmove_0(v7, *(const void **)a1, *((_QWORD *)a1 + 1) - *(_QWORD *)a1);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(_QWORD *)a1, (*((_QWORD *)a1 + 2) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFFCuLL);
  *(_QWORD *)a1 = v7;
  *((_QWORD *)a1 + 1) = (char *)v7 + 4 * v5;
  result = (unsigned __int64)v7 + v4;
  *((_QWORD *)a1 + 2) = (char *)v7 + v4;
  return result;
}
