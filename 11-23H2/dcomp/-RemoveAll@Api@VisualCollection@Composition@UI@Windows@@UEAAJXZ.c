/*
 * XREFs of ?RemoveAll@Api@VisualCollection@Composition@UI@Windows@@UEAAJXZ @ 0x18006A980
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?DoUnlinkAndUnlock@?$TreeNodeT@VVisual@Composition@UI@Windows@@@Composition@UI@Windows@@IEAAXXZ @ 0x18006AA84 (-DoUnlinkAndUnlock@-$TreeNodeT@VVisual@Composition@UI@Windows@@@Composition@UI@Windows@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnVisualRemoved@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@@Z @ 0x18010153C (-OnVisualRemoved@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCollection::Api::RemoveAll(
        Windows::UI::Composition::VisualCollection::Api *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rcx
  int v7; // ebp
  DirectComposition::CDevice *v8; // rdi
  _DWORD *v9; // rax
  void (__fastcall ***v10)(_QWORD); // rcx
  struct Windows::UI::Composition::Visual *i; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v14; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v1);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 256LL))(*((_QWORD *)this + 2));
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualcollection.cpp",
        (const char *)(unsigned int)v3);
      DoStackCaptureDirect(v4, 0xF6u);
    }
    else
    {
      v5 = *((_QWORD *)this + 2);
      if ( Windows::UI::Composition::Visual::s_fIsVisualTreeCallbackRegistered )
      {
        for ( i = *(struct Windows::UI::Composition::Visual **)(v5 + 144);
              i;
              i = (struct Windows::UI::Composition::Visual *)*((_QWORD *)i + 19) )
        {
          Windows::UI::Composition::CompositionDiagnosticsInterop::OnVisualRemoved(i);
        }
      }
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 144);
        if ( !v6 )
          break;
        Windows::UI::Composition::TreeNodeT<Windows::UI::Composition::Visual>::DoUnlinkAndUnlock(v6 + 136);
      }
      v7 = *(_DWORD *)(v5 + 128);
      if ( v7 )
      {
        v8 = *(DirectComposition::CDevice **)(*(_QWORD *)(v5 + 24) + 456LL);
        DirectComposition::CDevice::BeginKernelCommand(v8, 0xCu, &v14, 0);
        v9 = v14;
        *(_DWORD *)v14 = 20;
        v9[1] = v7;
        v9[2] = 0;
        v10 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v8 + 10);
        if ( v10 )
          (**v10)(v10);
      }
      v4 = 0;
    }
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v1);
  return v4;
}
