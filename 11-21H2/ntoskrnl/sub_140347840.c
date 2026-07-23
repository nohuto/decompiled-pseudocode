/*
 * XREFs of sub_140347840 @ 0x140347840
 * Callers:
 *     sub_140244198 @ 0x140244198 (sub_140244198.c)
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

void sub_140347840()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // ecx
  __int64 v2; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( KeGetCurrentIrql() )
    v1 = 2;
  else
    v1 = (*((_BYTE *)KeGetCurrentThread() + 192) & 1) != 0;
  v2 = *((_QWORD *)CurrentThread + 191);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 8) == v1 )
    {
      *((_QWORD *)CurrentThread + 191) = *(_QWORD *)v2;
      if ( *(_QWORD *)(v2 + 32) )
      {
        if ( *(_QWORD *)(v2 + 48) )
          RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 40));
      }
    }
  }
}
