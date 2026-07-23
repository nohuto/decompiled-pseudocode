/*
 * XREFs of sub_1409345F0 @ 0x1409345F0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140556550 @ 0x140556550 (sub_140556550.c)
 *     sub_140556FA8 @ 0x140556FA8 (sub_140556FA8.c)
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_1409345F0()
{
  __int64 v0; // rbx
  char v1; // al
  void *v2; // rcx
  char v3; // di

  do
  {
    KeWaitForSingleObject(&SystemArgument1, Executive, 0, 0, 0LL);
    v0 = sub_140556FA8();
    if ( byte_140C5B134 )
      ExRaiseHardError(*(unsigned int *)(v0 + 16), *(_QWORD *)(v0 + 32) != 0LL);
    v1 = sub_140556550();
    v2 = *(void **)(v0 + 32);
    v3 = v1;
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag((PVOID)v0, 0);
  }
  while ( v3 );
}
