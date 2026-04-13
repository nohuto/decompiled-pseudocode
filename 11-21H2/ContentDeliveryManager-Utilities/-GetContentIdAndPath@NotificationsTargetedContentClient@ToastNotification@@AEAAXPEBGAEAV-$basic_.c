/*
 * XREFs of ?GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x180078240
 * Callers:
 *     ?ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z @ 0x180077394 (-ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069E40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x18006B8AC (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K@Z.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18007B148 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ToastNotification::NotificationsTargetedContentClient::GetContentIdAndPath(
        __int64 a1,
        char *a2,
        void **a3,
        __int64 a4)
{
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdi
  const char *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  const char *v12; // r9
  int v13; // [rsp+20h] [rbp-49h]
  int v14; // [rsp+20h] [rbp-49h]
  char *v15[3]; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-11h]
  void *v17[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v18; // [rsp+70h] [rbp+7h]
  unsigned __int64 v19; // [rsp+78h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v16 = 7LL;
  v15[2] = 0LL;
  LOWORD(v15[0]) = 0;
  if ( *(_WORD *)a2 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)&a2[2 * v6] );
  }
  else
  {
    v6 = 0LL;
  }
  std::wstring::assign((unsigned __int64 *)v15, a2, v6);
  v7 = std::wstring::find((char *)v15, L"cId=");
  v8 = v7;
  v9 = (const char *)v15;
  if ( v16 >= 8 )
    v9 = v15[0];
  LOBYTE(v13) = v7 == -1;
  wil::details::in1diag3::Throw_HrIfMsg(
    retaddr,
    (void *)0x57,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
    (const char *)0x80070057LL,
    v13,
    (bool)"'cId=' was not found in '%ls'",
    v9);
  v10 = std::wstring::find((char *)v15, L"path=");
  v11 = v10;
  v12 = (const char *)v15;
  if ( v16 >= 8 )
    v12 = v15[0];
  LOBYTE(v14) = v10 == -1;
  wil::details::in1diag3::Throw_HrIfMsg(
    retaddr,
    (void *)0x59,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
    (const char *)0x80070057LL,
    v14,
    (bool)"'path=' was not found in '%ls'",
    v12);
  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  std::wstring::assign(v17, (void **)v15, v8 + 4, v11 - (v8 + 4) - 1);
  if ( a3 != v17 )
  {
    if ( (unsigned __int64)a3[3] >= 8 )
      operator delete(*a3);
    a3[3] = (void *)7;
    a3[2] = 0LL;
    *(_WORD *)a3 = 0;
    std::wstring::_Assign_rv(a3, v17);
  }
  if ( v19 >= 8 )
    operator delete(v17[0]);
  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  std::wstring::assign(v17, (void **)v15, v11 + 5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (void **)a4 != v17 )
  {
    if ( *(_QWORD *)(a4 + 24) >= 8uLL )
      operator delete(*(void **)a4);
    *(_QWORD *)(a4 + 24) = 7LL;
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_WORD *)a4 = 0;
    std::wstring::_Assign_rv((_QWORD *)a4, v17);
  }
  if ( v19 >= 8 )
    operator delete(v17[0]);
  if ( v16 >= 8 )
    operator delete(v15[0]);
}
