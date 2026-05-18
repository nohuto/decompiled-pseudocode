/*
 * XREFs of CreateDwmSceneRenderer @ 0x180010B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 *     sub_180010834 @ 0x180010834 (sub_180010834.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateDwmSceneRenderer(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v14)(_QWORD, __int64, __int64); // [rsp+40h] [rbp+18h] BYREF

  if ( !a3 )
  {
    v5 = -2147467261;
    v6 = 20LL;
LABEL_3:
    sub_18000F364(retaddr, v6, (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\dwmsceneapi.cpp", v5);
    return v5;
  }
  if ( !*a1 )
  {
    v5 = -2147024809;
    v6 = 21LL;
    goto LABEL_3;
  }
  if ( qword_1801F7498 )
  {
    v5 = -2147418113;
    v6 = 24LL;
    goto LABEL_3;
  }
  v14 = 0LL;
  v8 = sub_180010834((__int64 *)&v14, (__int64)a1);
  v5 = v8;
  if ( v8 < 0 )
  {
    sub_18000F364(
      retaddr,
      29LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\dwmsceneapi.cpp",
      (unsigned int)v8);
    v9 = (__int64)v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return v5;
  }
  v10 = (**v14)(v14, a2, a3);
  v5 = v10;
  if ( v10 < 0 )
  {
    sub_18000F364(
      retaddr,
      31LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\dwmsceneapi.cpp",
      (unsigned int)v10);
    v11 = (__int64)v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v5;
  }
  v12 = (__int64)v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return 0LL;
}
