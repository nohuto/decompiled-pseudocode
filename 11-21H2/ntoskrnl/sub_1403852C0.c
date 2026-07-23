/*
 * XREFs of sub_1403852C0 @ 0x1403852C0
 * Callers:
 *     sub_140385180 @ 0x140385180 (sub_140385180.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403853B0 @ 0x1403853B0 (sub_1403853B0.c)
 *     sub_1403B8520 @ 0x1403B8520 (sub_1403B8520.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1403852C0(char a1, unsigned __int64 a2, __int64 a3)
{
  ULONG_PTR v5; // rsi
  unsigned __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // r14
  ULONG_PTR v9; // rax
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v11; // rdi
  ULONG_PTR v13; // [rsp+68h] [rbp+10h] BYREF

  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (((a2 + a3 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0xFFFFFFFFLL;
  v8 = 0LL;
  while ( v5 <= v6 )
  {
    v9 = sub_1403853B0(v5, 0LL, 0LL, 0LL);
    v13 = v9;
    BugCheckParameter4 = v9;
    if ( (v9 & 1) == 0 )
    {
      if ( (a1 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3602uLL, v5, v9, v9);
      return v8 + a2;
    }
    v11 = sub_1403B8520(v8 + a2);
    if ( v11 != (((unsigned __int64)sub_140317A10((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFFLL) )
    {
      if ( (a1 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3603uLL, v5, BugCheckParameter4, BugCheckParameter4);
      return v8 + a2;
    }
    v5 += 8LL;
    v8 += 4096LL;
  }
  return v7;
}
