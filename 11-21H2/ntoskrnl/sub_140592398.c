/*
 * XREFs of sub_140592398 @ 0x140592398
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     sub_14026940C @ 0x14026940C (sub_14026940C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405B6AD0 @ 0x1405B6AD0 (sub_1405B6AD0.c)
 */

void __fastcall __noreturn sub_140592398(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rbx
  unsigned int v2; // eax
  ULONG_PTR v3; // r11
  unsigned int v4; // eax
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp+10h] BYREF

  BugCheckParameter2a = 0LL;
  v1 = (unsigned int)BugCheckParameter2;
  if ( sub_1405B6AD0(&BugCheckParameter2a) )
  {
    v2 = sub_14026940C();
    KeBugCheckEx(0xD8u, v3, BugCheckParameter2a, v2, 0LL);
  }
  v4 = sub_14026940C();
  KeBugCheckEx(0x3Fu, 0LL, v1, v4, 0LL);
}
