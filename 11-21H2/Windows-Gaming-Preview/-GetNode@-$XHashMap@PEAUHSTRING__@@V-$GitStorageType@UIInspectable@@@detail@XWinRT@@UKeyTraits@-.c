/*
 * XREFs of ?GetNode@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@AEBAJAEBQEAUHSTRING__@@AEAI1AEAPEAVCNode@12@PEAPEAV412@@Z @ 0x180037310
 * Callers:
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x180034844 (-Lookup@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$.c)
 *     ?SetAt@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UIInspectable@@@detail@2@PEAPEAUTXPOSITION@2@@Z @ 0x180034888 (-SetAt@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$H.c)
 * Callees:
 *     ??RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z @ 0x180018324 (--RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z.c)
 */

__int64 __fastcall XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::GetNode(
        __int64 a1,
        HSTRING *a2,
        _DWORD *a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  PCWSTR StringRawBuffer; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  PCWSTR v13; // r11
  unsigned int i; // eax
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rbx
  _QWORD *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 result; // rax
  _QWORD *v22; // rax
  UINT32 length; // [rsp+40h] [rbp+8h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(*a2, &length);
  v12 = 0LL;
  v13 = StringRawBuffer;
  for ( i = -2128831035; v12 < 2 * (unsigned __int64)length; i = 16777619 * v11 )
  {
    v15 = *((unsigned __int8 *)v13 + v12++);
    v11 = i ^ v15;
  }
  HIDWORD(v16) = 0;
  *a4 = i;
  LODWORD(v16) = i % *(_DWORD *)(a1 + 24);
  v17 = *(_QWORD *)(a1 + 8);
  *a3 = v16;
  if ( v17 )
  {
    v18 = a5;
    v19 = 0LL;
    v20 = *(_QWORD *)(v17 + 8 * v16);
    *a5 = 0LL;
    while ( v20 )
    {
      if ( *(_DWORD *)(v20 + 32) == *a4 )
      {
        result = XWinRT::StringEquals::operator()(v11, *(HSTRING *)v20, *a2, (bool *)&length);
        if ( (int)result < 0 )
          return result;
        if ( (_BYTE)length )
        {
          v22 = a6;
          *v18 = v19;
          *v22 = v20;
          return 0LL;
        }
      }
      v19 = v20;
      v20 = *(_QWORD *)(v20 + 24);
    }
  }
  *a6 = 0LL;
  return 0LL;
}
