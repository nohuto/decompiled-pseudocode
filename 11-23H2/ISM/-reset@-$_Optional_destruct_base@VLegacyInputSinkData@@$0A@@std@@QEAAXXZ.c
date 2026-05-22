/*
 * XREFs of ?reset@?$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ @ 0x18005F0A0
 * Callers:
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x18005EFB0 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 *     ?RemoveIdForNamespace@InputSite@@QEAAXW4InputSiteIdNamespace@@@Z @ 0x18013EF54 (-RemoveIdForNamespace@InputSite@@QEAAXW4InputSiteIdNamespace@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Optional_destruct_base<LegacyInputSinkData,0>::reset(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx

  if ( *((_BYTE *)a1 + 432) )
  {
    if ( *((char *)a1 + 8) != -1LL && *((_BYTE *)a1 + 8) )
    {
      v5 = *a1;
      if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        NtCloseCompositionInputSink(v5, a2, a3, a4);
    }
    *((_BYTE *)a1 + 432) = 0;
  }
}
