/*
 * XREFs of sub_14051E084 @ 0x14051E084
 * Callers:
 *     HalStartNextProcessor @ 0x1403B2F30 (HalStartNextProcessor.c)
 *     sub_140A505D4 @ 0x140A505D4 (sub_140A505D4.c)
 *     sub_140A54E70 @ 0x140A54E70 (sub_140A54E70.c)
 * Callees:
 *     sub_140A6350C @ 0x140A6350C (sub_140A6350C.c)
 */

__int64 __fastcall sub_14051E084(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  int i; // esi
  ULONG_PTR v4; // rbx

  result = qword_140C4E210;
  v2 = 0;
  for ( i = *(_DWORD *)(((unsigned __int64)a1 << 6) + qword_140C4E210 + 8); v2 < (unsigned int)dword_140C54A90; ++v2 )
  {
    v4 = qword_140C4E210 + ((unsigned __int64)v2 << 6);
    if ( *(_BYTE *)(v4 + 56) && *(_DWORD *)(v4 + 60) == i )
    {
      if ( byte_140C4AD7C )
        result = sub_140A6350C(v2, *(unsigned int *)(v4 + 8));
      *(_WORD *)(v4 + 12) = 257;
    }
  }
  return result;
}
