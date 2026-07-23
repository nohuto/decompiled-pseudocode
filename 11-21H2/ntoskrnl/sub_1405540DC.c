/*
 * XREFs of sub_1405540DC @ 0x1405540DC
 * Callers:
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 *     sub_140553968 @ 0x140553968 (sub_140553968.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055225C @ 0x14055225C (sub_14055225C.c)
 *     sub_1405550FC @ 0x1405550FC (sub_1405550FC.c)
 *     sub_140593778 @ 0x140593778 (sub_140593778.c)
 */

__int64 __fastcall sub_1405540DC(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        char a8,
        __int64 a9,
        __int64 *a10)
{
  __int64 *v10; // rbx
  __int64 result; // rax
  int v12; // [rsp+70h] [rbp-58h] BYREF
  _DWORD v13[2]; // [rsp+78h] [rbp-50h] BYREF
  _QWORD *v14; // [rsp+80h] [rbp-48h]
  _BYTE v15[32]; // [rsp+88h] [rbp-40h] BYREF

  v10 = a10;
  v12 = 0;
  if ( !a10 )
  {
    v10 = *(__int64 **)(qword_140D00A80 + 1328);
    if ( !v10 )
      return 3221225473LL;
  }
  if ( (dword_140C31E20 & 3) == 0 || qword_140C4E8D0 )
    return 3221225473LL;
  sub_1405550FC(a1, a2, a3, a4, a5, a6, (__int64)a7);
  sub_140593778(a6, v15);
  v13[0] = dword_140C47500;
  v13[1] = 256;
  v14 = qword_140C47520;
  result = sub_14055225C(
             0x3E000u,
             v10,
             1,
             a8 != 0 ? 3319 : 3583,
             0LL,
             a6,
             a7,
             dword_140C4E588,
             65,
             1u,
             (__int64)v13,
             (__int64)v13,
             &v12);
  if ( (int)result >= 0 )
    qword_140C4E8D0 = v10;
  return result;
}
