/*
 * XREFs of ?GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ @ 0x14006C38C
 * Callers:
 *     ?GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ @ 0x1400676F8 (-GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??$?0AEAV?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@AEAV?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x14006BDE0 (--$-0AEAV-$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@-$_List_node_empl.c)
 *     ??$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssWorkQueue@@@Z @ 0x14006BE50 (--$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssW.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x14006C07C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CRTThreadManager::GetApoWorkQueueId(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  unsigned int LockSemaphore; // esi
  unsigned int OwningThread; // eax
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    LockSemaphore = 0;
    OwningThread = (unsigned int)this->OwningThread;
    if ( OwningThread <= 1 )
      goto LABEL_11;
    switch ( OwningThread )
    {
      case 2u:
LABEL_6:
        v14 = 0LL;
        if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CLocalMmcssWorkQueue,CLocalMmcssWorkQueue,>(&v14) >= 0 )
        {
          LockSemaphore = *(_DWORD *)(v14 + 16);
          EnterCriticalSection(this + 1);
          v15 = this + 1;
          v7 = *(_QWORD *)this[2].DebugInfo;
          if ( *(_QWORD *)&this[2].LockCount == 0xAAAAAAAAAAAAAAALL )
            std::_Xlength_error("list too long");
          std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>(
            &v11,
            (__int64)&this[2],
            &v14);
          ++*(_QWORD *)&this[2].LockCount;
          v8 = *(_QWORD **)(v7 + 8);
          *v12 = v7;
          v12[1] = v8;
          v9 = v12;
          v12 = 0LL;
          *(_QWORD *)(v7 + 8) = v9;
          *v8 = v9;
          std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>((__int64)&v11);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v15);
        }
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v14);
        break;
      case 3u:
LABEL_11:
        LockSemaphore = (unsigned int)this->LockSemaphore;
        break;
      case 4u:
        goto LABEL_6;
    }
    result = LockSemaphore;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7B,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
                           a4);
  }
  return result;
}
