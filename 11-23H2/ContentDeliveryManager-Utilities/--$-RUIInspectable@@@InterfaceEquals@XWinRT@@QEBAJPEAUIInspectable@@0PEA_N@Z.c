/*
 * XREFs of ??$?RUIInspectable@@@InterfaceEquals@XWinRT@@QEBAJPEAUIInspectable@@0PEA_N@Z @ 0x1800C4860
 * Callers:
 *     ?IndexOfInternal@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIInspectable@@@detail@XWinRT@@IPEAUIInspectable@@PEAIPEAE@Z @ 0x1800C9E08 (-IndexOfInternal@-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Inter.c)
 * Callees:
 *     ??$QueryInterface@UIUnknown@@@IUnknown@@QEAAJPEAPEAU0@@Z @ 0x180027D78 (--$QueryInterface@UIUnknown@@@IUnknown@@QEAAJPEAPEAU0@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall XWinRT::InterfaceEquals::operator()<IInspectable>(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64),
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64),
        bool *a4)
{
  int v7; // edi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = a1;
  *a4 = 0;
  v7 = 0;
  if ( a2 == a3 )
  {
    *a4 = 1;
  }
  else if ( a2 && a3 )
  {
    v10 = 0LL;
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    v7 = IUnknown::QueryInterface<IUnknown>(a2, (__int64)&v10);
    if ( v7 >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
      v7 = IUnknown::QueryInterface<IUnknown>(a3, (__int64)&v9);
      if ( v7 >= 0 )
        *a4 = v10 == v9;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  else
  {
    *a4 = 0;
  }
  return (unsigned int)v7;
}
