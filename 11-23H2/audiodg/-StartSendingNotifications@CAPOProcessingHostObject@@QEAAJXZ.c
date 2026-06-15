/*
 * XREFs of ?StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ @ 0x140070350
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400382FE (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14003B2F8 (--4-$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@VCSerialWorkQueue@@@std@@QEAA@XZ @ 0x14006F590 (--$-0$$V@-$_Ref_count_obj2@VCSerialWorkQueue@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOProcessingHostObject::StartSendingNotifications(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 result; // rax
  void *v4; // rax
  std::_Ref_count_base *v5; // rax
  const char *v6; // r9
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = this + 1;
  EnterCriticalSection(this + 1);
  if ( this[2].DebugInfo )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      (const char *)0x8000FFFFLL);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 2147549183LL;
  }
  else
  {
    try
    {
      v4 = operator new(0xC0uLL);
      v5 = (std::_Ref_count_base *)std::_Ref_count_obj2<CSerialWorkQueue>::_Ref_count_obj2<CSerialWorkQueue>((__int64)v4);
      *(_QWORD *)v7 = (char *)v5 + 16;
      v8 = v5;
      std::shared_ptr<CSerialWorkQueue>::operator=(&this[2].DebugInfo, (__int64 *)v7);
      if ( v8 )
        std::_Ref_count_base::_Decref(v8);
      if ( this[2].DebugInfo )
      {
        if ( v2 )
          LeaveCriticalSection(v2);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x61,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
          (const char *)0x8007000ELL);
        if ( v2 )
          LeaveCriticalSection(v2);
        result = 2147942414LL;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x64,
                             (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
                             v6);
    }
  }
  return result;
}
