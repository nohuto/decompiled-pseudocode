/*
 * XREFs of GreGetDeviceCaps @ 0x1C005D880
 * Callers:
 *     NtGdiGetDeviceCaps @ 0x1C005D860 (NtGdiGetDeviceCaps.c)
 *     xxxSetSysColors @ 0x1C005F814 (xxxSetSysColors.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0060D08 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00624B4 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     EnforceColorDependentSettings @ 0x1C0064130 (EnforceColorDependentSettings.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0040814 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004086C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C005D92C (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C005D98C (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C005DCC4 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 */

__int64 __fastcall GreGetDeviceCaps(HDC a1, int a2)
{
  unsigned int DeviceCapsInternal; // ebx
  _QWORD v6[6]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v7; // [rsp+70h] [rbp+20h] BYREF
  __int64 v8; // [rsp+78h] [rbp+28h] BYREF

  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && a1 == (HDC)-589410304LL )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
    v7 = *((_QWORD *)gpDispInfo + 5);
    if ( v7 )
    {
      DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v7, a2);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
      return DeviceCapsInternal;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v6, a1);
    if ( v6[0] )
    {
      NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        (NEEDDYNAMICMODECHANGESHARELOCK *)&v7,
        (*(_DWORD *)(*(_QWORD *)(v6[0] + 48LL) + 40LL) & 0x8000) == 0);
      v8 = *(_QWORD *)(v6[0] + 48LL);
      if ( v8 )
      {
        DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v8, a2);
        NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v7);
        DCOBJ::~DCOBJ((DCOBJ *)v6);
        return DeviceCapsInternal;
      }
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v7);
    }
    else
    {
      EngSetLastError(6u);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v6);
  }
  return 0LL;
}
