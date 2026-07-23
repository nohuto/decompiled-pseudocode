/*
 * XREFs of sub_1405554B0 @ 0x1405554B0
 * Callers:
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140551F78 @ 0x140551F78 (sub_140551F78.c)
 *     sub_14055225C @ 0x14055225C (sub_14055225C.c)
 *     sub_1405550FC @ 0x1405550FC (sub_1405550FC.c)
 *     sub_1405557FC @ 0x1405557FC (sub_1405557FC.c)
 *     sub_140593778 @ 0x140593778 (sub_140593778.c)
 *     sub_1405FE548 @ 0x1405FE548 (sub_1405FE548.c)
 */

bool __fastcall sub_1405554B0(int a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, _QWORD *a6, void *a7)
{
  char *v7; // rsi
  char v8; // r14
  __int64 v13; // r9
  int v14; // r10d
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // [rsp+38h] [rbp-81h]
  int v19; // [rsp+74h] [rbp-45h] BYREF
  void *v20; // [rsp+78h] [rbp-41h]
  _DWORD v21[2]; // [rsp+80h] [rbp-39h] BYREF
  _QWORD *v22; // [rsp+88h] [rbp-31h]
  _QWORD *v23; // [rsp+90h] [rbp-29h]
  _QWORD v24[4]; // [rsp+98h] [rbp-21h] BYREF

  v7 = (char *)qword_140C54D60;
  v8 = 0;
  v20 = a7;
  v23 = a6;
  v19 = 0;
  if ( !qword_140C54D60 )
    return 0;
  sub_1405FE548();
  v24[0] = a2;
  v24[1] = a3;
  v24[2] = a4;
  v24[3] = a5;
  sub_1405550FC(v14, a2, a3, a4, a5, a6, v13, v17, 1);
  sub_140593778(a6, v24);
  sub_140551F78((_NT_PRODUCT_TYPE *)v7 + 1031, 4, a1, a2, (__int64)a3, a4, a5, (__int64)v20);
  v21[0] = dword_140C47500;
  v21[1] = 256;
  v22 = qword_140C47520;
  v15 = sub_14055225C(
          0x3E000u,
          (__int64 *)(v7 + 12316),
          1,
          3583,
          0LL,
          (__int64)v23,
          v20,
          dword_140C4E588,
          65,
          1u,
          (__int64)v21,
          (__int64)v21,
          &v19);
  *(_OWORD *)(v7 + 4220) = 0LL;
  *(_OWORD *)(v7 + 4236) = 0LL;
  *((_DWORD *)v7 + 2070) = 0;
  v16 = *((unsigned int *)v7 + 3080);
  *((_DWORD *)v7 + 2075) |= 0x88u;
  *(_QWORD *)(v7 + 8124) = v16;
  *((_DWORD *)v7 + 2069) = 3583;
  if ( v15 >= 0 )
    return (int)sub_1405557FC(qword_140C54D60) >= 0;
  return v8;
}
