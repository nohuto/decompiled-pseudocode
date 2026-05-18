/*
 * XREFs of sub_180015208 @ 0x180015208
 * Callers:
 *     sub_180015B00 @ 0x180015B00 (sub_180015B00.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001483C @ 0x18001483C (sub_18001483C.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800421D0 @ 0x1800421D0 (sub_1800421D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180015208(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v13[2]; // [rsp+20h] [rbp-19h] BYREF
  __int128 v14; // [rsp+30h] [rbp-9h] BYREF
  __int128 v15; // [rsp+40h] [rbp+7h] BYREF
  __int128 v16; // [rsp+50h] [rbp+17h] BYREF
  __int64 v17; // [rsp+60h] [rbp+27h] BYREF
  char v18; // [rsp+68h] [rbp+2Fh]
  _QWORD v19[2]; // [rsp+70h] [rbp+37h] BYREF
  _QWORD v20[2]; // [rsp+80h] [rbp+47h] BYREF

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  v2 = *(_QWORD *)(v1 + 40);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(v1 + 40);
  }
  v3 = *(_QWORD *)(v1 + 32);
  v13[0] = v3;
  v13[1] = v2;
  v14 = 0LL;
  v4 = *(_QWORD *)(v3 + 80);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    while ( v5 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
      if ( v6 == v5 )
      {
        v14 = *(_OWORD *)(v3 + 72);
        break;
      }
    }
    v3 = v13[0];
  }
  sub_18002C460(v14 + 16, &v17);
  sub_180010910((__int64)&v14);
  v7 = sub_18001490C(v3, v19);
  v15 = 0LL;
  v15 = *(_OWORD *)v7;
  *v7 = 0LL;
  v7[1] = 0LL;
  sub_1800421D0(v3, &v15);
  sub_180010910((__int64)v19);
  v8 = sub_18001483C(v3, v20);
  v16 = 0LL;
  v16 = *(_OWORD *)v8;
  *v8 = 0LL;
  v8[1] = 0LL;
  sub_1800421D0(v3, &v16);
  sub_180010910((__int64)v20);
  if ( v18 )
    j_LanguageEnumProc(v17, v9, v10, v11);
  return sub_180010910((__int64)v13);
}
