/*
 * XREFs of sub_18004DBD8 @ 0x18004DBD8
 * Callers:
 *     sub_18004F104 @ 0x18004F104 (sub_18004F104.c)
 *     sub_18004F354 @ 0x18004F354 (sub_18004F354.c)
 *     sub_18004F4AC @ 0x18004F4AC (sub_18004F4AC.c)
 *     sub_18004F584 @ 0x18004F584 (sub_18004F584.c)
 *     sub_18004F73C @ 0x18004F73C (sub_18004F73C.c)
 *     sub_18004F8C8 @ 0x18004F8C8 (sub_18004F8C8.c)
 *     sub_18004FA18 @ 0x18004FA18 (sub_18004FA18.c)
 *     sub_18004FB58 @ 0x18004FB58 (sub_18004FB58.c)
 *     sub_18004FD34 @ 0x18004FD34 (sub_18004FD34.c)
 *     sub_18004FE74 @ 0x18004FE74 (sub_18004FE74.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180079BE8 @ 0x180079BE8 (sub_180079BE8.c)
 */

_QWORD *__fastcall sub_18004DBD8(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // eax
  int v8; // r8d
  unsigned __int64 v9; // rdx
  __int64 v11[5]; // [rsp+38h] [rbp-40h] BYREF

  v11[4] = a2;
  v7 = (unsigned int)sub_18001875C(v11, a2);
  sub_180079BE8((_DWORD)a1, v7, v8, -2147467261, a4, 0);
  *a1 = &Spectre::Engine::EngineInvalidPointerException::`vftable';
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 >= 0x10 )
    sub_180010884(*(char **)a2, v9 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
