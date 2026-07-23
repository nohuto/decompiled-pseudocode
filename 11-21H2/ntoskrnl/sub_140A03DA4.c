/*
 * XREFs of sub_140A03DA4 @ 0x140A03DA4
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     ExfAcquirePushLockExclusive @ 0x14029F100 (ExfAcquirePushLockExclusive.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLock @ 0x140359E10 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140814DC0 @ 0x140814DC0 (sub_140814DC0.c)
 *     sub_140A030B0 @ 0x140A030B0 (sub_140A030B0.c)
 *     sub_140A0326C @ 0x140A0326C (sub_140A0326C.c)
 *     sub_140A03C14 @ 0x140A03C14 (sub_140A03C14.c)
 */

__int64 __fastcall sub_140A03DA4(unsigned __int64 a1, unsigned int a2)
{
  __int64 v5; // rax
  int v6; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rbx
  __int64 *v9; // r14
  int v10; // [rsp+20h] [rbp-98h] BYREF
  UNICODE_STRING StringIn; // [rsp+28h] [rbp-90h] BYREF
  __int128 v12; // [rsp+38h] [rbp-80h] BYREF
  __int64 v13; // [rsp+48h] [rbp-70h]
  UNICODE_STRING v14[4]; // [rsp+50h] [rbp-68h] BYREF
  UNICODE_STRING v15; // [rsp+90h] [rbp-28h] BYREF

  memset(v14, 0, sizeof(v14));
  StringIn = 0LL;
  v10 = 0;
  if ( !dword_140C0C660 )
    return 3221225506LL;
  if ( a2 < 0x18 )
    return 3221225476LL;
  v5 = 0x7FFFFFFF0000LL;
  if ( a1 < 0x7FFFFFFF0000LL )
    v5 = a1;
  v12 = *(_OWORD *)v5;
  v13 = *(_QWORD *)(v5 + 16);
  v6 = sub_140A03C14((int *)&v12, &StringIn, &v15, &v10);
  if ( v6 >= 0 )
  {
    *(_DWORD *)&v14[3].Length = v10;
    v14[2] = v15;
    if ( !StringIn.Buffer || (v6 = RtlDuplicateUnicodeString(1u, &StringIn, &v14[1]), v6 >= 0) )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v6 = sub_140814DC0((__int64)sub_140A03D60, (__int64)v14);
      if ( v6 >= 0 )
      {
        ExfAcquirePushLockExclusive((__int64)&qword_140C10E30);
        for ( i = (__int64 *)qword_140C10E20; i != &qword_140C10E20; i = (__int64 *)*i )
        {
          v9 = i;
          if ( i[7] && sub_140A0326C((__int64)i, v10, &StringIn, &v15) )
          {
            i = (__int64 *)i[1];
            sub_140A030B0(v9);
          }
        }
        ExfReleasePushLock(&qword_140C10E30);
      }
      sub_1402F9540((__int64)KeGetCurrentThread());
    }
  }
  if ( StringIn.Buffer )
    RtlFreeUnicodeString(&StringIn);
  if ( v14[1].Buffer )
    RtlFreeUnicodeString(&v14[1]);
  return (unsigned int)v6;
}
