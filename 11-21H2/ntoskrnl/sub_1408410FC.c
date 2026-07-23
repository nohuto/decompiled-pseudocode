/*
 * XREFs of sub_1408410FC @ 0x1408410FC
 * Callers:
 *     sub_14068F7C4 @ 0x14068F7C4 (sub_14068F7C4.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     sub_14068B144 @ 0x14068B144 (sub_14068B144.c)
 *     sub_14068C700 @ 0x14068C700 (sub_14068C700.c)
 *     sub_14068C7E0 @ 0x14068C7E0 (sub_14068C7E0.c)
 *     sub_14068CEA0 @ 0x14068CEA0 (sub_14068CEA0.c)
 *     sub_14068E154 @ 0x14068E154 (sub_14068E154.c)
 */

__int64 __fastcall sub_1408410FC(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  __int64 v3; // rbx
  char v6; // r12
  unsigned int v7; // esi
  unsigned int v8; // ebp
  unsigned int v9; // r15d
  _DWORD *v10; // rdi
  __int64 v11; // rdx
  int v12; // eax

  v3 = *(_QWORD *)(BugCheckParameter2 + 56);
  v6 = 0;
  v7 = sub_14068E154(BugCheckParameter2, a2);
  if ( (v7 & 0x80000000) != 0 )
    return v7;
  v8 = 0;
  v9 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
  if ( !v9 )
    return 0;
  v7 = 1073741833;
  do
  {
    v10 = (_DWORD *)(a2 + v8);
    if ( !sub_14068C7E0(v10, v8, v9) )
    {
      if ( (a3 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
      {
        v7 = -1073741492;
        sub_14020A890(v3, 0, 4, 0xC000014C, 0);
        goto LABEL_20;
      }
      *v10 = 1852400232;
      v10[1] = v8;
      v10[2] = 4096;
      v6 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      sub_14020A890(v3, 1, 4, 0x40000009u, 0);
    }
    if ( !sub_14068B144((unsigned int)v10[2], v11) )
    {
      v7 = -1073741670;
      sub_14020A890(v3, 0, 4, 0xC000009A, 0x10u);
LABEL_20:
      *(_DWORD *)(v3 + 296) = v9;
      *(_DWORD *)(v3 + 300) = v8;
      goto LABEL_22;
    }
    sub_14068CEA0(BugCheckParameter2, (__int64)v10, v10[2], v8, 0, 0LL);
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 2) != 0 )
      goto LABEL_9;
    v12 = sub_14068C700(BugCheckParameter2, (__int64)v10, v8, a3);
    if ( v12 != 1073741833 )
    {
      if ( v12 >= 0 )
        goto LABEL_9;
      v7 = -1073741492;
      sub_14020A890(v3, 0, 4, 0xC000014C, 0x20u);
      *(_DWORD *)(v3 + 296) = v10[2];
      *(_DWORD *)(v3 + 300) = v10[1];
LABEL_22:
      *(_QWORD *)(v3 + 304) = v10;
      return v7;
    }
    v6 = 1;
LABEL_9:
    v8 += v10[2];
  }
  while ( v8 < v9 );
  if ( v6 )
    return v7;
  return 0;
}
