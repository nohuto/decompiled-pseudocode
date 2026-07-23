/*
 * XREFs of sub_1403AEED4 @ 0x1403AEED4
 * Callers:
 *     sub_1403B8BF8 @ 0x1403B8BF8 (sub_1403B8BF8.c)
 *     sub_140A500C0 @ 0x140A500C0 (sub_140A500C0.c)
 *     sub_140A62458 @ 0x140A62458 (sub_140A62458.c)
 * Callees:
 *     sub_1403B0A04 @ 0x1403B0A04 (sub_1403B0A04.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 sub_1403AEED4()
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = qword_140C54A88;
  result = *(unsigned int *)(qword_140C54A88 + 228);
  if ( (result & 1) != 0 )
  {
    result = sub_1403B0A04(qword_140C54A88);
    if ( (int)result < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, dword_140C4ADB0, HIDWORD(KeGetPcr()[1].LockArray), BugCheckParameter4);
  }
  return result;
}
