/*
 * XREFs of HalRequestClockInterrupt @ 0x14022F2D0
 * Callers:
 *     sub_14022F244 @ 0x14022F244 (sub_14022F244.c)
 *     sub_14050EB80 @ 0x14050EB80 (sub_14050EB80.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140300100 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalRequestClockInterrupt(unsigned int a1, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = (int)a1;
  result = HalRequestIpiSpecifyVector(a1, a2, 210LL);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x201uLL, qword_140C54A88, (int)result, BugCheckParameter4);
  return result;
}
