/*
 * XREFs of ?Lookup@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU7@@Z @ 0x18061F250
 * Callers:
 *     ??$IterateOnChunks@V_lambda_835195b38fdd9a55101ec5c6869bfac7_@@V_lambda_bcf8c03056ce1bb8f092ca4521e0da39_@@@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJV_lambda_835195b38fdd9a55101ec5c6869bfac7_@@V_lambda_bcf8c03056ce1bb8f092ca4521e0da39_@@@Z @ 0x18061AE20 (--$IterateOnChunks@V_lambda_835195b38fdd9a55101ec5c6869bfac7_@@V_lambda_bcf8c03056ce1bb8f092ca45.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z @ 0x1803FA350 (--RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkView::Lookup(
        __int64 a1,
        HSTRING a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  bool v4; // di
  int v5; // ebx
  __int64 v9; // rsi
  unsigned int v10; // ebp
  __int64 v11; // r15
  __int64 v12; // rcx
  int v13; // eax
  bool v15; // [rsp+60h] [rbp+8h] BYREF
  HSTRING string; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  v4 = 0;
  v5 = 0;
  v15 = 0;
  v9 = 0LL;
  v10 = *(_DWORD *)(v3 + 12);
  while ( (unsigned int)v9 < v10 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v9 + 16);
    string = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v11 + 48LL))(v11, &string);
    if ( v5 >= 0 )
    {
      v13 = XWinRT::StringEquals::operator()(v12, a2, string, &v15);
      v4 = v15;
      v5 = v13;
      if ( v13 >= 0 && v15 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 56LL))(v11, a3);
        WindowsDeleteString(string);
        if ( v5 < 0 )
          goto LABEL_11;
        break;
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    v9 = (unsigned int)(v9 + 1);
    if ( v5 < 0 )
      goto LABEL_11;
  }
  if ( v4 )
    return (unsigned int)v5;
  v5 = -2147483637;
LABEL_11:
  *a3 = 0LL;
  return (unsigned int)v5;
}
