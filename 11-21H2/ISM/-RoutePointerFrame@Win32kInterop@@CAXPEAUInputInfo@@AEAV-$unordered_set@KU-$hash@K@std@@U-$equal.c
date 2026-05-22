/*
 * XREFs of ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAXH@Z @ 0x1800E1C10
 * Callers:
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUIInputTarget@@H@Z @ 0x1800DF580 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18004957C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180086FA0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@@Z @ 0x1800E1D44 (-SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV-$unordered_set@KU-$hash@K@std@@.c)
 *     ?RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1800E3A64 (-RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::RoutePointerFrame(__int64 a1, __int64 a2, void *a3, int a4)
{
  __int64 v7; // rsi
  unsigned int *v8; // r14
  size_t size_of; // rax
  unsigned int *v10; // rbp
  unsigned int *v11; // rdi
  __int64 v12; // rdx
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  unsigned int *v14; // [rsp+40h] [rbp-28h]

  if ( *(_QWORD *)(a2 + 16) )
    Win32kInterop::SendCancelNotificationToGestureTargeting(a2, a1);
  v7 = *(unsigned int *)(a1 + 316);
  v13 = 0LL;
  v14 = 0LL;
  v8 = 0LL;
  if ( v7 )
  {
    size_of = std::_Get_size_of_n<4>((unsigned int)v7);
    v8 = (unsigned int *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v10 = v8;
    *(_QWORD *)&v13 = v8;
    v11 = &v8[v7];
    v14 = v11;
    memset_0(v8, 0, 4 * v7);
    *((_QWORD *)&v13 + 1) = v11;
    LODWORD(v7) = *(_DWORD *)(a1 + 316);
  }
  else
  {
    v11 = (unsigned int *)*((_QWORD *)&v13 + 1);
    v10 = (unsigned int *)v13;
  }
  v12 = 0LL;
  if ( (_DWORD)v7 )
  {
    do
    {
      v8[v12] = *(_DWORD *)(a1 + 144 * v12 + 324);
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < *(_DWORD *)(a1 + 316) );
  }
  PointerInputMediator::RoutePointer(
    *(_DWORD *)(a1 + 328),
    a3,
    v11 - v10,
    v10,
    (const struct tagTELEMETRY_POINTER_FRAME_TIMES *)(a1 + 88),
    a4 != 0);
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v13);
}
