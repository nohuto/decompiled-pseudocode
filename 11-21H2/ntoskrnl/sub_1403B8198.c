/*
 * XREFs of sub_1403B8198 @ 0x1403B8198
 * Callers:
 *     sub_1403B8180 @ 0x1403B8180 (sub_1403B8180.c)
 *     sub_14081E1F0 @ 0x14081E1F0 (sub_14081E1F0.c)
 * Callees:
 *     sub_140213AC0 @ 0x140213AC0 (sub_140213AC0.c)
 *     sub_140215144 @ 0x140215144 (sub_140215144.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1403B8198(__int64 a1)
{
  unsigned int *v1; // rax
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+54h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  ExAcquireFastMutex(&Mutex);
  if ( !qword_140C54960 )
  {
    v1 = (unsigned int *)sub_140213AC0(0LL, 0x50434146u, 0LL, 0LL);
    if ( !v1 )
    {
      DbgPrint("**** HalpAcpiGetFacsMapping: No FADT found.\n");
      KeBugCheckEx(0xA5u, 0x10009uLL, 0LL, 0LL, 0LL);
    }
    qword_140C54960 = sub_140215144(0LL, v1[9], 0x21u, 1396916550, 0LL, 0LL, 0, &v3);
  }
  KeReleaseGuardedMutex(&Mutex);
  return qword_140C54960;
}
