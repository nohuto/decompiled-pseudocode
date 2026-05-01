/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableItem@@UISwitchItem@@UISwitchItemInternal@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804B5ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180041470 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ObservableItem,ISwitchItem,ISwitchItemInternal>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  void *v3; // rcx
  unsigned __int64 v5; // rsi

  a1[23] = -1073741823;
  v3 = (void *)*((_QWORD *)a1 + 5);
  if ( v3 )
  {
    v5 = 0LL;
    if ( *((_QWORD *)a1 + 6) )
    {
      do
        Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)a1 + 5) + 8 * v5++));
      while ( v5 < *((_QWORD *)a1 + 6) );
      v3 = (void *)*((_QWORD *)a1 + 5);
    }
    CoTaskMemFree(v3);
    *((_QWORD *)a1 + 5) = 0LL;
  }
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)(a1 + 4));
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
