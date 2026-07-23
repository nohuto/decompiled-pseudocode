/*
 * XREFs of sub_14065A7E0 @ 0x14065A7E0
 * Callers:
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_14068B1C8 @ 0x14068B1C8 (sub_14068B1C8.c)
 *     sub_1406DD184 @ 0x1406DD184 (sub_1406DD184.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_14090CFF8 @ 0x14090CFF8 (sub_14090CFF8.c)
 *     sub_14090D4E8 @ 0x14090D4E8 (sub_14090D4E8.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_140911BAC @ 0x140911BAC (sub_140911BAC.c)
 *     sub_1409136B4 @ 0x1409136B4 (sub_1409136B4.c)
 *     sub_140917A40 @ 0x140917A40 (sub_140917A40.c)
 *     sub_14091972C @ 0x14091972C (sub_14091972C.c)
 * Callees:
 *     sub_140208994 @ 0x140208994 (sub_140208994.c)
 *     sub_14067BD84 @ 0x14067BD84 (sub_14067BD84.c)
 *     sub_14067C24C @ 0x14067C24C (sub_14067C24C.c)
 *     sub_14067C3A4 @ 0x14067C3A4 (sub_14067C3A4.c)
 *     sub_14067C45C @ 0x14067C45C (sub_14067C45C.c)
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 *     sub_14079B518 @ 0x14079B518 (sub_14079B518.c)
 */

__int64 __fastcall sub_14065A7E0(__int64 P)
{
  _PRIVILEGE_SET *v2; // rcx
  __int64 result; // rax

  sub_14067C45C();
  sub_140208994(P);
  sub_14067C3A4(P);
  sub_14079B518(P);
  sub_14067C24C(P);
  v2 = *(_PRIVILEGE_SET **)(P + 4792);
  if ( v2 )
    sub_14067BD84(v2);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(P + 4232), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return sub_1406BBAD8((PVOID)P);
  return result;
}
