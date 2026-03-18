/*
 * XREFs of ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z @ 0x1800CE1C4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x1800CF570 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 */

__int64 __fastcall CCombinedGeometry::ProcessUpdate(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMBINEDGEOMETRY *a3)
{
  unsigned int v6; // edx
  struct CResource *Resource; // rax
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // edi
  unsigned int v15; // esi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // rcx

  CCombinedGeometry::UnRegisterNotifiers((CCombinedGeometry *)this);
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 2);
  v6 = *((_DWORD *)a3 + 3);
  if ( v6 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v6, 0x41u);
    this[22] = Resource;
    if ( !Resource )
    {
      v15 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2003303421, 0x138u);
      goto LABEL_16;
    }
  }
  else
  {
    this[22] = 0LL;
    Resource = 0LL;
  }
  v9 = *((_DWORD *)a3 + 4);
  if ( v9 )
  {
    v10 = CResourceTable::GetResource((__int64)a2, v9, 0x41u);
    this[23] = (struct CResource *)v10;
    if ( v10 )
    {
      Resource = this[22];
      goto LABEL_6;
    }
    v15 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, -2003303421, 0x14Au);
LABEL_16:
    CCombinedGeometry::UnRegisterNotifiers((CCombinedGeometry *)this);
    goto LABEL_8;
  }
  this[23] = 0LL;
LABEL_6:
  v12 = CResource::RegisterNotifier((CResource *)this, Resource);
  v14 = v12;
  v15 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x166u);
    goto LABEL_15;
  }
  v16 = CResource::RegisterNotifier((CResource *)this, this[23]);
  v14 = v16;
  v15 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x167u);
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v14, 0x153u);
    goto LABEL_16;
  }
LABEL_8:
  *((_DWORD *)this + 8) |= 1u;
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return v15;
}
