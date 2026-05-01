/*
 * XREFs of ?GetEventRegistration@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@PEBG0@Z @ 0x1804C4688
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804BE170 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1804CBE90 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 * Callees:
 *     ??4?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009C468 (--4-$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

_QWORD *__fastcall WindowEventDispatcher::GetEventRegistration(
        __int64 a1,
        _QWORD *a2,
        const WCHAR *a3,
        const WCHAR *a4)
{
  HSTRING **v6; // rdi
  int v7; // ebp
  HSTRING **v8; // r12
  char v9; // r15
  UINT32 StringLen; // ebx
  const WCHAR *StringRawBuffer; // rax
  unsigned __int8 v12; // r14
  UINT32 v13; // ebx
  const WCHAR *v14; // rax
  int v15; // eax

  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = *(HSTRING ***)(a1 + 424);
  v7 = 0;
  v8 = *(HSTRING ***)(a1 + 432);
  while ( v6 != v8 )
  {
    if ( WindowsIsStringEmpty(**v6) )
    {
      v9 = 1;
      if ( v7 >= 2 )
        goto LABEL_16;
    }
    else
    {
      v9 = 0;
      StringLen = WindowsGetStringLen(**v6);
      StringRawBuffer = WindowsGetStringRawBuffer(**v6, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, StringLen, a3, -1, 1) != 2 )
        goto LABEL_16;
    }
    if ( WindowsIsStringEmpty((*v6)[1]) )
    {
      v12 = 1;
    }
    else
    {
      v12 = 0;
      v13 = WindowsGetStringLen((*v6)[1]);
      v14 = WindowsGetStringRawBuffer((*v6)[1], 0LL);
      if ( CompareStringOrdinal(v14, v13, a4, -1, 0) != 2 )
        goto LABEL_16;
    }
    v15 = 1;
    if ( v9 )
    {
      if ( !v12 )
        v15 = ((_BYTE)(*v6)[2] & 0x40) != 0 ? 4 : 2;
    }
    else
    {
      v15 = 2 * (v12 ^ 1) + 3;
    }
    if ( v15 > v7 )
    {
      v7 = v15;
      std::shared_ptr<SnapInteraction::InteractionRecord>::operator=(a2, v6);
    }
    if ( v7 == 5 )
      return a2;
LABEL_16:
    v6 += 2;
  }
  return a2;
}
