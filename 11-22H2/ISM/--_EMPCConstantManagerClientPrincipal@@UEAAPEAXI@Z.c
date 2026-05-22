/*
 * XREFs of ??_EMPCConstantManagerClientPrincipal@@UEAAPEAXI@Z @ 0x18019D940
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000F950 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18018A1E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPC_ea_18018A1E0.c)
 */

MPCConstantManagerClientPrincipal *__fastcall MPCConstantManagerClientPrincipal::`vector deleting destructor'(
        MPCConstantManagerClientPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // di
  __int64 v6; // rcx
  Microsoft::BamoImpl::BamoImplObject *v7; // rcx

  v4 = a2;
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release(v6);
  v7 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v7 )
    Microsoft::BamoImpl::BamoImplObject::Release(v7, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}
