/*
 * XREFs of ?InternalRelease@?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18009EF4C
 * Callers:
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x180096EB4 (--0DeviceInputHost@@AEAA@XZ.c)
 *     ??1?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x18009E4CC (--1-$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0InputProcess@@AEAA@XZ @ 0x1800CA6F8 (--0InputProcess@@AEAA@XZ.c)
 *     ??1InputProcess@@UEAA@XZ @ 0x1800CA9D0 (--1InputProcess@@UEAA@XZ.c)
 *     ?Create@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18013C0CC (-Create@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClientConnection@.c)
 *     ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x18013C284 (-GetForCurrentThread@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClie.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180032574 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<InputSystemInternalClientConnection>::InternalRelease(
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
