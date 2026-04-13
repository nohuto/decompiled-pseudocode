/*
 * XREFs of TelIsTelemetryTypeAllowedWinRE @ 0x180003090
 * Callers:
 *     <none>
 * Callees:
 *     TelpReadOfflineOsPolicySetting @ 0x18000318C (TelpReadOfflineOsPolicySetting.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004A4C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TelIsTelemetryTypeAllowedWinRE(int a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int v4; // r8d
  unsigned int v5; // edi
  int v7; // edx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v10 = 0;
  v3 = TelpReadOfflineOsPolicySetting(&v10);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v7 = 0;
    if ( v10 )
    {
      if ( v10 != 1 )
        v7 = 6;
      v7 |= 1u;
    }
    LOBYTE(v2) = (a1 & v7) != a1;
    return v2;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6FD, v4, (const char *)(unsigned int)v3, v8);
    return v5;
  }
}
