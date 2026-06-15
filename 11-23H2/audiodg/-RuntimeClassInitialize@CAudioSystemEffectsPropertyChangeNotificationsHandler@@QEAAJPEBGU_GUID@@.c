/*
 * XREFs of ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@PEAUIMMDevice@@@Z @ 0x140073524
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@PEAGAEAU_GUID@@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@$$QEAPEAGAEAU_GUID@@AEAPEAUIMMDevice@@@Z @ 0x14006A65C (--$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@PEAGAEAU_GUID@@A.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1400383B2 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??4?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z @ 0x1400717AC (--4-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z.c)
 */

__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::RuntimeClassInitialize(
        CAudioSystemEffectsPropertyChangeNotificationsHandler *this,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        struct IMMDevice *a4)
{
  unsigned __int64 v7; // r8
  char *v8; // rcx
  const char *v9; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  v8 = (char *)this + 56;
  try
  {
    std::wstring::assign(v8, a2, v7);
    *(struct _GUID *)((char *)this + 40) = *a3;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::operator=((__int64 *)this + 11, (__int64)a4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1F,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
                           v9);
  }
  return result;
}
