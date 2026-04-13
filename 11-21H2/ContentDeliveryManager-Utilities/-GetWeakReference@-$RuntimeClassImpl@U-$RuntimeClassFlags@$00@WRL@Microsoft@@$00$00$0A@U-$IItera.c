/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x180039480
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x180031724 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::GetWeakReference(
        __int64 a1,
        struct IUnknown *a2)
{
  signed __int64 v2; // rdi
  __int64 v5; // r8
  signed __int32 v6; // eax
  __int64 WeakReference; // rax
  struct IUnknownVtbl *v8; // rdx
  unsigned __int64 v10; // r8
  bool i; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rdi
  signed __int32 v14; // eax

  v2 = *(_QWORD *)(a1 + 16);
  a2->lpVtbl = 0LL;
  if ( v2 >= 0 )
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference((Microsoft::WRL::Details *)(a1 - 8), a2);
    v8 = (struct IUnknownVtbl *)WeakReference;
    if ( !WeakReference )
      return 2147942414LL;
    *(_DWORD *)(WeakReference + 16) = v2;
    v10 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v10, v2);
    for ( i = v2 == v12; ; i = v12 == v13 )
    {
      v13 = v12;
      if ( i )
      {
        a2->lpVtbl = v8;
        return 0LL;
      }
      if ( v12 < 0 )
        break;
      LODWORD(v8->Release) = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v10, v12);
    }
    v8->QueryInterface = (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))&Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
    LODWORD(v8->Release) = -1073741823;
    HIDWORD(v8->AddRef) = -1073741823;
    operator delete(v8);
    v5 = 2 * v13;
    do
      v14 = *(_DWORD *)(2 * v13 + 0xC);
    while ( v14 != 0x7FFFFFFF && v14 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 12), v14 + 1, v14) );
  }
  else
  {
    v5 = 2 * v2;
    do
      v6 = *(_DWORD *)(2 * v2 + 0xC);
    while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 12), v6 + 1, v6) );
  }
  a2->lpVtbl = (struct IUnknownVtbl *)v5;
  return 0LL;
}
