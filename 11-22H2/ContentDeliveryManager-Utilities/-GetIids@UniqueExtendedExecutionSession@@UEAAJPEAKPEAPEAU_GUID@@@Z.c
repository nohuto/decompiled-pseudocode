/*
 * XREFs of ?GetIids@UniqueExtendedExecutionSession@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A6040
 * Callers:
 *     <none>
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VFtmBase@23@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1800A5C70 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@.c)
 */

__int64 __fastcall UniqueExtendedExecutionSession::GetIids(
        UniqueExtendedExecutionSession *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  LPVOID v7; // r8
  struct _GUID *v8; // r8
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v7 = CoTaskMemAlloc(0x20uLL);
  if ( v7 )
  {
    v10 = 0;
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Microsoft::WRL::FtmBase,IWeakReferenceSource>::FillArrayWithIid(
      v6,
      &v10,
      (__int64)v7);
    *a2 = 2;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
