/*
 * XREFs of sub_1406C8FF4 @ 0x1406C8FF4
 * Callers:
 *     sub_14065E880 @ 0x14065E880 (sub_14065E880.c)
 *     sub_1406C8F10 @ 0x1406C8F10 (sub_1406C8F10.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1406C8FF4(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, int a3, char a4, int *a5)
{
  unsigned int v8; // edi
  __int64 v9; // rax
  const void *v10; // r14
  int v11; // r15d
  int v12; // eax
  void *v13; // rdi
  unsigned int v14; // esi
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  void *v18; // [rsp+40h] [rbp-10h] BYREF
  int v19; // [rsp+80h] [rbp+30h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v19 = -1;
  v8 = BugCheckParameter4;
  sub_1407C97FC(&v16);
  v18 = 0LL;
  sub_1407C97FC(&v17);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v9 = sub_1406BF400(BugCheckParameter3, v8, &v16);
  else
    v9 = sub_1407C9820(BugCheckParameter3);
  v10 = (const void *)v9;
  v11 = -4 - *(_DWORD *)(v9 - 4);
  v12 = sub_14079C8A4(BugCheckParameter3, v11, a3, (unsigned int)&v19, (__int64)&v18, (__int64)&v17);
  v13 = v18;
  v14 = v12;
  if ( v12 >= 0 )
  {
    if ( a4 == 1 )
      memmove(v18, v10, v11);
    else
      memset(v18, 0, v11);
    v14 = 0;
    *a5 = v19;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v16);
  else
    sub_1407C97C0(BugCheckParameter3, &v16);
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v17);
    else
      sub_1407C97C0(BugCheckParameter3, &v17);
  }
  return v14;
}
