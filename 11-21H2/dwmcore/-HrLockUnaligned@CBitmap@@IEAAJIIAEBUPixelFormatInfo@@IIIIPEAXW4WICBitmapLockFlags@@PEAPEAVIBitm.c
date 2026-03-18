/*
 * XREFs of ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180271410
 * Callers:
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18006E590 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x18006E9F4 (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x1800F76B0 (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ??0CBitmapLockUnaligned@@QEAA@XZ @ 0x180271CFC (--0CBitmapLockUnaligned@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x180271E1C (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 */

__int64 __fastcall CBitmap::HrLockUnaligned(
        CBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7,
        unsigned int a8,
        unsigned __int8 *a9,
        enum WICBitmapLockFlags a10,
        struct IBitmapLock **a11)
{
  volatile signed __int32 *v14; // rdi
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // r9d
  CBitmapLockUnaligned *v18; // rax
  CBitmapLockUnaligned *v19; // rax
  __int64 v20; // rcx
  CBitmapLockUnaligned *v21; // rsi
  char *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  char *v25; // rcx
  unsigned int v27; // [rsp+20h] [rbp-68h]
  const void *retaddr; // [rsp+88h] [rbp+0h]

  if ( (a10 & 2) != 0 )
  {
    v14 = (volatile signed __int32 *)((char *)this + 132);
    v15 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 132));
    v16 = v15;
    if ( v15 < 0 )
    {
      v27 = 498;
LABEL_4:
      v17 = v15;
LABEL_22:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, v17, v27);
      return v16;
    }
  }
  else
  {
    if ( (a10 & 1) == 0 )
    {
      v16 = -2147024809;
      v17 = -2147024809;
      v27 = 506;
      goto LABEL_22;
    }
    v14 = (volatile signed __int32 *)((char *)this + 132);
    v15 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 132));
    v16 = v15;
    if ( v15 < 0 )
    {
      v27 = 502;
      goto LABEL_4;
    }
  }
  v18 = (CBitmapLockUnaligned *)DefaultHeap::AllocClear(0xB8uLL);
  if ( !v18 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v19 = CBitmapLockUnaligned::CBitmapLockUnaligned(v18);
  v21 = v19;
  if ( v19 )
  {
    v22 = (char *)v19 + *(int *)(*((_QWORD *)v19 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v22 + 8LL))(v22);
    v23 = CBitmapLockUnaligned::HrInit(v21, this, a2, a3, a4, (unsigned int)a7, a8, a9, a10, a5, a6);
    v16 = v23;
    if ( v23 >= 0 )
    {
      *a11 = v21;
      return v16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0x20Cu);
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, -2147024882, 0x200u);
  }
  if ( (a10 & 2) != 0 )
  {
    *v14 = 0;
  }
  else if ( (a10 & 1) != 0 )
  {
    _InterlockedDecrement(v14);
  }
  if ( v21 )
  {
    v25 = (char *)v21 + *(int *)(*((_QWORD *)v21 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return v16;
}
