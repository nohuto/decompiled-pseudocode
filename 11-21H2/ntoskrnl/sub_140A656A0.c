/*
 * XREFs of sub_140A656A0 @ 0x140A656A0
 * Callers:
 *     sub_140A66EB4 @ 0x140A66EB4 (sub_140A66EB4.c)
 * Callees:
 *     sub_1403D7ED0 @ 0x1403D7ED0 (sub_1403D7ED0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140567038 @ 0x140567038 (sub_140567038.c)
 *     sub_1405682F4 @ 0x1405682F4 (sub_1405682F4.c)
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 */

char sub_140A656A0()
{
  PVOID *v0; // rbx
  char result; // al
  int v2; // [rsp+B0h] [rbp+40h]
  PVOID *v3; // [rsp+B8h] [rbp+48h] BYREF

  v0 = (PVOID *)qword_140C2B810;
  result = 0;
  v2 = 0;
  if ( qword_140C2B810 && qword_140C2B818 )
  {
    v3 = &qword_140C2B810;
    while ( v0 != &qword_140C2B810 )
    {
      result = sub_140567038((__int64)v0, 7, &v3);
      if ( result )
      {
        result = sub_14042A5E0(7LL, v0);
      }
      else if ( !v3 )
      {
        return result;
      }
      v0 = (PVOID *)*v0;
    }
  }
  return result;
}
