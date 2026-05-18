/*
 * XREFs of sub_180014D3C @ 0x180014D3C
 * Callers:
 *     sub_180015710 @ 0x180015710 (sub_180015710.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180014564 @ 0x180014564 (sub_180014564.c)
 *     sub_1800146D0 @ 0x1800146D0 (sub_1800146D0.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180014D3C(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v15; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-9h] BYREF
  __int64 v17[2]; // [rsp+40h] [rbp+7h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp+17h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp+27h] BYREF
  __int64 v20; // [rsp+70h] [rbp+37h] BYREF
  char v21; // [rsp+78h] [rbp+3Fh]
  _QWORD v22[2]; // [rsp+80h] [rbp+47h] BYREF

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  v2 = *(_QWORD *)(v1 + 40);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(v1 + 40);
  }
  v3 = *(_QWORD *)(v1 + 32);
  v17[0] = v3;
  v17[1] = v2;
  v15 = 0LL;
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
        v15 = *(_OWORD *)(v3 + 72);
        break;
      }
    }
  }
  sub_18002C460(v15 + 16, &v20);
  sub_180010910((__int64)&v15);
  sub_1800146D0(v17[0], v19);
  v7 = qword_1801F7498;
  v8 = *(_QWORD *)(qword_1801F7498 + 104);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(v7 + 104);
  }
  v9 = *(_QWORD *)(v7 + 96);
  v16[0] = v9;
  v16[1] = v8;
  v10 = v19[0];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v9 = v16[0];
  }
  v18[0] = *(_QWORD *)(v10 + 88);
  *(_QWORD *)(v10 + 88) = v9;
  v18[1] = *(_QWORD *)(v10 + 96);
  *(_QWORD *)(v10 + 96) = v8;
  sub_180010910((__int64)v18);
  sub_180010910((__int64)v16);
  sub_180014564(v17[0], v22);
  sub_180010910((__int64)v22);
  sub_180010910((__int64)v19);
  if ( v21 )
    j_LanguageEnumProc(v20, v11, v12, v13);
  return sub_180010910((__int64)v17);
}
