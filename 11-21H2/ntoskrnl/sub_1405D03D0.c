/*
 * XREFs of sub_1405D03D0 @ 0x1405D03D0
 * Callers:
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     sub_14038B428 @ 0x14038B428 (sub_14038B428.c)
 *     sub_1405D4440 @ 0x1405D4440 (sub_1405D4440.c)
 */

char __fastcall sub_1405D03D0(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  sub_1402D66A8((ULONG_PTR)&qword_140C22060);
  LOBYTE(word_140C22070) = 0;
  if ( a1 )
  {
    byte_140C2207D = 1;
    LOBYTE(v3) = byte_140C2207C;
    qword_140C22080 = MEMORY[0xFFFFF78000000008];
    sub_1405D4440(v3);
  }
  if ( !dword_140C22074 )
    sub_14038B428(0LL, v2, v4);
  sub_1402935D0((ULONG_PTR)&qword_140C22060);
  return sub_14036AAC4((__int64)&unk_140C22128, DelayedWorkQueue);
}
