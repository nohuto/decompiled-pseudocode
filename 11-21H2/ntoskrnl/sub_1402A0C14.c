/*
 * XREFs of sub_1402A0C14 @ 0x1402A0C14
 * Callers:
 *     sub_1402A0A4C @ 0x1402A0A4C (sub_1402A0A4C.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_14056AAA4 @ 0x14056AAA4 (sub_14056AAA4.c)
 */

unsigned int *__fastcall sub_1402A0C14(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  __int64 v9; // r15
  unsigned int v10; // esi
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 i; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  unsigned int *result; // rax
  int v21; // ebx

  v9 = 0LL;
  v10 = 0;
  v11 = a3;
  v12 = 0;
  for ( i = *(_QWORD *)(a1 + 168);
        v10 < a4;
        v11 = (unsigned int)dword_140D105E0[64 * v21 + (unsigned int)sub_14056AAA4(i, a5)] )
  {
    v16 = sub_140348800(v11);
    v17 = *(_QWORD *)(v16 + 34928);
    if ( !v17 )
      v17 = *(_QWORD *)(v16 + 200);
    i &= ~v17;
    v18 = v10 + 1;
    v19 = a2 & v17;
    if ( !v19 )
      v18 = v12;
    v9 |= v19;
    v12 = v18;
    v10 += (unsigned int)((0x101010101010101LL
                         * ((((v19 - ((v19 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v19 - ((v19 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                           + ((((v19 - ((v19 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v19 - ((v19 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    if ( !i )
      break;
    v21 = *(unsigned __int16 *)(a1 + 136);
  }
  *a6 = v9;
  *a7 = v10;
  result = a8;
  *a8 = v12;
  return result;
}
