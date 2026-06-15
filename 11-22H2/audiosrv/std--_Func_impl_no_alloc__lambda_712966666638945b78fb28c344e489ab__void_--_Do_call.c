/*
 * XREFs of std::_Func_impl_no_alloc__lambda_712966666638945b78fb28c344e489ab__void_::_Do_call @ 0x180073EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18004B210 (-s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_712966666638945b78fb28c344e489ab__void_::_Do_call(__int64 a1)
{
  const unsigned __int16 *v2; // rcx
  int v3; // eax
  struct _GUID v4; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(const unsigned __int16 **)(a1 + 8);
  if ( v2 )
    v2 = *(const unsigned __int16 **)v2;
  v4 = *(struct _GUID *)(a1 + 24);
  v3 = s_adPublishApoTelemetry(v2, &v4);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x529,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v3);
}
