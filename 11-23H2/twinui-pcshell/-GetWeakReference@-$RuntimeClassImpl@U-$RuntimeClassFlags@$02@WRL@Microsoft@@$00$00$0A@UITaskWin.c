/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskWindow@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800694E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180165270 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x1801652B0 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>::GetWeakReference(
        __int64 a1,
        volatile int *a2)
{
  signed __int64 v2; // rdi
  __int64 WeakReference; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v6; // r8
  unsigned __int64 v7; // rdx
  bool i; // zf
  signed __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a2 = 0LL;
  if ( v2 < 0 )
  {
LABEL_10:
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 12), a2);
LABEL_5:
    *(_QWORD *)a2 = v6;
    return 0LL;
  }
  WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference(
                             (Microsoft::WRL::Details *)(a1 - 16),
                             (struct IUnknown *)a2);
  v6 = (Microsoft::WRL::Details::WeakReferenceImpl *)WeakReference;
  if ( WeakReference )
  {
    *(_DWORD *)(WeakReference + 16) = v2;
    v7 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v7, v2);
    for ( i = v2 == v9; ; i = v9 == v2 )
    {
      v2 = v9;
      if ( i )
        break;
      if ( v9 < 0 )
      {
        Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(v6, 1u);
        goto LABEL_10;
      }
      *((_DWORD *)v6 + 4) = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v7, v9);
    }
    goto LABEL_5;
  }
  return 2147942414LL;
}
