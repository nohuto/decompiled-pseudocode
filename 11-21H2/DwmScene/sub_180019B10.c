/*
 * XREFs of sub_180019B10 @ 0x180019B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180018030 @ 0x180018030 (sub_180018030.c)
 *     sub_18001821C @ 0x18001821C (sub_18001821C.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800357B4 @ 0x1800357B4 (sub_1800357B4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180019B10(_QWORD *a1, __int64 *a2)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  char *v12; // rdx
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  char v16; // [rsp+28h] [rbp-18h]
  _QWORD v17[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+18h]
  __int64 v19; // [rsp+60h] [rbp+20h] BYREF
  __int64 v20; // [rsp+70h] [rbp+30h] BYREF

  sub_1800357B4(a1[7], v17);
  sub_18002C460(v17[0] + 16LL, &v15);
  v19 = 0LL;
  v4 = sub_180018030(&v19, (__int64)v17);
  v7 = v4;
  if ( v4 >= 0 )
  {
    v20 = v19;
    v12 = (char *)a1[15];
    if ( v12 == (char *)a1[16] )
    {
      sub_18001821C(a1 + 14, v12, &v20);
    }
    else
    {
      *(_QWORD *)v12 = v19;
      a1[15] += 8LL;
    }
    v13 = v19;
    v19 = 0LL;
    *a2 = v13;
    if ( v16 )
      j_LanguageEnumProc(v15, v12, v5, v6);
    v7 = 0;
  }
  else
  {
    sub_18000F364(
      retaddr,
      299LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v4);
    v11 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v16 )
      j_LanguageEnumProc(v15, v8, v9, v10);
  }
  sub_180010910((__int64)v17);
  return v7;
}
