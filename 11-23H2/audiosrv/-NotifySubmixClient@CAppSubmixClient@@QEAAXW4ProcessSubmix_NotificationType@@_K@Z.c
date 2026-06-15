/*
 * XREFs of ?NotifySubmixClient@CAppSubmixClient@@QEAAXW4ProcessSubmix_NotificationType@@_K@Z @ 0x1800D27DC
 * Callers:
 *     _lambda_6986283b23e7ccfa9503732e20a157f7_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__ @ 0x1800CFC60 (_lambda_6986283b23e7ccfa9503732e20a157f7_--operator()_std--unique_ptr_CAppSubmixClient_std--defa.c)
 *     _lambda_9e50bad3d9823df72fe7d61e0b3663f5_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__ @ 0x1800CFDCC (_lambda_9e50bad3d9823df72fe7d61e0b3663f5_--operator()_std--unique_ptr_CAppSubmixClient_std--defa.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAppSubmixClient::NotifySubmixClient(__int64 *a1, int a2, __int64 a3)
{
  DWORD CurrentProcessId; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  int MediaEvent; // eax
  int v10[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+30h] [rbp-48h]
  int v13; // [rsp+38h] [rbp-40h]
  int v14; // [rsp+3Ch] [rbp-3Ch]
  __int64 v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v12 = 0LL;
  v14 = 0;
  v10[0] = 48;
  v10[1] = 0x40000;
  CurrentProcessId = GetCurrentProcessId();
  v7 = *a1;
  v11 = CurrentProcessId;
  v16 = a1[2];
  v13 = a2;
  v15 = a3;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
  MediaEvent = GenerateMediaEvent(v10, v8);
  if ( MediaEvent < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x317,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)MediaEvent);
}
