/*
 * XREFs of sub_14068CEA0 @ 0x14068CEA0
 * Callers:
 *     sub_14068C544 @ 0x14068C544 (sub_14068C544.c)
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 *     sub_14083D244 @ 0x14083D244 (sub_14083D244.c)
 *     sub_1408410FC @ 0x1408410FC (sub_1408410FC.c)
 *     sub_14091A928 @ 0x14091A928 (sub_14091A928.c)
 *     sub_14091AB6C @ 0x14091AB6C (sub_14091AB6C.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 */

void __fastcall sub_14068CEA0(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, int a4, char a5, __int64 a6)
{
  unsigned int v9; // r10d
  __int64 v10; // rax
  unsigned int v11; // r8d
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // rdx

  if ( a3 )
  {
    v9 = 0;
    do
    {
      v10 = sub_140AB44C0(BugCheckParameter2, v9 + a4);
      if ( !v10 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v11, 0x406uLL);
      *(_QWORD *)(v10 + 8) = a2;
      v14 = a2;
      if ( v12 )
      {
        v15 = 0;
      }
      else
      {
        v14 = a2 | 1;
        v15 = v13;
        *(_QWORD *)(v10 + 8) = a2 | 1;
      }
      *(_DWORD *)(v10 + 16) = v15;
      if ( a6 )
      {
        v14 |= 2uLL;
        v16 = a6;
        *(_QWORD *)(v10 + 8) = v14;
      }
      else
      {
        v16 = v12;
      }
      *(_QWORD *)v10 = v16;
      if ( a5 )
        *(_QWORD *)(v10 + 8) = v14 | 8;
      v9 = v12 + 4096;
    }
    while ( v9 < v13 );
  }
}
