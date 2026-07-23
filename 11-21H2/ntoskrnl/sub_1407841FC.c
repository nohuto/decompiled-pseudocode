/*
 * XREFs of sub_1407841FC @ 0x1407841FC
 * Callers:
 *     sub_140783428 @ 0x140783428 (sub_140783428.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_1406D88A4 @ 0x1406D88A4 (sub_1406D88A4.c)
 */

__int64 __fastcall sub_1407841FC(ULONG_PTR BugCheckParameter2, int a2, _BYTE *a3)
{
  int v5; // edx
  int v6; // ebx
  char v7; // si
  __int64 *i; // rax
  int v9; // ecx

  *a3 = 0;
  v5 = a2 - 2244924;
  if ( !v5 )
  {
    v6 = 0;
    v7 = 0;
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    for ( i = *(__int64 **)(BugCheckParameter2 + 56); i != (__int64 *)(BugCheckParameter2 + 56); i = (__int64 *)*i )
    {
      v9 = *((_DWORD *)i + 4);
      if ( (v9 & 0x1000) == 0 && ((v9 & 0x8000) == 0 || !v6) && (v6 || (v9 & 4) != 0) )
        v6 = 1;
    }
    KeReleaseMutex(&Object, 0);
    if ( !v6 )
      return (unsigned int)v6;
LABEL_14:
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v6 = sub_1406D88A4((_DWORD *)BugCheckParameter2, v7);
    KeReleaseMutex(&Object, 0);
    if ( v6 >= 0 )
      *a3 = 1;
    return (unsigned int)v6;
  }
  if ( v5 == 4 )
  {
    v7 = 1;
    goto LABEL_14;
  }
  return 3221225647LL;
}
