/*
 * XREFs of ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180106E40
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180106A68 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x180107100 (-OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180107194 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180107510 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180107634 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001B570 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180039718 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x180039780 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowIconic::LoadCentralImage(CWindowIconic *this)
{
  unsigned int v1; // edi
  char v3; // r14
  int v4; // ecx
  int v5; // ecx
  volatile signed __int32 *v6; // rbx
  CBaseObject *v7; // rbx
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rcx
  HICON v11; // rax
  int v12; // eax
  int v13; // eax
  CBaseObject *v15; // [rsp+50h] [rbp+20h] BYREF
  HICON hIcon; // [rsp+58h] [rbp+28h] BYREF

  v1 = 0;
  hIcon = 0LL;
  v3 = 0;
  v15 = 0LL;
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return v1;
      v6 = (volatile signed __int32 *)*((_QWORD *)this + 3);
    }
    else
    {
      v9 = *((_DWORD *)this + 14) - 1;
      if ( v9 >= (int)*(double *)(*((_QWORD *)this + 8) + 48LL) )
        v9 = (int)*(double *)(*((_QWORD *)this + 8) + 48LL);
      v6 = *(volatile signed __int32 **)(*((_QWORD *)this + 4) + 8LL * v9);
    }
    v15 = (CBaseObject *)v6;
    if ( !v6 )
      goto LABEL_24;
    _InterlockedIncrement(v6 + 2);
  }
  else
  {
    v10 = *((_QWORD *)this + 10);
    v11 = *(HICON *)(v10 + 160);
    if ( v11 || (v11 = *(HICON *)(v10 + 152)) != 0LL )
    {
      hIcon = v11;
    }
    else
    {
      LoadIconWithScaleDown(0LL, (PCWSTR)0x7F00, 32, 32, &hIcon);
      v3 = 1;
    }
    if ( !hIcon )
      goto LABEL_24;
    v12 = CBitmapSource::Create(hIcon, &v15);
    v1 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xCDu);
      v7 = v15;
LABEL_22:
      if ( v7 )
        CBaseObject::Release(v7);
      goto LABEL_24;
    }
  }
  v7 = v15;
  if ( v15 )
  {
    v8 = CVisual::SetSize(*((CVisual **)this + 12), (const struct tagSIZE *)v15 + 3);
    v1 = v8;
    if ( v8 >= 0 )
    {
      v13 = CImage::SetBitmapSource(*((CImage **)this + 12), v7);
      v1 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xE6u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xE5u);
    }
    goto LABEL_22;
  }
LABEL_24:
  if ( v3 )
    DestroyIcon(hIcon);
  return v1;
}
