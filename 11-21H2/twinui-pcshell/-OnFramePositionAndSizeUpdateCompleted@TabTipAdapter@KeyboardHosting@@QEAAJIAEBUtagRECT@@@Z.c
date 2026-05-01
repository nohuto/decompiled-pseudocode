/*
 * XREFs of ?OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180472EA8
 * Callers:
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180461AA8 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 * Callees:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180078A2C (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x1804812F0 (-HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveA.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnFramePositionAndSizeUpdateCompleted(
        RTL_SRWLOCK *this,
        unsigned int a2,
        __m128i *a3)
{
  unsigned __int64 v5; // xmm1_8
  unsigned __int64 v6; // rdx
  int v7; // eax
  PVOID Ptr; // rcx
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rdx
  _DWORD v13[4]; // [rsp+40h] [rbp-40h] BYREF
  float v14[4]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v15[4]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v16[4]; // [rsp+64h] [rbp-1Ch] BYREF
  _BYTE v17[16]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v5 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  v6 = HIDWORD(a3->m128i_i64[0]);
  v7 = v5 - a3->m128i_i64[0] + 1;
  Ptr = this[14].Ptr;
  v14[0] = (float)(int)a3->m128i_i64[0];
  v14[1] = (float)(int)v6;
  v14[2] = (float)v7;
  v14[3] = (float)(HIDWORD(v5) - (int)v6 + 1);
  v10 = KeyboardHosting::TabTipAdapterPolicy::HandleDragEnded(Ptr, a2, v14, v16, v15, v17, v13);
  if ( v10 < 0 )
  {
    v11 = 3100LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  if ( v13[0] == 3 )
  {
    v10 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this, v9);
    if ( v10 < 0 )
    {
      v11 = 3103LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
