/*
 * XREFs of sub_1800445E8 @ 0x1800445E8
 * Callers:
 *     sub_180043AC4 @ 0x180043AC4 (sub_180043AC4.c)
 *     sub_18006102C @ 0x18006102C (sub_18006102C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18002B418 @ 0x18002B418 (sub_18002B418.c)
 *     sub_180060F7C @ 0x180060F7C (sub_180060F7C.c)
 */

unsigned __int8 __fastcall sub_1800445E8(_QWORD *a1)
{
  _QWORD *v2; // rdi
  unsigned __int8 result; // al
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r8
  volatile signed __int32 *v7; // rcx
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v8 = 0LL;
  sub_180011020(a1 + 15, v8);
  if ( v8[1] )
    sub_180010530(v8[1]);
  v2 = a1 + 17;
  result = sub_180011DE0(a1 + 17);
  if ( result )
  {
    v4 = a1 + 27;
    v5 = sub_18002B418(v8, v4);
    sub_180060F7C(v6, v5);
    *(_OWORD *)v8 = 0LL;
    result = (unsigned __int8)sub_180011020(v2, v8);
    if ( v8[1] )
      result = sub_180010530(v8[1]);
    *v4 = 0LL;
    v7 = (volatile signed __int32 *)v4[1];
    v4[1] = 0LL;
    if ( v7 )
      return sub_180010574(v7);
  }
  return result;
}
