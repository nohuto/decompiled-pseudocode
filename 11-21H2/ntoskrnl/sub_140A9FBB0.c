/*
 * XREFs of sub_140A9FBB0 @ 0x140A9FBB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 *     sub_140A9DFBC @ 0x140A9DFBC (sub_140A9DFBC.c)
 */

__int64 __fastcall sub_140A9FBB0(__int64 a1, __int64 a2)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r8

  if ( !a1 && (unsigned int)sub_140A96B0C(0) )
    return 0LL;
  v5 = sub_14042A5E0(a1, a2);
  v6 = v5;
  if ( KeGetCurrentIrql() <= 2u )
  {
    v7 = 48LL;
    if ( v5 )
      v7 = *(__int16 *)(v5 + 8);
    sub_140A9DFBC(v5, 1818520918, v7, 0);
  }
  return v6;
}
