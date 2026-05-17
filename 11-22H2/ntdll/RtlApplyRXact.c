/*
 * XREFs of RtlApplyRXact @ 0x1800F0D70
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x18007FB70 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x18007FBB8 (RXactpCommit.c)
 *     ZwSetValueKey @ 0x18009F9E0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A0980 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x1800A0BE0 (ZwFlushKey.c)
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
