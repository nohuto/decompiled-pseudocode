/*
 * XREFs of sub_1C00085EC @ 0x1C00085EC
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0007D58 @ 0x1C0007D58 (sub_1C0007D58.c)
 *     sub_1C0008694 @ 0x1C0008694 (sub_1C0008694.c)
 *     sub_1C0008990 @ 0x1C0008990 (sub_1C0008990.c)
 *     sub_1C0008A7C @ 0x1C0008A7C (sub_1C0008A7C.c)
 */

__int64 __fastcall sub_1C00085EC(__int64 a1, IRP *a2)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF
  char v9; // [rsp+60h] [rbp+18h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  v7 = 0;
  v10 = 0;
  v9 = 0;
  v4 = sub_1C0008694((_DWORD)a2, (unsigned int)&v8, (unsigned int)&v7, (unsigned int)&v10, 1);
  if ( v4 < 0 )
    return sub_1C0003440(a2, 0, v4);
  sub_1C0008A7C(a1, 0LL, 1LL, &v9);
  v5 = sub_1C0007D58(*(_QWORD *)(a1 + 24), a2, *(_BYTE *)(a1 + 96), *(_BYTE *)(a1 + 97), *(_BYTE *)(a1 + 98), 1);
  sub_1C0008990(a1, 0LL, 0LL, &v9);
  return v5;
}
