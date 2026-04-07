/*
 * XREFs of ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180039630
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180026780 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180039718 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x180039780 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 *     IsOpenThemeDataPresent @ 0x18005D948 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateIcon(CImage **this)
{
  CBaseObject *v1; // rbx
  unsigned int v3; // esi
  CImage *v4; // rax
  char v6; // r14
  HICON v7; // rcx
  char v8; // bp
  int v9; // eax
  int v10; // eax
  int v11; // eax
  CBaseObject *v12; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v12 = 0LL;
  v3 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent(this) )
    return v3;
  v4 = this[72];
  if ( !v4 )
    return v3;
  v6 = *((_DWORD *)v4 + 70) == 0;
  if ( ((_DWORD)this[78] & 0x10000) == 0 || (v7 = (HICON)*((_QWORD *)this[94] + 19)) == 0LL )
  {
    v8 = 1;
LABEL_8:
    v10 = CImage::SetBitmapSource(this[72], v1);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x13E9u, 0LL);
    }
    else if ( v8 != v6 )
    {
      v11 = *((_DWORD *)this + 22);
      if ( (v11 & 0x1000) == 0 )
      {
        *((_DWORD *)this + 22) = v11 | 0x1000;
        CVisual::PropagateDirtyChildren((CVisual *)this);
      }
    }
    goto LABEL_12;
  }
  v8 = 0;
  v9 = CBitmapSource::Create(v7, &v12);
  v3 = v9;
  if ( v9 >= 0 )
  {
    v1 = v12;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x13E6u, 0LL);
  v1 = v12;
LABEL_12:
  if ( v1 )
    CBaseObject::Release(v1);
  return v3;
}
