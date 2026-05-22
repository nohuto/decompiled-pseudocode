/*
 * XREFs of ??$_Emplace_reallocate@W4NotificationType@@AEA_KH@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K$$QEAH@Z @ 0x180080524
 * Callers:
 *     ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x18008099C (-InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0GA@@std@@YA_K_K@Z @ 0x1800806D4 (--$_Get_size_of_n@$0GA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAVNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x180080704 (--$_Uninitialized_move@PEAVNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@YAPEAVN.c)
 *     ?_Calculate_growth@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEBA_K_K@Z @ 0x180080A80 (-_Calculate_growth@-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@AEBA_.c)
 *     ?_Change_array@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAXQEAVNotificationData@@_K1@Z @ 0x180080AC8 (-_Change_array@-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@AEAAXQEAV.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x180080E88 (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 */

char *__fastcall std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,int>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4,
        int *a5)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // r15
  size_t size_of; // rax
  char *v12; // rax
  __int64 v13; // rbx
  char *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  char *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char *result; // rax
  void *v23; // [rsp+28h] [rbp-40h]
  __int64 v24; // [rsp+70h] [rbp+8h]

  v7 = (a2 - *a1) / 96;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 5);
  if ( v8 == 0x2AAAAAAAAAAAAAALL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength(0x2AAAAAAAAAAAAAALL);
  v9 = v8 + 1;
  v10 = std::vector<NotificationData>::_Calculate_growth(a1, v8 + 1);
  size_of = std::_Get_size_of_n<96>(v10);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (__int64)v12;
  v23 = v12;
  v14 = &v12[96 * v7];
  try
  {
    v15 = *a5;
    v16 = *a4;
    *(_DWORD *)v14 = *a3;
    *((_QWORD *)v14 + 1) = v16;
    *((_QWORD *)v14 + 2) = 0LL;
    *((_QWORD *)v14 + 3) = v15;
    v24 = (__int64)v14;
    v17 = a1[1];
    v18 = v12;
    v19 = *a1;
    if ( a2 != v17 )
    {
      std::_Uninitialized_move<NotificationData *>(v19, a2, v12);
      v24 = v13;
      v18 = v14 + 96;
      v17 = a1[1];
      v19 = a2;
    }
    std::_Uninitialized_move<NotificationData *>(v19, v17, v18);
    std::vector<NotificationData>::_Change_array(a1, v13, v9, v10);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<NotificationData>>(v24, (__int64)(v14 + 96), v20, v21);
    std::_Deallocate<16,0>(v23, 96 * v10);
    throw;
  }
  return result;
}
