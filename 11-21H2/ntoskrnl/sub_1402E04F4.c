/*
 * XREFs of sub_1402E04F4 @ 0x1402E04F4
 * Callers:
 *     sub_1406D0858 @ 0x1406D0858 (sub_1406D0858.c)
 *     sub_14078600C @ 0x14078600C (sub_14078600C.c)
 *     sub_14078A748 @ 0x14078A748 (sub_14078A748.c)
 *     sub_14094A25C @ 0x14094A25C (sub_14094A25C.c)
 *     sub_1409B6A58 @ 0x1409B6A58 (sub_1409B6A58.c)
 *     sub_140A30DE4 @ 0x140A30DE4 (sub_140A30DE4.c)
 *     sub_140A314B0 @ 0x140A314B0 (sub_140A314B0.c)
 * Callees:
 *     sub_1402E0620 @ 0x1402E0620 (sub_1402E0620.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14055F3E4 @ 0x14055F3E4 (sub_14055F3E4.c)
 */

__int64 __fastcall sub_1402E04F4(_WORD *a1, unsigned __int64 a2, const WCHAR *a3, _QWORD *a4, _QWORD *a5, int a6)
{
  int v6; // r15d
  unsigned __int64 v8; // rdi
  int v11; // ebx
  _WORD *v12; // rbp
  const WCHAR *v13; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  _WORD *v17; // [rsp+78h] [rbp+10h] BYREF

  v6 = a6;
  v8 = a2 >> 1;
  v11 = 0;
  if ( (a6 & 0x100) != 0 )
  {
    if ( !a1 && v8 || v8 > 0x7FFFFFFF )
      v11 = -1073741811;
  }
  else if ( v8 - 1 > 0x7FFFFFFE )
  {
    v11 = -1073741811;
  }
  if ( v11 < 0 )
  {
    if ( v8 )
      *a1 = 0;
  }
  else
  {
    v17 = a1;
    v12 = a1;
    v16 = a2 >> 1;
    if ( (a6 & 0x100) != 0 )
    {
      v13 = &word_1404370A0;
      if ( a3 )
        v13 = a3;
      a3 = v13;
    }
    v11 = 0;
    if ( (a6 & 0xFFFFE000) != 0 )
    {
      v11 = -1073741811;
      if ( v8 )
        *a1 = 0;
    }
    else if ( v8 )
    {
      v17 = 0LL;
      v11 = sub_1402E0620(a1, v8, &v17, a3);
      v8 -= (unsigned __int64)v17;
      v16 = v8;
      v12 = &a1[(_QWORD)v17];
      v17 = v12;
      if ( v11 >= 0 )
      {
        if ( (v6 & 0x200) != 0 )
        {
          v15 = (a2 & 1) + 2 * v8;
          if ( v15 > 2 )
            memset(v12 + 1, (unsigned __int8)v6, v15 - 2);
        }
        goto LABEL_13;
      }
    }
    else
    {
      if ( !*a3 )
      {
LABEL_13:
        if ( a4 )
          *a4 = v12;
        if ( a5 )
          *a5 = (a2 & 1) + 2 * v8;
        return (unsigned int)v11;
      }
      v11 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( (v6 & 0x1C00) != 0 && a2 )
    {
      sub_14055F3E4(a1, a2, a3, &v17, &v16, v6);
      v12 = v17;
      v8 = v16;
    }
    if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
      goto LABEL_13;
  }
  return (unsigned int)v11;
}
