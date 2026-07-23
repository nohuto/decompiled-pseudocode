/*
 * XREFs of sub_1403919F0 @ 0x1403919F0
 * Callers:
 *     sub_140A50388 @ 0x140A50388 (sub_140A50388.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403B53D4 @ 0x1403B53D4 (sub_1403B53D4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050CEDC @ 0x14050CEDC (sub_14050CEDC.c)
 */

LARGE_INTEGER sub_1403919F0()
{
  __int64 *v0; // rsi
  int LockArray_high; // ebp
  unsigned int v2; // edi
  ULONG_PTR v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // r8d
  LARGE_INTEGER result; // rax
  unsigned int v8; // r10d
  ULONG_PTR BugCheckParameter4; // r8
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v0 = v10;
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v2 = 0;
  v10[0] = qword_140C4E390;
  v10[1] = qword_140C4E500;
  do
  {
    v3 = *v0;
    if ( *v0 )
    {
      v4 = sub_140303720(*v0);
      v6 = sub_14042A5E0(v4, v5);
      if ( v6 < 0 )
      {
        sub_14050CEDC(v3, 15, v6, (unsigned int)"minkernel\\hals\\lib\\timers\\common\\timer.c", 2246);
        KeBugCheckEx(v8 + 77, 0x110uLL, v3, v8, BugCheckParameter4);
      }
      if ( *(_DWORD *)(v3 + 228) != 5 && !LockArray_high )
        sub_1403B53D4(v3, *(_QWORD *)(v3 + 16));
    }
    ++v2;
    ++v0;
  }
  while ( v2 < 2 );
  result = KeQueryPerformanceCounter(0LL);
  qword_140C4E3F0 = result.QuadPart;
  return result;
}
