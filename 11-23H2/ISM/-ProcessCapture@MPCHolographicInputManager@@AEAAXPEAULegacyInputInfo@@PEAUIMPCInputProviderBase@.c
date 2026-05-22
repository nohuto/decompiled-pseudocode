/*
 * XREFs of ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800B7830
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800B7050 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA_N$$QEAPEAUIMPCTarget@@@Z @ 0x1800B2C28 (--$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::ProcessCapture(
        MPCHolographicInputManager *this,
        struct LegacyInputInfo *a2,
        struct IMPCInputProviderBase *a3,
        struct IMPCTarget **a4)
{
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // r8
  struct IMPCTarget *v10; // rbx
  unsigned int v11; // [rsp+20h] [rbp-20h] BYREF
  struct IMPCTarget *v12; // [rsp+28h] [rbp-18h] BYREF
  struct IMPCTarget *v13; // [rsp+30h] [rbp-10h] BYREF
  MPCHolographicInputManager *v14; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+30h] BYREF

  v14 = this;
  v7 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 152LL))(a3);
  v8 = *(_QWORD *)a3;
  if ( v7 )
  {
    v10 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(v8 + 176))(a3);
    v12 = v10;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v12);
    *a4 = v10;
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 192LL))(
           a3,
           a2) )
    {
      (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD, _QWORD))(*(_QWORD *)a3 + 168LL))(a3, 0LL, 0LL);
      v13 = v10;
      LOBYTE(v14) = 0;
      v15 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 112LL))(a3);
      v11 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 88LL))(a3);
      ISMTracing::MPCHolographicInputManager_CaptureEvent<unsigned long,unsigned int,bool,IMPCTarget *>(
        &v11,
        &v15,
        (bool *)&v14,
        &v13);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v12);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *, struct LegacyInputInfo *))(v8 + 184))(
              a3,
              a2) )
  {
    if ( *a4 )
    {
      LOBYTE(v9) = *((_BYTE *)a2 + 240) != 0;
      (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD, __int64))(*(_QWORD *)a3 + 168LL))(a3, *a4, v9);
      v12 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 176LL))(a3);
      LOBYTE(v14) = 1;
      v15 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 112LL))(a3);
      v11 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 88LL))(a3);
      ISMTracing::MPCHolographicInputManager_CaptureEvent<unsigned long,unsigned int,bool,IMPCTarget *>(
        &v11,
        &v15,
        (bool *)&v14,
        &v12);
    }
  }
}
