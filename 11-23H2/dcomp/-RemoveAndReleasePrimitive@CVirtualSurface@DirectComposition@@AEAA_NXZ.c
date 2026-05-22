/*
 * XREFs of ?RemoveAndReleasePrimitive@CVirtualSurface@DirectComposition@@AEAA_NXZ @ 0x18003C1F8
 * Callers:
 *     ?EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z @ 0x18003B1D4 (-EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z.c)
 *     ?SurfaceHidden@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x1800FE640 (-SurfaceHidden@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?Unlink@CPrimitive@DirectComposition@@UEAAJXZ @ 0x18003C2B0 (-Unlink@CPrimitive@DirectComposition@@UEAAJXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIDCompositionPrimitivePartner@@@@IEAAKXZ @ 0x180081BCC (-InternalRelease@-$CMILRefCountBaseT@UIDCompositionPrimitivePartner@@@@IEAAKXZ.c)
 */

char __fastcall DirectComposition::CVirtualSurface::RemoveAndReleasePrimitive(DirectComposition::CVirtualSurface *this)
{
  char v2; // di
  DirectComposition::CPrimitive *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 i; // rcx
  __int64 v8; // rcx
  DirectComposition::CDeviceLock *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v10 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v10);
  v3 = (DirectComposition::CPrimitive *)*((_QWORD *)this + 38);
  if ( v3 )
  {
    DirectComposition::CPrimitive::Unlink(v3);
    v4 = *((unsigned int *)this + 12);
    v5 = *((_QWORD *)this + 3);
    v6 = (*((_QWORD *)this + 38) + 16LL) & -(__int64)(*((_QWORD *)this + 38) != 0LL);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v4; i = (unsigned int)(i + 1) )
    {
      if ( v6 == *(_QWORD *)(v5 + 8 * i) )
        break;
    }
    if ( (unsigned int)i < (unsigned int)v4 )
    {
      while ( (unsigned int)i < (int)v4 - 1 )
      {
        *(_QWORD *)(v5 + 8 * i) = *(_QWORD *)(v5 + 8LL * (unsigned int)(i + 1));
        i = (unsigned int)(i + 1);
        v4 = *((unsigned int *)this + 12);
      }
      *((_DWORD *)this + 12) = v4 - 1;
    }
    v8 = *((_QWORD *)this + 38);
    if ( v8 )
    {
      CMILRefCountBaseT<IDCompositionPrimitivePartner>::InternalRelease(v8, v4, v5, v6);
      *((_QWORD *)this + 38) = 0LL;
    }
    v2 = 1;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v10);
  return v2;
}
