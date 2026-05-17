/*
 * XREFs of RtlpHpStackDbLogStackDbEnd @ 0x180116D78
 * Callers:
 *     RtlpHpStackTraceEventWriter @ 0x1801176F0 (RtlpHpStackTraceEventWriter.c)
 * Callees:
 *     EtwEventWrite @ 0x180030140 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpStackDbLogStackDbEnd(int a1, int a2)
{
  int *v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+28h] [rbp-30h]
  int v5; // [rsp+2Ch] [rbp-2Ch]
  int *v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]
  int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = a2;
  v9 = a1;
  v3 = &v9;
  v5 = 0;
  v4 = 4;
  v6 = &v10;
  v8 = 0;
  v7 = 4;
  return EtwEventWrite(RtlpHpStackTraceProviderHandle, (int)&HeapSnapshotEnd, 2, (__int64)&v3);
}
