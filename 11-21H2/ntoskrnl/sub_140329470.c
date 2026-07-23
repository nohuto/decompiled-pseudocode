/*
 * XREFs of sub_140329470 @ 0x140329470
 * Callers:
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 *     sub_1407BDF60 @ 0x1407BDF60 (sub_1407BDF60.c)
 * Callees:
 *     sub_14027C6DC @ 0x14027C6DC (sub_14027C6DC.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_1406FA590 @ 0x1406FA590 (sub_1406FA590.c)
 *     sub_1407BE190 @ 0x1407BE190 (sub_1407BE190.c)
 */

char __fastcall sub_140329470(
        int a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        _DWORD *a5,
        _QWORD *P,
        int a7,
        __int64 a8,
        LARGE_INTEGER *a9)
{
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  unsigned int v13; // ecx
  __int64 v15; // rbp
  __int64 v17; // r8

  v10 = *a2 & 0xFFFFFFFFFFFFF000uLL;
  v11 = *P + (*(_DWORD *)a2 & 0x3F000);
  v12 = ((a3 + *a2 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - v10;
  v13 = 0x40000 - ((*(_DWORD *)P + (*(_DWORD *)a2 & 0x3F000)) & 0x3FFFF);
  if ( v13 >= (unsigned int)v12 )
    v13 = ((a3 + *(_DWORD *)a2 + 4095) & 0xFFFFF000) - v10;
  v15 = v13;
  if ( !(unsigned int)sub_1407BE190(v11, v10, v13) )
    goto LABEL_4;
  if ( a4 )
  {
    if ( a9 && !a9->QuadPart )
      *a9 = KeQueryPerformanceCounter(0LL);
    LODWORD(v17) = 0;
    if ( v15 == v12 )
      v17 = *P;
    sub_1406FA590(a1, v10, v17, v12, a7);
    *a5 = 1;
LABEL_4:
    sub_140328690(v11, v15, 0, 0LL);
    return 1;
  }
  return 0;
}
