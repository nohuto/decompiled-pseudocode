/*
 * XREFs of ?Initialize@CMessageConversationHost@DirectComposition@@AEAAJXZ @ 0x18001D86C
 * Callers:
 *     ?Create@CMessageConversationHost@DirectComposition@@SAJPEAVCDevice@2@_NP6AJPEBX22I@ZPEAXPEAPEAV12@@Z @ 0x18001D760 (-Create@CMessageConversationHost@DirectComposition@@SAJPEAVCDevice@2@_NP6AJPEBX22I@ZPEAXPEAPEAV1.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CMessageConversationHost::Initialize(
        DirectComposition::CMessageConversationHost *this)
{
  __int64 v1; // rdi
  _QWORD *v2; // r14
  __int64 (__fastcall *v4)(__int64, const wchar_t *, _QWORD, __int64 *, int, int, int, DirectComposition::CMessageConversationHost *, int *, __int64 *, _QWORD *); // rbx
  int ConversationHost; // eax
  unsigned int v6; // ebx
  unsigned int v8; // edx
  __int64 v9; // [rsp+60h] [rbp-28h] BYREF
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+90h] [rbp+8h] BYREF
  __int64 v12; // [rsp+98h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 3);
  v2 = (_QWORD *)((char *)this + 32);
  v4 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64 *, int, int, int, DirectComposition::CMessageConversationHost *, int *, __int64 *, _QWORD *))(*(_QWORD *)v1 + 336LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 32);
  v9 = 0LL;
  v10 = 1;
  ConversationHost = v4(v1, L"System\\CompositionEngine", 0LL, &v9, 1, 1, 1, this, &v11, &v12, v2);
  v6 = ConversationHost;
  if ( ConversationHost < 0 )
  {
    v8 = 39;
    goto LABEL_9;
  }
  ConversationHost = CoreUICallCreateConversationHost(*((_QWORD *)this + 3), *v2, 0LL, (char *)this + 40);
  v6 = ConversationHost;
  if ( ConversationHost < 0 )
  {
    v8 = 45;
    goto LABEL_9;
  }
  ConversationHost = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 160LL)
                                                                        + 88LL))(
                       *(_QWORD *)(*((_QWORD *)this + 2) + 160LL),
                       *((unsigned __int8 *)this + 68),
                       v12);
  v6 = ConversationHost;
  if ( ConversationHost < 0 )
  {
    v8 = 49;
LABEL_9:
    DoStackCaptureDirect(ConversationHost, v8);
    return v6;
  }
  v6 = 0;
  *((_DWORD *)this + 16) = v11;
  return v6;
}
