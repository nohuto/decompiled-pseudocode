/*
 * XREFs of sub_140266430 @ 0x140266430
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402693C8 @ 0x1402693C8 (sub_1402693C8.c)
 */

char __fastcall sub_140266430(int a1)
{
  unsigned __int64 v1; // rax
  _QWORD *v2; // r9
  unsigned __int64 v3; // r10
  __int64 v4; // r11
  unsigned __int64 v5; // rcx
  char result; // al
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax

  if ( a1 == 1 )
  {
    v7 = sub_1402693C8(6LL);
    v8 = v3;
    if ( v3 < 0x100000 )
      v8 = 0x100000LL;
    if ( v7 > v8 >> 12 && v3 + qword_140C4F0D8 >= qword_140C4F0D8 )
    {
      qword_140C4F0D8 += v3;
      goto LABEL_7;
    }
  }
  else
  {
    v1 = sub_1402693C8(5LL);
    v5 = v3;
    if ( v3 < 0x100000 )
      v5 = 0x100000LL;
    if ( v1 > v5 >> 12 && v3 + qword_140C4F0E0 >= qword_140C4F0E0 )
    {
      qword_140C4F0E0 += v3;
LABEL_7:
      result = 1;
      *v2 = v4 + v3;
      return result;
    }
  }
  return 0;
}
