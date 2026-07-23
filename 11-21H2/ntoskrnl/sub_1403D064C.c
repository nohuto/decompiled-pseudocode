/*
 * XREFs of sub_1403D064C @ 0x1403D064C
 * Callers:
 *     sub_14084CCD8 @ 0x14084CCD8 (sub_14084CCD8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 */

__int64 sub_1403D064C()
{
  unsigned __int16 v0; // bx
  const WCHAR **v1; // r14
  unsigned int v2; // edi
  _QWORD *v3; // rsi
  const WCHAR *v4; // rdx

  v0 = 0;
  word_140C0E8E0 = 0;
  v1 = (const WCHAR **)off_140009400;
  v2 = 0;
  v3 = &unk_140C0E580;
  do
  {
    v4 = *v1;
    v3[2] = (int)(v2 + 2);
    RtlInitUnicodeString((PUNICODE_STRING)((char *)&unk_140C0E580 + 24 * v2), v4);
    if ( v0 < *(_WORD *)v3 )
    {
      v0 = *(_WORD *)v3;
      word_140C0E8E0 = *(_WORD *)v3;
    }
    ++v2;
    ++v1;
    v3 += 3;
  }
  while ( v2 < 0x23 );
  return 0LL;
}
