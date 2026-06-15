/*
 * XREFs of AudioDGPublishApoTelemetry @ 0x14002E1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishApoTelemetry@@YAJPEBG@Z @ 0x140008CF0 (-PublishApoTelemetry@@YAJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AudioDGPublishApoTelemetry(__int64 a1, const unsigned __int16 *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = PublishApoTelemetry(a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE3,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\rpc.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
