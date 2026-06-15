/*
 * XREFs of ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18003F730
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x180022838 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F560 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_IAudioStreamInfo_________lambda_65a86acbe82ac79a9aa5697306fff9e4___ @ 0x18003F820 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_IAudioStreamInfo________.c)
 *     std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_530575f8b419a08780554bb070101504___ @ 0x18003F8C8 (std--for_each_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--We.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ForEachStream(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  _BYTE v9[64]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v10[64]; // [rsp+60h] [rbp-58h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v9, a2);
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_IAudioStreamInfo_________lambda_65a86acbe82ac79a9aa5697306fff9e4___(
    v10,
    *(_QWORD *)(a1 + 192),
    *(_QWORD *)(a1 + 200),
    v9);
  std::_Func_class<void,>::_Tidy((__int64)v10, v5);
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v10, a2);
  std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_530575f8b419a08780554bb070101504___(
    v9,
    *(_QWORD *)(a1 + 216),
    *(_QWORD *)(a1 + 224),
    v10);
  std::_Func_class<void,>::_Tidy((__int64)v9, v6);
  if ( v2 )
    LeaveCriticalSection(v2);
  return std::_Func_class<void,>::_Tidy(a2, v7);
}
