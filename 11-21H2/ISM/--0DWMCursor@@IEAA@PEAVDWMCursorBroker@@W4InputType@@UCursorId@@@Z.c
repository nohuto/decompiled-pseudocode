/*
 * XREFs of ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z @ 0x180029C10
 * Callers:
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x1800293AC (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BB84 (-InternalRelease@-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002BD90 (-AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall DWMCursor::DWMCursor(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // rcx
  struct InputSystemServerConnection *BamoServerConnection; // rbx
  struct InputSystemServerConnection *v10; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // rax
  struct InputSystemServerConnection *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = (struct InputSystemServerConnection *)a1;
  *(_QWORD *)(a1 + 16) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)a1 = &DWMCursor::`vftable'{for `ICursor3D'};
  *(_QWORD *)(a1 + 8) = &DWMCursor::`vftable'{for `IGetClosestInteractiveBounds'};
  *(_QWORD *)(a1 + 16) = &DWMCursor::`vftable'{for `RefCountedObject'};
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = 100LL;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_BYTE *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v8 = *(_QWORD *)(a1 + 32);
    }
    *(_QWORD *)(a1 + 32) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *(_QWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 52) = a3;
  *(_WORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_OWORD *)(a1 + 112) = 0LL;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v10 = *(struct InputSystemServerConnection **)(a1 + 160);
  if ( v10 != BamoServerConnection )
  {
    if ( BamoServerConnection )
    {
      v11 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(struct InputSystemServerConnection *))(*(_QWORD *)BamoServerConnection + 48LL))(BamoServerConnection);
      Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(v11);
      v10 = *(struct InputSystemServerConnection **)(a1 + 160);
    }
    v13 = v10;
    *(_QWORD *)(a1 + 160) = BamoServerConnection;
    Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(&v13);
  }
  return a1;
}
