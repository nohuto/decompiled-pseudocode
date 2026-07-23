/*
 * XREFs of sub_140946400 @ 0x140946400
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140764CE4 @ 0x140764CE4 (sub_140764CE4.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 */

void __fastcall sub_140946400(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
  {
    if ( EtwEventEnabled(qword_140D00AB0, &stru_140037280) )
    {
      sub_14077572C(0);
      sub_140764CE4((__int64)qword_140C46278, (__int64)sub_140945FA0, 0LL);
      sub_140775698(0);
    }
    if ( EtwEventEnabled(qword_140D00AB0, &stru_14003B690) )
    {
      sub_14077572C(0);
      sub_140764CE4((__int64)qword_140C46278, (__int64)sub_140946360, 0LL);
      sub_140775698(0);
    }
    if ( EtwEventEnabled(qword_140D00AB0, &stru_14003B2A0) )
    {
      sub_14077572C(0);
      sub_140764CE4((__int64)qword_140C46278, (__int64)sub_1409462A0, 0LL);
      sub_140775698(0);
    }
    if ( EtwEventEnabled(qword_140D00AB0, &stru_14003B4C0) )
    {
      sub_14077572C(0);
      sub_140764CE4((__int64)qword_140C46278, (__int64)sub_1409460F0, 0LL);
      sub_140775698(0);
    }
  }
}
