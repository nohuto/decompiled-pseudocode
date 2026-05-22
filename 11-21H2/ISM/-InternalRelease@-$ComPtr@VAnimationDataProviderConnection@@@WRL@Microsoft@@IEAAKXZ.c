/*
 * XREFs of ?InternalRelease@?$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180087D3C
 * Callers:
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x18007FF60 (--0DeviceInputHost@@AEAA@XZ.c)
 *     ??1?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x180087308 (--1-$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0InputProcess@@AEAA@XZ @ 0x1800B1580 (--0InputProcess@@AEAA@XZ.c)
 *     ??1InputProcess@@UEAA@XZ @ 0x1800B186C (--1InputProcess@@UEAA@XZ.c)
 *     ??1AnimationDataProvider@@UEAA@XZ @ 0x1800F4368 (--1AnimationDataProvider@@UEAA@XZ.c)
 *     ?Create@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18012077C (-Create@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClientConnection@.c)
 *     ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x1801208EC (-GetForCurrentThread@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClie.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18002BBAC (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AnimationDataProviderConnection>::InternalRelease(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  __int64 result; // rax
  Microsoft::Bamo::BaseBamoConnection *v2; // rdx

  result = 0LL;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::Bamo::BaseBamoConnection::Release(v2);
  }
  return result;
}
