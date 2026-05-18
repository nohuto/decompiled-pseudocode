/*
 * XREFs of sub_180027B70 @ 0x180027B70
 * Callers:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 *     sub_180028EE8 @ 0x180028EE8 (sub_180028EE8.c)
 *     sub_180054C80 @ 0x180054C80 (sub_180054C80.c)
 * Callees:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 */

__int64 __fastcall sub_180027B70(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_180027C24(v7, v6) )
  {
    sub_180027B70(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
