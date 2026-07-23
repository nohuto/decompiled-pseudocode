/*
 * XREFs of sub_1408136FC @ 0x1408136FC
 * Callers:
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14041DCC0 @ 0x14041DCC0 (sub_14041DCC0.c)
 */

__int64 __fastcall sub_1408136FC(_QWORD *a1)
{
  __int64 result; // rax
  HANDLE Handle; // [rsp+68h] [rbp+18h] BYREF

  Handle = 0LL;
  if ( qword_140C0E120 )
  {
    *a1 = qword_140C0E120;
    return 0LL;
  }
  result = sub_14041DCC0((__int64)&Handle, 0x100000LL);
  if ( (_DWORD)result == -1073741772 )
  {
    _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C0E120, -1LL, 0LL);
    *a1 = qword_140C0E120;
    return 0LL;
  }
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C0E120, (signed __int64)Handle, 0LL) )
      ZwClose(Handle);
    *a1 = qword_140C0E120;
    return 0LL;
  }
  return result;
}
