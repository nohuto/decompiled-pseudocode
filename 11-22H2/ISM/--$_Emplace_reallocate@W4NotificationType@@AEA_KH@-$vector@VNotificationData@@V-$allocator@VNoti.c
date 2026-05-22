/*
 * XREFs of ??$_Emplace_reallocate@W4NotificationType@@AEA_KH@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K$$QEAH@Z @ 0x1800AA04C
 * Callers:
 *     ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x1800AA484 (-InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0GA@@std@@YA_K_K@Z @ 0x180052EEC (--$_Get_size_of_n@$0GA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x1800606E4 (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ??$_Uninitialized_move@PEAVNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x1800AA1FC (--$_Uninitialized_move@PEAVNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@YAPEAVN.c)
 *     ?_Calculate_growth@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEBA_K_K@Z @ 0x1800AA574 (-_Calculate_growth@-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@AEBA_.c)
 *     ?_Change_array@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAXQEAVNotificationData@@_K1@Z @ 0x1800AA5BC (-_Change_array@-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@AEAAXQEAV.c)
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
  unsigned __int64 v10; // r15
  size_t size_of; // rax
  char *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rbx
  char *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  char *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char *result; // rax
  unsigned __int64 v24; // [rsp+20h] [rbp-48h]
  __int64 v25; // [rsp+20h] [rbp-48h]
  void *v26; // [rsp+28h] [rbp-40h]
  __int64 v27; // [rsp+70h] [rbp+8h]

  v7 = (a2 - *a1) / 96;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 5);
  if ( v8 == 0x2AAAAAAAAAAAAAALL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
  v9 = v8 + 1;
  v10 = std::vector<NotificationData>::_Calculate_growth(a1, v8 + 1);
  v24 = v10;
  size_of = std::_Get_size_of_n<96>(v10);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (__int64)v12;
  v26 = v12;
  v15 = &v12[96 * v7];
  try
  {
    v16 = *a5;
    v17 = *a4;
    *(_DWORD *)v15 = *a3;
    *((_QWORD *)v15 + 1) = v17;
    *((_QWORD *)v15 + 2) = 0LL;
    *((_QWORD *)v15 + 3) = v16;
    v27 = (__int64)v15;
    v18 = a1[1];
    v19 = v12;
    v20 = *a1;
    if ( a2 != v18 )
    {
      std::_Uninitialized_move<NotificationData *>(v20, a2, v12, v13, v10);
      v27 = v14;
      v19 = v15 + 96;
      v18 = a1[1];
      v20 = a2;
    }
    std::_Uninitialized_move<NotificationData *>(v20, v18, v19, v13, v24);
    std::vector<NotificationData>::_Change_array(a1, v14, v9, v10);
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<NotificationData>>(v27, (__int64)(v15 + 96), v21, v22);
    std::_Deallocate<16,0>(v26, 96 * v25);
    throw;
  }
  return result;
}
