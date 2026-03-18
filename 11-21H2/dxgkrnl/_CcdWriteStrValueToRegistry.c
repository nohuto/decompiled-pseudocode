/*
 * XREFs of _CcdWriteStrValueToRegistry @ 0x1C01BB408
 * Callers:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C01AF3E8 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C01B6FEC (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01BB308 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall CcdWriteStrValueToRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, PCANSI_STRING SourceString)
{
  unsigned __int16 v6; // ax
  __int64 v7; // r9
  unsigned __int16 v8; // si
  wchar_t *v9; // rdi
  NTSTATUS v10; // ebx
  NTSTATUS v11; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v6 = RtlxAnsiStringToUnicodeSize(SourceString);
  v8 = v6;
  if ( v6 )
  {
    v9 = (wchar_t *)operator new[](v6 + 2LL, 0x63644356u, 256LL, v7);
    if ( v9 )
    {
      DestinationString.Length = 0;
      *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
      DestinationString.MaximumLength = v8;
      DestinationString.Buffer = v9;
      v10 = RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
      if ( v10 >= 0 )
      {
        v11 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, DestinationString.Buffer, v8 + 2);
        v10 = v11;
        if ( v11 < 0 )
          WdLogSingleEntry1(2LL, v11);
      }
      operator delete[](v9);
      return (unsigned int)v10;
    }
    else
    {
      WdLogSingleEntry1(6LL, v8);
      return 3221225495LL;
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    return 3221225485LL;
  }
}
