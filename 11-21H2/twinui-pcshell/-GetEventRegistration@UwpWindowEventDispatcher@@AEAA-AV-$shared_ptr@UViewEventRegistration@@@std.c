/*
 * XREFs of ?GetEventRegistration@UwpWindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@PEBG0@Z @ 0x1803EDD50
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1803F2EE0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1803F5190 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180099E78 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

_QWORD *__fastcall UwpWindowEventDispatcher::GetEventRegistration(
        __int64 a1,
        _QWORD *a2,
        const WCHAR *a3,
        const WCHAR *a4)
{
  HSTRING **v5; // rdi
  HSTRING **v7; // r14
  char v9; // bp
  UINT32 StringLen; // ebx
  const WCHAR *StringRawBuffer; // rax
  UINT32 v12; // ebx
  const WCHAR *v13; // rax
  _OWORD v15[2]; // [rsp+30h] [rbp-28h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = *(HSTRING ***)(a1 + 424);
  v7 = *(HSTRING ***)(a1 + 432);
  v15[0] = 0LL;
  while ( v5 != v7 )
  {
    if ( !WindowsIsStringEmpty(**v5) || *(_QWORD *)&v15[0] )
    {
      v9 = 0;
      StringLen = WindowsGetStringLen(**v5);
      StringRawBuffer = WindowsGetStringRawBuffer(**v5, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, StringLen, a3, -1, 1) != 2 )
        goto LABEL_10;
    }
    else
    {
      v9 = 1;
    }
    if ( WindowsIsStringEmpty((*v5)[1])
      || (v12 = WindowsGetStringLen((*v5)[1]),
          v13 = WindowsGetStringRawBuffer((*v5)[1], 0LL),
          CompareStringOrdinal(v13, v12, a4, -1, 0) == 2) )
    {
      if ( !v9 )
      {
        std::shared_ptr<ViewEventRegistration>::operator=(a2, v5);
        break;
      }
      std::shared_ptr<ViewEventRegistration>::operator=(v15, v5);
    }
LABEL_10:
    v5 += 2;
  }
  if ( !*a2 )
    std::shared_ptr<ViewEventRegistration>::operator=(a2, v15);
  if ( *((_QWORD *)&v15[0] + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v15[0] + 1));
  return a2;
}
