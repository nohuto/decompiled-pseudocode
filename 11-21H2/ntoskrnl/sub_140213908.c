/*
 * XREFs of sub_140213908 @ 0x140213908
 * Callers:
 *     sub_140214F98 @ 0x140214F98 (sub_140214F98.c)
 * Callees:
 *     sub_140213BD4 @ 0x140213BD4 (sub_140213BD4.c)
 *     sub_140215144 @ 0x140215144 (sub_140215144.c)
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_1403BEFA8 @ 0x1403BEFA8 (sub_1403BEFA8.c)
 *     sub_1403BF310 @ 0x1403BF310 (sub_1403BF310.c)
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

_QWORD *__fastcall sub_140213908(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  void *v4; // rax
  void *v5; // rbx
  bool v6; // bp
  int *v8; // rax
  int *v9; // rbx
  int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rcx
  _QWORD *v13; // rax
  SIZE_T NumberOfBytes; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(NumberOfBytes) = 0;
  v2 = (_QWORD *)sub_140213BD4(1413763922LL, 0LL, 0LL);
  if ( v2 || (v2 = (_QWORD *)sub_140213BD4(1413763928LL, 0LL, 0LL)) != 0LL )
  {
    v3 = *(v2 - 1);
    if ( v3 )
    {
      v4 = (void *)(a1
                  ? sub_1403BF3B8(*(v2 - 1), ((*(v2 - 1) & 0xFFFuLL) + 4131) >> 12, 1, 0, 4)
                  : MmMapIoSpaceEx(v3, 36LL, 516LL));
      v5 = v4;
      if ( v4 )
      {
        v6 = memcmp(v2, v4, 0x24uLL) == 0;
        if ( a1 )
          sub_1403BF310(v5, (((unsigned __int16)v5 & 0xFFFu) + 4131) >> 12, 0LL);
        else
          MmUnmapVideoDisplay(v5, 0x24uLL);
        if ( !v6 )
        {
          v8 = (int *)sub_140215144(a1, *(v2 - 1), 36, 0, 0LL, 0LL, 1, (__int64)&NumberOfBytes);
          v9 = v8;
          if ( v8 )
          {
            v10 = *v8;
            if ( v10 == 1413763922 || v10 == 1413763928 )
            {
              v11 = sub_1403BEFA8(a1, v9, *(v2 - 1));
              if ( a1 )
                sub_1403BF310(
                  v9,
                  (((unsigned __int16)v9 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12,
                  0LL);
              else
                MmUnmapVideoDisplay(v9, (unsigned int)NumberOfBytes);
              if ( v11 )
              {
                v12 = qword_140CE2210;
                v13 = (_QWORD *)(v11 - 24);
                if ( *(__int64 **)(qword_140CE2210 + 8) != &qword_140CE2210 )
                  __fastfail(3u);
                *v13 = qword_140CE2210;
                v2 = (_QWORD *)v11;
                v13[1] = &qword_140CE2210;
                *(_QWORD *)(v12 + 8) = v13;
                qword_140CE2210 = v11 - 24;
              }
            }
            else if ( a1 )
            {
              sub_1403BF310(
                v9,
                (((unsigned __int16)v9 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12,
                0LL);
            }
            else
            {
              MmUnmapVideoDisplay(v9, (unsigned int)NumberOfBytes);
            }
          }
        }
      }
    }
  }
  return v2;
}
