/*
 * XREFs of sub_140502630 @ 0x140502630
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403D8274 @ 0x1403D8274 (sub_1403D8274.c)
 */

int __fastcall sub_140502630(unsigned __int8 **a1)
{
  int v1; // edx
  __int64 *v2; // rax

  if ( byte_140D01580 )
    goto LABEL_6;
  v1 = **a1 - 46;
  if ( **a1 == 46 )
    v1 = (*a1)[1];
  if ( v1 )
  {
LABEL_6:
    byte_140D01580 = 1;
    qword_140C54D18 = 0LL;
    LODWORD(v2) = sub_1403D8274(1);
  }
  else
  {
    v2 = &qword_140037808;
    *a1 = (unsigned __int8 *)&qword_140037808;
  }
  return (int)v2;
}
