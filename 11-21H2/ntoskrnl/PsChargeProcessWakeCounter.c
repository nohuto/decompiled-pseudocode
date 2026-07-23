/*
 * XREFs of PsChargeProcessWakeCounter @ 0x1406E1310
 * Callers:
 *     sub_1406E1214 @ 0x1406E1214 (sub_1406E1214.c)
 *     sub_140790EEC @ 0x140790EEC (sub_140790EEC.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 *     sub_14098A13C @ 0x14098A13C (sub_14098A13C.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x1402F63C0 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     sub_1407AC250 @ 0x1407AC250 (sub_1407AC250.c)
 */

__int64 __fastcall PsChargeProcessWakeCounter(__int64 a1)
{
  __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId(a1);
  if ( result )
    return sub_1407AC250(a1, 1, 1, 0LL);
  return result;
}
