/*
 * XREFs of ?Initialize@HapticInterface@@QEAAJXZ @ 0x1801A9758
 * Callers:
 *     ??0HapticInterface@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@Z @ 0x1801A905C (--0HapticInterface@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009509C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800CD748 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FindHapticsCollection@HapticInterface@@AEAA_NPEAU_HIDP_PREPARSED_DATA@@PEAG@Z @ 0x1801A9588 (-FindHapticsCollection@HapticInterface@@AEAA_NPEAU_HIDP_PREPARSED_DATA@@PEAG@Z.c)
 *     ?QueryHardwareProperties@HapticInterface@@AEAAJXZ @ 0x1801A98AC (-QueryHardwareProperties@HapticInterface@@AEAAJXZ.c)
 *     ?QueryIsHighLatencyDevice@HapticInterface@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801A9BE0 (-QueryIsHighLatencyDevice@HapticInterface@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

__int64 __fastcall HapticInterface::Initialize(HapticInterface *this)
{
  PHIDP_PREPARSED_DATA *v1; // rdi
  const char *v3; // r9
  __int64 v4; // rdx
  NTSTATUS Caps; // eax
  HapticInterface *v7; // rcx
  int HardwareProperties; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (PHIDP_PREPARSED_DATA *)((char *)this + 152);
  if ( !HidD_GetPreparsedData(*((HANDLE *)this + 32), (PHIDP_PREPARSED_DATA *)this + 19) )
  {
    v4 = 31LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
             v3);
  }
  Caps = HidP_GetCaps(*v1, (PHIDP_CAPS)((char *)this + 160));
  if ( Caps < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x21,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
             (const char *)(unsigned int)Caps);
  if ( !HapticInterface::FindHapticsCollection(v7, *v1, (unsigned __int16 *)this + 8) )
  {
    v4 = 36LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
             v3);
  }
  *((_WORD *)this + 8) = 0;
  HardwareProperties = HapticInterface::QueryHardwareProperties(this);
  v10 = HardwareProperties;
  if ( HardwareProperties >= 0 )
  {
    *((_BYTE *)this + 264) = HapticInterface::QueryIsHighLatencyDevice(v9, (char *)this + 224);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
      (const char *)(unsigned int)HardwareProperties);
    return v10;
  }
}
