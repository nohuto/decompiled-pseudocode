/*
 * XREFs of sub_14065C3B8 @ 0x14065C3B8
 * Callers:
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065C3B8(
        ULONG_PTR BugCheckParameter3,
        unsigned int *a2,
        unsigned int *a3,
        int a4,
        unsigned int *a5)
{
  unsigned int v9; // r15d
  int v10; // eax
  char *v11; // r12
  unsigned int v12; // edi
  unsigned int v13; // edi
  const void *v14; // rax
  unsigned int *v15; // rcx
  unsigned int v16; // esi
  int v17; // eax
  unsigned int *v19; // rax
  const void *v20; // rax
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  void *v22; // [rsp+38h] [rbp-8h] BYREF
  int v23; // [rsp+78h] [rbp+38h] BYREF
  __int64 v24; // [rsp+80h] [rbp+40h] BYREF

  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = -1;
  sub_1407C97FC(&v21);
  sub_1407C97FC(&v24);
  v9 = *a2 + *a3;
  if ( v9 < *a2 )
  {
    return (unsigned int)-1073741670;
  }
  else if ( v9 )
  {
    v10 = sub_14079C8A4(BugCheckParameter3, 4 * v9, a4, (unsigned int)&v23, (__int64)&v22, (__int64)&v21);
    v11 = (char *)v22;
    v12 = v10;
    if ( v10 < 0 )
    {
      v16 = v23;
    }
    else
    {
      v13 = 0;
      if ( *a2 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v20 = (const void *)sub_1406BF400(BugCheckParameter3, a2[1]);
        else
          v20 = (const void *)sub_1407C9820(BugCheckParameter3);
        memmove(v11, v20, 4LL * *a2);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, &v24);
        else
          sub_1407C97C0(BugCheckParameter3, &v24);
        v13 = *a2;
      }
      if ( *a3 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v14 = (const void *)sub_1406BF400(BugCheckParameter3, a3[1]);
        else
          v14 = (const void *)sub_1407C9820(BugCheckParameter3);
        memmove(&v11[4 * v13], v14, 4LL * *a3);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, &v24);
        else
          sub_1407C97C0(BugCheckParameter3, &v24);
      }
      v15 = a5;
      v16 = -1;
      v17 = v23;
      v12 = 0;
      *a5 = v9;
      v15[1] = v17;
    }
    if ( v11 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v21);
      else
        sub_1407C97C0(BugCheckParameter3, &v21);
    }
    if ( v16 != -1 )
      sub_14079BD98(BugCheckParameter3, v16);
  }
  else
  {
    v19 = a5;
    *a5 = 0;
    v12 = 0;
    v19[1] = -1;
  }
  return v12;
}
