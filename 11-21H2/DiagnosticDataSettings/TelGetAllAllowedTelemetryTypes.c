/*
 * XREFs of TelGetAllAllowedTelemetryTypes @ 0x180001480
 * Callers:
 *     TelIsTelemetryTypeAllowed @ 0x180001410 (TelIsTelemetryTypeAllowed.c)
 * Callees:
 *     TelEvaluateActiveSettingAuthority @ 0x180002500 (TelEvaluateActiveSettingAuthority.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003EA4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TelGetAllAllowedTelemetryTypes(_DWORD *a1, __int64 a2, unsigned int a3)
{
  int active; // eax
  unsigned int v6; // r8d
  unsigned int v7; // edi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  char v11; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    *a1 = 0;
    active = TelEvaluateActiveSettingAuthority(&v10, &v11);
    v7 = active;
    if ( active < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x113, v6, (const char *)(unsigned int)active, v8);
    }
    else
    {
      if ( v10 )
      {
        if ( v10 != 1 )
          *a1 |= 6u;
        *a1 |= 1u;
      }
      return 0;
    }
    return v7;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xF1, a3, (const char *)0x80070057LL, v8);
    return 2147942487LL;
  }
}
