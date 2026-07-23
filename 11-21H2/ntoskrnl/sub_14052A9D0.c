/*
 * XREFs of sub_14052A9D0 @ 0x14052A9D0
 * Callers:
 *     sub_140258B28 @ 0x140258B28 (sub_140258B28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14052A9D0(__int64 a1, unsigned int *a2, _DWORD *a3, char a4)
{
  unsigned __int64 v5; // rax

  if ( a4 )
  {
    *a3 = 6;
    a3[2] = (unsigned __int16)(*a2 >> 4);
    a3[3] = 1 << (*(_BYTE *)a2 & 0xF);
  }
  else
  {
    if ( *a3 != 6 )
      return 3221225659LL;
    v5 = (unsigned int)(a3[3] - 1) - (((unsigned __int64)(unsigned int)(a3[3] - 1) >> 1) & 0x5555555555555555LL);
    *a2 = (16 * a3[2]) | ((unsigned int)((0x101010101010101LL
                                        * (((v5 & 0x3333333333333333LL)
                                          + ((v5 >> 2) & 0x3333333333333333LL)
                                          + (((v5 & 0x3333333333333333LL) + ((v5 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
  }
  return 0LL;
}
