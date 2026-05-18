/*
 * XREFs of sub_1800705E8 @ 0x1800705E8
 * Callers:
 *     sub_180075B34 @ 0x180075B34 (sub_180075B34.c)
 *     sub_180075D60 @ 0x180075D60 (sub_180075D60.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_180040B40 @ 0x180040B40 (sub_180040B40.c)
 *     sub_18004614C @ 0x18004614C (sub_18004614C.c)
 *     sub_1800465B0 @ 0x1800465B0 (sub_1800465B0.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800705E8(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v4; // r8
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9[4]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10[2]; // [rsp+50h] [rbp-10h] BYREF

  if ( !sub_1800122C0(a3) )
    goto LABEL_7;
  v5 = *v4;
  v6 = sub_1800129F4(v9, (__int64)&qword_1801F8098);
  sub_18004614C(v5, v10, (char *)v6);
  if ( !sub_1800122C0(v10) )
  {
LABEL_6:
    sub_180010910((__int64)v10);
LABEL_7:
    *a2 = 0LL;
    a2[1] = 0LL;
    return a2;
  }
  sub_1800465B0(v10[0], v9);
  if ( !sub_1800122C0(v9) )
  {
    sub_180010910((__int64)v9);
    goto LABEL_6;
  }
  sub_180040B40(v9[0], &v8);
  *(_OWORD *)a2 = v8;
  v8 = 0LL;
  sub_180010910((__int64)&v8);
  sub_180010910((__int64)v9);
  sub_180010910((__int64)v10);
  return a2;
}
