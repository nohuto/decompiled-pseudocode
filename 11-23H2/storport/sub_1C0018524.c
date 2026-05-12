/*
 * XREFs of sub_1C0018524 @ 0x1C0018524
 * Callers:
 *     sub_1C00011C0 @ 0x1C00011C0 (sub_1C00011C0.c)
 *     sub_1C00013E0 @ 0x1C00013E0 (sub_1C00013E0.c)
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0012AE4 @ 0x1C0012AE4 (sub_1C0012AE4.c)
 *     sub_1C0013D54 @ 0x1C0013D54 (sub_1C0013D54.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1C0016FE4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1C001DDAC @ 0x1C001DDAC (sub_1C001DDAC.c)
 *     sub_1C0022594 @ 0x1C0022594 (sub_1C0022594.c)
 *     sub_1C0022C18 @ 0x1C0022C18 (sub_1C0022C18.c)
 *     sub_1C0022DB0 @ 0x1C0022DB0 (sub_1C0022DB0.c)
 *     sub_1C0026290 @ 0x1C0026290 (sub_1C0026290.c)
 *     sub_1C004DB9C @ 0x1C004DB9C (sub_1C004DB9C.c)
 *     sub_1C004DC78 @ 0x1C004DC78 (sub_1C004DC78.c)
 *     sub_1C005D530 @ 0x1C005D530 (sub_1C005D530.c)
 *     sub_1C00A25F4 @ 0x1C00A25F4 (sub_1C00A25F4.c)
 *     sub_1C00A2788 @ 0x1C00A2788 (sub_1C00A2788.c)
 *     sub_1C00A408C @ 0x1C00A408C (sub_1C00A408C.c)
 *     sub_1C00AB070 @ 0x1C00AB070 (sub_1C00AB070.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C0018524(__int64 a1)
{
  unsigned int (__fastcall *v1)(__int64); // rax

  v1 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 200LL);
  if ( v1 )
    return v1(*(_QWORD *)(a1 + 240) + 16LL) != 0 ? 0xC0000001 : 0;
  else
    return 3221225659LL;
}
