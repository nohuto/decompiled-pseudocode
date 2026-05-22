/*
 * XREFs of ?Create@CMessageConversationHost@DirectComposition@@SAJPEAVCDevice@2@_NP6AJPEBX22I@ZPEAXPEAPEAV12@@Z @ 0x18001D760
 * Callers:
 *     ?RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@System@4@PEAUIUnknown@@PEAVCompositorController@Core@234@W4CreationFlags@1234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001D170 (-RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@Syste.c)
 *     ?RegisterCallbackThread@CDevice@DirectComposition@@UEAAJXZ @ 0x18008C550 (-RegisterCallbackThread@CDevice@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Destroy@CMessageConversationHost@DirectComposition@@QEAAXXZ @ 0x18001CC68 (-Destroy@CMessageConversationHost@DirectComposition@@QEAAXXZ.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMessageSession@@@Z @ 0x18001D81C (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMessageSession@@@Z.c)
 *     ?Initialize@CMessageConversationHost@DirectComposition@@AEAAJXZ @ 0x18001D86C (-Initialize@CMessageConversationHost@DirectComposition@@AEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CMessageConversationHost::Create(
        struct DirectComposition::CDevice *a1,
        char a2,
        int (*a3)(const void *, const void *, const void *, unsigned int),
        void *a4,
        struct DirectComposition::CMessageConversationHost **a5)
{
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // edi

  *a5 = 0LL;
  v9 = DefaultHeap::AllocClear(0x48uLL);
  if ( v9 )
  {
    v10 = *((_QWORD *)a1 + 82);
    *v9 = &DirectComposition::CMessageConversationHost::`vftable';
    v9[3] = 0LL;
    v9[4] = 0LL;
    v9[5] = 0LL;
    v9[2] = a1;
    *((_BYTE *)v9 + 68) = a2;
    Microsoft::WRL::ComPtr<IMessageSession>::operator=(v9 + 3, v10);
    v9[6] = a3;
    v9[7] = a4;
    *((_DWORD *)v9 + 2) = 1;
    v11 = DirectComposition::CMessageConversationHost::Initialize((DirectComposition::CMessageConversationHost *)v9);
    v12 = v11;
    if ( v11 < 0 )
    {
      DoStackCaptureDirect(v11, 0x30u);
      DirectComposition::CMessageConversationHost::Destroy((DirectComposition::CMessageConversationHost *)v9);
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    }
    else
    {
      *a5 = (struct DirectComposition::CMessageConversationHost *)v9;
      return 0;
    }
  }
  else
  {
    v12 = -2147024882;
    DoStackCaptureDirect(-2147024882, 0x2Eu);
  }
  return v12;
}
