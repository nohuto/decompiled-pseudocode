/*
 * XREFs of sub_1800157A0 @ 0x1800157A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180015640 @ 0x180015640 (sub_180015640.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180045178 @ 0x180045178 (sub_180045178.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800157A0(__int64 a1, __int64 *a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  __int128 v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  char v23; // [rsp+48h] [rbp-18h]
  _BYTE v24[16]; // [rsp+50h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+8h]
  __int64 v26; // [rsp+70h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  v20 = 0LL;
  v5 = *(_QWORD *)(v4 + 80);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 8);
    while ( v6 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6);
      if ( v7 == v6 )
      {
        v20 = *(_OWORD *)(v4 + 72);
        break;
      }
    }
  }
  sub_18002C460(v20 + 16, &v22);
  v21 = 0LL;
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(a1 + 40);
  }
  *(_QWORD *)&v21 = *(_QWORD *)(a1 + 32);
  *((_QWORD *)&v21 + 1) = v8;
  sub_180045178(v20, v24, -1LL, &v21);
  v26 = 0LL;
  v9 = sub_180015640(&v26, (__int64)v24);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v15 = v26;
    v26 = 0LL;
    *a2 = v15;
    sub_180010910((__int64)v24);
    if ( v23 )
      j_LanguageEnumProc(v22, v16, v17, v18);
    v10 = 0;
  }
  else
  {
    sub_18000F364(
      retaddr,
      82LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrenode.cpp",
      (unsigned int)v9);
    v11 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    sub_180010910((__int64)v24);
    if ( v23 )
      j_LanguageEnumProc(v22, v12, v13, v14);
  }
  sub_180010910((__int64)&v20);
  return v10;
}
