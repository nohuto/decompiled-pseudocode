/*
 * XREFs of ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ @ 0x1800CEAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180043034 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180043548 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800CBBEC (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     WPP_SF_Pg @ 0x1800CF0A0 (WPP_SF_Pg.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeHardware::UpdateMasterVolumeLevel(CVolumeHardware *this)
{
  unsigned __int64 v2; // rdi
  float *v3; // rbx
  unsigned int v4; // edi
  float *v5; // rcx
  CVolumeUnit *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  float DB; // xmm0_4
  void *Block; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  Block = 0LL;
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, *((unsigned int *)this + 29));
  v3 = (float *)Block;
  if ( Block )
  {
    if ( *((_QWORD *)this + 11) )
    {
      do
      {
        v6 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                              (_QWORD *)this + 10,
                              v2);
        DB = CVolumeUnit::GetDB(v6);
        v3[v2] = DB;
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Pg(*((_QWORD *)WPP_GLOBAL_Control + 2), v7, v8, v2, DB);
        }
        ++v2;
      }
      while ( v2 < *((_QWORD *)this + 11) );
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD, char *))(**((_QWORD **)this + 32) + 64LL))(
           *((_QWORD *)this + 32),
           v3,
           *((unsigned int *)this + 29),
           (char *)this + 264);
    v5 = v3;
  }
  else
  {
    v4 = -2147024882;
    v5 = 0LL;
  }
  free(v5);
  return v4;
}
