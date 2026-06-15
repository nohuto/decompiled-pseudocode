/*
 * XREFs of ?ForEachStream@CProcessSubmixProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18003F670
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x180022838 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F560 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_IAudioStreamInfo_________lambda_95aa79fe68308ee8971a6083ea2ebe7c___ @ 0x18003FA38 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_IAudioStrea_ea_18003FA38.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

__int64 __fastcall CProcessSubmixProxy::ForEachStream(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  _BYTE v8[64]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v9[64]; // [rsp+60h] [rbp-58h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v8, a2);
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_IAudioStreamInfo_________lambda_95aa79fe68308ee8971a6083ea2ebe7c___(
    v9,
    *(_QWORD *)(a1 + 168),
    *(_QWORD *)(a1 + 176),
    v8);
  std::_Func_class<void,>::_Tidy((__int64)v9, v5);
  if ( v2 )
    LeaveCriticalSection(v2);
  return std::_Func_class<void,>::_Tidy(a2, v6);
}
