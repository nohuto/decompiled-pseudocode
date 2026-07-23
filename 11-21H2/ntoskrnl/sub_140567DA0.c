/*
 * XREFs of sub_140567DA0 @ 0x140567DA0
 * Callers:
 *     sub_140567630 @ 0x140567630 (sub_140567630.c)
 * Callees:
 *     sub_1403D7ED0 @ 0x1403D7ED0 (sub_1403D7ED0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140567038 @ 0x140567038 (sub_140567038.c)
 *     sub_1405682F4 @ 0x1405682F4 (sub_1405682F4.c)
 */

char sub_140567DA0()
{
  char result; // al
  PVOID *v1; // rbx
  int v2; // [rsp+90h] [rbp+8h]
  PVOID *v3; // [rsp+98h] [rbp+10h] BYREF
  PVOID *v4; // [rsp+A0h] [rbp+18h]
  PVOID *v5; // [rsp+A8h] [rbp+20h]

  result = 0;
  v2 = 0;
  v5 = &qword_140C2B810;
  v1 = (PVOID *)qword_140C2B810;
  if ( qword_140C2B810 && qword_140C2B818 )
  {
    v3 = &qword_140C2B810;
    while ( 1 )
    {
      v4 = v1;
      if ( v1 == &qword_140C2B810 )
        break;
      result = sub_140567038((__int64)v1, 7, &v3);
      if ( result )
      {
        result = sub_14042A5E0(7LL, v1);
        *((_BYTE *)v1 + 44) = 4;
      }
      else if ( !v3 )
      {
        return result;
      }
      v1 = (PVOID *)*v1;
    }
  }
  return result;
}
