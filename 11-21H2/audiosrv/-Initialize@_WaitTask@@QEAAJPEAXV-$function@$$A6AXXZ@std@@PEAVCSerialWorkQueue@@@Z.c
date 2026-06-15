/*
 * XREFs of ?Initialize@_WaitTask@@QEAAJPEAXV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x1800D35A4
 * Callers:
 *     ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x1800D396C (-QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18005BAA8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x1800C67C8 (--$make_shared@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YA-AV-$shared_ptr@V-$function@$$A6AXXZ@std.c)
 *     ??4?$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C6C2C (--4-$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _WaitTask::Initialize(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // edi
  HANDLE CurrentProcess; // rbx
  HANDLE v11; // rax
  signed int LastError; // eax
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  std::_Ref_count_base *v15; // [rsp+48h] [rbp-40h]
  __int64 v16; // [rsp+50h] [rbp-38h]

  v16 = a3;
  *(_QWORD *)(a1 + 32) = a4;
  v7 = std::make_shared<std::function<void (void)>,std::function<void (void)> &>(&v14, a3);
  std::shared_ptr<CXvmPowerReference>::operator=((_QWORD *)(a1 + 8), v7);
  v9 = 0;
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  if ( *(_QWORD *)(a1 + 8) )
  {
    CurrentProcess = GetCurrentProcess();
    v11 = GetCurrentProcess();
    if ( !DuplicateHandle(v11, a2, CurrentProcess, (LPHANDLE)(a1 + 24), 0, 0, 2u) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
      else
        v9 = LastError;
    }
  }
  else
  {
    v9 = -2147024882;
  }
  std::_Func_class<void,>::_Tidy(a3, v8);
  return v9;
}
