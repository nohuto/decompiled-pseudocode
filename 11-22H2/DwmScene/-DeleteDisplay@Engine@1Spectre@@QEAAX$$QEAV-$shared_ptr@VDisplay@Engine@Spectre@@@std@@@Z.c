/*
 * XREFs of ?DeleteDisplay@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VDisplay@Engine@Spectre@@@std@@@Z @ 0x1800338B0
 * Callers:
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@0@0@Z @ 0x180015678 (--$-8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV-$shared_ptr@VTween@Tweening@Utils@Spect.c)
 *     ??1_List_node_remove_op@?$list@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x180031F9C (--1_List_node_remove_op@-$list@V-$shared_ptr@VDisplay@Engine@Spectre@@@std@@V-$allocator@V-$shar.c)
 */

void __fastcall Spectre::Engine::Engine::DeleteDisplay(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  std::_Ref_count_base *v3; // rbx
  _QWORD *v4; // r11
  _QWORD *v5; // r8
  __int64 *v6; // r8
  _QWORD *v7; // r9
  __int64 v8; // r10
  _QWORD *v9; // r11
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v15; // [rsp+40h] [rbp-18h]

  v2 = *a2;
  *a2 = 0LL;
  v14 = 0LL;
  v3 = (std::_Ref_count_base *)a2[1];
  a2[1] = 0LL;
  v12[0] = v2;
  v15 = &v14;
  v13 = a1 + 168;
  v12[1] = v3;
  v4 = *(_QWORD **)(a1 + 168);
  v5 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 != v4 )
  {
    do
    {
      if ( std::operator==<Spectre::Utils::Tweening::Tween,Spectre::Utils::Tweening::Tween>(v5 + 2, v12) )
      {
        --*(_QWORD *)(v8 + 8);
        v10 = *v6;
        *v6 = 0LL;
        v11 = (_QWORD *)v6[1];
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        *v15 = (__int64)v6;
        v15 = v6;
      }
      v5 = v7;
    }
    while ( v7 != v9 );
  }
  std::list<std::shared_ptr<Spectre::Engine::Display>>::_List_node_remove_op::~_List_node_remove_op((__int64)&v13);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
