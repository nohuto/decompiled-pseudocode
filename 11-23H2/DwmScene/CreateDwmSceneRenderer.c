/*
 * XREFs of CreateDwmSceneRenderer @ 0x1800105F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 *     sub_1800100B8 @ 0x1800100B8 (sub_1800100B8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateDwmSceneRenderer(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, __int64, __int64); // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    if ( !*a1 )
    {
      v5 = -2147024809;
      v6 = 21LL;
      goto LABEL_3;
    }
    if ( qword_1801D3390 )
    {
      v5 = -2147418113;
      v6 = 24LL;
      goto LABEL_3;
    }
    v11 = 0LL;
    v7 = sub_1800100B8((__int64 *)&v11, (__int64)a1);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v7 = (**v11)(v11, a2, a3);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v5 = 0;
        goto LABEL_14;
      }
      v8 = 31LL;
    }
    else
    {
      v8 = 29LL;
    }
    sub_18000F024(
      retaddr,
      v8,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\dwmsceneapi.cpp",
      (unsigned int)v7);
LABEL_14:
    sub_18000E72C((__int64 *)&v11);
    return v5;
  }
  v5 = -2147467261;
  v6 = 20LL;
LABEL_3:
  sub_18000F024(retaddr, v6, (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\dwmsceneapi.cpp", v5);
  return v5;
}
