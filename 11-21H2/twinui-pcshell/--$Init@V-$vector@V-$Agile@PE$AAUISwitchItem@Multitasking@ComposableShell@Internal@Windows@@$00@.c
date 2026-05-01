/*
 * XREFs of ??$Init@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@AEAV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@4@@Z @ 0x18042B1FC
 * Callers:
 *     ??0?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@QE$AAA@XZ @ 0x18042D668 (--0-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE$AAUI.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$make_shared@IH@std@@YA?AV?$shared_ptr@I@0@$$QEAH@Z @ 0x18042CEF0 (--$make_shared@IH@std@@YA-AV-$shared_ptr@I@0@$$QEAH@Z.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall Platform::Collections::Details::Init<std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 *v4; // rax
  _DWORD *v5; // rax
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v9; // [rsp+38h] [rbp-10h]
  void *Exception; // [rsp+60h] [rbp+18h]
  __int64 v11; // [rsp+60h] [rbp+18h]
  void *v12; // [rsp+60h] [rbp+18h]
  __int64 v13; // [rsp+60h] [rbp+18h]

  try
  {
    v4 = (__int64 *)std::make_shared<unsigned int,int>();
    std::shared_ptr<KBViewInfo>::operator=(a1, v4);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    v5 = operator new(0x28uLL);
    v5[2] = 1;
    v5[3] = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj2<std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>>::`vftable';
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *a2 = v5 + 4;
    v6 = (std::_Ref_count_base *)a2[1];
    a2[1] = v5;
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  catch ( std::bad_alloc )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v11 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
    v7 = __abi_winrt_ptr_ctor(v11);
    throw (Platform::OutOfMemoryException **)&v7;
  }
  catch ( std::exception )
  {
    v12 = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v13 = Platform::FailureException::FailureException(v12);
    v8 = __abi_winrt_ptr_ctor(v13);
    throw (Platform::FailureException **)&v8;
  }
}
