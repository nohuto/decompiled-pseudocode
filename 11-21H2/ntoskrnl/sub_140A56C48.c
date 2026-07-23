/*
 * XREFs of sub_140A56C48 @ 0x140A56C48
 * Callers:
 *     sub_1403BF770 @ 0x1403BF770 (sub_1403BF770.c)
 *     HalInitializeProcessor @ 0x1403BFB00 (HalInitializeProcessor.c)
 *     sub_14081A830 @ 0x14081A830 (sub_14081A830.c)
 *     sub_140A56C0C @ 0x140A56C0C (sub_140A56C0C.c)
 *     sub_140AFB108 @ 0x140AFB108 (sub_140AFB108.c)
 *     HalAllProcessorsStarted @ 0x140AFB130 (HalAllProcessorsStarted.c)
 *     HalReportResourceUsage @ 0x140AFC970 (HalReportResourceUsage.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A56C48(unsigned int a1, int a2)
{
  unsigned int LockArray_high; // r15d
  unsigned int i; // ecx
  unsigned int v6; // edi
  __int64 (__fastcall **v7)(); // rsi
  int v8; // eax

  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  for ( i = 0; (int)a1 <= a2; ++a1 )
  {
    v6 = 0;
    v7 = &off_140008F90;
    do
    {
      v8 = sub_14042A5E0(a1, LockArray_high);
      i = v8;
      if ( v8 < 0 )
        KeBugCheckEx(0x5Cu, 0x8200uLL, v8, (int)a1, (ULONG_PTR)*(&off_140008F90 + 2 * v6 + 1));
      ++v6;
      v7 += 2;
    }
    while ( v6 < 0x15 );
  }
  return i;
}
