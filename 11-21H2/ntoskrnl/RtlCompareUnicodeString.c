/*
 * XREFs of RtlCompareUnicodeString @ 0x1407CAA80
 * Callers:
 *     sub_140218F84 @ 0x140218F84 (sub_140218F84.c)
 *     sub_14021D7F0 @ 0x14021D7F0 (sub_14021D7F0.c)
 *     sub_140251458 @ 0x140251458 (sub_140251458.c)
 *     sub_14025D250 @ 0x14025D250 (sub_14025D250.c)
 *     sub_14025E12C @ 0x14025E12C (sub_14025E12C.c)
 *     sub_1403BA6E0 @ 0x1403BA6E0 (sub_1403BA6E0.c)
 *     sub_140564E78 @ 0x140564E78 (sub_140564E78.c)
 *     sub_140660EF4 @ 0x140660EF4 (sub_140660EF4.c)
 *     sub_14069B700 @ 0x14069B700 (sub_14069B700.c)
 *     sub_1406BBFA0 @ 0x1406BBFA0 (sub_1406BBFA0.c)
 *     sub_1406C2EE8 @ 0x1406C2EE8 (sub_1406C2EE8.c)
 *     sub_1406DAD90 @ 0x1406DAD90 (sub_1406DAD90.c)
 *     sub_1406E0600 @ 0x1406E0600 (sub_1406E0600.c)
 *     sub_1406E65D0 @ 0x1406E65D0 (sub_1406E65D0.c)
 *     sub_1406EB634 @ 0x1406EB634 (sub_1406EB634.c)
 *     sub_140722280 @ 0x140722280 (sub_140722280.c)
 *     sub_140754108 @ 0x140754108 (sub_140754108.c)
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     sub_1407C4180 @ 0x1407C4180 (sub_1407C4180.c)
 *     sub_1407C4460 @ 0x1407C4460 (sub_1407C4460.c)
 *     sub_1407C5F80 @ 0x1407C5F80 (sub_1407C5F80.c)
 *     sub_140804350 @ 0x140804350 (sub_140804350.c)
 *     sub_140836AA4 @ 0x140836AA4 (sub_140836AA4.c)
 *     sub_140858D04 @ 0x140858D04 (sub_140858D04.c)
 *     sub_140861700 @ 0x140861700 (sub_140861700.c)
 *     sub_140882966 @ 0x140882966 (sub_140882966.c)
 *     sub_140882B96 @ 0x140882B96 (sub_140882B96.c)
 *     sub_140921EA0 @ 0x140921EA0 (sub_140921EA0.c)
 *     sub_14094B864 @ 0x14094B864 (sub_14094B864.c)
 *     sub_14095E13C @ 0x14095E13C (sub_14095E13C.c)
 *     sub_1409C9C64 @ 0x1409C9C64 (sub_1409C9C64.c)
 *     sub_1409DC2AC @ 0x1409DC2AC (sub_1409DC2AC.c)
 *     sub_140A031C4 @ 0x140A031C4 (sub_140A031C4.c)
 *     sub_140A032A0 @ 0x140A032A0 (sub_140A032A0.c)
 *     sub_140AFACD8 @ 0x140AFACD8 (sub_140AFACD8.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 *     sub_140B17BA4 @ 0x140B17BA4 (sub_140B17BA4.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

LONG __stdcall RtlCompareUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // rbx
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  char v7; // r8
  unsigned __int16 *v8; // r10
  unsigned __int64 v9; // rax
  unsigned __int16 *v10; // rdi
  signed __int64 v11; // rbx
  int v13; // r8d
  unsigned __int64 v14; // r11
  int v15; // ecx
  int v16; // eax

  Buffer = String2->Buffer;
  v4 = (unsigned __int64)String2->Length >> 1;
  v5 = (unsigned __int64)String1->Length >> 1;
  v6 = *((_QWORD *)sub_140347DB0() + 154);
  v9 = v5;
  if ( v5 > v4 )
    v9 = v4;
  v10 = &v8[v9];
  if ( v8 >= v10 )
    return v5 - v4;
  v11 = (char *)Buffer - (char *)v8;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( *v8 != *(unsigned __int16 *)((char *)v8 + v11) )
      {
        v13 = sub_1403477B0(v6, *v8);
        if ( (unsigned int)v14 >= 0x61 )
        {
          if ( (unsigned int)v14 > 0x7A )
          {
            if ( v6 )
            {
              if ( (unsigned __int16)v14 >= 0xC0u )
                LOWORD(v14) = *(_WORD *)(v6
                                       + 2
                                       * ((v14 & 0xF)
                                        + *(unsigned __int16 *)(v6
                                                              + 2LL
                                                              * (((unsigned __int8)v14 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(v6 + 2 * (v14 >> 8))))))
                            + v14;
            }
          }
          else
          {
            LOWORD(v14) = v14 - 32;
          }
        }
        if ( (_WORD)v13 != (_WORD)v14 )
          break;
      }
      if ( ++v8 >= v10 )
        return v5 - v4;
    }
    v15 = (unsigned __int16)v14;
    v16 = v13;
  }
  else
  {
    while ( 1 )
    {
      v16 = *v8;
      v15 = *(unsigned __int16 *)((char *)v8 + v11);
      if ( (_WORD)v16 != (_WORD)v15 )
        break;
      if ( ++v8 >= v10 )
        return v5 - v4;
    }
  }
  return v16 - v15;
}
