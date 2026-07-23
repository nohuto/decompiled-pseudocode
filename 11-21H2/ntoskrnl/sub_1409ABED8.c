/*
 * XREFs of sub_1409ABED8 @ 0x1409ABED8
 * Callers:
 *     sub_1409ABC00 @ 0x1409ABC00 (sub_1409ABC00.c)
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_14063C25C @ 0x14063C25C (sub_14063C25C.c)
 *     sub_1407F85CC @ 0x1407F85CC (sub_1407F85CC.c)
 *     sub_1407FDA6C @ 0x1407FDA6C (sub_1407FDA6C.c)
 *     sub_140983EC0 @ 0x140983EC0 (sub_140983EC0.c)
 *     sub_1409B6808 @ 0x1409B6808 (sub_1409B6808.c)
 *     sub_1409C5B80 @ 0x1409C5B80 (sub_1409C5B80.c)
 *     sub_1409F80D4 @ 0x1409F80D4 (sub_1409F80D4.c)
 */

__int64 __fastcall sub_1409ABED8(__int64 a1)
{
  __int64 v2; // rcx
  volatile __int64 *v3; // rdi
  __int64 v4; // rbx
  ULONG_PTR v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  v3 = (volatile __int64 *)sub_140204738(a1);
  if ( *((_QWORD *)v3 + 108) )
  {
    v4 = PsAttachSiloToCurrentThread(v2);
    sub_1407FDA6C(0);
    PsDetachSiloFromCurrentThread(v4);
  }
  sub_1409C5B80(a1, v3 + 92);
  v7 = 0LL;
  sub_140347770((__int64)&v7);
  BugCheckParameter2 = 0LL;
  PsGetPermanentSiloContext(a1, dword_140C490B8, &BugCheckParameter2);
  if ( BugCheckParameter2 )
    sub_1407F85CC(BugCheckParameter2);
  sub_14022EA30((__int64 *)&v7);
  sub_140983EC0(v3);
  v5 = *((_QWORD *)v3 + 132);
  if ( v5 )
  {
    sub_14063C25C(v5);
    *((_QWORD *)v3 + 132) = 0LL;
  }
  sub_1409B6808(v3);
  return sub_1409F80D4(a1);
}
