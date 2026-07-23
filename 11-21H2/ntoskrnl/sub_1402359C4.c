/*
 * XREFs of sub_1402359C4 @ 0x1402359C4
 * Callers:
 *     sub_140267060 @ 0x140267060 (sub_140267060.c)
 *     sub_14026A28C @ 0x14026A28C (sub_14026A28C.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     sub_14027D03C @ 0x14027D03C (sub_14027D03C.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_1405ADCD4 @ 0x1405ADCD4 (sub_1405ADCD4.c)
 *     sub_1405B05D0 @ 0x1405B05D0 (sub_1405B05D0.c)
 *     sub_1405B2A90 @ 0x1405B2A90 (sub_1405B2A90.c)
 *     sub_140B088E4 @ 0x140B088E4 (sub_140B088E4.c)
 *     sub_140B08B40 @ 0x140B08B40 (sub_140B08B40.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140235AAC @ 0x140235AAC (sub_140235AAC.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140424F50 @ 0x140424F50 (sub_140424F50.c)
 */

__int64 __fastcall sub_1402359C4(ULONG_PTR BugCheckParameter2, char a2, int a3)
{
  ULONG_PTR v6; // r14
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rdi
  char v10; // cl
  __int64 result; // rax
  int v12; // eax
  __int64 v13; // rbx
  int v14; // r15d
  int v15; // eax
  __int64 v16; // r11
  bool v17; // zf

  v6 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v7 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v8 = *(unsigned __int8 *)(v6 + 34) >> 6;
  if ( (a2 & 2) == 0 )
  {
    v8 = dword_140C507D8[4 * v7 + a3];
    if ( v8 != (_DWORD)v7 )
      sub_140267E78(48 * BugCheckParameter2 - 0x220000000000LL, v8, 0LL);
  }
  v9 = 0LL;
  v10 = -2;
  if ( !*((_QWORD *)KeGetCurrentPrcb() + 4272) )
    v10 = a2;
  if ( (v10 & 1) != 0 )
  {
    v9 = sub_1403095B0(&qword_140C534C0, 1LL);
    if ( v9 )
    {
      v12 = sub_14026C61C(4LL, v6);
      v13 = sub_1402CBD10(v9, BugCheckParameter2, v12 | 0xA0000000);
      v14 = 0;
      v15 = sub_140317A80(v9);
      v16 = 4096LL;
      if ( v15 )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v14 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
            v17 = (v13 & 1) == 0;
            goto LABEL_21;
          }
        }
        else if ( ((unsigned int)v16 & *(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL)) != 0 )
        {
          v17 = (v13 & 1) == 0;
LABEL_21:
          if ( !v17 )
            v13 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v9 = v13;
      if ( v14 )
        sub_1402294F0(v9, v13);
      sub_140424F50(v9 << 25 >> 16, v16);
      result = sub_1402BB6D0(&qword_140C534C0, v9, 1LL);
      goto LABEL_10;
    }
  }
  if ( *((_QWORD *)KeGetCurrentPrcb() + 4272) )
    v9 = 1LL;
  result = sub_140235AAC(BugCheckParameter2);
LABEL_10:
  if ( v8 != (_DWORD)v7 && v8 != a3 )
  {
    if ( v9 )
      return sub_140267E78(v6, (unsigned int)v7, 0LL);
  }
  return result;
}
