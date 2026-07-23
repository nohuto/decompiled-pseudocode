/*
 * XREFs of sub_1402DFEFC @ 0x1402DFEFC
 * Callers:
 *     sub_1407473E8 @ 0x1407473E8 (sub_1407473E8.c)
 *     sub_1407697FC @ 0x1407697FC (sub_1407697FC.c)
 *     sub_14077ED0C @ 0x14077ED0C (sub_14077ED0C.c)
 *     sub_14077F150 @ 0x14077F150 (sub_14077F150.c)
 *     sub_1409BC59C @ 0x1409BC59C (sub_1409BC59C.c)
 *     sub_140A295FC @ 0x140A295FC (sub_140A295FC.c)
 * Callees:
 *     sub_1402E0030 @ 0x1402E0030 (sub_1402E0030.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14055F3E4 @ 0x14055F3E4 (sub_14055F3E4.c)
 */

__int64 __fastcall sub_1402DFEFC(
        _WORD *a1,
        unsigned __int64 a2,
        const WCHAR *a3,
        unsigned __int64 a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        int a7)
{
  int v9; // ebx
  _WORD *v10; // rbp
  unsigned __int64 v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  _WORD *v15; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v16[4]; // [rsp+38h] [rbp-20h] BYREF

  v9 = 0;
  if ( (a7 & 0x100) != 0 )
  {
    if ( !a1 && a2 || a2 > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( a2 - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v15 = a1;
    v10 = a1;
    v16[0] = a2;
    v11 = a2;
    if ( a4 >= 0x7FFFFFFF )
      goto LABEL_22;
    if ( (a7 & 0x100) != 0 && !a3 )
    {
      a3 = &word_1404370A0;
      a4 = 0LL;
    }
    v9 = 0;
    if ( (a7 & 0xFFFFE000) != 0 )
    {
LABEL_22:
      v9 = -1073741811;
      if ( a2 )
        *a1 = 0;
    }
    else if ( a2 )
    {
      v16[0] = 0LL;
      v12 = sub_1402E0030((_DWORD)a1, a2, (unsigned int)v16, (_DWORD)a3, a4);
      v13 = v16[0];
      v9 = v12;
      v11 = a2 - v16[0];
      v16[0] = a2 - v16[0];
      v10 = &a1[v13];
      v15 = v10;
      if ( v12 >= 0 )
      {
        if ( (a7 & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
          memset(v10 + 1, (unsigned __int8)a7, 2 * v11 - 2);
        goto LABEL_11;
      }
    }
    else
    {
      if ( !a4 || !*a3 )
      {
LABEL_11:
        if ( a5 )
          *a5 = v10;
        if ( a6 )
          *a6 = v11;
        return (unsigned int)v9;
      }
      v9 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( (a7 & 0x1C00) != 0 && a2 )
    {
      sub_14055F3E4(a1, 2 * a2, a3, &v15, v16, a7);
      v10 = v15;
      v11 = v16[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_11;
  }
  return (unsigned int)v9;
}
