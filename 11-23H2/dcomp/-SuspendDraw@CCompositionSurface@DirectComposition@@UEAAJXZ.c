/*
 * XREFs of ?SuspendDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x18008A1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?SetEmptyGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x180038D50 (-SetEmptyGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??0ClientUpdateLockRelease@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ_N@Z @ 0x18009948C (--0ClientUpdateLockRelease@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ_N@Z.c)
 *     ??1ClientUpdateLockRelease@DirectComposition@@QEAA@XZ @ 0x18009952C (--1ClientUpdateLockRelease@DirectComposition@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1800EA8AC (McTemplateU0qqx_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::SuspendDraw(DirectComposition::CCompositionSurface *this)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rax
  int v13; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v14[8]; // [rsp+38h] [rbp-40h] BYREF
  DirectComposition::CDeviceLock *v15; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v16[16]; // [rsp+48h] [rbp-30h] BYREF

  v15 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v15);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McTemplateU0qqx_EventWriteTransfer(
      *(_QWORD *)(*((_QWORD *)this + 4) + 24LL),
      (unsigned int)&DCOMPEVENT_SUSPEND_DRAW_Start,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 160LL),
      42,
      (char)this);
  if ( *((_DWORD *)this + 14) )
  {
    v2 = 0;
    if ( *((_DWORD *)this + 14) == 2 )
      v2 = -2003302399;
    v13 = v2;
  }
  else
  {
    v13 = -2003302398;
  }
  DirectComposition::ClientUpdateLockRelease::ClientUpdateLockRelease(
    (DirectComposition::ClientUpdateLockRelease *)v14,
    (const struct DirectComposition::CDxDevice *)((*((_QWORD *)this + 4) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 4) >> 64)),
    &v13,
    0);
  v5 = v13;
  if ( v13 >= 0 )
  {
    v6 = *((_QWORD *)this + 6);
    v7 = *(_QWORD *)(v6 + 136);
    v8 = *(_QWORD *)(v6 + 152);
    v9 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 64LL);
    if ( v7 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v9 + 88) + 72LL))(*(_QWORD *)(v9 + 88), v7, 0LL);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 144) + 128LL) + 354LL) )
      {
        *(_QWORD *)(v6 + 144) = 0LL;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v9 + 56) + 344LL))(*(_QWORD *)(v9 + 56), v8);
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v9 + 56) + 600LL))(*(_QWORD *)(v9 + 56), v6 + 144);
      }
      v10 = *(_DWORD *)(v9 + 180);
    }
    else
    {
      v10 = 0;
    }
    *(_DWORD *)(v6 + 164) = v10;
    DirectComposition::CAtlasSurfacePool::SetEmptyGuardRect((DirectComposition::CAtlasSurfacePool *)v9);
    *(_BYTE *)(v6 + 160) = 0;
    v11 = *((_QWORD *)this + 4);
    *((_DWORD *)this + 14) = 2;
    *(_BYTE *)(v11 + 353) = 0;
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(v3, &DCOMPEVENT_SUSPEND_DRAW_Stop, v4, 1LL, v16);
  DirectComposition::ClientUpdateLockRelease::~ClientUpdateLockRelease((DirectComposition::ClientUpdateLockRelease *)v14);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v15);
  return v5;
}
