/*
 * XREFs of sub_140A6350C @ 0x140A6350C
 * Callers:
 *     sub_14051E084 @ 0x14051E084 (sub_14051E084.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A53F54 @ 0x140A53F54 (sub_140A53F54.c)
 *     sub_140A6330C @ 0x140A6330C (sub_140A6330C.c)
 */

__int64 __fastcall sub_140A6350C(int a1, unsigned int a2)
{
  ULONG_PTR v2; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  unsigned __int64 v7[185]; // [rsp+30h] [rbp-5C8h] BYREF

  v2 = a2;
  memset(v7, 0, 0x5C0uLL);
  if ( a1 == dword_140C4AD48 )
    LODWORD(dword_140C4A0DC) = 0;
  sub_140A6330C(v7, *(char **)(qword_140C4ABF0 + 8LL * (unsigned int)dword_140C4A0DC), v4, v5, v2);
  result = sub_140A53F54(0xFFFFFFFF, v2, 4, v7);
  if ( (_DWORD)result != 4 )
    KeBugCheckEx(0x1DAu, 2uLL, (unsigned int)dword_140C4A0DC, v2, 0LL);
  LODWORD(dword_140C4A0DC) = dword_140C4A0DC + 1;
  return result;
}
