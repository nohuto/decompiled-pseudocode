/*
 * XREFs of sub_18009ABE0 @ 0x18009ABE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001338C @ 0x18001338C (sub_18001338C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180044358 @ 0x180044358 (sub_180044358.c)
 *     sub_1800443E8 @ 0x1800443E8 (sub_1800443E8.c)
 *     sub_1800444E4 @ 0x1800444E4 (sub_1800444E4.c)
 *     sub_1800446A0 @ 0x1800446A0 (sub_1800446A0.c)
 *     sub_1800448C0 @ 0x1800448C0 (sub_1800448C0.c)
 *     sub_180044970 @ 0x180044970 (sub_180044970.c)
 *     sub_180044B1C @ 0x180044B1C (sub_180044B1C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009ABE0(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int16 a4)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  _OWORD v12[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v13[4]; // [rsp+40h] [rbp-48h] BYREF

  v7 = sub_1800443E8(a2);
  sub_180017648(v13, v7);
  sub_180044970(a2, a4, a3);
  if ( a4 == (unsigned __int16)sub_180044358(a2, (__int64)&unk_1801D6D88, v8)
    && sub_1800444E4(a2)
    && (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
  {
    sub_1800448C0(v9, 1);
  }
  sub_18001338C(v12, (__int64)v13, qword_1801D6CA8);
  sub_1800446A0(a2);
  sub_180011B24((__int64)v12);
  if ( a4 == (unsigned __int16)sub_180044358(a2, (__int64)&unk_1801D6DC8, v10) )
  {
    v12[0] = 0LL;
    if ( sub_180011DE0(a3) )
    {
      if ( (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
      {
        LODWORD(v12[0]) = 1065353216;
        HIDWORD(v12[0]) = 1065353216;
      }
      else
      {
        DWORD2(v12[0]) = 1051372203;
      }
    }
    sub_180044B1C(a2);
  }
  return sub_180011B24((__int64)v13);
}
