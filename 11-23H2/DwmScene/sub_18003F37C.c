/*
 * XREFs of sub_18003F37C @ 0x18003F37C
 * Callers:
 *     sub_18003F37C @ 0x18003F37C (sub_18003F37C.c)
 *     sub_18003FF04 @ 0x18003FF04 (sub_18003FF04.c)
 * Callees:
 *     sub_18003F37C @ 0x18003F37C (sub_18003F37C.c)
 *     sub_18003F5D8 @ 0x18003F5D8 (sub_18003F5D8.c)
 */

__int64 __fastcall sub_18003F37C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18003F5D8(v7, v6) )
  {
    sub_18003F37C(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
