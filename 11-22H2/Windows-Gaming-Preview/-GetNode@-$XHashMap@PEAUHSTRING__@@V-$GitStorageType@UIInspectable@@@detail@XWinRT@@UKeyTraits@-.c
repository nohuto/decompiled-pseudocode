/*
 * XREFs of ?GetNode@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@AEBAJAEBQEAUHSTRING__@@AEAI1AEAPEAVCNode@12@PEAPEAV412@@Z @ 0x180037D4C
 * Callers:
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x180035250 (-Lookup@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$.c)
 *     ?SetAt@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UIInspectable@@@detail@2@PEAPEAUTXPOSITION@2@@Z @ 0x180035294 (-SetAt@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$H.c)
 * Callees:
 *     ??RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z @ 0x180018834 (--RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z.c)
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
  unsigned int v12; // r10d
  unsigned __int64 i; // r9
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rbx
  _QWORD *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 result; // rax
  _QWORD *v21; // rax
  UINT32 length; // [rsp+40h] [rbp+8h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(*a2, &length);
  v12 = -2128831035;
  for ( i = 0LL; i < 2 * (unsigned __int64)length; v12 = 16777619 * v11 )
  {
    v14 = *((unsigned __int8 *)StringRawBuffer + i++);
    v11 = v12 ^ v14;
  }
  HIDWORD(v15) = 0;
  *a4 = v12;
  LODWORD(v15) = v12 % *(_DWORD *)(a1 + 24);
  v16 = *(_QWORD *)(a1 + 8);
  *a3 = v15;
  if ( v16 )
  {
    v17 = a5;
    v18 = 0LL;
    v19 = *(_QWORD *)(v16 + 8 * v15);
    *a5 = 0LL;
    while ( v19 )
    {
      if ( *(_DWORD *)(v19 + 32) == v12 )
      {
        result = XWinRT::StringEquals::operator()(v11, *(HSTRING *)v19, *a2, (bool *)&length);
        v12 = *a4;
        if ( (int)result < 0 )
          return result;
        if ( (_BYTE)length )
        {
          v21 = a6;
          *v17 = v18;
          *v21 = v19;
          return 0LL;
        }
      }
      v18 = v19;
      v19 = *(_QWORD *)(v19 + 24);
    }
  }
  *a6 = 0LL;
  return 0LL;
}
