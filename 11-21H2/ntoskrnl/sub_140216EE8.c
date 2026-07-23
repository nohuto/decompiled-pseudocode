/*
 * XREFs of sub_140216EE8 @ 0x140216EE8
 * Callers:
 *     sub_140693C24 @ 0x140693C24 (sub_140693C24.c)
 * Callees:
 *     sub_140217060 @ 0x140217060 (sub_140217060.c)
 *     sub_1402171FC @ 0x1402171FC (sub_1402171FC.c)
 *     sub_14021721C @ 0x14021721C (sub_14021721C.c)
 *     sub_14027D408 @ 0x14027D408 (sub_14027D408.c)
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030FE40 @ 0x14030FE40 (sub_14030FE40.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140693D80 @ 0x140693D80 (sub_140693D80.c)
 */

__int64 __fastcall sub_140216EE8(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // r15
  int i; // r14d
  unsigned __int64 v6; // rsi
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v8; // rcx
  bool v9; // zf
  __int64 result; // rax
  _OWORD v11[3]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+60h] [rbp-9h]
  _OWORD v13[3]; // [rsp+68h] [rbp-1h] BYREF

  v12 = 0LL;
  v2 = *(_QWORD *)(BugCheckParameter2 + 40) >> 12;
  memset(v13, 0, sizeof(v13));
  v3 = 48 * v2;
  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  sub_14030D5C0(BugCheckParameter2);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v6 = qword_140C50678;
      if ( !qword_140C50678 )
        continue;
    }
    else
    {
      v6 = 2147352576LL;
    }
    if ( sub_140317A10(8 * ((v6 >> 39) & 0x1FF) - 0x90482413000LL) )
    {
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 1224, 0LL);
      *((_BYTE *)CurrentThread + 1384) |= 1u;
      sub_14030FE40(0, v6, v6, 0, (__int64)v11);
      sub_140281A58(CurrentThread, BugCheckParameter2);
    }
  }
  sub_140693D80(BugCheckParameter2);
  BugCheckParameter4 = *(_QWORD *)(v3 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( BugCheckParameter4 != 2 )
    KeBugCheckEx(0x1Au, 0x3453uLL, BugCheckParameter2, 0xAAAAAAAAAAAAAAABuLL * (v3 >> 4), BugCheckParameter4);
  sub_14027D408(BugCheckParameter2, 1LL);
  sub_1402D0930(v13, 0LL);
  _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter2 + 632), 0xBu);
  sub_14021721C(BugCheckParameter2);
  sub_1402171FC(*(_QWORD *)(BugCheckParameter2 + 40));
  v9 = (unsigned int)sub_140217060(v8, *(_QWORD *)(BugCheckParameter2 + 40) >> 12) == 3;
  result = *((_QWORD *)&v11[0] + 1);
  if ( v9 )
    return *((_QWORD *)&v11[0] + 1) + 1LL;
  return result;
}
