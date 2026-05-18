/*
 * XREFs of sub_18004D9DC @ 0x18004D9DC
 * Callers:
 *     sub_18004D9DC @ 0x18004D9DC (sub_18004D9DC.c)
 *     sub_18004E9F8 @ 0x18004E9F8 (sub_18004E9F8.c)
 *     sub_180050C00 @ 0x180050C00 (sub_180050C00.c)
 * Callees:
 *     sub_18004D9DC @ 0x18004D9DC (sub_18004D9DC.c)
 *     sub_18004DADC @ 0x18004DADC (sub_18004DADC.c)
 */

__int64 __fastcall sub_18004D9DC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18004DADC(v7, v6) )
  {
    sub_18004D9DC(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
