/*
 * XREFs of sub_14094FF34 @ 0x14094FF34
 * Callers:
 *     sub_1407491FC @ 0x1407491FC (sub_1407491FC.c)
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140944C08 @ 0x140944C08 (sub_140944C08.c)
 */

__int64 __fastcall sub_14094FF34(char a1, int a2, _DWORD *a3, UNICODE_STRING *a4)
{
  __int64 *v8; // rax
  char v9; // bl
  bool v10; // zf
  __int64 result; // rax

  ExAcquireFastMutex(&stru_140C44960);
  v8 = (__int64 *)qword_140C449A0;
  v9 = 0;
  while ( v8 != &qword_140C449A0 )
  {
    v10 = *((_DWORD *)v8 - 2) == 2;
    v8 = (__int64 *)*v8;
    if ( v10 )
      v9 = 1;
  }
  KeReleaseGuardedMutex(&stru_140C44960);
  if ( a1 )
    return 0LL;
  if ( v9 )
  {
    byte_140C449B4 = 0;
    return 0LL;
  }
  result = sub_140944C08((__int128 *)sub_14003A3A0, a2, a3, a4);
  byte_140C449B4 = (int)result >= 0;
  return result;
}
