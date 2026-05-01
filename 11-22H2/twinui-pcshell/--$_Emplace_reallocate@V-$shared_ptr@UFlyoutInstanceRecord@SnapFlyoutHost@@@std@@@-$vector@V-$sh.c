/*
 * XREFs of ??$_Emplace_reallocate@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@1@QEAV21@$$QEAV21@@Z @ 0x180678CE8
 * Callers:
 *     ?push_back@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@2@@Z @ 0x18067E468 (-push_back@-$vector@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator@V-$sh.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800C4228 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@YAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1803E23DC (--$_Uninitialized_move@PEAV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UGameMruItem@@@std@@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UGameMruItem@@@2@_K1@Z @ 0x1803E47D0 (-_Change_array@-$vector@V-$shared_ptr@UGameMruItem@@@std@@V-$allocator@V-$shared_ptr@UGameMruIte.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::_Emplace_reallocate<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>(
        _QWORD *a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // r14
  char *v16; // rdx
  _QWORD *v17; // r8
  char *v18; // rcx
  _QWORD *result; // rax
  void *v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+70h] [rbp+8h]

  v6 = (unsigned __int64)&a2[-*a1];
  v7 = (__int64)(a1[1] - *a1) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v8);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (__int64)v13;
  v20 = v13;
  v15 = (_QWORD *)((char *)v13 + (v6 & 0xFFFFFFFFFFFFFFF0uLL));
  try
  {
    *v15 = 0LL;
    v15[1] = 0LL;
    *v15 = *a3;
    v15[1] = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
    v21 = (__int64)v15;
    v16 = (char *)a1[1];
    v17 = v13;
    v18 = (char *)*a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *,std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
        v18,
        a2,
        v13);
      v21 = v14;
      v17 = v15 + 2;
      v16 = (char *)a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *,std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
      v18,
      v16,
      v17);
    std::vector<std::shared_ptr<GameMruItem>>::_Change_array((__int64)a1, v14, v9, v8);
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(v21, (__int64)(v15 + 2));
    std::_Deallocate<16,0>(v20, 16 * v8);
    throw;
  }
  return result;
}
