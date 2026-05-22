/*
 * XREFs of ?GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800FA130
 * Callers:
 *     ?DrawPrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAUID2D1DeviceContext@@AEBUD2D_MATRIX_4X4_F@@MW4DCOMPOSITION_COMPOSITE_MODE@@@Z @ 0x1800F1830 (-DrawPrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAU.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?GetPrimitiveBufferSize@CPrimitiveGroup@DirectComposition@@IEBAJPEAI@Z @ 0x1800337A0 (-GetPrimitiveBufferSize@CPrimitiveGroup@DirectComposition@@IEBAJPEAI@Z.c)
 *     ?GetCommandBufferSize@CPrimitiveGroup@DirectComposition@@IEBAJPEAI@Z @ 0x180033894 (-GetCommandBufferSize@CPrimitiveGroup@DirectComposition@@IEBAJPEAI@Z.c)
 *     ?WritePrimitiveBuffer@CPrimitiveGroup@DirectComposition@@IEAAXPEAEIPEAI@Z @ 0x180033944 (-WritePrimitiveBuffer@CPrimitiveGroup@DirectComposition@@IEAAXPEAEIPEAI@Z.c)
 *     ?WriteCommandBuffer@CPrimitiveGroup@DirectComposition@@IEAAXPEAEI@Z @ 0x180034144 (-WriteCommandBuffer@CPrimitiveGroup@DirectComposition@@IEAAXPEAEI@Z.c)
 *     ??$ReleaseInterface@UID2D1Bitmap@@@@YAXAEAPEAUID2D1Bitmap@@@Z @ 0x18003898C (--$ReleaseInterface@UID2D1Bitmap@@@@YAXAEAPEAUID2D1Bitmap@@@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorDeviceContext@@@@YAXAEAPEAUID2D1PrivateCompositorDeviceContext@@@Z @ 0x180038BA8 (--$ReleaseInterface@UID2D1PrivateCompositorDeviceContext@@@@YAXAEAPEAUID2D1PrivateCompositorDevi.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MODE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800E9960 (-GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MOD.c)
 *     ?Create@CD2DSharedBuffer@DirectComposition@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800ECD10 (-Create@CD2DSharedBuffer@DirectComposition@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroup::GetD2DCommandList(
        DirectComposition::CPrimitiveGroup *this,
        struct ID2D1DeviceContext *a2,
        struct ID2D1PrivateCompositorCommandList **a3)
{
  struct ID2D1PrivateCompositorCommandList *v3; // rbx
  int CommandBufferSize; // edi
  unsigned int v6; // ecx
  __int64 v7; // rsi
  __int64 v8; // r14
  struct ID2D1PrivateCompositorBuffer *v9; // r12
  struct ID2D1PrivateCompositorBuffer *v10; // r12
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rax
  __int64 v13; // r8
  unsigned int i; // r13d
  unsigned int v15; // edx
  int v16; // eax
  unsigned int j; // r13d
  unsigned int v18; // edx
  int v19; // eax
  struct ID2D1PrivateCompositorBuffer *v20; // r13
  __int64 *v21; // r15
  __int64 *v22; // rsi
  struct ID2D1Bitmap1 *v24; // [rsp+68h] [rbp-49h] BYREF
  struct ID2D1PrivateCompositorBuffer *v25; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v26; // [rsp+78h] [rbp-39h] BYREF
  __int64 v27; // [rsp+80h] [rbp-31h] BYREF
  __int128 v28; // [rsp+88h] [rbp-29h] BYREF
  __int64 v29; // [rsp+98h] [rbp-19h]
  unsigned int v30; // [rsp+A0h] [rbp-11h]
  __int128 v31; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+7h]
  unsigned int v33; // [rsp+C0h] [rbp+Fh]
  struct ID2D1PrivateCompositorCommandList *v34; // [rsp+C8h] [rbp+17h] BYREF
  struct ID2D1PrivateCompositorBuffer *v37; // [rsp+130h] [rbp+7Fh] BYREF

  v3 = 0LL;
  LODWORD(v37) = 0;
  v26 = 0;
  v34 = 0LL;
  CommandBufferSize = DirectComposition::CPrimitiveGroup::GetCommandBufferSize(this, (unsigned int *)&v37);
  if ( CommandBufferSize < 0 )
    return (unsigned int)CommandBufferSize;
  CommandBufferSize = DirectComposition::CPrimitiveGroup::GetPrimitiveBufferSize(this, &v26);
  if ( CommandBufferSize < 0 )
    return (unsigned int)CommandBufferSize;
  v6 = (unsigned int)v37;
  if ( !(_DWORD)v37 )
  {
LABEL_49:
    *a3 = v3;
    return (unsigned int)CommandBufferSize;
  }
  v7 = 0LL;
  v8 = 0LL;
  v31 = 0LL;
  v33 = 0;
  v9 = 0LL;
  v28 = 0LL;
  v30 = 0;
  v27 = 0LL;
  v24 = 0LL;
  v37 = 0LL;
  v25 = 0LL;
  v32 = 0LL;
  v29 = 0LL;
  CommandBufferSize = DirectComposition::CD2DSharedBuffer::Create(v6, &v37);
  if ( CommandBufferSize >= 0 )
  {
    CommandBufferSize = DirectComposition::CD2DSharedBuffer::Create(v26, &v25);
    if ( CommandBufferSize < 0 )
    {
      v9 = v25;
    }
    else
    {
      v10 = v37;
      (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v37 + 32LL))(v37);
      v11 = (unsigned __int8 *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v10 + 24LL))(v10);
      DirectComposition::CPrimitiveGroup::WriteCommandBuffer(this, v11);
      v9 = v25;
      (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v25 + 32LL))(v25);
      v12 = (unsigned __int8 *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v9 + 24LL))(v9);
      DirectComposition::CPrimitiveGroup::WritePrimitiveBuffer(this, v12, v13, 0LL);
      for ( i = 0; i < *((_DWORD *)this + 28); ++i )
      {
        if ( CommandBufferSize < 0 )
          break;
        CommandBufferSize = DirectComposition::CAtlasSurfacePool::GetD2DBitmap(
                              *(DirectComposition::CAtlasSurfacePool **)(*((_QWORD *)this + 11) + 16LL * i),
                              a2,
                              (enum DXGI_ALPHA_MODE)*(_DWORD *)(*((_QWORD *)this + 11) + 16LL * i + 8),
                              &v24);
        if ( CommandBufferSize >= 0 )
        {
          v15 = v7 + 1;
          v25 = v24;
          if ( (int)v7 + 1 >= (unsigned int)v7 )
          {
            CommandBufferSize = 0;
            if ( v15 > HIDWORD(v32) )
            {
              v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v31, 8u, (__int64)v24, &v25);
              CommandBufferSize = v16;
              if ( v16 < 0 )
              {
                DoStackCaptureDirect(v16, 0xC0u);
                v7 = v33;
                continue;
              }
              v7 = v33;
            }
            else
            {
              *(_QWORD *)(v31 + 8 * v7) = v24;
              v7 = v15;
              v33 = v15;
            }
            v24 = 0LL;
          }
          else
          {
            CommandBufferSize = -2147024362;
            DoStackCaptureDirect(-2147024362, 0xB5u);
          }
        }
      }
      for ( j = 0; j < *((_DWORD *)this + 36); ++j )
      {
        if ( CommandBufferSize < 0 )
          goto LABEL_34;
        CommandBufferSize = DirectComposition::CAtlasSurfacePool::GetD2DBitmap(
                              *(DirectComposition::CAtlasSurfacePool **)(*((_QWORD *)this + 15) + 8LL * j),
                              a2,
                              DXGI_ALPHA_MODE_PREMULTIPLIED,
                              &v24);
        if ( CommandBufferSize >= 0 )
        {
          v18 = v8 + 1;
          v25 = v24;
          if ( (int)v8 + 1 >= (unsigned int)v8 )
          {
            CommandBufferSize = 0;
            if ( v18 > HIDWORD(v29) )
            {
              v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v28, 8u, (__int64)v24, &v25);
              CommandBufferSize = v19;
              if ( v19 < 0 )
              {
                DoStackCaptureDirect(v19, 0xC0u);
                v8 = v30;
                continue;
              }
              v8 = v30;
            }
            else
            {
              *(_QWORD *)(v28 + 8 * v8) = v24;
              v8 = v18;
              v30 = v18;
            }
            v24 = 0LL;
          }
          else
          {
            CommandBufferSize = -2147024362;
            DoStackCaptureDirect(-2147024362, 0xB5u);
          }
        }
      }
      if ( CommandBufferSize >= 0 )
      {
        CommandBufferSize = (**(__int64 (__fastcall ***)(struct ID2D1DeviceContext *, GUID *, __int64 *))a2)(
                              a2,
                              &GUID_2ea67ed7_d42e_4c07_9dd5_a91ea23e01d2,
                              &v27);
        if ( CommandBufferSize >= 0 )
        {
          v20 = v37;
          CommandBufferSize = (*(__int64 (__fastcall **)(__int64, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _DWORD, struct ID2D1PrivateCompositorCommandList **))(*(_QWORD *)v27 + 24LL))(
                                v27,
                                v37,
                                v9,
                                v31,
                                v7,
                                v28,
                                v8,
                                0LL,
                                0,
                                &v34);
          goto LABEL_35;
        }
      }
    }
  }
LABEL_34:
  v20 = v37;
LABEL_35:
  if ( v24 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v24 + 16LL))(v24);
  if ( (_DWORD)v7 )
  {
    v21 = (__int64 *)v31;
    do
    {
      ReleaseInterface<ID2D1Bitmap>(v21++);
      --v7;
    }
    while ( v7 );
  }
  if ( (_DWORD)v8 )
  {
    v22 = (__int64 *)v28;
    do
    {
      ReleaseInterface<ID2D1Bitmap>(v22++);
      --v8;
    }
    while ( v8 );
  }
  ReleaseInterface<ID2D1PrivateCompositorDeviceContext>(&v27);
  if ( v20 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v9 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v9 + 16LL))(v9);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v28);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v31);
  if ( CommandBufferSize >= 0 )
  {
    v3 = v34;
    goto LABEL_49;
  }
  return (unsigned int)CommandBufferSize;
}
