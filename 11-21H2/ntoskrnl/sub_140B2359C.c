/*
 * XREFs of sub_140B2359C @ 0x140B2359C
 * Callers:
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140582708 @ 0x140582708 (sub_140582708.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     sub_14084F7E4 @ 0x14084F7E4 (sub_14084F7E4.c)
 *     sub_140B0183C @ 0x140B0183C (sub_140B0183C.c)
 */

__int64 sub_140B2359C()
{
  __int64 result; // rax
  __int128 v1; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v1 = 2097182LL;
  *((_QWORD *)&v1 + 1) = L"\\Driver\\WscVReg";
  sub_14084F7E4();
  sub_140B0183C();
  result = IoCreateDriver(&v1, (unsigned __int64)sub_14085B100);
  if ( (int)result < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, (int)result, 0LL, 0LL);
  if ( dword_140C54CA0 )
    return sub_140582708();
  return result;
}
