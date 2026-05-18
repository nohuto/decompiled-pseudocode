/*
 * XREFs of sub_18008BEC0 @ 0x18008BEC0
 * Callers:
 *     sub_180086BE0 @ 0x180086BE0 (sub_180086BE0.c)
 *     sub_18008C230 @ 0x18008C230 (sub_18008C230.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180029550 @ 0x180029550 (sub_180029550.c)
 *     sub_18003890C @ 0x18003890C (sub_18003890C.c)
 *     sub_180086808 @ 0x180086808 (sub_180086808.c)
 *     sub_18008B988 @ 0x18008B988 (sub_18008B988.c)
 *     sub_18008BF88 @ 0x18008BF88 (sub_18008BF88.c)
 *     sub_18008C1A0 @ 0x18008C1A0 (sub_18008C1A0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008BEC0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int128 v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+38h] [rbp-48h]
  __int128 v10; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v11[48]; // [rsp+50h] [rbp-30h] BYREF

  sub_180029550(a1, a2);
  result = (__int64)sub_18003890C(a1 + 160, &v8);
  if ( v8 )
  {
    sub_18008B988(*a2, (__int64 *)&v7);
    v5 = v7;
    v6 = sub_180086808((__int64)v11, a1 + 96);
    sub_18008C1A0(v5, *a2, v6, v8);
    v10 = v7;
    v7 = 0LL;
    result = sub_18008BF88(a1, &v10);
    if ( *((_QWORD *)&v7 + 1) )
      result = sub_180010530(*((__int64 *)&v7 + 1));
  }
  if ( v9 )
    return sub_180010530(v9);
  return result;
}
