/*
 * XREFs of ?_OnTileRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18001EE30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeDelegates@V_lambda_5e595ec35342659083fef893f53fe724_@@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_5e595ec35342659083fef893f53fe724_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180022C80 (--$InvokeDelegates@V_lambda_5e595ec35342659083fef893f53fe724_@@UIGameListRemovedEventHandler@Gam.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileRemoved(
        RTL_SRWLOCK *this,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *a2)
{
  int v3; // eax
  int v4; // edi
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rdi
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  _DWORD *Ptr; // rbx
  signed __int32 v11; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  HSTRING string; // [rsp+58h] [rbp+38h] BYREF
  __int64 v16; // [rsp+60h] [rbp+40h] BYREF
  HSTRING v17; // [rsp+68h] [rbp+48h] BYREF

  v16 = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, __int64 *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v16);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15D,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_17;
  }
  string = 0LL;
  v5 = v16;
  v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = v6(v5, &string);
  v4 = v7;
  if ( v7 >= 0 )
  {
    v17 = string;
    v4 = 0;
    Ptr = 0LL;
    AcquireSRWLockExclusive(this + 14);
    if ( this[13].Ptr )
    {
      Ptr = this[13].Ptr;
      do
        v11 = Ptr[3];
      while ( v11 != 0x7FFFFFFF && v11 != _InterlockedCompareExchange(Ptr + 3, v11 + 1, v11) );
    }
    if ( this != (RTL_SRWLOCK *)-112LL )
      ReleaseSRWLockExclusive(this + 14);
    if ( Ptr )
    {
      v4 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_5e595ec35342659083fef893f53fe724_,Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler>(
             &v17,
             Ptr,
             &this[13]);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(Ptr);
    }
    if ( v4 >= 0 )
      goto LABEL_16;
    v8 = (unsigned int)v4;
    v9 = 354LL;
  }
  else
  {
    v8 = (unsigned int)v7;
    v9 = 352LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)v8);
LABEL_16:
  WindowsDeleteString(string);
  string = 0LL;
LABEL_17:
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v4;
}
