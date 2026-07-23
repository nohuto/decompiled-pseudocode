/*
 * XREFs of MmCreateSection @ 0x14066BF30
 * Callers:
 *     sub_14066BC7C @ 0x14066BC7C (sub_14066BC7C.c)
 *     sub_14085A124 @ 0x14085A124 (sub_14085A124.c)
 *     ntoskrnl_30 @ 0x140938B40 (ntoskrnl_30.c)
 *     sub_1409AB9D8 @ 0x1409AB9D8 (sub_1409AB9D8.c)
 *     sub_1409AC998 @ 0x1409AC998 (sub_1409AC998.c)
 *     sub_140B087BC @ 0x140B087BC (sub_140B087BC.c)
 *     sub_140B08F6C @ 0x140B08F6C (sub_140B08F6C.c)
 * Callees:
 *     sub_14066BFB8 @ 0x14066BFB8 (sub_14066BFB8.c)
 */

__int64 __fastcall MmCreateSection(int a1, __int64 a2, int a3, _QWORD *a4, int a5, int a6, __int64 a7, __int64 a8)
{
  unsigned int v8; // edx
  int v9; // r10d
  __int128 *Address; // r11
  int v12; // [rsp+40h] [rbp-38h]
  __int128 v13; // [rsp+60h] [rbp-18h] BYREF

  v8 = a6;
  v9 = 0;
  Address = 0LL;
  v13 = 0LL;
  if ( (a6 & 0x7F) != 0 )
  {
    Address = &v13;
    v8 = a6 & 0xFFFFFF80;
    *(_QWORD *)&v13 = 2LL;
    v9 = 1;
    *((_QWORD *)&v13 + 1) = (a6 & 0x7Fu) - 1;
  }
  return sub_14066BFB8(a1, a3, *a4, a5, v8, a7, a8, 0, v12, Address, v9);
}
