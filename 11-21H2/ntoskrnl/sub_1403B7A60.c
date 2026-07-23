/*
 * XREFs of sub_1403B7A60 @ 0x1403B7A60
 * Callers:
 *     sub_1403D981C @ 0x1403D981C (sub_1403D981C.c)
 *     sub_140592964 @ 0x140592964 (sub_140592964.c)
 *     sub_140AF4DB0 @ 0x140AF4DB0 (sub_140AF4DB0.c)
 * Callees:
 *     <none>
 */

__int64 sub_1403B7A60()
{
  unsigned int v0; // ecx
  int *v1; // rdx
  __int64 v2; // r8
  int v3; // eax

  v0 = dword_140C51E60;
  if ( !dword_140C51E60 )
  {
    v1 = dword_140C507C0;
    v2 = 3LL;
    do
    {
      v3 = *v1++;
      v0 += v3 << 6;
      --v2;
    }
    while ( v2 );
    v0 *= (unsigned __int16)word_140D05000;
    dword_140C51E60 = v0;
  }
  return v0;
}
