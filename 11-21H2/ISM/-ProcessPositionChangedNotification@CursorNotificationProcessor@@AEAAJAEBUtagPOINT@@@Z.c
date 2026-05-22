/*
 * XREFs of ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x180044054
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z @ 0x180043E9C (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x18004E2B4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 v7; // r8
  unsigned int v8; // esi
  int v10; // eax
  __int64 v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = this;
  v5 = (struct _Mtx_internal_imp_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 128LL))(*(_QWORD *)this);
  v6 = _Mtx_lock(v5);
  if ( v6 )
  {
    std::_Throw_C_error(v6);
LABEL_8:
    while ( 1 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)v4 + 24LL))(
              *(_QWORD *)v4,
              (unsigned int)a2->x,
              (unsigned int)a2->y);
      v8 = v10;
      if ( v10 < 0 )
        break;
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)v4 + 32LL))(
              *(_QWORD *)v4,
              (unsigned int)a2->x,
              (unsigned int)a2->y);
      v8 = v10;
      if ( v10 < 0 )
      {
        v11 = 175LL;
        goto LABEL_14;
      }
      v4 = (CursorNotificationProcessor *)((char *)v4 + 8);
      if ( v4 == v2 )
      {
        v4 = (CursorNotificationProcessor *)v12;
        goto LABEL_3;
      }
    }
    v11 = 171LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursorno"
                    "tificationprocessor.cpp",
      (const char *)(unsigned int)v10,
      v12);
    v4 = (CursorNotificationProcessor *)v12;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v4 + 120LL))(*(_QWORD *)v4, &v12);
    v2 = (CursorNotificationProcessor *)*((_QWORD *)&v12 + 1);
    v4 = (CursorNotificationProcessor *)v12;
    if ( (_QWORD)v12 != *((_QWORD *)&v12 + 1) )
      goto LABEL_8;
LABEL_3:
    v8 = 0;
  }
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(v4, *((_QWORD *)&v12 + 1), v7);
    std::_Deallocate<16,0>((void *)v12, (v13 - v12) & 0xFFFFFFFFFFFFFFF8uLL);
    v12 = 0LL;
    v13 = 0LL;
  }
  _Mtx_unlock(v5);
  return v8;
}
