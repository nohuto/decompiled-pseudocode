/*
 * XREFs of ?MoveNext@Api@VisualIterator@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x18006A290
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualIterator::Api::MoveNext(
        Windows::UI::Composition::VisualIterator::Api *this,
        bool *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rax
  volatile signed __int32 *v9; // rsi
  volatile signed __int32 *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 8) & 2) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 256LL))(*((_QWORD *)this + 2));
    v7 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualiterator.cpp",
        (const char *)(unsigned int)v5);
      DoStackCaptureDirect(v7, 0x9Cu);
    }
    else
    {
      v8 = *((_QWORD *)this + 3);
      if ( v8 )
      {
        v9 = *(volatile signed __int32 **)(v8 + 152);
        if ( (volatile signed __int32 *)v8 != v9 )
        {
          if ( v9 && _InterlockedIncrement(v9 + 4) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 80LL))(v9);
          v10 = (volatile signed __int32 *)*((_QWORD *)this + 3);
          *((_QWORD *)this + 3) = v9;
          if ( v10 )
          {
            if ( _InterlockedExchangeAdd(v10 + 4, 0xFFFFFFFF) == 1 )
            {
              LOBYTE(v6) = 1;
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 64LL))(v10, v6);
            }
          }
        }
        *a2 = *((_QWORD *)this + 3) != 0LL;
      }
      v7 = 0;
    }
    Microsoft::WRL2::ContextSession::EndApiEntry(v3);
    return v7;
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
