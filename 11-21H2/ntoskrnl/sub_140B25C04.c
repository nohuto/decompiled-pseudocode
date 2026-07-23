/*
 * XREFs of sub_140B25C04 @ 0x140B25C04
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_1403D808C @ 0x1403D808C (sub_1403D808C.c)
 *     ExInitializePagedLookasideList @ 0x1406DA090 (ExInitializePagedLookasideList.c)
 *     sub_140855918 @ 0x140855918 (sub_140855918.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B25D38 @ 0x140B25D38 (sub_140B25D38.c)
 *     sub_140B25E30 @ 0x140B25E30 (sub_140B25E30.c)
 *     sub_140B25F14 @ 0x140B25F14 (sub_140B25F14.c)
 *     sub_140B2603C @ 0x140B2603C (sub_140B2603C.c)
 *     sub_140B260DC @ 0x140B260DC (sub_140B260DC.c)
 *     sub_140B26258 @ 0x140B26258 (sub_140B26258.c)
 */

char sub_140B25C04()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  qword_140C48BA8 = (__int64)ExAllocatePoolWithTag((POOL_TYPE)1552, 0x680uLL, 0x74725346u);
  v0 = 16LL;
  v1 = 0LL;
  do
  {
    ExInitializeResourceLite((PERESOURCE)(v1 + qword_140C48BA8));
    v1 += 104LL;
    --v0;
  }
  while ( v0 );
  sub_140B26258();
  sub_140B260DC();
  sub_140B2603C();
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140CE1CC0, 0LL, 0LL, 0, 0x18uLL, 0x6C655346u, 0);
  stru_140C48B40.Header.Type = 5;
  stru_140C48B40.Header.WaitListHead.Blink = &stru_140C48B40.Header.WaitListHead;
  stru_140C48B40.Header.WaitListHead.Flink = &stru_140C48B40.Header.WaitListHead;
  stru_140C48B40.Header.Size = 8;
  ValueName.Buffer = L"Win95TruncatedExtensions";
  stru_140C48B40.Header.SignalState = 1;
  stru_140C48B40.Limit = 0x7FFFFFFF;
  *(_DWORD *)&ValueName.Length = 3276848;
  sub_140B25F14(&ValueName);
  if ( (int)sub_140B25E30() < 0 || (int)sub_1403D808C() < 0 || (int)sub_140B25D38() < 0 )
    return 0;
  sub_140855918();
  return 1;
}
