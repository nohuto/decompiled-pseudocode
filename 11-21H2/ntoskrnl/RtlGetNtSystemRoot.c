/*
 * XREFs of RtlGetNtSystemRoot @ 0x140761D60
 * Callers:
 *     sub_140659150 @ 0x140659150 (sub_140659150.c)
 *     sub_140761234 @ 0x140761234 (sub_140761234.c)
 *     sub_140A13308 @ 0x140A13308 (sub_140A13308.c)
 *     sub_140A17E60 @ 0x140A17E60 (sub_140A17E60.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (PWSTR)(*((_QWORD *)sub_140347DB0() + 165) + 30LL);
  else
    return (PWSTR)0xFFFFF78000000030LL;
}
