/*
 * XREFs of BgQueryBootGraphicsInformation @ 0x140384EB8
 * Callers:
 *     BgkQueryBootGraphicsInformation @ 0x140AECF90 (BgkQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwQueryBootGraphicsInformation @ 0x140384F24 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpFwReleaseLock @ 0x140385840 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140385890 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgQueryBootGraphicsInformation(int a1, __int64 a2)
{
  unsigned int BootGraphicsInformation; // ebx

  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  if ( !a2 || a1 >= 4 )
    return 3221225485LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E4B0 & 1) != 0 )
    BootGraphicsInformation = BgpFwQueryBootGraphicsInformation((unsigned int)a1, a2);
  else
    BootGraphicsInformation = -1073741823;
  BgpFwReleaseLock();
  return BootGraphicsInformation;
}
