/*
 * XREFs of ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x18004EA84
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z @ 0x18004E96C (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x18010C644 (--$_Destroy_range@V-$allocator@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr@U.c)
 *     ??1?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18010C67C (--1-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::ProcessPositionChangedNotification(
        CursorNotificationProcessor *this,
        const struct tagPOINT *a2)
{
  CursorNotificationProcessor *v2; // rbp
  CursorNotificationProcessor *v4; // rdi
  struct _Mtx_internal_imp_t *v5; // rbx
  int v6; // eax
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = this;
  v5 = (struct _Mtx_internal_imp_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 128LL))(*(_QWORD *)this);
  v6 = _Mtx_lock(v5);
  if ( v6 )
  {
    std::_Throw_C_error(v6);
LABEL_7:
    while ( 1 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)v4 + 24LL))(
             *(_QWORD *)v4,
             (unsigned int)a2->x,
             (unsigned int)a2->y);
      v9 = v8;
      if ( v8 < 0 )
        break;
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)v4 + 32LL))(
             *(_QWORD *)v4,
             (unsigned int)a2->x,
             (unsigned int)a2->y);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 175LL;
        goto LABEL_13;
      }
      v4 = (CursorNotificationProcessor *)((char *)v4 + 8);
      if ( v4 == v2 )
      {
        v2 = (CursorNotificationProcessor *)*((_QWORD *)&v11 + 1);
        v4 = (CursorNotificationProcessor *)v11;
        goto LABEL_3;
      }
    }
    v10 = 171LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotific"
               "ationprocessor.cpp",
      (const char *)(unsigned int)v8);
    std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::~vector<Microsoft::WRL::ComPtr<IInputTarget>>(&v11);
    _Mtx_unlock(v5);
    return v9;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v4 + 120LL))(*(_QWORD *)v4, &v11);
    v2 = (CursorNotificationProcessor *)*((_QWORD *)&v11 + 1);
    v4 = (CursorNotificationProcessor *)v11;
    if ( (_QWORD)v11 != *((_QWORD *)&v11 + 1) )
      goto LABEL_7;
LABEL_3:
    if ( v4 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(v4, v2);
      std::_Deallocate<16,0>((void *)v11, (v12 - v11) & 0xFFFFFFFFFFFFFFF8uLL);
      v11 = 0LL;
      v12 = 0LL;
    }
    _Mtx_unlock(v5);
    return 0LL;
  }
}
