/*
 * XREFs of ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18006EC34
 * Callers:
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18006E590 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800E7EB0 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x18006E9F4 (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18006EA24 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18006F31C (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x1800F76B0 (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::HrLock(
        CBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7,
        enum WICBitmapLockFlags a8,
        struct IBitmapLock **a9,
        bool a10,
        struct IUnknown *a11)
{
  volatile signed __int32 *v14; // rsi
  int v15; // eax
  unsigned int v16; // ebx
  CBitmapLock *v17; // rax
  unsigned int v18; // ecx
  CBitmapLock *v19; // rax
  CBitmapLock *v20; // rdi
  char *v21; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  int v25; // r9d
  char *v26; // rcx
  unsigned int v27; // [rsp+20h] [rbp-68h]

  if ( (a8 & 2) == 0 )
  {
    if ( (a8 & 1) == 0 )
    {
      v16 = -2147024809;
      v25 = -2147024809;
      v27 = 433;
      goto LABEL_23;
    }
    v14 = (volatile signed __int32 *)((char *)this + 132);
    v15 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 132));
    v16 = v15;
    if ( v15 >= 0 )
      goto LABEL_4;
    v27 = 429;
LABEL_12:
    v25 = v15;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v25, v27, 0LL);
    return v16;
  }
  v14 = (volatile signed __int32 *)((char *)this + 132);
  v15 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 132));
  v16 = v15;
  if ( v15 < 0 )
  {
    v27 = 425;
    goto LABEL_12;
  }
LABEL_4:
  v17 = (CBitmapLock *)operator new(0xA0uLL);
  if ( !v17 )
  {
    v20 = 0LL;
    goto LABEL_15;
  }
  v19 = CBitmapLock::CBitmapLock(v17, 1);
  v20 = v19;
  if ( !v19 )
  {
LABEL_15:
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x1B7u, 0LL);
    goto LABEL_16;
  }
  v21 = (char *)v19 + *(int *)(*((_QWORD *)v19 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 8LL))(v21);
  v22 = CBitmapLock::HrInit(
          v20,
          (struct IBitmapUnlock *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a10,
          a11);
  v16 = v22;
  if ( v22 >= 0 )
  {
    *a9 = v20;
    return v16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1C3u, 0LL);
LABEL_16:
  if ( (a8 & 2) != 0 )
  {
    *v14 = 0;
  }
  else if ( (a8 & 1) != 0 )
  {
    _InterlockedDecrement(v14);
  }
  if ( v20 )
  {
    v26 = (char *)v20 + *(int *)(*((_QWORD *)v20 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return v16;
}
