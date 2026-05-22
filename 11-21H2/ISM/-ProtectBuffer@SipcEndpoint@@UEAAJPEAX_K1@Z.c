/*
 * XREFs of ?ProtectBuffer@SipcEndpoint@@UEAAJPEAX_K1@Z @ 0x1800FF1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800FC644 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

int __fastcall SipcEndpoint::ProtectBuffer(SipcPort **this, void *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( (((unsigned __int64)a2 + a3) & 0xFFF) == 0 && (a4 & 0xFFF) == 0 )
    return SipcPort::ProtectSection(this[1], a2, a3, a4);
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x80070057LL, (__int64)a2, a3, a4);
  return -2147024809;
}
