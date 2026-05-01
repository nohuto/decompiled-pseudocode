/*
 * XREFs of ?_DetermineSnapAssistLocation@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUtagRECT@@@Z @ 0x18066D90C
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18066CA10 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnapAssistControllerBase::_DetermineSnapAssistLocation(
        __int64 a1,
        __int64 a2,
        _QWORD **a3,
        struct tagRECT *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  HRGN v10; // rbx
  const char *v11; // r9
  __int64 v12; // rdx
  HRGN v13; // rax
  const char *v14; // r9
  HRGN v15; // rdi
  __int64 v16; // rdx
  int v17; // r14d
  unsigned __int64 v18; // r12
  HRGN v19; // rax
  HRGN v20; // rsi
  unsigned int LastError; // esi
  RECT rect; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-40h] BYREF
  RECT v24; // [rsp+50h] [rbp-30h] BYREF
  RECT v25; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  SetRectEmpty(a4);
  rect = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)a2 + 88LL))(a2, &rect);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CA,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  rc = 0LL;
  v10 = CreateRectRgnIndirect(&rect);
  if ( !v10 )
  {
    v12 = 977LL;
    goto LABEL_22;
  }
  if ( a3[1] - *a3 )
  {
    (*(void (__fastcall **)(_QWORD, RECT *))(*(_QWORD *)**a3 + 56LL))(**a3, &v24);
    v13 = CreateRectRgnIndirect(&v24);
    v15 = v13;
    if ( !v13 )
    {
      v16 = 986LL;
LABEL_17:
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)v16,
                    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                    v14);
      goto LABEL_14;
    }
    v17 = CombineRgn(v10, v10, v13, 4);
    v18 = 1LL;
    if ( v17 != 1 )
    {
      while ( v17 && v18 < a3[1] - *a3 )
      {
        (*(void (__fastcall **)(_QWORD, RECT *))(*(_QWORD *)(*a3)[v18] + 56LL))((*a3)[v18], &v25);
        v19 = CreateRectRgnIndirect(&v25);
        v20 = v19;
        if ( !v19 )
        {
          v16 = 995LL;
          goto LABEL_17;
        }
        v17 = CombineRgn(v10, v10, v19, 4);
        DeleteObject(v20);
        ++v18;
        if ( v17 == 1 )
          goto LABEL_13;
      }
    }
    if ( v17 != 2 )
    {
LABEL_13:
      LastError = -2147019873;
LABEL_14:
      if ( v15 )
        DeleteObject(v15);
      goto LABEL_24;
    }
    DeleteObject(v15);
  }
  if ( GetRgnBox(v10, &rc) )
  {
    CopyRect(a4, &rc);
    LastError = 0;
    goto LABEL_24;
  }
  v12 = 1003LL;
LABEL_22:
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v12,
                (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                v11);
LABEL_24:
  if ( v10 )
    DeleteObject(v10);
  return LastError;
}
