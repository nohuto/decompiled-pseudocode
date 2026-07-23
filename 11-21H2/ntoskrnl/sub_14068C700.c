/*
 * XREFs of sub_14068C700 @ 0x14068C700
 * Callers:
 *     sub_14068C544 @ 0x14068C544 (sub_14068C544.c)
 *     sub_1408410FC @ 0x1408410FC (sub_1408410FC.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14071F430 @ 0x14071F430 (sub_14071F430.c)
 *     sub_14079C440 @ 0x14079C440 (sub_14079C440.c)
 */

__int64 __fastcall sub_14068C700(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, int a4)
{
  char v4; // r12
  unsigned int v5; // r10d
  unsigned int v6; // edi
  __int64 v7; // rbp
  unsigned int *v10; // rsi
  unsigned int v11; // ebx
  signed int v13; // eax
  unsigned int v14; // r12d
  __int64 v15; // [rsp+70h] [rbp+8h]

  *(_DWORD *)(BugCheckParameter2 + 144) += 32;
  v4 = 0;
  v5 = *(_DWORD *)(a2 + 8);
  v6 = 32;
  v7 = *(_QWORD *)(BugCheckParameter2 + 56);
  v15 = v7;
  if ( v5 <= 0x20 )
    return 0LL;
  do
  {
    v10 = (unsigned int *)(a2 + v6);
    v11 = *v10;
    if ( (*v10 & 0x80000000) != 0 )
      v11 = -v11;
    if ( v11 + v6 < v6 || v11 + v6 > v5 || (v11 & 7) != 0 || !v11 )
    {
      sub_14020A890(v7, 1, 26, 0xC000014C, 8u);
      if ( (a4 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
      {
        sub_14020A890(v7, 0, 26, 0xC000014C, 0);
        return 3221225804LL;
      }
      v11 = *(_DWORD *)(a2 + 8) - v6;
      v13 = sub_14071F430(BugCheckParameter2);
      v14 = v13;
      if ( v13 < 0 )
      {
        sub_14020A890(v15, 0, 26, v13, 0x10u);
        return v14;
      }
      memset((void *)(a2 + v6), 0, v11);
      *v10 = v11;
      v4 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      sub_14020A890(v15, 1, 26, 0x40000009u, 0x20u);
    }
    else if ( (*v10 & 0x80000000) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 152) += v11;
      goto LABEL_10;
    }
    *(_DWORD *)(BugCheckParameter2 + 148) += v11;
    sub_14079C440(BugCheckParameter2);
LABEL_10:
    v5 = *(_DWORD *)(a2 + 8);
    v6 += v11;
    v7 = v15;
  }
  while ( v6 < v5 );
  if ( !v4 )
    return 0LL;
  return 1073741833LL;
}
