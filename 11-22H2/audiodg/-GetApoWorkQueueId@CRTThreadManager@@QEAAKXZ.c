/*
 * XREFs of ?GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ @ 0x140074AFC
 * Callers:
 *     ?GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ @ 0x14006F2C8 (-GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0AEAV?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@AEAV?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x140074274 (--$-0AEAV-$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@-$_List_node_empl.c)
 *     ??$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssWorkQueue@@@Z @ 0x1400742EC (--$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssW.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1400746DC (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CRTThreadManager::GetApoWorkQueueId(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  unsigned int LockSemaphore; // edi
  int OwningThread; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // r14
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 result; // rax
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v15; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+58h] [rbp+10h]

  try
  {
    LockSemaphore = 0;
    OwningThread = (int)this->OwningThread;
    if ( !OwningThread )
      goto LABEL_13;
    v7 = OwningThread - 1;
    if ( !v7 )
      goto LABEL_13;
    v8 = v7 - 1;
    if ( !v8 )
    {
LABEL_7:
      v17 = 0LL;
      if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CLocalMmcssWorkQueue,CLocalMmcssWorkQueue,>(&v17) >= 0 )
      {
        LockSemaphore = *(_DWORD *)(v17 + 16);
        EnterCriticalSection(this + 1);
        v18 = this + 1;
        v10 = *(_QWORD *)this[2].DebugInfo;
        if ( *(_QWORD *)&this[2].LockCount == 0xAAAAAAAAAAAAAAALL )
          std::_Xlength_error("list too long");
        std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>(
          &v14,
          (__int64)&this[2],
          &v17);
        ++*(_QWORD *)&this[2].LockCount;
        v11 = *(_QWORD **)(v10 + 8);
        *v15 = v10;
        v15[1] = v11;
        v12 = v15;
        v15 = 0LL;
        *(_QWORD *)(v10 + 8) = v12;
        *v11 = v12;
        std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>((__int64)&v14);
        if ( this != (struct _RTL_CRITICAL_SECTION *)-40LL )
          LeaveCriticalSection(this + 1);
      }
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v17);
      goto LABEL_14;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        goto LABEL_7;
    }
    else
    {
LABEL_13:
      LockSemaphore = (unsigned int)this->LockSemaphore;
    }
LABEL_14:
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
