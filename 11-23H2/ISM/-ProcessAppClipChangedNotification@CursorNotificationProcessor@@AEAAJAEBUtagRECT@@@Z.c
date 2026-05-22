/*
 * XREFs of ?ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z @ 0x1800FDC4C
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z @ 0x18004E03C (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x1800FDB24 (--$_Destroy_range@V-$allocator@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr@U.c)
 *     ??1?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800FDB5C (--1-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::ProcessAppClipChangedNotification(
        CursorNotificationProcessor *this,
        const struct tagRECT *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  __int128 v6; // rdi
  int v7; // eax
  unsigned int v8; // ebp
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (struct _Mtx_internal_imp_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 128LL))(*(_QWORD *)this);
  v5 = _Mtx_lock(v4);
  if ( v5 )
    std::_Throw_C_error(v5);
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)this + 120LL))(*(_QWORD *)this, &v10);
  v6 = v10;
  if ( (_QWORD)v10 == *((_QWORD *)&v10 + 1) )
  {
LABEL_7:
    if ( (_QWORD)v6 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ICursor>>>((__int64 *)v6, *((__int64 **)&v6 + 1));
      std::_Deallocate<16,0>((void *)v10, (v11 - v10) & 0xFFFFFFFFFFFFFFF8uLL);
      v10 = 0LL;
      v11 = 0LL;
    }
    _Mtx_unlock(v4);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, const struct tagRECT *))(**(_QWORD **)v6 + 96LL))(*(_QWORD *)v6, a2);
      v8 = v7;
      if ( v7 < 0 )
        break;
      *(_QWORD *)&v6 = v6 + 8;
      if ( (_QWORD)v6 == *((_QWORD *)&v6 + 1) )
      {
        v6 = v10;
        goto LABEL_7;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotific"
               "ationprocessor.cpp",
      (const char *)(unsigned int)v7);
    std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::~vector<Microsoft::WRL::ComPtr<IInputTarget>>((__int64)&v10);
    _Mtx_unlock(v4);
    return v8;
  }
}
