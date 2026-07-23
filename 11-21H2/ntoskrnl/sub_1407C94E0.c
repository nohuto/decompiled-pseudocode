/*
 * XREFs of sub_1407C94E0 @ 0x1407C94E0
 * Callers:
 *     sub_1407C83F0 @ 0x1407C83F0 (sub_1407C83F0.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     RtlCompareUnicodeStrings @ 0x1407CD7A0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall sub_1407C94E0(
        ULONG_PTR BugCheckParameter3,
        int *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        int *a6,
        _DWORD *a7)
{
  unsigned __int16 *v9; // rsi
  int *v10; // r13
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int v14; // r12d
  unsigned int v15; // ebx
  __int64 v16; // rax
  unsigned __int64 v17; // r10
  const WCHAR *v18; // rdi
  unsigned __int16 v19; // r11
  unsigned __int16 *v20; // rbx
  unsigned __int16 v21; // si
  unsigned int v22; // ebp
  LONG v23; // esi
  unsigned int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // [rsp+30h] [rbp-58h] BYREF
  __int64 v31; // [rsp+38h] [rbp-50h]
  _QWORD v32[2]; // [rsp+40h] [rbp-48h] BYREF
  int v35; // [rsp+B0h] [rbp+28h]

  v32[0] = 0LL;
  v30 = 0LL;
  v9 = a3;
  v10 = a2;
  sub_1407C97FC(v32);
  sub_1407C97FC(&v30);
  v11 = *v10;
  v35 = *v10;
  if ( *v10 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v12 = sub_1406BF400(BugCheckParameter3, (unsigned int)v10[1], v32);
    else
      v12 = sub_1407C9820(BugCheckParameter3);
    v31 = v12;
    v13 = 0LL;
    v14 = 0;
    if ( a4 < v11 )
      v13 = a4;
    v15 = v11;
    if ( v11 )
    {
      while ( 1 )
      {
        v16 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
            ? sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v12 + 4 * v13), &v30)
            : sub_1407C9820(BugCheckParameter3);
        v17 = *(unsigned __int16 *)(v16 + 2);
        v18 = (const WCHAR *)(v16 + 20);
        if ( (*(_BYTE *)(v16 + 16) & 1) != 0 )
        {
          v19 = *v9 >> 1;
          v20 = (unsigned __int16 *)*((_QWORD *)v9 + 1);
          if ( v19 )
          {
            while ( (_WORD)v17 )
            {
              v21 = *v20++;
              v22 = *(unsigned __int8 *)v18;
              v18 = (const WCHAR *)((char *)v18 + 1);
              if ( v21 != (_WORD)v22 )
              {
                if ( v21 >= 0x61u )
                {
                  if ( v21 > 0x7Au )
                  {
                    v28 = sub_140347DB0();
                    v21 = sub_1403477B0(v28[154], v21);
                  }
                  else
                  {
                    v21 -= 32;
                  }
                }
                if ( v22 >= 0x61 )
                {
                  if ( v22 > 0x7A )
                  {
                    v29 = sub_140347DB0();
                    LOWORD(v22) = sub_1403477B0(v29[154], v22);
                  }
                  else
                  {
                    LOWORD(v22) = v22 - 32;
                  }
                }
                v23 = v21 - (unsigned __int16)v22;
                if ( v23 )
                  goto LABEL_18;
              }
              LOWORD(v17) = v17 - 1;
              if ( !--v19 )
                break;
            }
          }
          v23 = v19 - (unsigned __int16)v17;
LABEL_18:
          v15 = v35;
        }
        else
        {
          v23 = RtlCompareUnicodeStrings(*((PCWCH *)v9 + 1), (unsigned __int64)*v9 >> 1, v18, v17 >> 1, 1u);
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, &v30);
        else
          sub_1407C97C0(BugCheckParameter3, &v30);
        if ( !v23 )
          break;
        v9 = a3;
        v24 = v13 + 1;
        ++v14;
        v13 = 0LL;
        if ( v24 != v15 )
          v13 = v24;
        v12 = v31;
        if ( v14 >= v15 )
        {
          v10 = a2;
          goto LABEL_26;
        }
      }
      v25 = 0;
      v26 = v31;
      *a7 = *(_DWORD *)(v31 + 4 * v13);
      if ( a6 )
        *a6 = v13;
    }
    else
    {
LABEL_26:
      v25 = -1073741772;
      *a7 = -1;
      if ( a6 )
        *a6 = *v10;
      v26 = v31;
    }
    if ( v26 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, v32);
      else
        sub_1407C97C0(BugCheckParameter3, v32);
    }
    return v25;
  }
  else
  {
    *a7 = -1;
    if ( a6 )
      *a6 = 0;
    return 3221225524LL;
  }
}
