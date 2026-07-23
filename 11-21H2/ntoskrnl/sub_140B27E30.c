/*
 * XREFs of sub_140B27E30 @ 0x140B27E30
 * Callers:
 *     sub_140B27AFC @ 0x140B27AFC (sub_140B27AFC.c)
 * Callees:
 *     VfIsRuleClassEnabled @ 0x140A7C590 (VfIsRuleClassEnabled.c)
 *     sub_140A90ED8 @ 0x140A90ED8 (sub_140A90ED8.c)
 *     sub_140A96A04 @ 0x140A96A04 (sub_140A96A04.c)
 *     sub_140A9A2E8 @ 0x140A9A2E8 (sub_140A9A2E8.c)
 *     sub_140A9B0C8 @ 0x140A9B0C8 (sub_140A9B0C8.c)
 */

__int64 sub_140B27E30()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( dword_140C1B2A0 )
  {
    sub_140A9A2E8();
    sub_140A9B0C8(v2, v1);
    sub_140A90ED8();
  }
  if ( VfIsRuleClassEnabled(2u) )
    sub_140A96A04();
  result = (unsigned int)dword_140D5758C;
  if ( dword_140D5758C == 1 )
    _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, 1u);
  return result;
}
