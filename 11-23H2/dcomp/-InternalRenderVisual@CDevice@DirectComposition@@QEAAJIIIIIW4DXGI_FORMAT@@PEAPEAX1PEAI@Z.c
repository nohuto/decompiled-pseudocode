/*
 * XREFs of ?InternalRenderVisual@CDevice@DirectComposition@@QEAAJIIIIIW4DXGI_FORMAT@@PEAPEAX1PEAI@Z @ 0x1800F22CC
 * Callers:
 *     ?RenderVisual@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@IIIIW4DXGI_FORMAT@@PEAPEAX2PEAI@Z @ 0x1800F40D0 (-RenderVisual@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@IIIIW4DXGI_FORMAT@@PEAPEAX2PEAI@Z.c)
 *     ?RenderVisual@CompositorCommon@Composition@UI@Windows@@AEAAJPEAVVisual@234@IIIIW4DXGI_FORMAT@@PEAPEAX2PEAI@Z @ 0x180129684 (-RenderVisual@CompositorCommon@Composition@UI@Windows@@AEAAJPEAVVisual@234@IIIIW4DXGI_FORMAT@@PE.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z @ 0x180030EB4 (-FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::InternalRenderVisual(
        DirectComposition::CDevice *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        enum DXGI_FORMAT a7,
        void **a8,
        void **a9,
        unsigned int *a10)
{
  HANDLE EventW; // rdi
  HANDLE FileMappingW; // rsi
  unsigned int v14; // r14d
  __int64 v15; // r15
  signed int LastError; // eax
  signed int v17; // ebx
  enum DXGI_FORMAT v18; // ebp
  unsigned int v19; // r8d
  DWORD dwMaximumSizeLow; // edx
  unsigned __int64 v21; // rcx
  signed int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  _QWORD *v26; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+98h] [rbp+10h]
  unsigned int v28; // [rsp+A0h] [rbp+18h]

  v28 = a3;
  v27 = a2;
  EventW = 0LL;
  v26 = (_QWORD *)((char *)this + 96);
  FileMappingW = 0LL;
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 96));
  v14 = a5;
  if ( !a5 || (v15 = a6) == 0 )
  {
    v17 = -2147024809;
    goto LABEL_49;
  }
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  if ( !EventW )
  {
    LastError = GetLastError();
    v17 = LastError;
    if ( LastError > 0 )
      v17 = (unsigned __int16)LastError | 0x80070000;
    if ( v17 < 0 )
      goto LABEL_49;
  }
  v18 = a7;
  if ( a7 > DXGI_FORMAT_R16_UINT )
  {
    if ( a7 == DXGI_FORMAT_R8_UNORM || a7 == DXGI_FORMAT_A8_UNORM )
    {
      v19 = 8;
      goto LABEL_37;
    }
    if ( a7 != DXGI_FORMAT_B8G8R8A8_UNORM && a7 != DXGI_FORMAT_B8G8R8X8_UNORM && a7 != DXGI_FORMAT_B8G8R8A8_UNORM_SRGB )
    {
      v19 = 12;
      if ( a7 != DXGI_FORMAT_NV12 )
      {
        if ( a7 == DXGI_FORMAT_P010 )
        {
          v19 = 48;
        }
        else if ( (unsigned int)(a7 - 106) >= 2 )
        {
          goto LABEL_18;
        }
      }
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  switch ( a7 )
  {
    case DXGI_FORMAT_R16_UINT:
LABEL_24:
      v19 = 16;
      break;
    case DXGI_FORMAT_R32G32B32A32_FLOAT:
      v19 = 128;
      break;
    case DXGI_FORMAT_R32G32B32_FLOAT:
      v19 = 96;
      break;
    case DXGI_FORMAT_R16G16B16A16_FLOAT:
    case DXGI_FORMAT_R16G16B16A16_UNORM:
    case DXGI_FORMAT_R32G32_FLOAT:
      v19 = 64;
      break;
    case DXGI_FORMAT_R10G10B10A2_UNORM:
    case DXGI_FORMAT_R8G8B8A8_UNORM:
    case DXGI_FORMAT_R32_UINT:
LABEL_35:
      v19 = 32;
      break;
    case DXGI_FORMAT_R8G8_UNORM:
      goto LABEL_24;
    default:
LABEL_18:
      v17 = -2147024362;
LABEL_19:
      if ( EventW )
      {
        CloseHandle(EventW);
        EventW = 0LL;
      }
      goto LABEL_49;
  }
LABEL_37:
  if ( v14 > 0x7FFFFFF8 / v19 )
    goto LABEL_18;
  dwMaximumSizeLow = -1;
  v21 = v15 * ((((v14 * v19 + 7) >> 3) + 3) & 0xFFFFFFFC);
  if ( v21 <= 0xFFFFFFFF )
    dwMaximumSizeLow = v15 * ((((v14 * v19 + 7) >> 3) + 3) & 0xFFFFFFFC);
  *a10 = dwMaximumSizeLow;
  v17 = v21 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v21 > 0xFFFFFFFF )
    goto LABEL_19;
  FileMappingW = CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0x8000004u, 0, dwMaximumSizeLow, 0LL);
  if ( (((unsigned __int64)FileMappingW + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v22 = GetLastError();
    v17 = v22;
    if ( v22 > 0 )
      v17 = (unsigned __int16)v22 | 0x80070000;
    if ( v17 < 0 )
      goto LABEL_46;
  }
  DirectComposition::CDevice::FlushKernelCommands(this, 0);
  v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 8LL))(*((_QWORD *)this + 20));
  v24 = NtVisualCaptureBits(v23, v27, v28, a4, v14, v15, v18, EventW, FileMappingW);
  v17 = DirectComposition::CDevice::HRESULTFromNTSTATUS(v24);
  if ( v17 < 0 )
  {
LABEL_46:
    if ( FileMappingW )
    {
      CloseHandle(FileMappingW);
      FileMappingW = 0LL;
    }
    goto LABEL_19;
  }
LABEL_49:
  *a8 = FileMappingW;
  *a9 = EventW;
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v26);
  return (unsigned int)v17;
}
