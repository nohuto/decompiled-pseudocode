/*
 * XREFs of ?ResumeDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800395A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?ResumeDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x1800393DC (-ResumeDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??0ClientUpdateLockAcquire@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ@Z @ 0x18009942C (--0ClientUpdateLockAcquire@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ@Z.c)
 *     ??1ClientUpdateLockAcquire@DirectComposition@@QEAA@XZ @ 0x1800994F4 (--1ClientUpdateLockAcquire@DirectComposition@@QEAA@XZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1800EA8AC (McTemplateU0qqx_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::ResumeDraw(DirectComposition::CCompositionSurface *this)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  unsigned int v6; // ebx
  int v8; // [rsp+30h] [rbp-40h] BYREF
  DirectComposition::CDeviceLock *v9; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v10[16]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v11[16]; // [rsp+50h] [rbp-20h] BYREF

  v9 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v9);
  v2 = 0;
  v8 = 0;
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
  {
    McTemplateU0qqx_EventWriteTransfer(
      *(_QWORD *)(*((_QWORD *)this + 4) + 24LL),
      (unsigned int)&DCOMPEVENT_RESUME_DRAW_Start,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 160LL),
      42,
      (char)this);
    v2 = v8;
  }
  if ( *((_DWORD *)this + 14) )
  {
    if ( *((_DWORD *)this + 14) == 1 )
      v2 = -2003302399;
    v8 = v2;
    if ( v2 >= 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 4) + 353LL) )
        v2 = -2003302399;
      v8 = v2;
    }
  }
  else
  {
    v8 = -2003302398;
  }
  DirectComposition::ClientUpdateLockAcquire::ClientUpdateLockAcquire(
    (DirectComposition::ClientUpdateLockAcquire *)v10,
    (const struct DirectComposition::CDxDevice *)((*((_QWORD *)this + 4) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 4) >> 64)),
    &v8);
  if ( v8 >= 0 )
  {
    DirectComposition::CBitmapInfoBack::ResumeDraw(*((DirectComposition::CBitmapInfoBack **)this + 6));
    v5 = *((_QWORD *)this + 4);
    *((_DWORD *)this + 14) = 1;
    *(_BYTE *)(v5 + 353) = 1;
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(v3, &DCOMPEVENT_RESUME_DRAW_Stop, v4, 1LL, v11);
  v6 = v8;
  DirectComposition::ClientUpdateLockAcquire::~ClientUpdateLockAcquire((DirectComposition::ClientUpdateLockAcquire *)v10);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v9);
  return v6;
}
