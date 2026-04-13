/*
 * XREFs of sub_180002638 @ 0x180002638
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180002638(__int32 a1)
{
  char v1; // of
  _WORD *v2; // rax
  __int64 v3; // rbp
  _DWORD *v4; // rdi
  double v5; // st7

  if ( !v1 )
    JUMPOUT(0x1800025C4LL);
  *v2 = (__int16)v5;
  *v4 = (_DWORD)v2;
  return TelGetMaximumAllowedTelemetryLevel((unsigned int)_InterlockedExchange((volatile __int32 *)(v3 - 28), a1));
}
