/*
 * XREFs of sub_18002A6F0 @ 0x18002A6F0
 * Callers:
 *     sub_18002CA30 @ 0x18002CA30 (sub_18002CA30.c)
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_18003D4D0 @ 0x18003D4D0 (sub_18003D4D0.c)
 *     sub_18003D504 @ 0x18003D504 (sub_18003D504.c)
 *     sub_18003D8B4 @ 0x18003D8B4 (sub_18003D8B4.c)
 *     sub_18003EF54 @ 0x18003EF54 (sub_18003EF54.c)
 *     sub_18003F010 @ 0x18003F010 (sub_18003F010.c)
 *     sub_180044208 @ 0x180044208 (sub_180044208.c)
 *     sub_18005F654 @ 0x18005F654 (sub_18005F654.c)
 *     sub_180060148 @ 0x180060148 (sub_180060148.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 */

__int64 *__fastcall sub_18002A6F0(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  volatile signed __int32 *v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_180015604(v8, a2);
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
