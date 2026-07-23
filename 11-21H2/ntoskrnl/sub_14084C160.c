/*
 * XREFs of sub_14084C160 @ 0x14084C160
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1403CFCF0 @ 0x1403CFCF0 (sub_1403CFCF0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14084C1C8 @ 0x14084C1C8 (sub_14084C1C8.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 *     sub_140B21B40 @ 0x140B21B40 (sub_140B21B40.c)
 */

void __fastcall sub_14084C160(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  qword_140D68770 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = sub_140AFBDF4(StartContext);
  sub_1403CFCF0(25LL, 75LL);
  if ( !(unsigned __int8)sub_140B21B40(StartContext) )
    KeBugCheckEx(0x69u, (unsigned int)dword_140C474FC, 0LL, 0LL, 0LL);
  LOBYTE(v3) = v2;
  sub_140B020A4(StartContext, v3);
  sub_14084C1C8();
}
