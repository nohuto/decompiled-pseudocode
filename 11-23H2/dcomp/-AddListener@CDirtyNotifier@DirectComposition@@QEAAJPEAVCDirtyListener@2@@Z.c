/*
 * XREFs of ?AddListener@CDirtyNotifier@DirectComposition@@QEAAJPEAVCDirtyListener@2@@Z @ 0x18003B508
 * Callers:
 *     ?Initialize@CTexturedRectanglePrimitive@DirectComposition@@UEAAJXZ @ 0x18000CD60 (-Initialize@CTexturedRectanglePrimitive@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CVirtualSurfacePrimitive@DirectComposition@@UEAAJXZ @ 0x18003B4B0 (-Initialize@CVirtualSurfacePrimitive@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CPrimitive@DirectComposition@@MEAAJXZ @ 0x18003B4F0 (-Initialize@CPrimitive@DirectComposition@@MEAAJXZ.c)
 *     ?SetSurfaceReferenceAtIndex@CFilterEffect@DirectComposition@@IEAAXIPEAVCBitmapInfoFront@2@@Z @ 0x1800F8480 (-SetSurfaceReferenceAtIndex@CFilterEffect@DirectComposition@@IEAAXIPEAVCBitmapInfoFront@2@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DirectComposition::CDirtyNotifier::AddListener(
        DirectComposition::CDirtyNotifier *this,
        struct DirectComposition::CDirtyListener *a2)
{
  char *v2; // r8
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned int v5; // r9d
  __int64 v6; // r10
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  struct DirectComposition::CDirtyListener **v10; // rcx
  int v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  struct DirectComposition::CDirtyListener *v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = a2;
  v2 = (char *)this + 8;
  v3 = 0;
  v4 = *((unsigned int *)this + 8);
  v5 = 0;
  v6 = *((_QWORD *)this + 1);
  if ( !(_DWORD)v4 )
  {
LABEL_2:
    v7 = v4 + 1;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      v8 = -2147024362;
      v12 = 181;
      v13 = -2147024362;
    }
    else
    {
      v8 = 0;
      if ( v7 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(v6 + 8 * v4) = a2;
        *((_DWORD *)v2 + 6) = v7;
        return v8;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet(v2, 8LL, v2, &v14);
      v8 = v11;
      if ( v11 >= 0 )
        return v8;
      v12 = 192;
      v13 = v11;
    }
    DoStackCaptureDirect(v13, v12);
    return v8;
  }
  v10 = (struct DirectComposition::CDirtyListener **)*((_QWORD *)this + 1);
  while ( a2 != *v10 )
  {
    ++v5;
    ++v10;
    if ( v5 >= (unsigned int)v4 )
      goto LABEL_2;
  }
  return v3;
}
