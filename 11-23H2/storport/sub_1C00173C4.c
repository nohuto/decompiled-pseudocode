/*
 * XREFs of sub_1C00173C4 @ 0x1C00173C4
 * Callers:
 *     sub_1C0014FC4 @ 0x1C0014FC4 (sub_1C0014FC4.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1C0016FE4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 * Callees:
 *     sub_1C00174D0 @ 0x1C00174D0 (sub_1C00174D0.c)
 *     sub_1C0017CC0 @ 0x1C0017CC0 (sub_1C0017CC0.c)
 *     sub_1C001827C @ 0x1C001827C (sub_1C001827C.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C003F2A4 @ 0x1C003F2A4 (sub_1C003F2A4.c)
 *     sub_1C003F348 @ 0x1C003F348 (sub_1C003F348.c)
 */

__int64 __fastcall sub_1C00173C4(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5, char a6)
{
  __int64 v6; // r14
  char v7; // r15
  char v8; // bp
  int v12; // edi
  unsigned int v13; // eax
  char v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+10h] BYREF

  v6 = a2 + 8;
  v16 = 0LL;
  v7 = 0;
  a6 = 0;
  v8 = 0;
  v18 = 0;
  while ( 1 )
  {
    v12 = sub_1C00174D0(a2, v6, a5);
    if ( v12 < 0 )
      break;
    v13 = v18;
    if ( a5 > v18 )
      v13 = a5;
    sub_1C001827C(a2, a3, v6, *(_DWORD *)a1, v13, (__int64)&v16);
    v12 = sub_1C0017CC0(a2, a4, v6, v16, v15);
    if ( v12 < 0 )
      break;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *, unsigned int *))(a1 + 8))(
            a2,
            v16,
            a4,
            &a6,
            &v18);
    if ( !a6 )
      break;
    if ( v7 )
      break;
    v12 = sub_1C003F2A4(a2, v6, v18);
    if ( v12 < 0 )
      break;
    v8 = 1;
    v7 = 1;
  }
  if ( v8 )
    sub_1C003F348(a2);
  return (unsigned int)v12;
}
