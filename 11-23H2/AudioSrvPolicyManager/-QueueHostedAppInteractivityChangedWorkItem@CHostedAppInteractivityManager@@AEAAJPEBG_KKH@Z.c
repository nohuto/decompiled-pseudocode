/*
 * XREFs of ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x180002380
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180012F84 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 * Callees:
 *     ?_Decref@?$_Ptr_base@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@IEAAXXZ @ 0x180002300 (-_Decref@-$_Ptr_base@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@IEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180002550 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800025C0 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180014170 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        int a5)
{
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rdi
  __int64 v11; // r8
  int v12; // eax
  const char *v13; // r9
  unsigned int v14; // r14d
  __int64 result; // rax
  int v16[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v17; // [rsp+30h] [rbp-68h]
  int v18; // [rsp+38h] [rbp-60h]
  int v19; // [rsp+3Ch] [rbp-5Ch]
  _QWORD v20[4]; // [rsp+40h] [rbp-58h] BYREF
  int v21; // [rsp+60h] [rbp-38h]
  int v22; // [rsp+64h] [rbp-34h]
  _QWORD *v23; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  v9 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x30uLL);
  try
  {
    v10 = v9;
    if ( v9 )
    {
      *(_OWORD *)v9 = 0LL;
      *((_DWORD *)v9 + 2) = 1;
      *((_DWORD *)v9 + 3) = 1;
      *(_QWORD *)v9 = &std::_Ref_count_obj2<std::wstring>::`vftable';
      *((_QWORD *)v9 + 2) = 0LL;
      *((_QWORD *)v9 + 4) = 0LL;
      *((_QWORD *)v9 + 5) = 7LL;
      *((_WORD *)v9 + 8) = 0;
      v11 = -1LL;
      do
        ++v11;
      while ( a2[v11] );
      std::wstring::assign((void *)(v9 + 4));
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
      _InterlockedIncrement(v10 + 2);
    v17 = a3;
    v18 = a4;
    v19 = a5;
    v20[0] = off_18004B038;
    v20[1] = v10 + 4;
    v20[2] = v10;
    *(_OWORD *)v16 = 0LL;
    v20[3] = a3;
    v21 = a4;
    v22 = a5;
    v23 = v20;
    std::_Ptr_base<std::wstring>::_Decref((__int64)v16);
    v12 = QueueGenericWorkItem(v20);
    v14 = v12;
    if ( v12 >= 0 )
    {
      if ( v10 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EE,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\pickerhostcontext.cpp",
        (const char *)(unsigned int)v12,
        v16[0]);
      if ( v10 )
      {
        if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
        }
      }
      result = v14;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1F2,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\pick"
                                         "erhostcontext.cpp",
                           v13);
  }
  return result;
}
