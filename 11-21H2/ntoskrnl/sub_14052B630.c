/*
 * XREFs of sub_14052B630 @ 0x14052B630
 * Callers:
 *     sub_14052B780 @ 0x14052B780 (sub_14052B780.c)
 *     sub_14052B860 @ 0x14052B860 (sub_14052B860.c)
 *     sub_140A63BC0 @ 0x140A63BC0 (sub_140A63BC0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14052B630(unsigned int a1, char a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 result; // rax

  v5 = a1;
  if ( off_140C02520 == &off_1400032A0 )
    v8 = qword_140C4D0A8;
  else
    v8 = qword_140C4D0A8 + 8LL * (unsigned int)(dword_140C4D044 * HIDWORD(KeGetPcr()[1].LockArray));
  v9 = 0LL;
  if ( a1 < dword_140C49EA4 )
  {
    _mm_lfence();
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8LL * a1) + 16LL) + 8LL) )
    {
      v10 = a1 + 1;
      if ( !a2 )
      {
        v13 = *((_DWORD *)&xmmword_140C49FA0 + v10);
        LODWORD(v14) = 0;
        LODWORD(v15) = 0;
        v12 = v5;
LABEL_11:
        __writemsr(v13, __PAIR64__(v15, v14));
        goto LABEL_12;
      }
      _mm_lfence();
      v11 = **(_QWORD **)(*(_QWORD *)(v8 + 8LL * (a1 + 1)) + 16LL) | 0x400000LL;
      __writemsr(*((_DWORD *)&xmmword_140C49EC0 + v10), (unsigned __int16)-(a5 != 0));
      __writemsr(*((_DWORD *)&xmmword_140C49FA0 + v10), v11);
      v12 = a1;
LABEL_10:
      v13 = *((_DWORD *)&xmmword_140C49EC0 + v12);
      v14 = -(a3 & -(__int64)(a5 != 0));
      v15 = HIDWORD(v14);
      v9 = a4 | (a5 != 0 ? 5242880LL : 0x400000LL);
      goto LABEL_11;
    }
  }
  v12 = a1;
  if ( a2 )
    goto LABEL_10;
LABEL_12:
  result = v9;
  __writemsr(*((_DWORD *)&xmmword_140C49FA0 + v12), v9);
  return result;
}
