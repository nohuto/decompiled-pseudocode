/*
 * XREFs of MiInitializePartitions @ 0x140B45318
 * Callers:
 *     MiCreatePfnDatabase @ 0x140B450C8 (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  if ( !a1 )
  {
    qword_140C67380 = 0LL;
    qword_140C67388 = 0LL;
    qword_140C673A8 = (PRTL_BITMAP)&dword_140C673B0;
    dword_140C673B0 = 1;
    byte_140C67390 |= 1u;
    qword_140C673A0 = (__int64)&qword_140C67398;
    qword_140C67398 = (__int64)&qword_140C67398;
    qword_140C673C0 = (__int64)MiSystemPartition;
    qword_140C673C8 = (__int64)&qword_140C673C0;
    qword_140C673B8 = (__int64)&byte_140C67390;
  }
  return 1LL;
}
