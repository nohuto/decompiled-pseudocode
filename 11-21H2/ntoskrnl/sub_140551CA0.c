/*
 * XREFs of sub_140551CA0 @ 0x140551CA0
 * Callers:
 *     sub_140B4EF40 @ 0x140B4EF40 (sub_140B4EF40.c)
 * Callees:
 *     sub_1405517A0 @ 0x1405517A0 (sub_1405517A0.c)
 *     sub_140551AA0 @ 0x140551AA0 (sub_140551AA0.c)
 */

void __fastcall sub_140551CA0(int a1)
{
  int v1; // ebx
  int v2; // ecx
  __int64 v3; // rdi

  v1 = 0;
  if ( byte_140C097BE )
  {
    if ( byte_140C54D4A )
    {
      if ( !dword_140C54D50 )
      {
        v2 = 18 * (dword_140C48610 + a1 * dword_140C48618);
        if ( v2 / 10000 > 0 )
        {
          v3 = (unsigned int)(v2 / 10000);
          do
          {
            sub_1405517A0();
            VidSolidColorFill(
              (unsigned int)(v1 + dword_140C4861C),
              (unsigned int)dword_140C48620,
              (unsigned int)(v1 + dword_140C4861C + 7),
              (unsigned int)(dword_140C48620 + 7),
              11);
            sub_140551AA0();
            v1 += 9;
            --v3;
          }
          while ( v3 );
        }
      }
    }
  }
}
