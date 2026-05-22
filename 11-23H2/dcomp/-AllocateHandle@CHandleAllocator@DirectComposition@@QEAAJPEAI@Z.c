/*
 * XREFs of ?AllocateHandle@CHandleAllocator@DirectComposition@@QEAAJPEAI@Z @ 0x180058970
 * Callers:
 *     ?CreateMaskBrush@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionMaskBrush@345@@Z @ 0x180047C70 (-CreateMaskBrush@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionMaskBrush@.c)
 *     ?EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ @ 0x18005A150 (-EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@ComponentTransform3D@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@@Z @ 0x18005A7E0 (-RuntimeClassInitialize@ComponentTransform3D@Composition@UI@Windows@@QEAAJPEAVCompositionObject@.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?ChannelOpenSharedResource@CDevice@DirectComposition@@QEAAJPEAXI_NPEAI@Z @ 0x18005B708 (-ChannelOpenSharedResource@CDevice@DirectComposition@@QEAAJPEAXI_NPEAI@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180078698 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 */

__int64 __fastcall DirectComposition::CHandleAllocator::AllocateHandle(
        DirectComposition::CHandleAllocator *this,
        unsigned int *a2,
        int a3,
        int a4)
{
  unsigned int v4; // eax
  unsigned int v5; // esi
  __int64 v8; // rcx
  unsigned int i; // edi
  _DWORD *v10; // rdx
  int v12; // r8d
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // edx
  int v17; // ecx
  int v18; // [rsp+50h] [rbp+8h] BYREF
  int *v19; // [rsp+60h] [rbp+18h] BYREF

  v4 = *((_DWORD *)this + 40);
  v5 = 0;
  if ( v4 == -1 )
    return (unsigned int)-2147024882;
  v8 = *((unsigned int *)this + 6);
  if ( v4 >> 5 < (unsigned int)v8 )
  {
    for ( i = *((_DWORD *)this + 41); *(_DWORD *)(*(_QWORD *)this + 4LL * i) == -1; i = (i + 1) % (unsigned int)v8 )
      ;
    *((_DWORD *)this + 41) = i;
    goto LABEL_6;
  }
  v14 = v8 + 1;
  v18 = 0;
  i = v8;
  if ( (int)v8 + 1 < (unsigned int)v8 )
  {
    v5 = -2147024362;
    v16 = 181;
    v17 = -2147024362;
    goto LABEL_19;
  }
  if ( v14 > *((_DWORD *)this + 5) )
  {
    v19 = &v18;
    v15 = DynArrayImpl<1>::Grow((_DWORD)this, v14, a3, a4, (__int64)&v19);
    v5 = v15;
    if ( v15 >= 0 )
    {
      *(_DWORD *)((unsigned int)(4 * (*((_DWORD *)this + 6))++) + *(_QWORD *)this) = *v19;
      goto LABEL_6;
    }
    v16 = 192;
    v17 = v15;
LABEL_19:
    DoStackCaptureDirect(v17, v16);
    return v5;
  }
  *(_DWORD *)(*(_QWORD *)this + 4 * v8) = 0;
  *((_DWORD *)this + 6) = v14;
LABEL_6:
  v10 = (_DWORD *)(*(_QWORD *)this + 4LL * i);
  if ( !_BitScanForward((unsigned int *)&v12, ~*v10) )
    Microsoft::WRL2::FailFast::Do();
  *v10 |= *v10 + 1;
  ++*((_DWORD *)this + 40);
  *a2 = 32 * i + v12 + 1;
  return v5;
}
