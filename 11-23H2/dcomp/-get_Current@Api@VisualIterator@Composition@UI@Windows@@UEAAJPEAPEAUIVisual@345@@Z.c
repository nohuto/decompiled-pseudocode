/*
 * XREFs of ?get_Current@Api@VisualIterator@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z @ 0x180072CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualIterator::Api::get_Current(
        Windows::UI::Composition::VisualIterator::Api *this,
        struct Windows::UI::Composition::IVisual **a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  volatile signed __int32 *v7; // rcx
  struct Windows::UI::Composition::IVisual *v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 8) & 2) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 256LL))(*((_QWORD *)this + 2));
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualiterator.cpp",
        (const char *)(unsigned int)v5);
      DoStackCaptureDirect(v6, 0x60u);
    }
    else
    {
      v7 = (volatile signed __int32 *)*((_QWORD *)this + 3);
      v8 = 0LL;
      if ( v7 )
      {
        v8 = (struct Windows::UI::Composition::IVisual *)(v7 + 42);
        if ( _InterlockedIncrement(v7 + 4) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 80LL))(v7);
      }
      *a2 = v8;
      v6 = 0;
    }
    Microsoft::WRL2::ContextSession::EndApiEntry(v3);
    return v6;
  }
  else
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v3);
    return 2147483667LL;
  }
}
