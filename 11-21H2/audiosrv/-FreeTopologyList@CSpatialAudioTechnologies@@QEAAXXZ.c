/*
 * XREFs of ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x18013F82C
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18004F4BC (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ??1CSpatialProperties@@QEAA@XZ @ 0x18013D53C (--1CSpatialProperties@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSpatialAudioTechnologies::FreeTopologyList(CSpatialAudioTechnologies *this)
{
  unsigned __int8 v1; // cl
  unsigned __int8 i; // bl
  void (__fastcall ***v3)(_QWORD, __int64); // r8

  EnterCriticalSection(&CriticalSection);
  if ( !--dword_1801C2E08 )
  {
    v1 = g_ListOfSpatialTech[0];
    for ( i = 0; i < v1; ++i )
    {
      v3 = (void (__fastcall ***)(_QWORD, __int64))qword_1801C2D98[i];
      if ( v3 )
      {
        (**v3)(qword_1801C2D98[i], 1LL);
        v1 = g_ListOfSpatialTech[0];
      }
    }
    g_ListOfSpatialTech[0] = 0;
  }
  LeaveCriticalSection(&CriticalSection);
}
