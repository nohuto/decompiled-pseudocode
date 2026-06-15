/*
 * XREFs of ?GetNotificationDataSize@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEA_K@Z @ 0x18002C3E4
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x18002C224 (-GenerateMediaManagerNotification@@YAJAEAV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplicati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSmtcProcesses@CApplication@@QEAAJPEAV?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAI@Z @ 0x1800178D0 (-GetSmtcProcesses@CApplication@@QEAAJPEAV-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_.c)
 */

__int64 __fastcall GetNotificationDataSize(__int64 **a1, unsigned __int64 *a2, __int64 a3, const char *a4)
{
  __int64 *v5; // rdi
  __int64 *v6; // r14
  int SmtcProcesses; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
  _WORD *v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  unsigned __int64 v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v5 = *a1;
  v6 = a1[1];
  try
  {
    while ( v5 != v6 )
    {
      SmtcProcesses = CApplication::GetSmtcProcesses(*v5, 0LL, &v15);
      v8 = SmtcProcesses;
      if ( SmtcProcesses < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x150,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)SmtcProcesses);
        return v8;
      }
      v10 = *(_WORD **)(*v5 + 24);
      if ( !v10 )
      {
        v12 = -2147024809;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x155,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)v12);
        return v12;
      }
      v11 = 1024LL;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v11;
      }
      while ( v11 );
      v12 = v11 == 0 ? 0x80070057 : 0;
      if ( !v11 )
        goto LABEL_16;
      if ( !is_mul_ok(v15, ((2 * (1024 - v11)) & -(__int64)(v11 != 0)) + 14) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x162,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)0x80070216LL);
        return 2147942934LL;
      }
      v13 = *a2 + v15 * (((2 * (1024 - v11)) & -(__int64)(v11 != 0)) + 14);
      if ( v13 < *a2 )
      {
        *a2 = -1LL;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x164,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)0x80070216LL);
        return 2147942934LL;
      }
      *a2 = v13;
      ++v5;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x169,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                           a4);
  }
  return result;
}
