/*
 * XREFs of TelGetAllAllowedTelemetryTypes @ 0x180001620
 * Callers:
 *     TelIsTelemetryTypeAllowed @ 0x1800015C0 (TelIsTelemetryTypeAllowed.c)
 * Callees:
 *     TelEvaluateActiveSettingAuthority @ 0x1800028F0 (TelEvaluateActiveSettingAuthority.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004A4C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TelGetAllAllowedTelemetryTypes(_DWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int active; // eax
  unsigned int v7; // r8d
  unsigned int v8; // esi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+30h] [rbp+8h] BYREF
  char v12; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( a1 )
  {
    *a1 = 0;
    active = TelEvaluateActiveSettingAuthority(&v11, &v12);
    v8 = active;
    if ( active < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x11D, v7, (const char *)(unsigned int)active, v9);
      return v8;
    }
    else if ( v11 )
    {
      if ( v11 != 1 )
        *a1 |= 6u;
      *a1 |= 1u;
    }
    return v3;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xFB, a3, (const char *)0x80070057LL, v9);
    return 2147942487LL;
  }
}
