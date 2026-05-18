/*
 * XREFs of sub_18003ED90 @ 0x18003ED90
 * Callers:
 *     sub_18003E4F4 @ 0x18003E4F4 (sub_18003E4F4.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003ED90(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned __int8 (__fastcall *a5)(_QWORD *, _QWORD *))
{
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD v19[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v20[5]; // [rsp+30h] [rbp-28h] BYREF

  v9 = a2;
  while ( a5(v9, a1) )
  {
    v10 = *v9;
    *v9 = 0LL;
    v11 = v9[1];
    v9[1] = 0LL;
    v19[0] = *a4;
    v12 = a4[1];
    *a4 = v10;
    v19[1] = v12;
    a4[1] = v11;
    sub_180010910((__int64)v19);
    v9 += 2;
    if ( v9 == a3 )
    {
      v13 = a2;
      v14 = a1;
      return sub_18003EE90(v14, v13, a4 + 2);
    }
LABEL_6:
    a4 += 2;
  }
  v15 = *a1;
  *a1 = 0LL;
  v16 = a1[1];
  a1[1] = 0LL;
  v20[0] = *a4;
  v17 = a4[1];
  *a4 = v15;
  v20[1] = v17;
  a4[1] = v16;
  sub_180010910((__int64)v20);
  a1 += 2;
  if ( a1 != a2 )
    goto LABEL_6;
  v13 = a3;
  v14 = v9;
  return sub_18003EE90(v14, v13, a4 + 2);
}
