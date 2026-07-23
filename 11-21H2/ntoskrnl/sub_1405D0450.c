/*
 * XREFs of sub_1405D0450 @ 0x1405D0450
 * Callers:
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     sub_14038B428 @ 0x14038B428 (sub_14038B428.c)
 *     sub_1405D0668 @ 0x1405D0668 (sub_1405D0668.c)
 */

char sub_1405D0450()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx

  sub_1402D66A8((ULONG_PTR)&qword_140C22060);
  sub_14038B428(1LL, v0, v1);
  LOBYTE(word_140C22070) = 1;
  if ( dword_140C22074 )
  {
    LOBYTE(v2) = 1;
    sub_1405D0668(v2);
    word_140C22070 = 256;
  }
  else if ( HIBYTE(word_140C22070) )
  {
    sub_1405D0668(0LL);
    HIBYTE(word_140C22070) = 0;
  }
  sub_1402935D0((ULONG_PTR)&qword_140C22060);
  return sub_14036AAC4((__int64)&unk_140C22128, DelayedWorkQueue);
}
