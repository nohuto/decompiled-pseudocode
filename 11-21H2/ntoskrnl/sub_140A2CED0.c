/*
 * XREFs of sub_140A2CED0 @ 0x140A2CED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14077A710 @ 0x14077A710 (sub_14077A710.c)
 */

__int64 __fastcall sub_140A2CED0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r10

  result = sub_14077A710(a3);
  if ( (_DWORD)result )
    return sub_14042A5E0(v5, v4);
  return result;
}
