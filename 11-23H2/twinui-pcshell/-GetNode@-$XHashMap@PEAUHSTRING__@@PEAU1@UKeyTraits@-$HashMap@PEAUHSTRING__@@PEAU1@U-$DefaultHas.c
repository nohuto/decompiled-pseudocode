/*
 * XREFs of ?GetNode@?$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@PEAUHSTRING__@@@XWinRT@@@XWinRT@@AEBAJAEBQEAUHSTRING__@@AEAI1AEAPEAVCNode@12@PEAPEAV412@@Z @ 0x18061E05C
 * Callers:
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@PEAUHSTRING__@@@XWinRT@@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x18061F1FC (-Lookup@-$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash.c)
 *     ?SetAt@?$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@PEAUHSTRING__@@@XWinRT@@@XWinRT@@QEAAJAEBQEAUHSTRING__@@0PEAPEAUTXPOSITION@2@@Z @ 0x18061FF70 (-SetAt@-$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@.c)
 * Callees:
 *     ??RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z @ 0x1803FA350 (--RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z.c)
 *     ??RStringHash@XWinRT@@QEBAJPEAUHSTRING__@@PEAI@Z @ 0x18061C0CC (--RStringHash@XWinRT@@QEBAJPEAUHSTRING__@@PEAI@Z.c)
 */

__int64 __fastcall XWinRT::XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<HSTRING__ *>>::GetNode(
        __int64 a1,
        HSTRING *a2,
        _DWORD *a3,
        int *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  _QWORD *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  bool v18; // [rsp+40h] [rbp+8h] BYREF

  result = XWinRT::StringHash::operator()(a1, *a2, a4);
  if ( (int)result >= 0 )
  {
    v11 = (unsigned int)*a4;
    v12 = (unsigned int)*a4 % *(_DWORD *)(a1 + 24);
    v13 = *(_QWORD *)(a1 + 8);
    *a3 = v12;
    if ( v13 )
    {
      v14 = a5;
      v15 = 0LL;
      v16 = *(_QWORD *)(v13 + 8 * v12);
      *a5 = 0LL;
      while ( v16 )
      {
        if ( *(_DWORD *)(v16 + 24) == (_DWORD)v11 )
        {
          result = XWinRT::StringEquals::operator()(v11, *(HSTRING *)v16, *a2, &v18);
          v11 = (unsigned int)*a4;
          if ( (int)result < 0 )
            return result;
          if ( v18 )
          {
            v17 = a6;
            *v14 = v15;
            *v17 = v16;
            return 0LL;
          }
        }
        v15 = v16;
        v16 = *(_QWORD *)(v16 + 16);
      }
    }
    *a6 = 0LL;
    return 0LL;
  }
  return result;
}
