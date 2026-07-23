/*
 * XREFs of NtWaitForSingleObject @ 0x1406E36F0
 * Callers:
 *     SepRmCallLsa @ 0x14031CB70 (SepRmCallLsa.c)
 *     PfSnPrefetchFileMetadata @ 0x1407D806C (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     ObWaitForSingleObject @ 0x1406E3770 (ObWaitForSingleObject.c)
 */

NTSTATUS __cdecl NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  int v3; // r9d
  int PreviousMode; // edx
  PLARGE_INTEGER v5; // rax
  LARGE_INTEGER v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = Alertable;
  v7.QuadPart = 0LL;
  PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
  v5 = Timeout;
  if ( Timeout && (_BYTE)PreviousMode )
  {
    if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
      v5 = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
    v7 = *v5;
    v5 = &v7;
  }
  return ObWaitForSingleObject((int)Handle, PreviousMode, (unsigned __int8)PreviousMode, v3, v5);
}
