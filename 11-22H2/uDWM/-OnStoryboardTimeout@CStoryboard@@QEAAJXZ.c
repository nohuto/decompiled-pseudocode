/*
 * XREFs of ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800DBDB8
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18000E820 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x18000F238 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D9D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CStoryboard::OnStoryboardTimeout(CStoryboard *this, __int64 a2, __int64 a3)
{
  int v3; // edi

  v3 = 0;
  if ( !*((_DWORD *)this + 6) )
  {
    *((_BYTE *)this + 76) = 1;
    if ( !*((_BYTE *)this + 68) )
    {
      CStoryboard::_EnumerateWindows(this, 2u, a3);
LABEL_6:
      CStoryboard::Abandon((struct _GUID *)this);
      return (unsigned int)v3;
    }
    v3 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 96LL))(this);
    if ( v3 < 0 )
      goto LABEL_6;
  }
  return (unsigned int)v3;
}
