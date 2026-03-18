/*
 * XREFs of ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C0150CE8
 * Callers:
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C003F8CC (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C005E508 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     bDeleteSurface @ 0x1C0062930 (bDeleteSurface.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall BRUSH::vDeleteIcmDIBs(BRUSH *this)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rsi
  int v4; // edi
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  SURFACE *v6; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)this + 11);
  v2 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  KeAcquireGuardedMutex(*(PKGUARDED_MUTEX *)(v2 + 144));
  if ( v1 )
  {
    do
    {
      v3 = *(_QWORD *)(v1 + 16);
      v4 = 0;
      SURFREF::SURFREF((SURFREF *)v5, *(HSURF *)(v1 + 8));
      if ( v6 )
      {
        SURFACE::vDec_cRef(v6);
        v4 = 1;
      }
      SURFREF::~SURFREF((SURFREF *)v5);
      if ( v4 )
        bDeleteSurface(*(_QWORD *)(v1 + 8));
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v1);
      v1 = v3;
    }
    while ( v3 );
  }
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v2 + 144));
}
