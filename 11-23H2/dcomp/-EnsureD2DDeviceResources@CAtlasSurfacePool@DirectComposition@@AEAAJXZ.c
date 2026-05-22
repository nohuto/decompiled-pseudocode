/*
 * XREFs of ?EnsureD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ @ 0x180034C64
 * Callers:
 *     ?BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPHA_MODE@@PEAPEAXPEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z @ 0x18002F7C0 (-BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPH.c)
 *     ?CreateDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ @ 0x180034950 (-CreateDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?CreateD2DDeviceContext@CDxDevice@DirectComposition@@QEAAJPEAPEAUID2D1DeviceContext@@@Z @ 0x180034E48 (-CreateD2DDeviceContext@CDxDevice@DirectComposition@@QEAAJPEAPEAUID2D1DeviceContext@@@Z.c)
 *     ?FreeD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x180038B0C (-FreeD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurfacePool::EnsureD2DDeviceResources(
        DirectComposition::CAtlasSurfacePool *this)
{
  _QWORD *v1; // rsi
  int D2DDeviceContext; // edi
  __int64 (__fastcall ***v4)(_QWORD, GUID *, char *); // rcx
  int v6; // eax
  __int64 v7; // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, char *); // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+34h] [rbp-1Ch]
  int v13; // [rsp+38h] [rbp-18h]
  int v14; // [rsp+3Ch] [rbp-14h]
  int v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+48h] [rbp-8h]
  __int64 v17; // [rsp+70h] [rbp+20h] BYREF

  v1 = (_QWORD *)((char *)this + 56);
  if ( !*((_QWORD *)this + 7) )
  {
    D2DDeviceContext = DirectComposition::CDxDevice::CreateD2DDeviceContext(
                         (DirectComposition::CDxDevice *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 8LL),
                         (struct ID2D1DeviceContext **)this + 7);
    if ( D2DDeviceContext >= 0 )
    {
      v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v1;
      if ( !*v1 )
        return (unsigned int)D2DDeviceContext;
      v17 = 0LL;
      D2DDeviceContext = (**v4)(v4, &GUID_2ea67ed7_d42e_4c07_9dd5_a91ea23e01d2, (char *)this + 88);
      if ( D2DDeviceContext >= 0 )
      {
        D2DDeviceContext = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4))(
                             *((_QWORD *)this + 4),
                             &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec,
                             &v17);
        if ( D2DDeviceContext >= 0 )
        {
          v6 = *((_DWORD *)this + 40);
          if ( v6 == 61 || v6 == 49 )
          {
            v15 = 0;
            v11 = v6;
            v12 = 3;
          }
          else
          {
            v11 = *((_DWORD *)this + 40);
            v7 = *((_QWORD *)this + 18);
            v12 = 1;
            v15 = *(_BYTE *)(*(_QWORD *)(v7 + 128) + 104LL) != 0 ? 3 : 1;
          }
          v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v1;
          v16 = 0LL;
          v13 = 1119879168;
          v14 = 1119879168;
          D2DDeviceContext = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *), __int64, int *, char *))(*v8)[62])(
                               v8,
                               v17,
                               &v11,
                               (char *)this + 64);
        }
      }
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      if ( D2DDeviceContext >= 0 )
      {
        D2DDeviceContext = 0;
        v9 = *(_QWORD *)(*((_QWORD *)this + 18) + 128LL);
        *((_QWORD *)this + 10) = 0LL;
        v10 = *(_QWORD *)(v9 + 96);
        if ( v10 )
          D2DDeviceContext = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)v10 + 96LL))(
                               v10,
                               0LL,
                               0LL,
                               (char *)this + 80);
        if ( D2DDeviceContext >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 344LL))(*v1, *((_QWORD *)this + 10));
          return (unsigned int)D2DDeviceContext;
        }
      }
    }
    DirectComposition::CAtlasSurfacePool::FreeD2DDeviceResources(this);
    return (unsigned int)D2DDeviceContext;
  }
  return 0LL;
}
