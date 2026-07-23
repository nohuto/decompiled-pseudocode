/*
 * XREFs of sub_140762A34 @ 0x140762A34
 * Callers:
 *     sub_1407628C0 @ 0x1407628C0 (sub_1407628C0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140762A34(int a1)
{
  __int64 *v1; // rdx
  char result; // al

  v1 = (__int64 *)qword_140C23030;
  result = 0;
  if ( (__int64 *)qword_140C23030 != &qword_140C23030 )
  {
    while ( !*((_BYTE *)v1 + a1 + 16) )
    {
      v1 = (__int64 *)*v1;
      if ( v1 == &qword_140C23030 )
        return result;
    }
    return 1;
  }
  return result;
}
