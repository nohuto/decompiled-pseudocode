/*
 * XREFs of ?FindRegisteredClient@HotKeyProcessor@@AEAAJPEAUIMessageProxy@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801FE23C
 * Callers:
 *     ?OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801FEA10 (-OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??$As@UIMessageProxy@@@?$ComPtr@UIRemoteHotKeyCallBack@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801FBE14 (--$As@UIMessageProxy@@@-$ComPtr@UIRemoteHotKeyCallBack@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801FE0E8 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall HotKeyProcessor::FindRegisteredClient(
        HotKeyProcessor *this,
        struct IMessageProxy *a2,
        struct HotkeyClientRegistration **a3)
{
  unsigned int v3; // edi
  _QWORD *v7; // rbx
  __int64 (__fastcall ****v8)(_QWORD, GUID *, __int64 *); // rcx
  ULONG_PTR v9; // r8
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  struct IMessageProxy *v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      *a3 = 0LL;
      v7 = (_QWORD *)*((_QWORD *)this + 3);
      while ( 1 )
      {
        do
        {
          v7 = (_QWORD *)*v7;
          if ( v7 == *((_QWORD **)this + 3) )
            return v3;
          v8 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v7[2] + 104LL);
        }
        while ( !*v8 );
        v12 = 0LL;
        v3 = Microsoft::WRL::ComPtr<IRemoteHotKeyCallBack>::As<IMessageProxy>(v8, (__int64 *)&v12);
        if ( (v3 & 0x80000000) != 0 )
          break;
        if ( v12 == a2 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v7 + 2);
          v3 = 0;
          *a3 = (struct HotkeyClientRegistration *)v7[2];
LABEL_13:
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v12);
          return v3;
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v12);
      }
      if ( v3 == -2147024882 )
        TerminateProcessOnMemoryExhaustion(0LL);
      FailFastWithHR(v3, retaddr, 0x42CuLL);
      goto LABEL_13;
    }
    v9 = 1060LL;
  }
  else
  {
    v9 = 1059LL;
  }
  v3 = -2147024809;
  FailFastWithHR(-2147024809, retaddr, v9);
  return v3;
}
