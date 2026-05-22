/*
 * XREFs of std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_c6db7401cba5f9fe705df5cb0dba3b7a___ @ 0x1801FD294
 * Callers:
 *     ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801FF56C (-RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     _lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::operator() @ 0x1801FDE8C (_lambda_c6db7401cba5f9fe705df5cb0dba3b7a_--operator().c)
 */

_QWORD *__fastcall std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_c6db7401cba5f9fe705df5cb0dba3b7a___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *result; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    if ( a2 == a3 )
    {
      v8 = a2;
      goto LABEL_12;
    }
    v14 = a2[2];
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v14);
    if ( (unsigned __int8)lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::operator()(a4, &v14) )
      break;
    a2 = (_QWORD *)*a2;
  }
  v8 = a2;
  while ( 1 )
  {
    v9 = (_QWORD *)*a2;
    a2 = v9;
    if ( v9 == a3 )
      break;
    v10 = v9 + 2;
    v14 = v9[2];
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v14);
    if ( !(unsigned __int8)lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::operator()(a4, &v14) )
    {
      if ( &v14 == v10 )
      {
        v11 = 0LL;
      }
      else
      {
        v11 = *v10;
        *v10 = 0LL;
      }
      v12 = v8[2];
      v8[2] = v11;
      v14 = v12;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v14);
      v8 = (_QWORD *)*v8;
    }
  }
LABEL_12:
  result = a1;
  *a1 = v8;
  return result;
}
