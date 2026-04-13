/*
 * XREFs of ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x18006E280
 * Callers:
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18006FC78 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 * Callees:
 *     ??0?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180051988 (--0-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU-$c.c)
 *     ??0?$basic_iostream@GU?$char_traits@G@std@@@std@@QEAA@PEAV?$basic_streambuf@GU?$char_traits@G@std@@@1@@Z @ 0x180066E40 (--0-$basic_iostream@GU-$char_traits@G@std@@@std@@QEAA@PEAV-$basic_streambuf@GU-$char_traits@G@st.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
        _QWORD *a1,
        _QWORD *a2,
        char a3)
{
  *a1 = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_istream<unsigned short>'};
  a1[2] = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_ostream<unsigned short>'};
  a1[19] = &std::wios::`vftable';
  std::basic_iostream<unsigned short>::basic_iostream<unsigned short>(a1, (__int64)(a1 + 3), a3);
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 152;
  std::basic_stringbuf<unsigned short>::basic_stringbuf<unsigned short>(a1 + 3, a2, 3);
  return a1;
}
