/*
 * XREFs of sub_1406E2E48 @ 0x1406E2E48
 * Callers:
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 * Callees:
 *     PsAssignProcessToJobObject @ 0x140688050 (PsAssignProcessToJobObject.c)
 *     sub_1409E22CC @ 0x1409E22CC (sub_1409E22CC.c)
 */

__int64 __fastcall sub_1406E2E48(__int64 BugCheckParameter1, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v4; // rbx
  void *v8; // rbp
  unsigned int v9; // eax
  int v10; // edi

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !a3 )
    return 0LL;
  while ( (*((_DWORD *)CurrentThread + 344) & 1) == 0 )
  {
    v8 = *(void **)(a2 + 8 * v4);
    v9 = PsAssignProcessToJobObject(v8, BugCheckParameter1, 0LL);
    v10 = v9;
    if ( (xmmword_140D06900[0] & 0x80000) != 0 )
      sub_1409E22CC(v8, BugCheckParameter1, v9);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( ++v4 >= a3 )
      return 0LL;
  }
  return 3221225547LL;
}
