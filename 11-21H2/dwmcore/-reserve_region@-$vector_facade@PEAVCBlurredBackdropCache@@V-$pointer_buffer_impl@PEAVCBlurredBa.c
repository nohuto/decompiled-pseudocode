/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x180058CF0
 * Callers:
 *     ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x180058ED0 (-RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEBA_KXZ @ 0x180058F70 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?last@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180058FA8 (-last@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180058FE0 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ?size@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEBA_KXZ @ 0x180059020 (-size@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEBA_KXZ.c)
 *     ?consume@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_J@Z @ 0x180059114 (-consume@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_J@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180111B30 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::reserve_region(
        _DWORD *a1,
        __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  __int64 v9; // rdi
  _QWORD *v10; // r14
  __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  unsigned int v19; // eax
  void *v20; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // r8
  __int128 v23; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24; // [rsp+30h] [rbp-30h]
  __int128 v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+28h]

  v4 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::size();
  if ( (*a1 & 3) != 0 )
  {
    if ( (*a1 & 3) == 1 )
    {
      v5 = *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) - 8);
      goto LABEL_5;
    }
    if ( (*a1 & 3) == 2 )
    {
      v5 = 0LL;
      goto LABEL_5;
    }
    if ( (*a1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v5 = 1LL;
LABEL_5:
  if ( v5 != v4 )
    goto LABEL_9;
  v6 = v4 + 1;
  if ( v4 + 1 < v4 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else if ( !v4 )
  {
    *(_QWORD *)a1 = 3LL;
    goto LABEL_9;
  }
  v16 = operator new(8 * v6 + 16);
  *((_QWORD *)&v23 + 1) = v4;
  v24 = 0LL;
  v17 = (unsigned __int64)(v16 + 2);
  *v16 = 0LL;
  *(_QWORD *)&v23 = v16 + 2;
  v16[1] = 0LL;
  v18 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
  v25 = v23;
  v26 = v24;
  ((void (__fastcall *)(__int128 *, __int64, unsigned __int64, __int128 *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
    &v23,
    v18,
    v18 + 8 * v4,
    &v25);
  v19 = *a1 & 3;
  if ( !v19 )
    goto LABEL_25;
  if ( v19 != 1 )
  {
    if ( v19 <= 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_25:
    v20 = 0LL;
    goto LABEL_26;
  }
  v20 = (void *)(detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) - 16);
LABEL_26:
  *(_QWORD *)a1 = v17 | 1;
  DefaultHeap::Free(v20);
  *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) - 16) = v4;
  *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) - 8) = v6;
LABEL_9:
  v7 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::size(a1);
  v8 = v7 - a2;
  v9 = v7;
  v10 = (_QWORD *)detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(a1);
  v11 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
  *((_QWORD *)&v23 + 1) = 1LL;
  v12 = v11 + 8 * v9;
  *(_QWORD *)&v23 = v12;
  if ( !v12 )
    goto LABEL_37;
  v24 = 1LL;
  v13 = 1LL;
  if ( v8 <= 1 )
    v13 = v8;
  v25 = v23;
  v12 = 8 * v13;
  v14 = (_QWORD *)((char *)v10 - v12);
  v26 = 1LL;
  if ( v10 != (_QWORD *)((char *)v10 - v12) )
  {
    v21 = v25;
    v12 = 1LL;
    v22 = v26;
    do
    {
      --v10;
      if ( !v21 )
        goto LABEL_37;
      if ( !v12 )
        goto LABEL_37;
      v12 = v22 - 1;
      v22 = v12;
      if ( v12 >= *((_QWORD *)&v25 + 1) )
        goto LABEL_37;
      *(_QWORD *)(v21 + 8 * v12) = *v10;
    }
    while ( v10 != v14 );
  }
  if ( v8 > 1 )
  {
    *(_QWORD *)&v25 = v11;
    *((_QWORD *)&v25 + 1) = v9;
    if ( !v9 || v11 && v9 >= 0 )
    {
      v26 = v9;
      v23 = v25;
      v24 = v9;
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
        &v25,
        v11 + 8 * a2,
        v11 + 8 * (v9 - 1),
        &v23);
      goto LABEL_14;
    }
LABEL_37:
    _o__invalid_parameter_noinfo_noreturn(v12);
    __debugbreak();
    JUMPOUT(0x180136403LL);
  }
LABEL_14:
  detail::pointer_buffer_impl<CBlurredBackdropCache *>::consume(a1, 1LL);
  return v11 + 8 * a2;
}
