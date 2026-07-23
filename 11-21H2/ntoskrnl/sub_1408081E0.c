/*
 * XREFs of sub_1408081E0 @ 0x1408081E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D6254 @ 0x1402D6254 (sub_1402D6254.c)
 *     sub_1402D62A8 @ 0x1402D62A8 (sub_1402D62A8.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140809310 @ 0x140809310 (sub_140809310.c)
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 */

__int64 __fastcall sub_1408081E0(struct _KEVENT *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  _OWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF

  KeResetEvent(a1 + 11);
  memset(v5, 0, sizeof(v5));
  LODWORD(v5[0]) = 3;
  sub_140809310(a1, v5);
  sub_1402935D0((ULONG_PTR)&qword_140C21D20);
  sub_140809838(1LL, 20LL);
  KeResetEvent(&stru_140C21D40);
  sub_1402D6254(128);
  sub_1402D62A8();
  KeWaitForSingleObject(&stru_140C21D40, Executive, 0, 0, 0LL);
  if ( qword_140C5AD70 )
  {
    sub_14042A5E0(2LL, v2);
    if ( qword_140C5AD70 )
      sub_14042A5E0(3LL, v3);
  }
  sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
  return 0LL;
}
