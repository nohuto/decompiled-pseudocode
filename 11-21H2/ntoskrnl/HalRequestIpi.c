/*
 * XREFs of HalRequestIpi @ 0x14023DD20
 * Callers:
 *     sub_1402FFB70 @ 0x1402FFB70 (sub_1402FFB70.c)
 *     sub_140304060 @ 0x140304060 (sub_140304060.c)
 *     sub_140305BD0 @ 0x140305BD0 (sub_140305BD0.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_1405C6C1C @ 0x1405C6C1C (sub_1405C6C1C.c)
 *     PoInitiateProcessorWake @ 0x1405C6DD0 (PoInitiateProcessorWake.c)
 *     sub_1405C8FE4 @ 0x1405C8FE4 (sub_1405C8FE4.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140300100 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalRequestIpi(unsigned int a1, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = (int)a1;
  result = HalRequestIpiSpecifyVector(a1, a2, 225LL);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x201uLL, qword_140C54A88, (int)result, BugCheckParameter4);
  return result;
}
