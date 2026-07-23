/*
 * XREFs of sub_140A629D4 @ 0x140A629D4
 * Callers:
 *     sub_140A62700 @ 0x140A62700 (sub_140A62700.c)
 * Callees:
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403B4DA0 (HalGetProcessorIdByNtNumber.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140A53F54 @ 0x140A53F54 (sub_140A53F54.c)
 */

__int64 __fastcall sub_140A629D4(ULONG_PTR BugCheckParameter2, _DWORD *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  ULONG_PTR v5; // rsi
  ULONG_PTR v9; // r14
  __int64 v10; // rax
  ULONG_PTR v11; // rdi
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v5 = (unsigned int)BugCheckParameter2;
  LODWORD(BugCheckParameter3[0]) = 0;
  v9 = (unsigned int)sub_1403B3BA0();
  if ( HalGetProcessorIdByNtNumber(v5, BugCheckParameter3) < 0 )
    KeBugCheckEx(0x5Cu, 0x2001uLL, (unsigned int)v5, (unsigned int)v9, 0LL);
  v10 = 0LL;
  if ( a4 )
  {
    while ( *a2 != LODWORD(BugCheckParameter3[0]) )
    {
      v10 = (unsigned int)(v10 + 1);
      ++a2;
      if ( (unsigned int)v10 >= a4 )
        goto LABEL_6;
    }
    v4 = *(_DWORD *)(a3 + 4 * v10);
    v11 = v5;
  }
  else
  {
LABEL_6:
    v11 = v5;
    if ( (_DWORD)v10 == a4 )
      KeBugCheckEx(0x5Cu, 0x2001uLL, v5, LODWORD(BugCheckParameter3[0]), 1uLL);
  }
  result = sub_140A53F54(v5, v4, 3, (const void *)(qword_140C4BFD0 + 1472 * v11));
  if ( (_DWORD)result != 4 )
    KeBugCheckEx(0x5Cu, 0x2001uLL, v11, v9, 2uLL);
  return result;
}
