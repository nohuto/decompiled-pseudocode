/*
 * XREFs of ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18001F694
 * Callers:
 *     ??$_Hash_array_representation@D@std@@YA_KQEBD_K@Z @ 0x18001E9A0 (--$_Hash_array_representation@D@std@@YA_KQEBD_K@Z.c)
 *     ??$_Hash_array_representation@_W@std@@YA_KQEB_W_K@Z @ 0x18001E9B4 (--$_Hash_array_representation@_W@std@@YA_KQEB_W_K@Z.c)
 *     ??$_Fnv1a_append_value@_K@std@@YA_K_KAEB_K@Z @ 0x18003F4E0 (--$_Fnv1a_append_value@_K@std@@YA_K_KAEB_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Fnv1a_append_bytes(__int64 a1, const unsigned __int8 *const a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 i; // rcx
  __int64 v5; // rax

  v3 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v3 < a3; i = 0x100000001B3LL * (v5 ^ i) )
    v5 = a2[v3++];
  return i;
}
