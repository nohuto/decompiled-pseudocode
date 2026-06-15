/*
 * XREFs of ?Initialize@_WaitTask@@QEAAJPEAXV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x18000D72C
 * Callers:
 *     ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x18000D5DC (-QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@.c)
 * Callees:
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017908 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x180022A40 (--$make_shared@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YA-AV-$shared_ptr@V-$function@$$A6AXXZ@std.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F560 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _WaitTask::Initialize(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned int v8; // edi
  HANDLE CurrentProcess; // rbx
  HANDLE v10; // rax
  signed int LastError; // eax
  _BYTE v13[8]; // [rsp+40h] [rbp-48h] BYREF
  std::_Ref_count_base *v14; // [rsp+48h] [rbp-40h]
  __int64 v15; // [rsp+50h] [rbp-38h]

  v15 = a3;
  *(_QWORD *)(a1 + 32) = a4;
  v7 = std::make_shared<std::function<void (void)>,std::function<void (void)> &>(v13, a3);
  std::shared_ptr<std::function<void (void)>>::operator=(a1 + 8, v7);
  v8 = 0;
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  if ( *(_QWORD *)(a1 + 8) )
  {
    CurrentProcess = GetCurrentProcess();
    v10 = GetCurrentProcess();
    if ( !DuplicateHandle(v10, a2, CurrentProcess, (LPHANDLE)(a1 + 24), 0, 0, 2u) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      else
        v8 = LastError;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  std::_Func_class<void,>::_Tidy(a3);
  return v8;
}
