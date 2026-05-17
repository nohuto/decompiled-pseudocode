/*
 * XREFs of RtlApplyRXact @ 0x1800F1170
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x180086380 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x1800863C8 (RXactpCommit.c)
 *     ZwSetValueKey @ 0x1800A4C60 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A5BE0 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x1800A5E40 (ZwFlushKey.c)
 */

__int64 __fastcall RtlApplyRXact(__int64 *a1)
{
  __int64 result; // rax
  int v3; // edi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"Log");
  result = ZwSetValueKey();
  if ( (int)result >= 0 )
  {
    v3 = ZwFlushKey();
    if ( v3 < 0 || (v3 = RXactpCommit(a1), v3 < 0) )
    {
      ZwDeleteValueKey();
      return (unsigned int)v3;
    }
    else
    {
      ZwDeleteValueKey();
      RtlAbortRXact((__int64)a1);
      return 0LL;
    }
  }
  return result;
}
