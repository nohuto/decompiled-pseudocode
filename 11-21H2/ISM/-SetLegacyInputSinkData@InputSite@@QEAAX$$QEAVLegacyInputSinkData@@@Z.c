/*
 * XREFs of ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x180124160
 * Callers:
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180013370 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 * Callees:
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180013850 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ??0LegacyInputSinkData@@QEAA@$$QEAV0@@Z @ 0x180013930 (--0LegacyInputSinkData@@QEAA@$$QEAV0@@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x18004E090 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ?SetIdForNamespace@InputSite@@AEAAXW4InputSiteIdNamespace@@_K@Z @ 0x1801240E0 (-SetIdForNamespace@InputSite@@AEAAXW4InputSiteIdNamespace@@_K@Z.c)
 *     ?reset@?$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ @ 0x18012428C (-reset@-$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ.c)
 *     ?GetProcessId@LegacyInputSinkData@@QEBAIXZ @ 0x180124D14 (-GetProcessId@LegacyInputSinkData@@QEBAIXZ.c)
 */

__int64 __fastcall InputSite::SetLegacyInputSinkData(__int64 a1, LegacyInputSinkData *a2)
{
  __int64 v4; // rax
  int v5; // ecx
  unsigned int *v6; // rbx
  __int64 CompositionInputQueue; // rax
  __int64 v8; // rax
  __int64 result; // rax
  struct _LUID v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF

  v10 = *LegacyInputSinkData::GetLuid(a2);
  InputSite::SetIdForNamespace(a1, 0, *(_QWORD *)&v10);
  v4 = 0LL;
  v5 = 1;
  do
    *(&v10.LowPart + v4++) = v5++;
  while ( v4 < 4 );
  v6 = (unsigned int *)&v10;
  while ( 1 )
  {
    CompositionInputQueue = LegacyInputSinkData::GetCompositionInputQueue((__int64)a2, *v6);
    if ( (unsigned int)(*(_DWORD *)CompositionInputQueue - 2) <= 1 )
      break;
    if ( ++v6 == (unsigned int *)&v11 )
    {
      LODWORD(v8) = 0;
      goto LABEL_8;
    }
  }
  v8 = *(_QWORD *)(CompositionInputQueue + 8);
LABEL_8:
  if ( (_DWORD)v8 )
    InputSite::SetIdForNamespace(a1, 1, (unsigned int)v8);
  if ( !*(_DWORD *)(a1 + 40) )
    *(_DWORD *)(a1 + 40) = LegacyInputSinkData::GetProcessId(a2);
  std::_Optional_destruct_base<LegacyInputSinkData,0>::reset(a1 + 48);
  result = LegacyInputSinkData::LegacyInputSinkData(a1 + 48, (__int64)a2);
  *(_BYTE *)(a1 + 480) = 1;
  return result;
}
