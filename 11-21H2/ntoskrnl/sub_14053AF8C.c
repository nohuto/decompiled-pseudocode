/*
 * XREFs of sub_14053AF8C @ 0x14053AF8C
 * Callers:
 *     sub_140328180 @ 0x140328180 (sub_140328180.c)
 * Callees:
 *     sub_14084D698 @ 0x14084D698 (sub_14084D698.c)
 */

__int64 __fastcall sub_14053AF8C(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  __int64 *v6; // r14
  unsigned int v7; // ebx
  unsigned int i; // edi

  v2 = *(_DWORD *)(a1 + 1184);
  result = (unsigned int)dword_140C49AC8;
  if ( v2 < dword_140C49AC8 )
  {
    v6 = (__int64 *)(a2 + 16);
    v7 = dword_140C49AC8 - v2;
    if ( dword_140C49AC8 - v2 <= dword_140C49AC8 )
    {
      for ( i = 0; i < v7; v6 += 5 )
      {
        if ( i >= 0xCCC )
          break;
        result = sub_14084D698(*(_QWORD *)(a1 + 8));
        *v6 = result;
        if ( !result )
          break;
        ++*(_DWORD *)(a2 + 4);
        ++i;
      }
    }
  }
  return result;
}
