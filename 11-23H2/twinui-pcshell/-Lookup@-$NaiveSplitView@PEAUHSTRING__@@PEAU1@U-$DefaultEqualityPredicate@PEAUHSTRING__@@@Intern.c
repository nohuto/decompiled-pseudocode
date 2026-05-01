/*
 * XREFs of ?Lookup@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x18061F170
 * Callers:
 *     <none>
 * Callees:
 *     ??$IterateOnChunks@V_lambda_835195b38fdd9a55101ec5c6869bfac7_@@V_lambda_bcf8c03056ce1bb8f092ca4521e0da39_@@@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJV_lambda_835195b38fdd9a55101ec5c6869bfac7_@@V_lambda_bcf8c03056ce1bb8f092ca4521e0da39_@@@Z @ 0x18061AE20 (--$IterateOnChunks@V_lambda_835195b38fdd9a55101ec5c6869bfac7_@@V_lambda_bcf8c03056ce1bb8f092ca45.c)
 *     ?EnsureInitialized@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18061CAC4 (-EnsureInitialized@-$NaiveSplitView@PEAUHSTRING__@@PEAU1@U-$DefaultEqualityPredicate@PEAUHSTRING.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Lookup(
        __int64 a1,
        __int64 a2,
        HSTRING *a3)
{
  HSTRING v3; // rbx
  int v6; // edi
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  HSTRING v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = a2;
  v3 = 0LL;
  v10 = 0LL;
  v6 = Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::EnsureInitialized(a1);
  if ( v6 < 0
    || (v8[0] = &v9,
        v8[1] = &v10,
        v6 = Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::IterateOnChunks<_lambda_835195b38fdd9a55101ec5c6869bfac7_,_lambda_bcf8c03056ce1bb8f092ca4521e0da39_>(
               a1,
               (__int64)v8),
        v6 < 0) )
  {
    *a3 = 0LL;
    v3 = v10;
  }
  else
  {
    *a3 = v10;
    v10 = 0LL;
  }
  WindowsDeleteString(v3);
  return (unsigned int)v6;
}
