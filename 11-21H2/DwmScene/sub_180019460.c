/*
 * XREFs of sub_180019460 @ 0x180019460
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_1800178DC @ 0x1800178DC (sub_1800178DC.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180036888 @ 0x180036888 (sub_180036888.c)
 *     sub_180045178 @ 0x180045178 (sub_180045178.c)
 *     sub_180046470 @ 0x180046470 (sub_180046470.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180019460(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  char v19; // [rsp+28h] [rbp-58h]
  _QWORD v20[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v23[4]; // [rsp+60h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+18h]
  __int64 v25; // [rsp+A0h] [rbp+20h] BYREF
  int v26; // [rsp+A8h] [rbp+28h] BYREF

  v26 = a2;
  sub_180036888(*(_QWORD *)(a1 + 56), v21);
  v4 = v21[0];
  sub_18002C460(v21[0] + 16LL, &v18);
  v5 = sub_1800129F4(v23, (__int64)&qword_1801F8058);
  v6 = sub_180046470(v4, v22, v5);
  sub_180045178(v4, v20, -1LL, v6);
  v25 = 0LL;
  v7 = sub_1800178DC(&v25, &v26, v20);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v13 = v25;
    v25 = 0LL;
    *a3 = v13;
    sub_180010910((__int64)v20);
    if ( v19 )
      j_LanguageEnumProc(v18, v14, v15, v16);
    v8 = 0;
  }
  else
  {
    sub_18000F364(
      retaddr,
      320LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v7);
    v9 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    sub_180010910((__int64)v20);
    if ( v19 )
      j_LanguageEnumProc(v18, v10, v11, v12);
  }
  sub_180010910((__int64)v21);
  return v8;
}
