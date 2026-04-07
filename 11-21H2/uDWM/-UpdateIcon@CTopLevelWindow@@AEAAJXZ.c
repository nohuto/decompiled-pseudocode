/*
 * XREFs of ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x18001B3F8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18001A6D0 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18001B4D8 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     IsOpenThemeDataPresent @ 0x180061548 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateIcon(CTopLevelWindow *this)
{
  CBaseObject *v1; // rbx
  unsigned int v3; // edi
  CImage *v4; // rcx
  char v6; // r14
  __int64 v7; // rax
  char v8; // bp
  int v9; // eax
  int v10; // eax
  CBaseObject *v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v11 = 0LL;
  v3 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v3;
  v4 = (CImage *)*((_QWORD *)this + 68);
  if ( !v4 )
    return v3;
  v6 = *((_DWORD *)v4 + 70) == 0;
  if ( (*((_DWORD *)this + 152) & 0x10000) == 0 || (v7 = *((_QWORD *)this + 94), !*(_QWORD *)(v7 + 152)) )
  {
    v8 = 1;
LABEL_8:
    v10 = CImage::SetBitmapSource(v4, v1);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1419u);
    }
    else if ( v8 != v6 )
    {
      CVisual::SetDirtyFlags(this, 0x1000u);
    }
    goto LABEL_11;
  }
  v8 = 0;
  v9 = CBitmapSource::Create(*(HICON *)(v7 + 152), &v11);
  v3 = v9;
  if ( v9 >= 0 )
  {
    v4 = (CImage *)*((_QWORD *)this + 68);
    v1 = v11;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1416u);
  v1 = v11;
LABEL_11:
  if ( v1 )
    CBaseObject::Release(v1);
  return v3;
}
