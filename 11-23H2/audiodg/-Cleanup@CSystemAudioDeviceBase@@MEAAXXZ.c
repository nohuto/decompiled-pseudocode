/*
 * XREFs of ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140055C90
 * Callers:
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140057070 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x1400573E0 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140058940 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x140052860 (WPP_SF_.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140055794 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAVCStreamInstance@@XZ @ 0x140055E3C (-RemoveHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@Q.c)
 */

void __fastcall CSystemAudioDeviceBase::Cleanup(CSystemAudioDeviceBase *this)
{
  _UNKNOWN **v2; // rcx
  CStreamInstance *v3; // rax
  CStreamInstance *v4; // rax
  CStreamInstance *v5; // rax

  v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_17ee35be398e333f76426bebeb3cbce6_Traceguids);
    v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 13) )
  {
    do
    {
      v3 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 88);
      if ( v3 )
        CStreamInstance::`scalar deleting destructor'(v3);
    }
    while ( *((_QWORD *)this + 13) );
    v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 7) )
  {
    do
    {
      v4 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 40);
      if ( v4 )
        CStreamInstance::`scalar deleting destructor'(v4);
    }
    while ( *((_QWORD *)this + 7) );
    v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 19) )
  {
    do
    {
      v5 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 136);
      if ( v5 )
        CStreamInstance::`scalar deleting destructor'(v5);
    }
    while ( *((_QWORD *)this + 19) );
    v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x200) != 0 && *((_BYTE *)v2 + 25) >= 4u )
    WPP_SF_((__int64)v2[2], 0xBu, (__int64)&WPP_17ee35be398e333f76426bebeb3cbce6_Traceguids);
}
