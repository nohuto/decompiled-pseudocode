/*
 * XREFs of ?RuntimeClassInitialize@CAPOEndpointNotificationsHandler@@QEAAJPEBGPEAUIMMDevice@@@Z @ 0x14006A1F0
 * Callers:
 *     ??$MakeAndInitialize@VCAPOEndpointNotificationsHandler@@V1@AEAPEBGAEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEndpointNotificationsHandler@@AEAPEBGAEAPEAUIMMDevice@@@Z @ 0x14006416C (--$MakeAndInitialize@VCAPOEndpointNotificationsHandler@@V1@AEAPEBGAEAPEAUIMMDevice@@@Details@WRL.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x140026BB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??4?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z @ 0x14006953C (--4-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z.c)
 */

__int64 __fastcall CAPOEndpointNotificationsHandler::RuntimeClassInitialize(
        CAPOEndpointNotificationsHandler *this,
        const unsigned __int16 *a2,
        struct IMMDevice *a3)
{
  unsigned __int64 v5; // r8
  char *v6; // rcx
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v6 = (char *)this + 40;
  try
  {
    std::wstring::assign(v6, a2, v5);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::operator=((__int64 *)this + 9, (__int64)a3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x21,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
                           v7);
  }
  return result;
}
