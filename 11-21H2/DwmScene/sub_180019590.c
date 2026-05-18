/*
 * XREFs of sub_180019590 @ 0x180019590
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180017A5C @ 0x180017A5C (sub_180017A5C.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180057684 @ 0x180057684 (sub_180057684.c)
 *     sub_180068348 @ 0x180068348 (sub_180068348.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180019590(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+8h]
  __int64 v13; // [rsp+70h] [rbp+10h] BYREF

  v3 = sub_180037388(*(_QWORD *)(a1 + 56));
  sub_18001875C(v11, v3 + 18496);
  sub_180057684(v3, v10, v11);
  sub_180068348(v10[0], v9);
  v13 = 0LL;
  v4 = sub_180017A5C(&v13, v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v13;
    v13 = 0LL;
    *a2 = v7;
    v5 = 0;
  }
  else
  {
    sub_18000F364(
      retaddr,
      335LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v4);
    v6 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  sub_180010910((__int64)v9);
  sub_180010910((__int64)v10);
  return v5;
}
