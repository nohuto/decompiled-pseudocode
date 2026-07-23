/*
 * XREFs of sub_14030D400 @ 0x14030D400
 * Callers:
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_1403747E4 @ 0x1403747E4 (sub_1403747E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14030D400(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r9d
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // r11
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx

  if ( (*(_DWORD *)a1 & 0x800) != 0 )
  {
    *a2 = 0LL;
    a2[1] = 0xFFFFF67FFFFFFFFFuLL;
    a2[2] = 0xFFFFF70000000000uLL;
    result = 2LL;
    a2[3] = -1LL;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = 1;
    switch ( *(_BYTE *)(v2 + 184) & 7 )
    {
      case 0:
        *a2 = 0LL;
        a2[1] = 0x7FFFFFFFFFFFLL;
        a2[2] = qword_140C51BE8;
        v4 = qword_140C51BF8;
        if ( !qword_140C51BF8 )
        {
          v4 = 0x10000000LL;
          v6 = 0x4000000LL;
          v7 = 0;
          do
          {
            v8 = 1 - v7;
            v9 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
            ++v7;
            qword_140C51C00[v8] = v9;
            v10 = (v6 >> 6) + ((v6 & 0x3F) != 0);
            v6 >>= 9;
            v4 = v9 + 8 * v10;
          }
          while ( v7 < 2 );
          qword_140C51BF8 = v4;
        }
        v3 = 2;
        a2[3] = qword_140C51BE8 - 1 + v4;
        return v3;
      case 1:
        *a2 = qword_140C50630;
        a2[1] = qword_140C50630 + 0x7FFFFFFFFFLL;
        return 1LL;
      case 2:
        *a2 = qword_140C51A60;
        result = 1LL;
        a2[1] = qword_140C51A60 - 1 + (qword_140C51A40 << 21);
        break;
      case 3:
        *a2 = qword_140C51A18;
        result = 1LL;
        a2[1] = qword_140C51A18 - 1 + (qword_140C519F8 << 21);
        break;
      case 4:
        *a2 = qword_140C51988;
        result = 1LL;
        a2[1] = qword_140C51988 - 1 + (qword_140C51968 << 21);
        break;
      case 6:
        *a2 = qword_140C518B0;
        result = 1LL;
        a2[1] = qword_140C518B0 - 1 + (qword_140C51890 << 21);
        break;
      default:
        return v3;
    }
  }
  return result;
}
