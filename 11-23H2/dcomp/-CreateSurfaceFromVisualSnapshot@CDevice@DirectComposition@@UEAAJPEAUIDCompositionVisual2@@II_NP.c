/*
 * XREFs of ?CreateSurfaceFromVisualSnapshot@CDevice@DirectComposition@@UEAAJPEAUIDCompositionVisual2@@II_NPEAU_D3DMATRIX@@PEAPEAUIUnknown@@@Z @ 0x1800F0BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z @ 0x180023E78 (-SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateSurfaceFromVisualSnapshot(
        DirectComposition::CDevice *this,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned int a4,
        bool a5,
        struct _D3DMATRIX *a6,
        struct IUnknown **a7)
{
  struct IUnknown **v7; // rsi
  struct IUnknown *v8; // rdi
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // r11
  int v13; // ebx
  int v14; // eax
  unsigned int v16; // [rsp+30h] [rbp-38h] BYREF
  void *v17; // [rsp+38h] [rbp-30h] BYREF
  struct DirectComposition::CDevice *v18; // [rsp+40h] [rbp-28h] BYREF

  v7 = a7;
  v8 = 0LL;
  v16 = 0;
  v10 = a4;
  v11 = a3;
  v17 = 0LL;
  if ( a7 && a3 )
  {
    if ( a4
      && (DirectComposition::CDevice::GetDeviceAndHandleWorker((unsigned __int64)a2, &v18, (unsigned int *)&a7),
          (struct DirectComposition::CDevice *)(v12 - 16) == v18) )
    {
      v14 = DirectComposition::CDevice::CreateProxyInternal(
              (DirectComposition::CDevice *)(v12 - 16),
              174,
              0,
              &v17,
              &v16);
      v8 = (struct IUnknown *)v17;
      v13 = v14;
      if ( v14 >= 0 )
      {
        *((_DWORD *)v17 + 3) = v16;
        LODWORD(v8[1].lpVtbl) = 1;
        v8->lpVtbl = (struct IUnknownVtbl *)&DirectComposition::CSnapshotProxy::`vftable';
        v13 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
                (DirectComposition::CResourceProxy *)&v8[1],
                1,
                v11);
        if ( v13 >= 0 )
        {
          v13 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
                  (DirectComposition::CResourceProxy *)&v8[1],
                  2,
                  v10);
          if ( v13 >= 0 )
          {
            if ( !a5
              || (v13 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
                          (DirectComposition::CResourceProxy *)&v8[1],
                          3,
                          1LL),
                  v13 >= 0) )
            {
              if ( !a6
                || (v13 = DirectComposition::CResourceProxy::SetBufferProperty(
                            (DirectComposition::CResourceProxy *)&v8[1],
                            4,
                            a6,
                            0x40uLL),
                    v13 >= 0) )
              {
                v13 = DirectComposition::CResourceProxy::SetReferenceProperty(
                        (DirectComposition::CResourceProxy *)&v8[1],
                        0,
                        a2);
                if ( v13 >= 0 )
                {
                  *v7 = v8;
                  return (unsigned int)v13;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v13 = -2147024809;
    }
  }
  else
  {
    v13 = -2147024809;
    if ( !a7 )
      goto LABEL_17;
  }
  *v7 = 0LL;
LABEL_17:
  if ( v8 )
    DirectComposition::CTransformGroupProxy::Release((DirectComposition::CTransformGroupProxy *)v8);
  return (unsigned int)v13;
}
