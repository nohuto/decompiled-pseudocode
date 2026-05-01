/*
 * XREFs of ??$MakeAndInitialize@VAccessibleElement@@V1@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAVAccessibleElement@@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Z @ 0x180583AF0
 * Callers:
 *     ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x180583DCC (-AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AccessibleElement@@QEAA@XZ @ 0x1802E4EAC (--0AccessibleElement@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakReference@@@Z @ 0x1805628C0 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakRe.c)
 *     ?InternalRelease@?$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ @ 0x180563414 (-InternalRelease@-$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AccessibleElement,AccessibleElement,WeakReference::IWeakReference * &,enum AccessibleElementFlags &,long &>(
        AccessibleElement **a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  unsigned int v6; // ebp
  AccessibleElement *v9; // rax
  AccessibleElement *v10; // rax
  int v11; // edi
  AccessibleElement *v12; // rsi
  __int64 v13; // rdx
  int v14; // ebx
  volatile int *v15; // rdx
  AccessibleElement *v17; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  *a1 = 0LL;
  v9 = (AccessibleElement *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = AccessibleElement::AccessibleElement(v9);
    v11 = *a4;
    v12 = v10;
    v13 = *a2;
    v14 = *a3;
    v17 = v10;
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)v10 + 14, v13);
    *((_DWORD *)v12 + 30) = v14;
    *((_DWORD *)v12 + 31) = v11;
    if ( v12 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((AccessibleElement *)((char *)v12 + 132), v15);
    *a1 = v12;
    Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
