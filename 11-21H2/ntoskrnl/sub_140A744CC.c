/*
 * XREFs of sub_140A744CC @ 0x140A744CC
 * Callers:
 *     sub_140A6F1FC @ 0x140A6F1FC (sub_140A6F1FC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_140A6F7A0 @ 0x140A6F7A0 (sub_140A6F7A0.c)
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 *     sub_140A70244 @ 0x140A70244 (sub_140A70244.c)
 *     KdLogDbgPrint @ 0x140A73FF0 (KdLogDbgPrint.c)
 *     sub_140A74D24 @ 0x140A74D24 (sub_140A74D24.c)
 */

__int64 __fastcall sub_140A744CC(
        char *a1,
        unsigned __int16 a2,
        volatile void *a3,
        unsigned __int16 a4,
        char a5,
        __int64 a6)
{
  char *v7; // rdi
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // r14
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  char *v12; // r9
  void *v13; // rsp
  char *v14; // rcx
  char v15; // bl
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  _BYTE v19[480]; // [rsp+0h] [rbp-400h] BYREF
  _BYTE v20[480]; // [rsp+200h] [rbp-200h] BYREF
  _WORD v21[2]; // [rsp+400h] [rbp+0h] BYREF
  int v22; // [rsp+404h] [rbp+4h]
  char *v23; // [rsp+408h] [rbp+8h]
  __int128 v24; // [rsp+410h] [rbp+10h] BYREF
  _BYTE *v25; // [rsp+420h] [rbp+20h]

  v7 = a1;
  v22 = 0;
  v24 = 0LL;
  v8 = 512;
  if ( a2 <= 0x200u )
    v8 = a2;
  v9 = 512;
  if ( a4 <= 0x200u )
    v9 = a4;
  if ( a5 )
  {
    if ( v8 )
    {
      v10 = (unsigned __int64)&a1[v8];
      if ( v10 > 0x7FFFFFFF0000LL || v10 < (unsigned __int64)v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v11 = alloca(512LL);
    v25 = v20;
    sub_140A70244((__int64)v20, v7, v8);
    v7 = v12;
    ProbeForWrite(a3, v9, 1u);
    v13 = alloca(512LL);
    v14 = v19;
    v25 = v19;
  }
  else
  {
    v14 = (char *)a3;
  }
  v23 = v14;
  v21[0] = 0;
  v21[1] = v9;
  *((_QWORD *)&v24 + 1) = v7;
  LOWORD(v24) = v8;
  KdLogDbgPrint((unsigned __int16 *)&v24);
  v15 = sub_140A6F7A0(a6);
  while ( (unsigned __int8)sub_140A74D24(&v24, v21) == 1 )
    ;
  LOBYTE(v17) = v15;
  sub_140A6F900(v17, v16);
  if ( a5 == 1 )
    sub_140A70244((__int64)a3, v23, v21[0]);
  return v21[0];
}
