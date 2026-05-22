/*
 * XREFs of ?ExecuteGutterExtensions@CDxDevice@DirectComposition@@QEAAJAEBV?$DynArray@UGutterExtension@DirectComposition@@$0A@@@PEAUID3D11ShaderResourceView@@PEAUID3D11RenderTargetView@@IIW4DXGI_FORMAT@@@Z @ 0x1800233F0
 * Callers:
 *     ?ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180022D9C (-ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     ?FlushPackedGutterExtensions@CDxDevice@DirectComposition@@AEAAJPEAUID3D11ShaderResourceView@@PEAUID3D11RenderTargetView@@IIAEBUGutterExtensionSurface@12@IAEBUtagRECT@@@Z @ 0x180022EF4 (-FlushPackedGutterExtensions@CDxDevice@DirectComposition@@AEAAJPEAUID3D11ShaderResourceView@@PEA.c)
 *     ?PackGutterExtensionSegment@CDxDevice@DirectComposition@@AEAAXAEBUGutterExtension@2@HHHHIIPEAUGutterExtensionVertex@12@1PEAUtagRECT@@@Z @ 0x180023670 (-PackGutterExtensionSegment@CDxDevice@DirectComposition@@AEAAXAEBUGutterExtension@2@HHHHIIPEAUGu.c)
 *     ?GetGutterExtensionSurface@CDxDevice@DirectComposition@@AEAAJW4DXGI_FORMAT@@PEAUGutterExtensionSurface@12@@Z @ 0x180023C10 (-GetGutterExtensionSurface@CDxDevice@DirectComposition@@AEAAJW4DXGI_FORMAT@@PEAUGutterExtensionS.c)
 *     ?CreateGutterExtensionResources@CDxDevice@DirectComposition@@AEAAJXZ @ 0x18003AC58 (-CreateGutterExtensionResources@CDxDevice@DirectComposition@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall DirectComposition::CDxDevice::ExecuteGutterExtensions(
        struct DirectComposition::CDxDevice::GutterExtensionVertex **this,
        __int64 a2,
        struct ID3D11ShaderResourceView *a3,
        struct ID3D11RenderTargetView *a4,
        unsigned int a5,
        unsigned int a6,
        enum DXGI_FORMAT a7)
{
  int GutterExtensionResources; // ebp
  __int64 v8; // rdi
  struct DirectComposition::CDxDevice::GutterExtensionVertex *v10; // r11
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // ebx
  signed int v14; // edx
  int v15; // r14d
  struct DirectComposition::CDxDevice::GutterExtensionVertex *v16; // r12
  int GutterExtensionSurface; // eax
  __int64 v18; // r15
  int v19; // esi
  __int64 v20; // r15
  int v21; // r9d
  int v22; // edx
  DirectComposition::CDxDevice *v23; // rcx
  int v24; // edi
  int v25; // r8d
  int v27; // eax
  int v28; // [rsp+60h] [rbp-A8h]
  int v29; // [rsp+64h] [rbp-A4h]
  struct DirectComposition::CDxDevice::GutterExtensionVertex *v30; // [rsp+68h] [rbp-A0h]
  _BYTE v34[32]; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v35; // [rsp+A8h] [rbp-60h] BYREF

  GutterExtensionResources = 0;
  v8 = a2;
  if ( !*((_BYTE *)this + 240) )
    GutterExtensionResources = DirectComposition::CDxDevice::CreateGutterExtensionResources((DirectComposition::CDxDevice *)this);
  v10 = this[24];
  v11 = 0;
  v12 = a5;
  v13 = 0;
  v14 = a6;
  v15 = 0;
  v16 = this[23];
  v28 = 0;
  v30 = v10;
  v35.left = a5;
  v35.top = a6;
  *(_QWORD *)&v35.right = 0LL;
  if ( GutterExtensionResources >= 0 )
  {
    GutterExtensionSurface = DirectComposition::CDxDevice::GetGutterExtensionSurface(
                               (DirectComposition::CDxDevice *)this,
                               a7,
                               (struct DirectComposition::CDxDevice::GutterExtensionSurface *)v34);
    v10 = v30;
    GutterExtensionResources = GutterExtensionSurface;
    v12 = a5;
    v11 = 0;
    v14 = a6;
  }
  v18 = 0LL;
  v29 = 0;
  if ( GutterExtensionResources < 0 )
    return (unsigned int)GutterExtensionResources;
LABEL_6:
  if ( (unsigned int)v18 < *(_DWORD *)(v8 + 24) )
  {
    v19 = 0;
    v20 = *(_QWORD *)v8 + 24 * v18;
    while ( 1 )
    {
      v21 = v19;
      v22 = *(_DWORD *)(v20 + 8);
      if ( v19 )
        v22 = v19;
      v23 = (DirectComposition::CDxDevice *)(unsigned int)(64 - v13);
      v24 = v22;
      if ( v22 > (int)v23 )
        v24 = 64 - v13;
      v19 = 0;
      if ( v22 > (int)v23 )
        v19 = v22 - (_DWORD)v23;
      v25 = 0;
      if ( v21 )
        v25 = *(_DWORD *)(v20 + 8) - v21;
      DirectComposition::CDxDevice::PackGutterExtensionSegment(
        v23,
        (const struct DirectComposition::GutterExtension *)v20,
        v25,
        v24,
        v13,
        v15,
        a5,
        a6,
        v16,
        v10,
        &v35);
      v16 = (struct DirectComposition::CDxDevice::GutterExtensionVertex *)((char *)v16 + 48);
      v10 = (struct DirectComposition::CDxDevice::GutterExtensionVertex *)((char *)v30 + 48);
      v11 = v28 + 1;
      v30 = (struct DirectComposition::CDxDevice::GutterExtensionVertex *)((char *)v30 + 48);
      ++v28;
      if ( ((v16 - this[23]) & 0xFFFFFFFFFFFFFFF0uLL) != 0x7CB0 )
      {
        v13 += v24;
        if ( v13 != 64 )
          goto LABEL_20;
        if ( ++v15 != 320 )
          break;
      }
      v27 = DirectComposition::CDxDevice::FlushPackedGutterExtensions(
              (DirectComposition::CDxDevice *)this,
              a3,
              a4,
              a5,
              a6,
              (const struct DirectComposition::CDxDevice::GutterExtensionSurface *)v34,
              v11,
              &v35);
      v10 = this[24];
      v11 = 0;
      v14 = a6;
      GutterExtensionResources = v27;
      v12 = a5;
      v13 = 0;
      v16 = this[23];
      v15 = 0;
      v28 = 0;
      v30 = v10;
      v35.left = a5;
      *(_QWORD *)&v35.right = 0LL;
      v35.top = a6;
LABEL_21:
      if ( GutterExtensionResources < 0 || !v19 )
      {
        v8 = a2;
        v18 = (unsigned int)++v29;
        if ( GutterExtensionResources < 0 )
          return (unsigned int)GutterExtensionResources;
        goto LABEL_6;
      }
    }
    v13 = 0;
LABEL_20:
    v14 = a6;
    v12 = a5;
    goto LABEL_21;
  }
  if ( v11 )
    return DirectComposition::CDxDevice::FlushPackedGutterExtensions(
             (DirectComposition::CDxDevice *)this,
             a3,
             a4,
             v12,
             v14,
             (const struct DirectComposition::CDxDevice::GutterExtensionSurface *)v34,
             v11,
             &v35);
  else
    return (unsigned int)GutterExtensionResources;
}
