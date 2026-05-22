/*
 * XREFs of ??$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K2@Z @ 0x180003FA4
 * Callers:
 *     NotifyInputSinkParented @ 0x1800038A0 (NotifyInputSinkParented.c)
 *     ??$emplace_back@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAAEAVNotificationData@@$$QEAW4NotificationType@@AEA_K1@Z @ 0x180080798 (--$emplace_back@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@VNotific.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800804A0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x1800804E8 (--$_Destroy_range@V-$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEA.c)
 *     ??$_Uninitialized_move@PEAVNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x180080704 (--$_Uninitialized_move@PEAVNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@YAPEAVN.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x180080E88 (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 */

char *__fastcall std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,unsigned __int64 &>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4,
        __int64 *a5)
{
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  char *v14; // rbx
  char *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  char *v21; // rdx
  _DWORD *v22; // [rsp+80h] [rbp+18h]
  _QWORD *v23; // [rsp+88h] [rbp+20h]

  v23 = a4;
  v22 = a3;
  v7 = (a2 - *a1) / 96;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 5);
  if ( v8 == 0x2AAAAAAAAAAAAAALL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 5);
  v11 = v10 >> 1;
  if ( v10 > 0x2AAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v13 = -64LL;
LABEL_17:
    v14 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v13);
    a4 = v23;
    a3 = v22;
    goto LABEL_9;
  }
  v12 = v8 + 1;
  if ( v11 + v10 >= v9 )
    v12 = v11 + v10;
  if ( v12 > 0x2AAAAAAAAAAAAAALL )
    std::_Throw_bad_array_new_length();
  v13 = 96 * v12;
  if ( 96 * v12 >= 0x1000 )
    goto LABEL_17;
  if ( v13 )
  {
    v14 = (char *)operator new(96 * v12);
    a4 = v23;
    a3 = v22;
  }
  else
  {
    v14 = 0LL;
  }
LABEL_9:
  v15 = &v14[96 * v7];
  v16 = *a5;
  v17 = *a4;
  *(_DWORD *)v15 = *a3;
  *((_QWORD *)v15 + 1) = v17;
  *((_QWORD *)v15 + 2) = 0LL;
  *((_QWORD *)v15 + 3) = v16;
  v18 = a1[1];
  v19 = *a1;
  if ( a2 == v18 )
  {
    if ( v19 != v18 )
    {
      v21 = v14 + 16;
      do
      {
        *((_DWORD *)v21 - 4) = *(_DWORD *)v19;
        *((_QWORD *)v21 - 1) = *(_QWORD *)(v19 + 8);
        *(_QWORD *)v21 = *(_QWORD *)(v19 + 16);
        *(_QWORD *)(v19 + 16) = 0LL;
        *((_QWORD *)v21 + 1) = *(_QWORD *)(v19 + 24);
        *((_OWORD *)v21 + 1) = *(_OWORD *)(v19 + 32);
        *((_OWORD *)v21 + 2) = *(_OWORD *)(v19 + 48);
        *((_OWORD *)v21 + 3) = *(_OWORD *)(v19 + 64);
        *((_OWORD *)v21 + 4) = *(_OWORD *)(v19 + 80);
        v21 += 96;
        v19 += 96LL;
      }
      while ( v19 != v18 );
    }
  }
  else
  {
    std::_Uninitialized_move<NotificationData *>(v19, a2, v14);
    std::_Uninitialized_move<NotificationData *>(a2, a1[1], v15 + 96);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<NotificationData>>(*a1, a1[1]);
    std::_Deallocate<16,0>(*a1, 32 * ((__int64)(a1[2] - *a1) >> 5));
  }
  *a1 = v14;
  a1[1] = &v14[96 * v9];
  a1[2] = &v14[v13];
  return &v14[96 * v7];
}
