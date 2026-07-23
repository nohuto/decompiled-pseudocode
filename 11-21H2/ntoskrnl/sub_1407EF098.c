/*
 * XREFs of sub_1407EF098 @ 0x1407EF098
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1407ED88C @ 0x1407ED88C (sub_1407ED88C.c)
 *     sub_140809408 @ 0x140809408 (sub_140809408.c)
 *     sub_14080A454 @ 0x14080A454 (sub_14080A454.c)
 *     sub_14080C220 @ 0x14080C220 (sub_14080C220.c)
 *     sub_140819D40 @ 0x140819D40 (sub_140819D40.c)
 *     sub_140828BC0 @ 0x140828BC0 (sub_140828BC0.c)
 *     sub_14099C730 @ 0x14099C730 (sub_14099C730.c)
 *     sub_14099C8F8 @ 0x14099C8F8 (sub_14099C8F8.c)
 *     sub_14099CAD0 @ 0x14099CAD0 (sub_14099CAD0.c)
 *     sub_14099CB50 @ 0x14099CB50 (sub_14099CB50.c)
 *     sub_14099CBC8 @ 0x14099CBC8 (sub_14099CBC8.c)
 *     sub_14099CCC4 @ 0x14099CCC4 (sub_14099CCC4.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407FE7DC @ 0x1407FE7DC (sub_1407FE7DC.c)
 */

struct _KTHREAD *__fastcall sub_1407EF098(char a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax
  int v4; // edi
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]

  v7 = 0LL;
  v6 = 0LL;
  if ( !a1 )
  {
    v4 = sub_1407FE7DC(&v6);
    Interval.QuadPart = -100000LL;
    while ( v4 != dword_140C1F3B8 )
      KeDelayExecutionThread(0, 0, &Interval);
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C1F420, 1u);
  result = KeGetCurrentThread();
  qword_140D3B2C0 = (__int64)result;
  byte_140C1F3A0 = a1 == 0;
  return result;
}
