/*
 * XREFs of ?ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z @ 0x1800E4E4C
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z @ 0x180043E9C (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x18004E2B4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::ProcessAppClipChangedNotification(
        CursorNotificationProcessor *this,
        const struct tagRECT *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  __int64 *v6; // rbp
  __int64 *v7; // rdi
  int v8; // eax
  unsigned int v9; // esi
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (struct _Mtx_internal_imp_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 128LL))(*(_QWORD *)this);
  v5 = _Mtx_lock(v4);
  if ( v5 )
    std::_Throw_C_error(v5);
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)this + 120LL))(*(_QWORD *)this, &v11);
  v6 = (__int64 *)*((_QWORD *)&v11 + 1);
  v7 = (__int64 *)v11;
  if ( (_QWORD)v11 == *((_QWORD *)&v11 + 1) )
  {
LABEL_7:
    v9 = 0;
  }
  else
  {
    while ( 1 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, const struct tagRECT *))(*(_QWORD *)*v7 + 96LL))(*v7, a2);
      v9 = v8;
      if ( v8 < 0 )
        break;
      if ( ++v7 == v6 )
      {
        v7 = (__int64 *)v11;
        goto LABEL_7;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotificationprocessor.cpp",
      (const char *)(unsigned int)v8);
    v7 = (__int64 *)v11;
  }
  if ( v7 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(v7, *((__int64 **)&v11 + 1));
    std::_Deallocate<16,0>((void *)v11, (v12 - v11) & 0xFFFFFFFFFFFFFFF8uLL);
    v11 = 0LL;
    v12 = 0LL;
  }
  _Mtx_unlock(v4);
  return v9;
}
