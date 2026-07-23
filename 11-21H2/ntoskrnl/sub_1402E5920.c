/*
 * XREFs of sub_1402E5920 @ 0x1402E5920
 * Callers:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x14024D7F4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1402CD9C0 @ 0x1402CD9C0 (sub_1402CD9C0.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 * Callees:
 *     sub_1402E599C @ 0x1402E599C (sub_1402E599C.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_1402E5920(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax

  v4 = sub_140317A10(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return sub_1402E599C(a1, a2, 48 * ((v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
}
