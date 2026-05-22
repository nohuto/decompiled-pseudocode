/*
 * XREFs of ?SuspendDraw@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x18008B3F0
 * Callers:
 *     ?SuspendDraw@CVirtualSurface@DirectComposition@@WEI@EAAJXZ @ 0x1800A93D0 (-SuspendDraw@CVirtualSurface@DirectComposition@@WEI@EAAJXZ.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?SuspendDraw@CTileClump@DirectComposition@@QEAAXXZ @ 0x18008B4C4 (-SuspendDraw@CTileClump@DirectComposition@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1800EA8AC (McTemplateU0qqx_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::SuspendDraw(DirectComposition::CVirtualSurface *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  DirectComposition::CDeviceLock *v7; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[16]; // [rsp+38h] [rbp-20h] BYREF

  v7 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v7);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McTemplateU0qqx_EventWriteTransfer(
      *(_QWORD *)(*((_QWORD *)this + 13) + 24LL),
      (unsigned int)&DCOMPEVENT_SUSPEND_DRAW_Start,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 160LL),
      84,
      (char)this);
  v2 = 0;
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 13)
                                                                                             + 24LL)
                                                                                 + 96LL));
  v5 = *((_DWORD *)this + 32);
  if ( v5 )
  {
    if ( v5 == 2 )
    {
      v2 = -2003302399;
    }
    else
    {
      DirectComposition::CTileClump::SuspendDraw(*((DirectComposition::CTileClump **)this + 29));
      if ( *((_DWORD *)this + 32) == 1 )
        *(_BYTE *)(*((_QWORD *)this + 13) + 353LL) = 0;
      *((_DWORD *)this + 32) = 2;
    }
  }
  else
  {
    v2 = -2003302398;
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(v3, &DCOMPEVENT_SUSPEND_DRAW_Stop, v4, 1LL, v8);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v7);
  return v2;
}
