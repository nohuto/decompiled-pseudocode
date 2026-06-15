/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x180034DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x180034360 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>::GetWeakReference(
        __int64 a1,
        struct IUnknown *a2)
{
  signed __int64 v2; // rdi
  __int64 v5; // r8
  signed __int32 v6; // eax
  __int64 WeakReference; // rax
  unsigned __int64 v9; // rdx
  bool i; // zf
  signed __int64 v11; // rax
  signed __int64 v12; // rdi
  signed __int32 v13; // eax

  v2 = *(_QWORD *)(a1 + 24);
  a2->lpVtbl = 0LL;
  if ( v2 >= 0 )
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference((Microsoft::WRL::Details *)(a1 - 8), a2);
    v5 = WeakReference;
    if ( !WeakReference )
      return 2147942414LL;
    *(_DWORD *)(WeakReference + 16) = v2;
    v9 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v9, v2);
    for ( i = v2 == v11; ; i = v11 == v12 )
    {
      v12 = v11;
      if ( i )
        break;
      if ( v11 < 0 )
      {
        *(_QWORD *)v5 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
        *(_DWORD *)(v5 + 16) = -1073741823;
        *(_DWORD *)(v5 + 12) = -1073741823;
        operator delete((void *)v5);
        v5 = 2 * v12;
        do
          v13 = *(_DWORD *)(2 * v12 + 0xC);
        while ( v13 != 0x7FFFFFFF
             && v13 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 12), v13 + 1, v13) );
        break;
      }
      *(_DWORD *)(v5 + 16) = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v9, v11);
    }
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
