/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x1801214A8
 * Callers:
 *     ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x180095EF0 (-RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIView.c)
 *     ?RegisterForViewEventsWithOptions@UwpWindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1803F0790 (-RegisterForViewEventsWithOptions@UwpWindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIV.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18012166C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@YAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1803D4CEC (--$_Uninitialized_move@PEAV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  _QWORD *v12; // r15
  _QWORD *v13; // r13
  _QWORD *v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // rbx
  _QWORD *v20; // r12
  std::_Ref_count_base *v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v24; // [rsp+70h] [rbp+8h] BYREF
  void *v25; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v26; // [rsp+80h] [rbp+18h]
  _QWORD *v27; // [rsp+88h] [rbp+20h]

  v26 = a3;
  v5 = (__int64)a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 4;
  v7 = 0xFFFFFFFFFFFFFFFLL;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  v25 = (void *)v7;
  size_of = std::_Get_size_of_n<16>(v7);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (_QWORD *)((char *)v12 + (v5 & 0xFFFFFFFFFFFFFFF0uLL));
  v27 = v13 + 2;
  *v13 = 0LL;
  v13[1] = 0LL;
  v14 = v26;
  v15 = v26[1];
  if ( v15 )
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  *v13 = *v14;
  v13[1] = v14[1];
  v24 = (unsigned __int64)v12 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  if ( a2 == v16 )
  {
    v18 = v12;
    while ( v17 != v16 )
    {
      *v18 = 0LL;
      v18[1] = 0LL;
      *v18 = *v17;
      v18[1] = v17[1];
      *v17 = 0LL;
      v17[1] = 0LL;
      v18 += 2;
      v17 += 2;
    }
  }
  else
  {
    std::_Uninitialized_move<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *,std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
      v17,
      a2,
      v12);
    v24 = (unsigned __int64)v12;
    std::_Uninitialized_move<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *,std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
      a2,
      a1[1],
      v13 + 2);
  }
  v19 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v20 = (_QWORD *)a1[1];
    if ( v19 != v20 )
    {
      do
      {
        v21 = (std::_Ref_count_base *)v19[1];
        if ( v21 )
          std::_Ref_count_base::_Decref(v21);
        v19 += 2;
      }
      while ( v19 != v20 );
      v19 = (_QWORD *)*a1;
    }
    v22 = (a1[2] - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF0uLL;
    v24 = v22;
    v25 = v19;
    if ( v22 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v25, &v24);
      v22 = v24;
      v19 = v25;
    }
    operator delete(v19, v22);
  }
  *a1 = v12;
  a1[1] = &v12[2 * v8];
  a1[2] = &v12[2 * v7];
  return v13;
}
