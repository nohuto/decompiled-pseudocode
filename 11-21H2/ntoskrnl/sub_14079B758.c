/*
 * XREFs of sub_14079B758 @ 0x14079B758
 * Callers:
 *     sub_14065D7C4 @ 0x14065D7C4 (sub_14065D7C4.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_14079B2C0 @ 0x14079B2C0 (sub_14079B2C0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406AD650 @ 0x1406AD650 (sub_1406AD650.c)
 *     sub_1406BE2FC @ 0x1406BE2FC (sub_1406BE2FC.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079B8C0 @ 0x14079B8C0 (sub_14079B8C0.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 */

__int64 __fastcall sub_14079B758(
        ULONG_PTR BugCheckParameter2,
        unsigned __int16 *a2,
        int a3,
        void *a4,
        size_t Size,
        int a6,
        int *a7)
{
  unsigned __int16 v11; // ax
  int v12; // eax
  _WORD *v13; // rbx
  int v14; // r14d
  void *v15; // rcx
  unsigned __int16 v16; // ax
  unsigned int v17; // edi
  int v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  _WORD *v21; // [rsp+40h] [rbp-10h] BYREF

  v19 = -1;
  v20 = 0LL;
  v21 = 0LL;
  sub_1407C97FC(&v20);
  v11 = sub_1406AD650(a2);
  v12 = sub_14079C8A4(BugCheckParameter2, (unsigned int)v11 + 20, a6, (unsigned int)&v19, (__int64)&v21, (__int64)&v20);
  v13 = v21;
  v14 = v12;
  if ( v12 >= 0 )
  {
    v15 = v21 + 10;
    *v21 = 27510;
    v16 = sub_14079B8C0(v15);
    v13[1] = v16;
    v13[8] = v16 < *a2;
    *((_DWORD *)v13 + 3) = a3;
    if ( (unsigned int)Size <= 4 )
    {
      *((_DWORD *)v13 + 1) = Size + 0x80000000;
      *((_DWORD *)v13 + 2) = 0;
      memmove(v13 + 4, a4, (unsigned int)Size);
LABEL_6:
      v17 = -1;
      v14 = 0;
      *a7 = v19;
      goto LABEL_7;
    }
    v14 = sub_1406BE2FC(BugCheckParameter2, (char *)a4, (unsigned int)Size, a6, (_DWORD *)v13 + 2);
    if ( v14 >= 0 )
    {
      *((_DWORD *)v13 + 1) = Size;
      goto LABEL_6;
    }
  }
  v17 = v19;
LABEL_7:
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter2, &v20);
    else
      sub_1407C97C0(BugCheckParameter2, &v20);
  }
  if ( v17 != -1 )
    sub_14079BD98(BugCheckParameter2, v17);
  return (unsigned int)v14;
}
