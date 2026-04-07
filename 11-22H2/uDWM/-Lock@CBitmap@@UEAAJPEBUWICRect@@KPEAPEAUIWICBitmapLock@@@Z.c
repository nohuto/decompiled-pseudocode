/*
 * XREFs of ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x18005B800
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18004F554 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::Lock(CBitmap *this, const struct WICRect *a2, unsigned int a3, struct IWICBitmapLock **a4)
{
  char *v5; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  char *v14; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0LL;
  v5 = (char *)this + 72;
  v14 = v5;
  if ( v5[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  if ( a2 )
  {
    if ( a4 )
    {
      v9 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, _QWORD, __int64 *))(*((_QWORD *)this - 2) + 24LL))(
             (char *)this - 16,
             a2,
             a3,
             &v13);
      v10 = v9;
      if ( v9 < 0 )
      {
        v12 = 275;
      }
      else
      {
        v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IWICBitmapLock **))v13)(v13, &IID_IWICBitmapLock, a4);
        v10 = v9;
        if ( v9 >= 0 )
          goto LABEL_7;
        v12 = 277;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v12, 0LL);
    }
    else
    {
      v10 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x10Fu, 0LL);
    }
  }
  else
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x10Eu, 0LL);
  }
LABEL_7:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v14);
  return v10;
}
