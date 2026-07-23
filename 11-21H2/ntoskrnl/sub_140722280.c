/*
 * XREFs of sub_140722280 @ 0x140722280
 * Callers:
 *     sub_14065B030 @ 0x14065B030 (sub_14065B030.c)
 *     sub_1407221B0 @ 0x1407221B0 (sub_1407221B0.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_14065C57C @ 0x14065C57C (sub_14065C57C.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C45A0 @ 0x1407C45A0 (sub_1407C45A0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall sub_140722280(
        ULONG_PTR BugCheckParameter3,
        unsigned int *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  unsigned int v9; // edi
  unsigned int v11; // r15d
  unsigned int *v12; // r12
  int v13; // esi
  __int64 v14; // rax
  unsigned __int16 v15; // r10
  wchar_t *v16; // rbx
  char v17; // al
  unsigned __int16 v18; // r11
  unsigned __int16 *v19; // rdi
  unsigned __int16 v20; // si
  unsigned int v21; // ebp
  int v22; // esi
  __int64 result; // rax
  int v24; // eax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-50h] BYREF
  int v31; // [rsp+A0h] [rbp+28h]

  v27 = 0LL;
  String2 = 0LL;
  v9 = a3;
  sub_1407C97FC(&v27);
  if ( v9 )
  {
    v11 = 0;
    v12 = a2;
    v13 = a5 & 0x10000;
    v31 = a5 & 0x10000;
    while ( 1 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v14 = sub_1406BF400(BugCheckParameter3, *v12, &v27);
      else
        v14 = sub_1407C9820(BugCheckParameter3);
      v15 = *(_WORD *)(v14 + 2);
      v16 = (wchar_t *)(v14 + 20);
      v17 = *(_BYTE *)(v14 + 16);
      String2.Buffer = v16;
      String2.Length = v15;
      String2.MaximumLength = v15;
      if ( (v17 & 1) != 0 )
      {
        if ( v13 )
        {
          v24 = sub_14065C57C(*((unsigned __int8 **)a4 + 1), *a4, (unsigned __int8 *)v16, v15);
          goto LABEL_35;
        }
        v18 = *a4 >> 1;
        v19 = (unsigned __int16 *)*((_QWORD *)a4 + 1);
        if ( v18 )
        {
          while ( v15 )
          {
            v20 = *v19++;
            v21 = *(unsigned __int8 *)v16;
            v16 = (wchar_t *)((char *)v16 + 1);
            if ( v20 != (_WORD)v21 )
            {
              if ( v20 >= 0x61u )
              {
                if ( v20 > 0x7Au )
                {
                  v25 = sub_140347DB0();
                  v20 = sub_1403477B0(v25[154], v20);
                }
                else
                {
                  v20 -= 32;
                }
              }
              if ( v21 >= 0x61 )
              {
                if ( v21 > 0x7A )
                {
                  v26 = sub_140347DB0();
                  LOWORD(v21) = sub_1403477B0(v26[154], v21);
                }
                else
                {
                  LOWORD(v21) = v21 - 32;
                }
              }
              v22 = v20 - (unsigned __int16)v21;
              if ( v22 )
                goto LABEL_15;
            }
            --v15;
            if ( !--v18 )
              break;
          }
        }
        v22 = v18 - v15;
LABEL_15:
        v9 = a3;
      }
      else
      {
        if ( !v13 )
        {
          v24 = RtlCompareUnicodeString((PCUNICODE_STRING)a4, &String2, 1u);
LABEL_35:
          v22 = v24;
          goto LABEL_16;
        }
        v22 = -(int)((__int64 (__fastcall *)(UNICODE_STRING *, _QWORD, _QWORD, _QWORD, __int64))sub_1407C45A0)(
                      &String2,
                      *((_QWORD *)a4 + 1),
                      *a4,
                      0LL,
                      v27);
      }
LABEL_16:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v27);
      else
        sub_1407C97C0(BugCheckParameter3, &v27);
      if ( !v22 )
      {
        result = 0LL;
        *a7 = a2[v11];
        if ( a6 )
          *a6 = v11;
        return result;
      }
      v13 = v31;
      ++v11;
      ++v12;
      if ( v11 >= v9 )
      {
        *a7 = -1;
        if ( a6 )
          *a6 = v9;
        return 3221225524LL;
      }
    }
  }
  *a7 = -1;
  if ( a6 )
    *a6 = 0;
  return 3221225524LL;
}
