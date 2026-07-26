/*
 * XREFs of ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011095C
 * Callers:
 *     ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C010D8A0 (-Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C010E7A4 (ndisBindReadFilterDriverFromV3Registry.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x1C010F89C (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C010FC08 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C011177C (ndisIfOpenInterfaceRegistryKey.c)
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C01124EC (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C012E7DC (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C01310A0 (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x1C0131264 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C01313BC (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ?Open@NetSetupKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C0134730 (-Open@NetSetupKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 * Callees:
 *     netsetupGetPathForObjectType @ 0x1C0110AA4 (netsetupGetPathForObjectType.c)
 */

int __fastcall netsetupBuildObjectPath(unsigned int a1, __int64 a2, unsigned int a3, int a4, wchar_t *Dst)
{
  int v6; // r9d
  const wchar_t *v7; // rbp
  __int64 PathForObjectType; // rax
  int v9; // r8d
  const wchar_t *v10; // r8
  int v11; // r9d
  int v12; // r9d
  int v14; // [rsp+40h] [rbp-58h]
  int v15; // [rsp+48h] [rbp-50h]
  int v16; // [rsp+50h] [rbp-48h]
  int v17; // [rsp+58h] [rbp-40h]
  int v18; // [rsp+60h] [rbp-38h]
  int v19; // [rsp+68h] [rbp-30h]
  int v20; // [rsp+70h] [rbp-28h]
  const wchar_t *v21; // [rsp+78h] [rbp-20h]

  if ( *((_BYTE *)qword_1C00EC738 + 96) && a4 == 3 )
  {
    a3 = 1;
  }
  else
  {
    if ( !a4 )
    {
      v7 = (const wchar_t *)&unk_1C00D2784;
      goto LABEL_5;
    }
    v6 = a4 - 1;
    if ( !v6 )
    {
      v7 = L"\\Properties";
      goto LABEL_5;
    }
    v11 = v6 - 1;
    if ( !v11 )
    {
      v7 = L"\\Kernel";
      goto LABEL_5;
    }
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
        v7 = L"\\Keywords";
      else
        v7 = 0LL;
      goto LABEL_5;
    }
  }
  v7 = L"\\Kernel";
  if ( a3 )
    v7 = L"\\CachedRuntimeProperties";
LABEL_5:
  PathForObjectType = netsetupGetPathForObjectType(a3, a1);
  if ( v9 )
  {
    if ( v9 != 1 )
      return PathForObjectType;
    v21 = v7;
    v20 = *(unsigned __int8 *)(a2 + 15);
    v19 = *(unsigned __int8 *)(a2 + 14);
    v18 = *(unsigned __int8 *)(a2 + 13);
    v10 = L"\\Registry\\Machine\\DEVICES\\Networking\\%ws\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}%ws";
    v17 = *(unsigned __int8 *)(a2 + 12);
    v16 = *(unsigned __int8 *)(a2 + 11);
    v15 = *(unsigned __int8 *)(a2 + 10);
    v14 = *(unsigned __int8 *)(a2 + 9);
  }
  else
  {
    v21 = v7;
    v20 = *(unsigned __int8 *)(a2 + 15);
    v19 = *(unsigned __int8 *)(a2 + 14);
    v18 = *(unsigned __int8 *)(a2 + 13);
    v17 = *(unsigned __int8 *)(a2 + 12);
    v10 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\%ws\\{%08x-%04x-%04x-%02x%02x-%02x%02x"
           "%02x%02x%02x%02x}%ws";
    v16 = *(unsigned __int8 *)(a2 + 11);
    v15 = *(unsigned __int8 *)(a2 + 10);
    v14 = *(unsigned __int8 *)(a2 + 9);
  }
  LODWORD(PathForObjectType) = swprintf_s(
                                 Dst,
                                 0x100uLL,
                                 v10,
                                 PathForObjectType,
                                 *(_DWORD *)a2,
                                 *(unsigned __int16 *)(a2 + 4),
                                 *(unsigned __int16 *)(a2 + 6),
                                 *(unsigned __int8 *)(a2 + 8),
                                 v14,
                                 v15,
                                 v16,
                                 v17,
                                 v18,
                                 v19,
                                 v20,
                                 v21);
  return PathForObjectType;
}
