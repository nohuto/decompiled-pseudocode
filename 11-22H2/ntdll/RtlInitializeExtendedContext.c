/*
 * XREFs of RtlInitializeExtendedContext @ 0x1800548E0
 * Callers:
 *     PsspInitializeContextOrExtendedContext @ 0x18012A2E4 (PsspInitializeContextOrExtendedContext.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x180054DF0 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags @ 0x180054F94 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // r11d
  __int64 v7; // r9
  char v8; // [rsp+48h] [rbp+20h] BYREF

  result = RtlpValidateContextFlags(a2, &v8);
  v7 = 0LL;
  if ( (int)result >= 0 )
  {
    if ( (v8 & 2) != 0 )
      v7 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlInitializeExtendedContext2(a1, v6, a3, v7);
  }
  return result;
}
