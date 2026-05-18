/*
 * XREFs of sub_180036B84 @ 0x180036B84
 * Callers:
 *     sub_18003AD18 @ 0x18003AD18 (sub_18003AD18.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18002858C @ 0x18002858C (sub_18002858C.c)
 *     sub_180028614 @ 0x180028614 (sub_180028614.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180036B84(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  char *v4; // rsi
  _QWORD *v6; // rax
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  char v8; // [rsp+28h] [rbp-38h]
  _QWORD v9[2]; // [rsp+30h] [rbp-30h] BYREF
  char *v10; // [rsp+40h] [rbp-20h] BYREF
  char *v11; // [rsp+48h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp-10h]

  sub_180039EBC(a2, &v10);
  v3 = (__int64 *)v10;
  v4 = v11;
  if ( v10 == v11 )
  {
LABEL_8:
    if ( v3 )
    {
      sub_1800126E8((__int64)v3, (__int64)v4);
      sub_180010884(v10, (v12 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    return a1;
  }
  while ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*v3 + 32LL))(*v3) )
  {
LABEL_6:
    v3 += 2;
    if ( v3 == (__int64 *)v4 )
    {
      v4 = v11;
      v3 = (__int64 *)v10;
      goto LABEL_8;
    }
  }
  sub_18002C460(*v3 + 24, (__int64)&v7);
  if ( !(unsigned int)sub_180028614(*v3) )
  {
    if ( v8 )
      j_LanguageEnumProc(v7);
    goto LABEL_6;
  }
  v6 = sub_18002858C(*v3, v9, 0);
  *(_QWORD *)a1 = *v6;
  *(_QWORD *)(a1 + 8) = v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  sub_180010910((__int64)v9);
  if ( v8 )
    j_LanguageEnumProc(v7);
  if ( v10 )
  {
    sub_1800126E8((__int64)v10, (__int64)v11);
    sub_180010884(v10, (v12 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return a1;
}
