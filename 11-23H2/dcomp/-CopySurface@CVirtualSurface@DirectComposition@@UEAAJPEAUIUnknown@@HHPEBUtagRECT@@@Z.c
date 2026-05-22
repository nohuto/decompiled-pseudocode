/*
 * XREFs of ?CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x1800FDB40
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z @ 0x180030204 (-IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z.c)
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z @ 0x1800FD9C0 (-CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::CopySurface(
        DirectComposition::CVirtualSurface *this,
        struct IUnknown *a2,
        int a3,
        int a4,
        struct tagRECT *a5)
{
  __int64 v9; // rax
  struct ID3D11Resource *v10; // r11
  const struct tagRECT *v11; // rdx
  unsigned int v12; // r8d
  int v13; // ebx
  struct tagRECT *v14; // rcx
  DirectComposition::CDeviceLock *v16; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v17; // [rsp+38h] [rbp-28h] BYREF
  const struct DirectComposition::CDxDevice *v18[3]; // [rsp+48h] [rbp-18h] BYREF
  struct ID3D11Resource *v19; // [rsp+80h] [rbp+20h] BYREF

  v16 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v16);
  DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
    v18,
    (DirectComposition::CDevice **)((*((_QWORD *)this + 4) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 4) >> 64)));
  v9 = *((_QWORD *)this + 4);
  v10 = 0LL;
  v17.left = 0;
  v17.top = 0;
  v11 = (const struct tagRECT *)*((unsigned int *)this + 10);
  v12 = *((_DWORD *)this + 11);
  v19 = 0LL;
  v17.right = (int)v11;
  v17.bottom = v12;
  if ( *(_DWORD *)(v9 + 344) )
  {
    v13 = -2147467259;
    goto LABEL_12;
  }
  if ( *(_BYTE *)(v9 + 353) )
  {
    v13 = -2003302399;
    goto LABEL_12;
  }
  if ( a5 )
  {
    if ( !DirectComposition::IsRectangleInSurface((DirectComposition *)a5, v11, v12) )
    {
      v13 = -2147024809;
      goto LABEL_12;
    }
    v17 = *v14;
  }
  v13 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct ID3D11Resource **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
          &v19);
  if ( v13 >= 0 )
    v13 = DirectComposition::CVirtualSurface::CopySurface(
            (DirectComposition::CVirtualSurface *)((char *)this - 72),
            v19,
            a3,
            a4,
            &v17,
            0);
  v10 = v19;
LABEL_12:
  if ( v10 )
    ((void (__fastcall *)(struct ID3D11Resource *))v10->lpVtbl->Release)(v10);
  DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)v18);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v16);
  return (unsigned int)v13;
}
