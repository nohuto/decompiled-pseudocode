/*
 * XREFs of sub_180016AC0 @ 0x180016AC0
 * Callers:
 *     sub_18000C370 @ 0x18000C370 (sub_18000C370.c)
 *     sub_18000C640 @ 0x18000C640 (sub_18000C640.c)
 *     sub_18000C948 @ 0x18000C948 (sub_18000C948.c)
 *     sub_18000FFC4 @ 0x18000FFC4 (sub_18000FFC4.c)
 *     sub_180011BFC @ 0x180011BFC (sub_180011BFC.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180016AC0()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
      StackLimit -= 4096;
    while ( v1 < StackLimit );
  }
  return result;
}
