/*
 * XREFs of sub_1403D8CD0 @ 0x1403D8CD0
 * Callers:
 *     sub_1407FD448 @ 0x1407FD448 (sub_1407FD448.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403D8CD0(unsigned int a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( a1 < 0x5F )
  {
    do
      v1 = (unsigned int)(v1 + 1);
    while ( a1 < *((unsigned __int8 *)&qword_140027D80[1] + v1) );
  }
  return *((unsigned __int8 *)qword_140027D80 + v1);
}
