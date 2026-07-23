/*
 * XREFs of sub_140257FB0 @ 0x140257FB0
 * Callers:
 *     sub_14050BFD0 @ 0x14050BFD0 (sub_14050BFD0.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050CEDC @ 0x14050CEDC (sub_14050CEDC.c)
 */

__int64 sub_140257FB0()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // r8

  v0 = qword_140C4E4B0;
  v1 = sub_140303720(qword_140C4E4B0);
  result = sub_14042A5E0(v1, v2);
  if ( (int)result < 0 )
  {
    sub_14050CEDC(v0, 15, result, (unsigned int)"minkernel\\hals\\lib\\timers\\common\\clockint.c", 1465);
    KeBugCheckEx(0x5Cu, 0x110uLL, v0, dword_140C4E844, BugCheckParameter4);
  }
  return result;
}
