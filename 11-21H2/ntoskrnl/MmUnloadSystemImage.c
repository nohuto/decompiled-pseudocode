/*
 * XREFs of MmUnloadSystemImage @ 0x140762490
 * Callers:
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_140761DF8 @ 0x140761DF8 (sub_140761DF8.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_14082ECCC @ 0x14082ECCC (sub_14082ECCC.c)
 *     sub_14085D640 @ 0x14085D640 (sub_14085D640.c)
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 *     sub_1409528A8 @ 0x1409528A8 (sub_1409528A8.c)
 *     sub_140971848 @ 0x140971848 (sub_140971848.c)
 *     sub_140975FF0 @ 0x140975FF0 (sub_140975FF0.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 */

__int64 __fastcall MmUnloadSystemImage(__int64 BugCheckParameter2)
{
  __int64 v2; // rdi
  char v3; // si
  struct _KTHREAD *v4; // rbx
  __int64 HostSilo; // rax

  v2 = 0LL;
  v3 = 0;
  if ( *((_BYTE *)sub_140347DB0() + 1368) )
  {
    HostSilo = PsGetHostSilo();
    v2 = PsAttachSiloToCurrentThread(HostSilo);
    v3 = 1;
  }
  v4 = sub_1406F5B50();
  sub_1406F4FB8(BugCheckParameter2, -1);
  sub_1406F5AF0((__int64)v4);
  if ( v3 )
    PsDetachSiloFromCurrentThread(v2);
  return 0LL;
}
