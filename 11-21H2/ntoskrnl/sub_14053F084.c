/*
 * XREFs of sub_14053F084 @ 0x14053F084
 * Callers:
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 * Callees:
 *     sub_1406B67A0 @ 0x1406B67A0 (sub_1406B67A0.c)
 *     sub_1407CA920 @ 0x1407CA920 (sub_1407CA920.c)
 */

bool __fastcall sub_14053F084(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( !byte_140C097BD || (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 || !(unsigned __int8)sub_1407CA920() )
    return 0;
  LOBYTE(v2) = *((_BYTE *)KeGetCurrentThread() + 562);
  return (unsigned __int8)sub_1406B67A0(v2, v1, 0LL) == 0;
}
