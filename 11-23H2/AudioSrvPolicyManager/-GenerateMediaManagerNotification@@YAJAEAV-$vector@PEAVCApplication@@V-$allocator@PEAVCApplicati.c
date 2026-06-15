/*
 * XREFs of ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x1800353EC
 * Callers:
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x18003969C (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016D1C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180017648 (memset_0.c)
 *     ??1?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x180033F34 (--1-$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U-$default_delete@UMEDIAMANAGER_NOTIFICATION_B.c)
 *     ?GetNotificationDataSize@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEA_K@Z @ 0x180035544 (-GetNotificationDataSize@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@.c)
 *     ?SetNotificationData@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEAE_K@Z @ 0x180036F1C (-SetNotificationData@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GenerateMediaManagerNotification(__int64 a1, void **a2)
{
  unsigned int NotificationDataSize; // ebx
  __int64 v5; // rdx
  char *v6; // rsi
  char *v7; // rbx
  char *v8; // rax
  _DWORD *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  void *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v16; // [rsp+50h] [rbp+18h] BYREF

  v16 = 0LL;
  NotificationDataSize = GetNotificationDataSize(a1, &v16);
  if ( (NotificationDataSize & 0x80000000) != 0 )
  {
    v5 = 421LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)NotificationDataSize);
    return NotificationDataSize;
  }
  v6 = v16;
  v7 = v16 + 42;
  if ( (unsigned __int64)v16 >= 0xFFFFFFFFFFFFFFD6uLL )
  {
    NotificationDataSize = -2147024362;
    v5 = 425LL;
    goto LABEL_19;
  }
  v8 = (char *)operator new[]((SIZE_T)(v16 + 42), (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v16 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, (size_t)v7);
    *v9 = (_DWORD)v7;
    v9[1] = 0x10000;
    *((_QWORD *)v9 + 1) = 0LL;
    v9[6] = 0;
    if ( v6 )
    {
      v12 = SetNotificationData(a1, v9 + 8, v6);
      NotificationDataSize = v12;
      if ( v12 < 0 )
      {
        v10 = (unsigned int)v12;
        v11 = 441LL;
        goto LABEL_9;
      }
      if ( (unsigned __int64)v6 > 0xFFFFFFFF )
      {
        NotificationDataSize = -2147024362;
        v9[7] = -1;
        v10 = 2147942934LL;
        v11 = 443LL;
        goto LABEL_9;
      }
      v9[7] = (_DWORD)v6;
    }
    if ( a2 != (void **)&v16 )
    {
      v16 = 0LL;
      v13 = *a2;
      *a2 = v9;
      if ( v13 )
        operator delete(v13);
    }
    NotificationDataSize = 0;
    goto LABEL_16;
  }
  NotificationDataSize = -2147024882;
  v10 = 2147942414LL;
  v11 = 428LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)v10);
LABEL_16:
  std::unique_ptr<MEDIAMANAGER_NOTIFICATION_BLOCK>::~unique_ptr<MEDIAMANAGER_NOTIFICATION_BLOCK>((void **)&v16);
  return NotificationDataSize;
}
