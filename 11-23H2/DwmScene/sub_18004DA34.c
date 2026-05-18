/*
 * XREFs of sub_18004DA34 @ 0x18004DA34
 * Callers:
 *     sub_18004D8C4 @ 0x18004D8C4 (sub_18004D8C4.c)
 *     sub_18004DA34 @ 0x18004DA34 (sub_18004DA34.c)
 * Callees:
 *     sub_18004DA34 @ 0x18004DA34 (sub_18004DA34.c)
 *     sub_18004DB08 @ 0x18004DB08 (sub_18004DB08.c)
 */

__int64 __fastcall sub_18004DA34(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18004DB08(v7, v6) )
  {
    sub_18004DA34(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
