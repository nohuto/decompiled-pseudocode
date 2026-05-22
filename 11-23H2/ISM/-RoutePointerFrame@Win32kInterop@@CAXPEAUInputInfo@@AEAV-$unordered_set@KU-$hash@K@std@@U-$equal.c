/*
 * XREFs of ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAXH@Z @ 0x1800FB290
 * Callers:
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUIInputTarget@@H@Z @ 0x1800F9200 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18004E3C4 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180055588 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x18005B2A8 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 *     ?SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@@Z @ 0x1800FB3B4 (-SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV-$unordered_set@KU-$hash@K@std@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::RoutePointerFrame(__int64 a1, __int64 a2, void *a3, int a4)
{
  __int64 v7; // rdi
  unsigned int *v8; // rsi
  size_t size_of; // rax
  unsigned int *v10; // rbp
  size_t v11; // r8
  unsigned int *v12; // rdi
  __int64 i; // rdx
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  unsigned int *v15; // [rsp+40h] [rbp-28h]

  if ( *(_QWORD *)(a2 + 16) )
    Win32kInterop::SendCancelNotificationToGestureTargeting(a2, a1);
  v7 = *(unsigned int *)(a1 + 316);
  v14 = 0LL;
  v15 = 0LL;
  v8 = 0LL;
  if ( v7 )
  {
    size_of = std::_Get_size_of_n<4>((unsigned int)v7);
    v8 = (unsigned int *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v10 = v8;
    *(_QWORD *)&v14 = v8;
    v11 = 4 * v7;
    v12 = &v8[v7];
    v15 = v12;
    memset_0(v8, 0, v11);
    *((_QWORD *)&v14 + 1) = v12;
  }
  else
  {
    v12 = (unsigned int *)*((_QWORD *)&v14 + 1);
    v10 = (unsigned int *)v14;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 316); i = (unsigned int)(i + 1) )
    v8[i] = *(_DWORD *)(a1 + 144 * i + 324);
  PointerInputMediator::RoutePointers(
    *(_DWORD *)(a1 + 328),
    a3,
    v12 - v10,
    v10,
    (const struct tagTELEMETRY_POINTER_FRAME_TIMES *)(a1 + 88),
    a4 != 0);
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v14);
}
