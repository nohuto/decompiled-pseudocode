/*
 * XREFs of EtwEnableTrace @ 0x1408162E0
 * Callers:
 *     sub_140816288 @ 0x140816288 (sub_140816288.c)
 *     sub_1409E8E6C @ 0x1409E8E6C (sub_1409E8E6C.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_14081637C @ 0x14081637C (sub_14081637C.c)
 */

__int64 __fastcall EtwEnableTrace(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  _QWORD *v8; // rax
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v12; // r10d
  size_t Size; // [rsp+60h] [rbp-38h]
  size_t v15; // [rsp+70h] [rbp-28h]
  size_t v16; // [rsp+80h] [rbp-18h]

  v8 = sub_140347DB0();
  LODWORD(v16) = 0;
  LODWORD(v15) = 0;
  LODWORD(Size) = 0;
  return sub_14081637C(v8[108], v12, v9, v10, v11, a5, a6, a7, a8, 0LL, 0LL, 0LL, Size, 0LL, v15, 0LL, v16, 0LL);
}
