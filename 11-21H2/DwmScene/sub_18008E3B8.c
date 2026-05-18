/*
 * XREFs of sub_18008E3B8 @ 0x18008E3B8
 * Callers:
 *     sub_180051780 @ 0x180051780 (sub_180051780.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
unsigned __int64 __fastcall sub_18008E3B8(__int64 *a1)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v4; // r8
  char *v5; // rcx
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  char v15; // [rsp+48h] [rbp-28h]
  char *v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]
  __int64 v18; // [rsp+60h] [rbp-10h]

  v2 = sub_18008E70C(a1);
  sub_180039EBC(v2, &v16);
  v3 = 0;
  v4 = v17;
  v5 = v16;
  result = (v17 - (__int64)v16) >> 4;
  if ( result )
  {
    v7 = 0LL;
    do
    {
      v8 = 2 * v7;
      v9 = *(_QWORD *)&v5[8 * v8 + 8];
      if ( v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        v9 = *(_QWORD *)&v5[8 * v8 + 8];
      }
      v10 = *(_QWORD *)&v5[8 * v8];
      v13[0] = v10;
      v13[1] = v9;
      sub_18002C460(v10 + 24, (__int64)&v14);
      v11 = *a1;
      v12 = 0LL;
      if ( v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        v10 = v13[0];
      }
      *(_QWORD *)&v12 = v10;
      *((_QWORD *)&v12 + 1) = v9;
      (*(void (__fastcall **)(__int64 *, __int128 *))(v11 + 88))(a1, &v12);
      if ( v15 )
        j_LanguageEnumProc(v14);
      sub_180010910((__int64)v13);
      ++v3;
      v4 = v17;
      v5 = v16;
      result = (v17 - (__int64)v16) >> 4;
      v7 = v3;
    }
    while ( v3 < result );
  }
  if ( v5 )
  {
    sub_1800126E8((__int64)v5, v4);
    return sub_180010884(v16, (v18 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return result;
}
