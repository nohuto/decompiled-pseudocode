/*
 * XREFs of sub_140858690 @ 0x140858690
 * Callers:
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlAppendStringToString @ 0x1406E24E0 (RtlAppendStringToString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140858690(unsigned __int16 *a1, const STRING *a2, STRING *a3)
{
  unsigned __int16 v4; // r9
  char *v7; // rax
  NTSTATUS appended; // eax
  char *Buffer; // rcx

  v4 = a2->Length + 2 + *a1;
  a3->MaximumLength = v4;
  v7 = (char *)sub_1402828F0(256, v4, 0x54446D4Du);
  a3->Buffer = v7;
  if ( v7 )
  {
    a3->Length = *a1;
    memmove(v7, *((const void **)a1 + 1), *a1);
    appended = RtlAppendStringToString(a3, a2);
    Buffer = a3->Buffer;
    if ( appended >= 0 )
    {
      *(_WORD *)&Buffer[2 * ((unsigned __int64)a3->Length >> 1)] = 0;
      return 1LL;
    }
    ExFreePoolWithTag(Buffer, 0);
  }
  return 0LL;
}
