/*
 * XREFs of RtlQueryThreadPlaceholderCompatibilityMode @ 0x1409BCC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR RtlQueryThreadPlaceholderCompatibilityMode(void)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v1; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)CurrentThread + 29) & 0x400) != 0 )
    return -2;
  if ( *((_BYTE *)CurrentThread + 586) == 1 )
    return -2;
  v1 = *((_QWORD *)CurrentThread + 30);
  if ( !v1 )
    return -2;
  else
    return *(_BYTE *)(v1 + 640);
}
