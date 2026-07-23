/*
 * XREFs of sub_140B1D550 @ 0x140B1D550
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY sub_140B1D550()
{
  __int64 v0; // rdi
  ULONG_PTR v1; // rbx
  PSLIST_ENTRY result; // rax

  v0 = 2048LL;
  stru_140C52D08.SizeOfBitMap = 2048;
  stru_140C52D08.Buffer = (PULONG)&unk_140C52D18;
  if ( ((unsigned __int8)&stru_140C52CF0 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140C52CF0 = 0LL;
  v1 = 48 * qword_140C52CE0 - 0x21FFFFFE8030LL;
  *(_QWORD *)(v1 + 40) = *(_QWORD *)(v1 + 40) & 0xFFFFFF0000000000uLL | 1;
  do
  {
    result = ExpInterlockedPushEntrySList(&stru_140C52CF0, (PSLIST_ENTRY)v1);
    v1 -= 48LL;
    --v0;
  }
  while ( v0 );
  return result;
}
