/*
 * XREFs of ?GetVirtualDesktopMonitorRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18055C8A0
 * Callers:
 *     ?AssignMonitorToVirtualDesktop@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEBV?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@@Z @ 0x18055C3AC (-AssignMonitorToVirtualDesktop@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEBV-$vector.c)
 *     ?VirtualDesktopMonitorChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@1W4VirtualDesktopMonitorChangeReason@@@Z @ 0x18055D280 (-VirtualDesktopMonitorChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHMONITOR_.c)
 *     ?WriteMonitorValue@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@KPEBX_K@Z @ 0x18055D764 (-WriteMonitorValue@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEBV-$basic_string_view@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1803D4330 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1803D4E9C (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1803D519C (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1803DA1AC (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 *     ?GetMonitorId@VirtualDesktopPersistence@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHMONITOR__@@@Z @ 0x18055C7E0 (-GetMonitorId@VirtualDesktopPersistence@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x18055CA90 (-GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopPersistence::GetVirtualDesktopMonitorRegKeyName(
        VirtualDesktopPersistence *a1,
        struct IVirtualDesktop *a2,
        HMONITOR a3,
        __int128 *a4)
{
  int VirtualDesktopRegKeyName; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  _QWORD *MonitorId; // rax
  _BYTE v16[16]; // [rsp+30h] [rbp-1B8h] BYREF
  _BYTE v17[8]; // [rsp+40h] [rbp-1A8h] BYREF
  _BYTE v18[128]; // [rsp+48h] [rbp-1A0h] BYREF
  _BYTE v19[104]; // [rsp+C8h] [rbp-120h] BYREF
  __int128 v20; // [rsp+130h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+140h] [rbp-A8h]
  unsigned __int16 v22[49]; // [rsp+150h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  try
  {
    VirtualDesktopRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(
                                 a1,
                                 a2,
                                 (unsigned __int16 (*)[49])v22);
    v7 = VirtualDesktopRegKeyName;
    if ( VirtualDesktopRegKeyName >= 0 )
    {
      std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v16);
      v10 = std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v17, (__int64)v22);
      v11 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v10, (__int64)L"\\");
      v12 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v11, (__int64)L"Monitors");
      v13 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v12, (__int64)L"\\");
      MonitorId = VirtualDesktopPersistence::GetMonitorId(v14, &v20, a3);
      if ( MonitorId[3] >= 8uLL )
        MonitorId = (_QWORD *)*MonitorId;
      std::operator<<<unsigned short,std::char_traits<unsigned short>>(v13, (__int64)MonitorId);
      std::wstring::_Tidy_deallocate((__int64)&v20);
      std::basic_stringbuf<unsigned short>::str((__int64)v18, (__int64)&v20);
      if ( a4 != &v20 )
      {
        std::wstring::_Tidy_deallocate((__int64)a4);
        *a4 = v20;
        a4[1] = (__int128)si128;
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        LOWORD(v20) = 0;
      }
      std::wstring::_Tidy_deallocate((__int64)&v20);
      std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v19);
      std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v19);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E4,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)(unsigned int)VirtualDesktopRegKeyName);
      result = v7;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1E9,
                           (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                           v8);
  }
  return result;
}
