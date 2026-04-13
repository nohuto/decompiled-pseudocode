/*
 * XREFs of TelIsTelemetryTypeAllowed @ 0x180001410
 * Callers:
 *     <none>
 * Callees:
 *     TelGetAllAllowedTelemetryTypes @ 0x180001480 (TelGetAllAllowedTelemetryTypes.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003EA4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TelIsTelemetryTypeAllowed(int a1)
{
  unsigned int v2; // ebx
  int AllAllowedTelemetryTypes; // eax
  unsigned int v4; // r8d
  unsigned int v5; // edi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v9 = 0;
  AllAllowedTelemetryTypes = TelGetAllAllowedTelemetryTypes(&v9);
  v5 = AllAllowedTelemetryTypes;
  if ( AllAllowedTelemetryTypes < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      v4,
      (const char *)(unsigned int)AllAllowedTelemetryTypes,
      v7);
    return v5;
  }
  else
  {
    LOBYTE(v2) = (a1 & v9) != a1;
  }
  return v2;
}
