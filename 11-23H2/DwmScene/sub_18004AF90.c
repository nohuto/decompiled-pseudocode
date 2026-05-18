/*
 * XREFs of sub_18004AF90 @ 0x18004AF90
 * Callers:
 *     sub_18004B580 @ 0x18004B580 (sub_18004B580.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_18002B418 @ 0x18002B418 (sub_18002B418.c)
 */

__int64 *__fastcall sub_18004AF90(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  volatile signed __int32 *v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_18002B418(v8, a2);
  v4 = *v3;
  *v3 = *a1;
  *a1 = v4;
  v5 = v3[1];
  v3[1] = a1[1];
  v6 = (volatile signed __int32 *)v8[1];
  a1[1] = v5;
  if ( v6 )
    sub_180010574(v6);
  return a1;
}
