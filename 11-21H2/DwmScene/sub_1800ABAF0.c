/*
 * XREFs of sub_1800ABAF0 @ 0x1800ABAF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180013B3C @ 0x180013B3C (sub_180013B3C.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180049728 @ 0x180049728 (sub_180049728.c)
 *     sub_1800497C4 @ 0x1800497C4 (sub_1800497C4.c)
 *     sub_180049888 @ 0x180049888 (sub_180049888.c)
 *     sub_180049AB8 @ 0x180049AB8 (sub_180049AB8.c)
 *     sub_180049D1C @ 0x180049D1C (sub_180049D1C.c)
 *     sub_180049DE0 @ 0x180049DE0 (sub_180049DE0.c)
 *     sub_18004A0C8 @ 0x18004A0C8 (sub_18004A0C8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800ABAF0(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int16 a4)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-38h]
  char *v14[3]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-18h]

  v7 = sub_1800497C4(a2);
  sub_18001875C((__int64 *)v14, v7);
  sub_180049DE0(a2, a4, a3);
  if ( a4 == (unsigned __int16)sub_180049728(a2, (__int64)&qword_1801F4C78, v8)
    && sub_180049888(a2)
    && (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
  {
    sub_180049D1C(v9, 1);
  }
  sub_180013B3C(&v12, (__int64)v14, &qword_1801F5E18);
  sub_180049AB8(a2);
  if ( v13 >= 0x10 )
    sub_180010884((char *)v12, v13 + 1);
  result = sub_180049728(a2, (__int64)&qword_1801F4CB8, v10);
  if ( a4 == (_WORD)result )
  {
    v12 = 0LL;
    if ( sub_1800122C0(a3) )
    {
      if ( (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
      {
        LODWORD(v12) = 1065353216;
        HIDWORD(v12) = 1065353216;
      }
      else
      {
        DWORD2(v12) = 1051372203;
      }
    }
    result = sub_18004A0C8(a2);
  }
  if ( v15 >= 0x10 )
    return sub_180010884(v14[0], v15 + 1);
  return result;
}
