/*
 * XREFs of ?RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener@@@Z @ 0x1801052F4
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800C6CF0 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterForSoftwareCursorChangeNotification(
        CWindowList *this,
        struct ISoftwareCursorChangeListener *a2)
{
  char v3; // bl
  __int64 v4; // rdx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // r8d
  int v8; // ebx
  unsigned int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+8h] BYREF
  struct ISoftwareCursorChangeListener *v13; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+60h] [rbp+18h] BYREF

  v13 = a2;
  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = 0;
  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = *((_DWORD *)this + 172);
  if ( v5 )
  {
    while ( *(struct ISoftwareCursorChangeListener **)(*((_QWORD *)this + 83) + 8 * v4) != v13 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v5 )
        goto LABEL_6;
    }
    v3 = 1;
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  if ( !v3 )
  {
    v6 = *((_DWORD *)this + 172);
    v7 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
      v8 = -2147024362;
      v9 = 181;
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v9);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53F,
        (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_12;
    }
    if ( v7 > *((_DWORD *)this + 171) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 664, 8u, 1, &v13);
      if ( v8 < 0 )
      {
        v9 = 192;
        goto LABEL_15;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 83) + 8LL * *((unsigned int *)this + 172)) = v13;
      *((_DWORD *)this + 172) = v7;
    }
  }
  v8 = 0;
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return (unsigned int)v8;
}
