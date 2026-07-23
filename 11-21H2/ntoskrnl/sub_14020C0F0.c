/*
 * XREFs of sub_14020C0F0 @ 0x14020C0F0
 * Callers:
 *     sub_14020B888 @ 0x14020B888 (sub_14020B888.c)
 *     sub_14020BA48 @ 0x14020BA48 (sub_14020BA48.c)
 *     IoPropagateActivityIdToThread @ 0x14020BD50 (IoPropagateActivityIdToThread.c)
 *     sub_14020BDB0 @ 0x14020BDB0 (sub_14020BDB0.c)
 *     IoGetFsTrackOffsetState @ 0x14020BDF0 (IoGetFsTrackOffsetState.c)
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 *     IoSetGenericIrpExtension @ 0x140387790 (IoSetGenericIrpExtension.c)
 *     IoGetCopyInformationExtension @ 0x140417D00 (IoGetCopyInformationExtension.c)
 *     sub_1404182AC @ 0x1404182AC (sub_1404182AC.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140559250 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x1405592A0 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x1405592D0 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetFsZeroingOffset @ 0x140559310 (IoGetFsZeroingOffset.c)
 *     IoSetFsZeroingOffset @ 0x140559420 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140559460 (IoSetFsZeroingOffsetRequired.c)
 *     sub_140559770 @ 0x140559770 (sub_140559770.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14020C0F0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( a2 != 2 )
      return 0;
  }
  else
  {
    if ( !v2 )
      return 0;
    v3 = *(unsigned __int16 *)(v2 + 2);
    if ( !_bittest(&v3, a2) )
      return 0;
  }
  return 1;
}
