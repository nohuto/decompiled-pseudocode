/*
 * XREFs of ?RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z @ 0x1805250D0
 * Callers:
 *     ?SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z @ 0x1805253C0 (-SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z.c)
 * Callees:
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x1804CD108 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 *     ?AddPendingNotification@AppResizeAcc@@AEAAJHAEBUtagVARIANT@@@Z @ 0x1805249CC (-AddPendingNotification@AppResizeAcc@@AEAAJHAEBUtagVARIANT@@@Z.c)
 */

void __fastcall AppResizeAcc::RaisePropertyChangeNotification(AppResizeAcc *this, int a2)
{
  const WCHAR *v4; // rcx
  int inited; // eax
  const unsigned __int16 *v6; // rcx
  VARIANTARG pvarg; // [rsp+20h] [rbp-28h] BYREF
  PCWSTR prgsz; // [rsp+60h] [rbp+18h] BYREF

  VariantInit(&pvarg);
  if ( a2 == 30139 )
  {
    v6 = &LocaleName;
    if ( *((_QWORD *)this + 12) )
      v6 = (const unsigned __int16 *)*((_QWORD *)this + 12);
    inited = InitVariantFromString(v6, &pvarg);
  }
  else
  {
    if ( a2 != 30140 )
      return;
    v4 = &LocaleName;
    if ( *((_QWORD *)this + 12) )
      v4 = (const WCHAR *)*((_QWORD *)this + 12);
    prgsz = v4;
    inited = InitVariantFromStringArray(&prgsz, 1u, &pvarg);
  }
  if ( inited >= 0 && (int)AppResizeAcc::AddPendingNotification(this, a2, &pvarg) < 0 )
    VariantClear(&pvarg);
}
