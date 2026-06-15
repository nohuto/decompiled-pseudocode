/*
 * XREFs of std::_Func_impl_no_alloc__lambda_de1f872ead8a8125132289b4e8f8ff46__void_::_Do_call @ 0x18005DF90
 * Callers:
 *     <none>
 * Callees:
 *     ?s_adPublishApoTelemetry@@YAJPEBG@Z @ 0x180050A44 (-s_adPublishApoTelemetry@@YAJPEBG@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_de1f872ead8a8125132289b4e8f8ff46__void_::_Do_call(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  const unsigned __int16 *v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(const unsigned __int16 **)(a1 + 8);
  if ( v5 )
    v5 = *(const unsigned __int16 **)v5;
  v6 = s_adPublishApoTelemetry(v5);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x533,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v6,
      a5);
}
