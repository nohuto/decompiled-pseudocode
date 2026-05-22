/*
 * XREFs of ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x18005F4BC
 * Callers:
 *     ?GetOrCreateInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x18005F86C (-GetOrCreateInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Micr.c)
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18013F1AC (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 * Callees:
 *     ?CreateInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@K@Z @ 0x180002C48 (-CreateInputSiteFromIds@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$span@UI.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180023B44 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x18005EFB0 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 *     ?GetInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@@Z @ 0x18005F408 (-GetInputSiteFromIds@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$span@UInpu.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18005F944 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x18005FA6C (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDuplicatedInputSinkHandle@LegacyInputSinkData@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@XZ @ 0x18013F5EC (-GetDuplicatedInputSinkHandle@LegacyInputSinkData@@QEBA-AV-$unique_any_t@V-$unique_storage@U-$ha.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall InputSiteManager::GetInputSiteFromInputSinkData(
        __int64 a1,
        __int64 *a2,
        LegacyInputSinkData *a3,
        char a4)
{
  __int64 v8; // rax
  int v9; // ecx
  HANDLE *v10; // rbx
  __int64 CompositionInputQueue; // rax
  __int64 v12; // rax
  __int128 v13; // xmm6
  char *InputSiteFromIds; // rax
  HANDLE v15; // rcx
  __int64 v16; // rbx
  __int64 *DuplicatedInputSinkHandle; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD v22[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  char v24; // [rsp+50h] [rbp-B8h]
  char v25; // [rsp+5Ch] [rbp-ACh]
  char v26; // [rsp+61h] [rbp-A7h]
  char v27; // [rsp+6Ch] [rbp-9Ch]
  char v28; // [rsp+A8h] [rbp-60h]
  char v29; // [rsp+E8h] [rbp-20h]
  char v30; // [rsp+128h] [rbp+20h]
  char v31; // [rsp+168h] [rbp+60h]
  char v32; // [rsp+1A8h] [rbp+A0h]
  char v33; // [rsp+1F0h] [rbp+E8h]
  HANDLE TargetHandle[2]; // [rsp+1F8h] [rbp+F0h] BYREF
  int v35; // [rsp+208h] [rbp+100h] BYREF
  HANDLE v36; // [rsp+210h] [rbp+108h]
  int v37; // [rsp+218h] [rbp+110h]
  __int64 v38; // [rsp+220h] [rbp+118h]

  v35 = 0;
  TargetHandle[0] = (HANDLE)*LegacyInputSinkData::GetLuid(a3);
  v36 = TargetHandle[0];
  v37 = 1;
  v8 = 0LL;
  v9 = 1;
  do
    *((_DWORD *)TargetHandle + v8++) = v9++;
  while ( v8 < 4 );
  v10 = TargetHandle;
  while ( 1 )
  {
    CompositionInputQueue = LegacyInputSinkData::GetCompositionInputQueue(a3, *(unsigned int *)v10);
    if ( *(_DWORD *)CompositionInputQueue == 2 || *(_DWORD *)CompositionInputQueue == 3 )
      break;
    v10 = (HANDLE *)((char *)v10 + 4);
    if ( v10 == (HANDLE *)&v35 )
    {
      LODWORD(v12) = 0;
      goto LABEL_9;
    }
  }
  v12 = *(_QWORD *)(CompositionInputQueue + 8);
LABEL_9:
  v38 = (unsigned int)v12;
  TargetHandle[0] = HANDLE_FLAG_PROTECT_FROM_CLOSE;
  TargetHandle[1] = &v35;
  if ( !(_DWORD)v12 )
  {
    TargetHandle[0] = HANDLE_FLAG_INHERIT;
    TargetHandle[1] = &v35;
  }
  v13 = *(_OWORD *)TargetHandle;
  InputSiteManager::GetInputSiteFromIds(a1, a2, TargetHandle);
  if ( !*a2 )
  {
    if ( a4 )
    {
      *(_OWORD *)&v22[1] = v13;
      InputSiteFromIds = (char *)InputSiteManager::CreateInputSiteFromIds(a1, TargetHandle, (__int64)&v22[1], 0);
      Microsoft::WRL::ComPtr<InputSite>::operator=(a2, InputSiteFromIds);
      v15 = TargetHandle[0];
      if ( TargetHandle[0] )
      {
        TargetHandle[0] = 0LL;
        (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  v16 = *a2;
  if ( *a2 && !*(_BYTE *)(v16 + 480) )
  {
    if ( *((_BYTE *)a3 + 8) == 1 )
    {
      InputSite::SetLegacyInputSinkData(*a2, a3);
    }
    else
    {
      DuplicatedInputSinkHandle = (__int64 *)LegacyInputSinkData::GetDuplicatedInputSinkHandle(a3, TargetHandle);
      v23 = *DuplicatedInputSinkHandle;
      *DuplicatedInputSinkHandle = 0LL;
      v24 = 1;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      InputSite::SetLegacyInputSinkData(v16, (LegacyInputSinkData *)&v23);
      if ( (unsigned __int64)(v24 + 1LL) >= 2 && (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        NtCloseCompositionInputSink(v23, v18, v19, v20);
      if ( (unsigned __int64)TargetHandle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        NtCloseCompositionInputSink(TargetHandle[0], (char *)TargetHandle[0] - 1, v19, v20);
    }
  }
  return a2;
}
