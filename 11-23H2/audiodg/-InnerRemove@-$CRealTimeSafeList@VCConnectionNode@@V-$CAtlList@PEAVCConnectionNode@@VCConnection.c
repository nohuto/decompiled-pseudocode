/*
 * XREFs of ?InnerRemove@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAJPEAVCConnectionNode@@I@Z @ 0x14000E67C
 * Callers:
 *     ?Remove@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@@Z @ 0x14000E5E0 (-Remove@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeT.c)
 * Callees:
 *     ?Find@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEBAPEAU__POSITION@@AEBQEAVCConnectionNode@@PEAU3@@Z @ 0x14000E6CC (-Find@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEBAPEAU__POSITION@@AEBQEA.c)
 *     ?RemoveAt@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@Z @ 0x14000E6FC (-RemoveAt@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@.c)
 */

__int64 __fastcall CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InnerRemove(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = 0;
  v4 = ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::Find(a1 + 48LL * a3, &v7);
  if ( v4 )
    ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(v5, v4);
  else
    return (unsigned int)-2005139430;
  return v3;
}
