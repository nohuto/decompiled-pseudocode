/*
 * XREFs of ?GetEventRegistration@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@PEBG0@Z @ 0x180099CA4
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1800782C0 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180094910 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180099E78 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

_QWORD *__fastcall WindowEventDispatcher::GetEventRegistration(
        __int64 a1,
        _QWORD *a2,
        const WCHAR *a3,
        const WCHAR *a4)
{
  __int64 v5; // rdi
  __int64 v7; // r12
  std::_Ref_count_base *v8; // rsi
  HSTRING *v9; // rbp
  char v10; // r15
  UINT32 StringLen; // ebx
  const WCHAR *StringRawBuffer; // rax
  UINT32 v14; // ebx
  const WCHAR *v15; // rax
  volatile signed __int32 *v16; // rax
  std::_Ref_count_base *v17; // rcx
  __int128 v18; // [rsp+30h] [rbp-38h]

  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = *(_QWORD *)(a1 + 424);
  v7 = *(_QWORD *)(a1 + 432);
  v18 = 0LL;
  v8 = 0LL;
  if ( v5 != v7 )
  {
    v9 = 0LL;
    do
    {
      if ( !WindowsIsStringEmpty(**(HSTRING **)v5) || v9 )
      {
        v10 = 0;
        StringLen = WindowsGetStringLen(**(HSTRING **)v5);
        StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)v5, 0LL);
        if ( CompareStringOrdinal(StringRawBuffer, StringLen, a3, -1, 1) != 2 )
          goto LABEL_5;
      }
      else
      {
        v10 = 1;
      }
      if ( WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)v5 + 8LL))
        || (v14 = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)v5 + 8LL)),
            v15 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)v5 + 8LL), 0LL),
            CompareStringOrdinal(v15, v14, a4, -1, 0) == 2) )
      {
        if ( !v10 )
        {
          std::shared_ptr<ViewEventRegistration>::operator=(a2);
          break;
        }
        v16 = *(volatile signed __int32 **)(v5 + 8);
        if ( v16 )
        {
          _InterlockedIncrement(v16 + 2);
          v16 = *(volatile signed __int32 **)(v5 + 8);
          v8 = (std::_Ref_count_base *)*((_QWORD *)&v18 + 1);
        }
        v9 = *(HSTRING **)v5;
        v17 = v8;
        v8 = (std::_Ref_count_base *)v16;
        *((_QWORD *)&v18 + 1) = v16;
        if ( v17 )
          std::_Ref_count_base::_Decref(v17);
      }
LABEL_5:
      v5 += 16LL;
    }
    while ( v5 != v7 );
  }
  if ( !*a2 )
    std::shared_ptr<ViewEventRegistration>::operator=(a2);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
