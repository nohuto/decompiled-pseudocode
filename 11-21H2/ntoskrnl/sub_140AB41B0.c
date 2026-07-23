/*
 * XREFs of sub_140AB41B0 @ 0x140AB41B0
 * Callers:
 *     sub_14020A48C @ 0x14020A48C (sub_14020A48C.c)
 *     sub_14065A848 @ 0x14065A848 (sub_14065A848.c)
 *     sub_14068B3E0 @ 0x14068B3E0 (sub_14068B3E0.c)
 *     sub_14068E2EC @ 0x14068E2EC (sub_14068E2EC.c)
 *     sub_14068EE60 @ 0x14068EE60 (sub_14068EE60.c)
 *     sub_14068F1F8 @ 0x14068F1F8 (sub_14068F1F8.c)
 *     sub_14068F7C4 @ 0x14068F7C4 (sub_14068F7C4.c)
 *     sub_14091A344 @ 0x14091A344 (sub_14091A344.c)
 *     sub_14091D508 @ 0x14091D508 (sub_14091D508.c)
 *     sub_1409246D8 @ 0x1409246D8 (sub_1409246D8.c)
 *     sub_140924C14 @ 0x140924C14 (sub_140924C14.c)
 *     sub_140925768 @ 0x140925768 (sub_140925768.c)
 *     sub_140AB4C18 @ 0x140AB4C18 (sub_140AB4C18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AB41B0(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  LODWORD(result) = 0;
  v2 = 127LL;
  do
  {
    result = *a1++ ^ (unsigned int)result;
    --v2;
  }
  while ( v2 );
  if ( (_DWORD)result == -1 )
    return 4294967294LL;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
