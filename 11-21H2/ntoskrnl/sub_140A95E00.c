/*
 * XREFs of sub_140A95E00 @ 0x140A95E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A98420 @ 0x140A98420 (sub_140A98420.c)
 */

__int64 __fastcall sub_140A95E00(__int64 a1, __int64 a2)
{
  char v2; // bl
  int v3; // edi
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  v3 = a1;
  sub_14042A5E0(a1, a2);
  result = sub_140A98420(v3);
  if ( v2 )
    return sub_140A97900(v3, retaddr);
  return result;
}
