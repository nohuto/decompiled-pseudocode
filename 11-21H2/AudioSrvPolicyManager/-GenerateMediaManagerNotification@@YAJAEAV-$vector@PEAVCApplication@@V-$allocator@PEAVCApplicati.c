/*
 * XREFs of ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x18002C224
 * Callers:
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x1800309A0 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002BBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800034E8 (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNotificationDataSize@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEA_K@Z @ 0x18002C3E4 (-GetNotificationDataSize@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@.c)
 *     ?SetNotificationData@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEAE_K@Z @ 0x18002D050 (-SetNotificationData@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GenerateMediaManagerNotification(__int64 a1, unsigned __int64 *a2)
{
  int NotificationDataSize; // eax
  unsigned int v5; // ebx
  unsigned __int64 v7; // rsi
  size_t v8; // rbp
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  void *v11; // rbx
  int v12; // eax
  unsigned int v13; // ebp
  void *v14; // rcx
  void *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = 0LL;
  NotificationDataSize = GetNotificationDataSize(a1, &v17);
  v5 = NotificationDataSize;
  if ( NotificationDataSize < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)NotificationDataSize);
    return v5;
  }
  v7 = v17;
  v8 = v17 + 42;
  if ( v17 >= 0xFFFFFFFFFFFFFFD6uLL )
  {
    v13 = -2147024362;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A5,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070216LL);
    return v13;
  }
  v9 = operator new[](v17 + 42, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v11 = v9;
  v17 = (unsigned __int64)v9;
  if ( !v9 )
  {
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A8,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x8007000ELL);
    return v5;
  }
  memset_0(v9, 0, v8);
  *v10 = v8;
  v10[1] = 0x10000;
  *((_QWORD *)v10 + 1) = 0LL;
  v10[6] = 0;
  if ( v7 )
  {
    v12 = SetNotificationData(a1, v10 + 8, v7);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B5,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v12);
      v14 = v10;
      goto LABEL_10;
    }
    if ( v7 > 0xFFFFFFFF )
    {
      v13 = -2147024362;
      v10[7] = -1;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B7,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x80070216LL);
      if ( !v11 )
        return v13;
      v14 = v11;
LABEL_10:
      operator delete(v14);
      return v13;
    }
    v10[7] = v7;
  }
  if ( a2 != &v17 )
  {
    v11 = 0LL;
    v15 = (void *)*a2;
    *a2 = (unsigned __int64)v10;
    v10 = 0LL;
    if ( v15 )
      operator delete(v15);
  }
  if ( v10 )
    operator delete(v11);
  return 0LL;
}
