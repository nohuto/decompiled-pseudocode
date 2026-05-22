/*
 * XREFs of ?SetSurfaceReferenceAtIndex@CFilterEffect@DirectComposition@@IEAAXIPEAVCBitmapInfoFront@2@@Z @ 0x1800F8480
 * Callers:
 *     ?SetInput@CFilterEffect@DirectComposition@@QEAAJIPEAUIUnknown@@I@Z @ 0x1800F829C (-SetInput@CFilterEffect@DirectComposition@@QEAAJIPEAUIUnknown@@I@Z.c)
 * Callees:
 *     ?AddListener@CDirtyNotifier@DirectComposition@@QEAAJPEAVCDirtyListener@2@@Z @ 0x18003B508 (-AddListener@CDirtyNotifier@DirectComposition@@QEAAJPEAVCDirtyListener@2@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x18007E3EC (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

void __fastcall DirectComposition::CFilterEffect::SetSurfaceReferenceAtIndex(
        DirectComposition::CFilterEffect *this,
        unsigned int a2,
        struct DirectComposition::CBitmapInfoFront *a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v7; // r9
  unsigned __int64 v8; // rsi
  unsigned int v9; // edx
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 i; // r8
  __int64 v14; // rcx

  v3 = (_QWORD *)((char *)this + 72);
  v4 = a2;
  v7 = *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * a2);
  if ( (struct DirectComposition::CBitmapInfoFront *)v7 != a3 )
  {
    v8 = (unsigned __int64)this + 24;
    if ( v7 )
    {
      v9 = *(_DWORD *)(v7 + 88);
      v10 = *(_QWORD *)(v7 + 64);
      v11 = -(__int64)(this != 0LL);
      v12 = 0LL;
      for ( i = v8 & v11; (unsigned int)v12 < v9; v12 = (unsigned int)(v12 + 1) )
      {
        if ( i == *(_QWORD *)(v10 + 8 * v12) )
          break;
      }
      if ( (unsigned int)v12 < v9 )
      {
        while ( (unsigned int)v12 < v9 - 1 )
        {
          *(_QWORD *)(v10 + 8 * v12) = *(_QWORD *)(v10 + 8LL * (unsigned int)(v12 + 1));
          v12 = (unsigned int)(v12 + 1);
          v9 = *(_DWORD *)(v7 + 88);
        }
        *(_DWORD *)(v7 + 88) = v9 - 1;
      }
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(*(volatile signed __int32 **)(*v3 + 8 * v4));
    }
    *(_QWORD *)(*v3 + 8 * v4) = a3;
    v14 = *(_QWORD *)(*v3 + 8 * v4);
    if ( v14 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v14 + 8));
      DirectComposition::CDirtyNotifier::AddListener(
        (DirectComposition::CDirtyNotifier *)(*(_QWORD *)(*v3 + 8 * v4) + 56LL),
        (struct DirectComposition::CDirtyListener *)(v8 & -(__int64)(this != 0LL)));
    }
  }
}
