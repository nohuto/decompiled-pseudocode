/*
 * XREFs of TelIsTelemetryTypeAllowed @ 0x1800015C0
 * Callers:
 *     <none>
 * Callees:
 *     TelGetAllAllowedTelemetryTypes @ 0x180001620 (TelGetAllAllowedTelemetryTypes.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004A4C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TelIsTelemetryTypeAllowed(int a1)
{
  int AllAllowedTelemetryTypes; // ebx
  unsigned int v3; // r8d
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  AllAllowedTelemetryTypes = TelGetAllAllowedTelemetryTypes(&v7);
  if ( AllAllowedTelemetryTypes >= 0 )
    AllAllowedTelemetryTypes = (a1 & v7) != a1;
  if ( AllAllowedTelemetryTypes < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE9,
      v3,
      (const char *)(unsigned int)AllAllowedTelemetryTypes,
      v5);
  return (unsigned int)AllAllowedTelemetryTypes;
}
