/*
 * XREFs of ?ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST@@@Z @ 0x1801F02B0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800233AC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180072578 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007FD6C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180087F50 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroup@@@Z @ 0x1801B4034 (--4-$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroup@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetFilterList(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST *a3)
{
  struct CResource *v3; // rbx
  unsigned int v5; // edx
  unsigned int v6; // esi
  __int64 Resource; // rax
  int v9; // eax
  __int64 v10; // rcx
  CResource *v11; // rcx
  CResource *v12; // rcx
  struct CResource *v13; // rax
  CResource *v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0;
  v15 = 0LL;
  if ( v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0xC7u);
    wil::com_ptr_t<CVisualGroup,wil::err_returncode_policy>::operator=(&v15, Resource);
    v3 = v15;
  }
  if ( v3 != this[264] )
  {
    v9 = CResource::RegisterNotifier((CResource *)this, v3);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x13Du, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[264]);
      v11 = this[264];
      this[264] = 0LL;
      if ( v11 )
        CResource::InternalRelease(v11);
      v12 = this[264];
      v13 = v3;
      v3 = 0LL;
      this[264] = v13;
      if ( v12 )
        CResource::InternalRelease(v12);
    }
  }
  if ( v3 )
    CResource::InternalRelease(v3);
  return v6;
}
