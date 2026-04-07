/*
 * XREFs of ?RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener@@@Z @ 0x18010BCB8
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800CB438 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterForSoftwareCursorChangeNotification(
        CWindowList *this,
        struct ISoftwareCursorChangeListener *a2)
{
  char v3; // si
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // r8d
  int v8; // edi
  int v9; // r9d
  unsigned int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+8h] BYREF
  struct ISoftwareCursorChangeListener *v14; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+60h] [rbp+18h] BYREF

  v14 = a2;
  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = 0;
  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = *((_DWORD *)this + 168);
  if ( v5 )
  {
    while ( *(struct ISoftwareCursorChangeListener **)(*((_QWORD *)this + 81) + 8LL * v4) != v14 )
    {
      if ( ++v4 >= v5 )
        goto LABEL_6;
    }
    v3 = 1;
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  if ( !v3 )
  {
    v6 = *((_DWORD *)this + 168);
    v7 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
      v8 = -2147024362;
      v9 = -2147024362;
      v10 = 181;
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v10);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5AF,
        (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_12;
    }
    if ( v7 > *((_DWORD *)this + 167) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 648, 8, 1, &v14);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 192;
        goto LABEL_15;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 81) + 8LL * *((unsigned int *)this + 168)) = v14;
      *((_DWORD *)this + 168) = v7;
    }
  }
  v8 = 0;
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return (unsigned int)v8;
}
