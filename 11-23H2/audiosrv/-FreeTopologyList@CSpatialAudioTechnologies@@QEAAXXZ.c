/*
 * XREFs of ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x180005768
 * Callers:
 *     ??1CSpatialProperties@@QEAA@XZ @ 0x1800056E0 (--1CSpatialProperties@@QEAA@XZ.c)
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x180021A10 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSpatialAudioTechnologies::FreeTopologyList(CSpatialAudioTechnologies *this)
{
  unsigned __int8 v1; // cl
  unsigned __int8 i; // bl
  void (__fastcall ***v3)(_QWORD, __int64); // r8

  EnterCriticalSection(&CriticalSection);
  if ( !--dword_1801D0128 )
  {
    v1 = g_ListOfSpatialTech;
    for ( i = 0; i < v1; ++i )
    {
      v3 = (void (__fastcall ***)(_QWORD, __int64))qword_1801D00B8[i];
      if ( v3 )
      {
        (**v3)(qword_1801D00B8[i], 1LL);
        v1 = g_ListOfSpatialTech;
      }
    }
    g_ListOfSpatialTech = 0;
  }
  LeaveCriticalSection(&CriticalSection);
}
