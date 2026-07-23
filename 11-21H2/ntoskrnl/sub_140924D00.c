/*
 * XREFs of sub_140924D00 @ 0x140924D00
 * Callers:
 *     sub_140924C14 @ 0x140924C14 (sub_140924C14.c)
 * Callees:
 *     sub_140910D10 @ 0x140910D10 (sub_140910D10.c)
 *     sub_14091A9EC @ 0x14091A9EC (sub_14091A9EC.c)
 *     sub_140925338 @ 0x140925338 (sub_140925338.c)
 *     sub_140925A18 @ 0x140925A18 (sub_140925A18.c)
 */

__int64 __fastcall sub_140924D00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 result; // rax
  _DWORD *v9; // rbx
  _DWORD *v10; // r14
  _DWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]
  _DWORD *v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = a4;
  v6 = *(_QWORD *)(a2 + 8);
  LODWORD(v15) = 0;
  v14 = 0LL;
  v12 = v6;
  v13 = *(_QWORD *)(a2 + 16);
  v11[1] = *(_DWORD *)(a3 + 8);
  v11[0] = 512;
  while ( 1 )
  {
    result = sub_140925338(v11, &v14);
    if ( (_DWORD)result == -2147483622 )
      break;
    if ( (int)result < 0 )
      return result;
    v9 = v14;
    v10 = v14 + 10;
    result = sub_14091A9EC(
               BugCheckParameter2,
               (__int64)v14,
               (__int64)(v14 + 10),
               (__int64)&v14[2 * v14[5] + 10],
               v14[1] - (8 * v14[5] + 40),
               &v15);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 40) = v9[4];
    if ( (v9[2] & 1) != 0 )
      *(_DWORD *)(a1 + 144) |= 1u;
    sub_140910D10(v9[1], v15);
    if ( a6 )
      sub_140925A18(v10, (unsigned int)v9[5], a6);
  }
  return 1073741833LL;
}
