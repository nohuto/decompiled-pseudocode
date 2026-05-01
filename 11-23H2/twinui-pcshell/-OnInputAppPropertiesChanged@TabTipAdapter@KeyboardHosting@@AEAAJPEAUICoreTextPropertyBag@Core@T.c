/*
 * XREFs of ?OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@45678@@Z @ 0x180525E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x18010DBF8 (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@HString@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x1801B73D8 (-Release@HString@Wrappers@WRL@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802DC7D6 (-WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA-AVActivityThreadWatcher@wil@@PEBD.c)
 *     ??$InputAppPropertiesChanged@PEBGPEBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG0@Z @ 0x18051E3D4 (--$InputAppPropertiesChanged@PEBGPEBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppPropertiesChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *a2,
        struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *a3)
{
  __int64 (__fastcall *v5)(struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *, HSTRING *); // rbx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r9
  PCWSTR StringRawBuffer; // [rsp+20h] [rbp-60h] BYREF
  PCWSTR v15; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v16[80]; // [rsp+30h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  HSTRING string; // [rsp+B0h] [rbp+30h] BYREF
  HSTRING v19; // [rsp+B8h] [rbp+38h] BYREF

  TouchKeyboardExperienceTelemetryLogger::WatchCurrentThread(
    (wil::ActivityThreadWatcher *)v16,
    "OnInputAppPropertiesChanged");
  v19 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  Microsoft::WRL::Wrappers::HString::Release(&v19);
  v6 = v5(a3, &v19);
  v7 = v6;
  if ( v6 >= 0 )
  {
    string = 0LL;
    v8 = *(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *, HSTRING *))(*(_QWORD *)a3 + 56LL);
    Microsoft::WRL::Wrappers::HString::Release(&string);
    v9 = v8(a3, &string);
    v7 = v9;
    if ( v9 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v15 = WindowsGetStringRawBuffer(v19, 0LL);
      TouchKeyboardExperienceTelemetryLogger::InputAppPropertiesChanged<unsigned short const *,unsigned short const *>(
        (__int64 *)&v15,
        (__int64 *)&StringRawBuffer);
      v11 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, HSTRING))(**((_QWORD **)this + 9) + 104LL))(
              *((_QWORD *)this + 9),
              v19,
              string);
      v7 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFF,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v11);
        v12 = v7;
        v10 = 1297LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)v12);
LABEL_12:
        ExperienceManagerUtils::CopyableHString::~CopyableHString(&string);
        goto LABEL_13;
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, HSTRING))(**((_QWORD **)this + 16) + 208LL))(
             *((_QWORD *)this + 16),
             v19,
             string);
      v7 = v9;
      if ( v9 >= 0 )
      {
        v7 = 0;
        goto LABEL_12;
      }
      v10 = 1298LL;
    }
    else
    {
      v10 = 1293LL;
    }
    v12 = (unsigned int)v9;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50B,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v6);
LABEL_13:
  ExperienceManagerUtils::CopyableHString::~CopyableHString(&v19);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v16);
  return v7;
}
