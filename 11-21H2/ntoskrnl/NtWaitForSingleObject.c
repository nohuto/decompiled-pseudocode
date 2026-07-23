/*
 * XREFs of NtWaitForSingleObject @ 0x1407E0180
 * Callers:
 *     sub_140203950 @ 0x140203950 (sub_140203950.c)
 *     sub_1407E0048 @ 0x1407E0048 (sub_1407E0048.c)
 * Callees:
 *     ObWaitForSingleObject @ 0x1407E0200 (ObWaitForSingleObject.c)
 */

NTSTATUS __cdecl NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  int v3; // r9d
  int v4; // edx
  PLARGE_INTEGER v5; // rax
  LARGE_INTEGER v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = Alertable;
  v7.QuadPart = 0LL;
  v4 = *((unsigned __int8 *)KeGetCurrentThread() + 562);
  v5 = Timeout;
  if ( Timeout && (_BYTE)v4 )
  {
    if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
      v5 = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
    v7 = *v5;
    v5 = &v7;
  }
  return ObWaitForSingleObject((int)Handle, v4, (unsigned __int8)v4, v3, v5);
}
