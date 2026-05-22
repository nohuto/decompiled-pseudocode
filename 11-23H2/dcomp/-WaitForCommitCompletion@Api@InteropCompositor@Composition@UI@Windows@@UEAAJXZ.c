/*
 * XREFs of ?WaitForCommitCompletion@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ @ 0x180094CB0
 * Callers:
 *     ?WaitForCommitCompletion@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJXZ @ 0x1800ACB50 (-WaitForCommitCompletion@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJXZ.c)
 *     ?WaitForCommitCompletion@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJXZ @ 0x1800ACB70 (-WaitForCommitCompletion@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJXZ.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::WaitForCommitCompletion(
        struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int *LockSemaphore; // rbx
  int v4; // eax
  unsigned int v5; // esi

  v1 = this - 30;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 30);
  if ( (v1->SpinCount & 2) != 0 )
  {
    LockSemaphore = (int *)v1->LockSemaphore;
    if ( LockSemaphore[22] > 0 && !*((_BYTE *)LockSemaphore + 97) )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    ++LockSemaphore[23];
    v4 = (*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)this[-19].OwningThread + 32LL))(this[-19].OwningThread);
    v5 = v4;
    if ( v4 < 0 )
      DoStackCaptureDirect(v4, 0x18Fu);
    else
      v5 = 0;
    --LockSemaphore[23];
    Microsoft::WRL2::ContextSession::EndApiEntry(v1);
    return v5;
  }
  else
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v1);
    return 2147483667LL;
  }
}
