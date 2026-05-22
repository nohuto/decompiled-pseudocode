/*
 * XREFs of ?ChannelCreateResource@CDevice@DirectComposition@@QEAAJI_N0PEAI@Z @ 0x180056030
 * Callers:
 *     ?CreateSurfaceBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurfaceBrush@345@@Z @ 0x1800488A0 (-CreateSurfaceBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurfaceBrush@.c)
 *     ?CreateSpriteVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUISpriteVisual@345@@Z @ 0x180055CA0 (-CreateSpriteVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUISpriteVisual@345@@Z.c)
 *     ?CreateContainerVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIContainerVisual@345@@Z @ 0x180059C30 (-CreateContainerVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIContainerVisual@345@@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180078698 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::ChannelCreateResource(
        DirectComposition::CDevice *this,
        int a2,
        unsigned __int8 a3,
        char a4,
        unsigned int *a5)
{
  unsigned int v5; // eax
  char *v6; // rsi
  int v7; // ebx
  int v8; // r13d
  __int64 v11; // r8
  unsigned int i; // edi
  _DWORD *v13; // rdx
  int v15; // r8d
  unsigned int v16; // r15d
  unsigned int v17; // edi
  _DWORD *v18; // rcx
  int v19; // eax
  unsigned int v21; // edx
  int v22; // eax
  unsigned int v23; // edx
  int v24; // ecx
  _DWORD *v25; // r8
  void **v26; // [rsp+30h] [rbp-48h] BYREF
  void *v27; // [rsp+80h] [rbp+8h] BYREF
  int v28; // [rsp+88h] [rbp+10h]

  v28 = a2;
  v5 = *((_DWORD *)this + 90);
  v6 = (char *)this + 200;
  v7 = 0;
  v8 = a3;
  if ( v5 == -1 )
    return (unsigned int)-2147024882;
  v11 = *((unsigned int *)this + 56);
  if ( v5 >> 5 < (unsigned int)v11 )
  {
    for ( i = *((_DWORD *)this + 91); *(_DWORD *)(*(_QWORD *)v6 + 4LL * i) == -1; i = (i + 1) % (unsigned int)v11 )
      ;
    *((_DWORD *)this + 91) = i;
    goto LABEL_6;
  }
  v21 = v11 + 1;
  LODWORD(v27) = 0;
  i = v11;
  if ( (int)v11 + 1 < (unsigned int)v11 )
  {
    v7 = -2147024362;
    v23 = 181;
    v24 = -2147024362;
    goto LABEL_23;
  }
  if ( v21 > *((_DWORD *)this + 55) )
  {
    v26 = &v27;
    v22 = DynArrayImpl<1>::Grow((int)this + 200, v21, v11, a4, (__int64)&v26);
    v7 = v22;
    if ( v22 >= 0 )
    {
      *(_DWORD *)((unsigned int)(4 * (*((_DWORD *)v6 + 6))++) + *(_QWORD *)v6) = *(_DWORD *)v26;
      goto LABEL_6;
    }
    v23 = 192;
    v24 = v22;
LABEL_23:
    DoStackCaptureDirect(v24, v23);
    return (unsigned int)v7;
  }
  *(_DWORD *)(*(_QWORD *)v6 + 4 * v11) = 0;
  *((_DWORD *)this + 56) = v21;
LABEL_6:
  v13 = (_DWORD *)(*(_QWORD *)v6 + 4LL * i);
  if ( !_BitScanForward((unsigned int *)&v15, ~*v13) )
    Microsoft::WRL2::FailFast::Do();
  *v13 |= *v13 + 1;
  ++*((_DWORD *)v6 + 40);
  v16 = 32 * i + v15;
  v17 = v16 + 1;
  if ( v7 >= 0 )
  {
    DirectComposition::CDevice::BeginKernelCommand(this, 0x10u, &v27, 0);
    v18 = v27;
    v19 = v28;
    *(_DWORD *)v27 = 1;
    v18[1] = v17;
    v18[2] = v19;
    v18[3] = v8;
    if ( a4 && (v7 = DirectComposition::CDevice::TryFlushKernelCommands(this, 0), v7 < 0) )
    {
      v25 = (_DWORD *)(*(_QWORD *)v6 + 4 * ((unsigned __int64)v16 >> 5));
      *v25 &= ~(1 << (v16 & 0x1F));
      --*((_DWORD *)v6 + 40);
    }
    else
    {
      *a5 = v17;
    }
  }
  return (unsigned int)v7;
}
