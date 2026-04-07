/*
 * XREFs of ?EndTransition@CAccent@@QEAAJXZ @ 0x180007F70
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180007F08 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x18009942C (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x180013C3C (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180047880 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccent::EndTransition(CAccent *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  CBaseObject *v5; // rcx
  unsigned int v6; // edx
  int updated; // eax
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 320) )
  {
    v9 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v3 = *((_QWORD *)this + 49);
    if ( v3 )
    {
      CBaseObject::Release((CBaseObject *)(v3 + 8));
      *((_QWORD *)this + 49) = 0LL;
    }
    if ( *((_QWORD *)this + 41) )
    {
      VisualCollection::Remove((CAccent *)((char *)this + 32), *((struct CVisual **)this + 41));
      if ( *((_QWORD *)this + 41) )
        CBaseObject::Release(*((CBaseObject **)this + 41));
    }
    v4 = *((_QWORD *)this + 42);
    *((_QWORD *)this + 41) = v4;
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v5 = (CBaseObject *)*((_QWORD *)this + 42);
      if ( v5 )
      {
        CBaseObject::Release(v5);
        *((_QWORD *)this + 42) = 0LL;
      }
    }
    v6 = *((_DWORD *)this + 78);
    *((_DWORD *)this + 97) = v6;
    if ( (*((_BYTE *)this + 308) & 1) != 0 )
      CAccent::_UpdateAccentBackground(this, v6);
    *((_OWORD *)this + 18) = *((_OWORD *)this + 19);
    *((_DWORD *)this + 75) = 0;
    *((_BYTE *)this + 320) = 0;
    *((_DWORD *)this + 76) = 6;
    updated = CAccent::_UpdateBackgroundGeometry(this);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x2C4u);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  }
  return v2;
}
