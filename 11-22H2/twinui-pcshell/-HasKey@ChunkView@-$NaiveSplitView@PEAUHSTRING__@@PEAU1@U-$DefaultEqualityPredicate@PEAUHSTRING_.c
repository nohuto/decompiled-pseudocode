/*
 * XREFs of ?HasKey@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18061E660
 * Callers:
 *     ??$IterateOnChunks@V_lambda_65f2c316694045dc9a3c14d65d6c686e_@@V_lambda_a6ec452e37ec8cf406a5dff16934bb26_@@@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJV_lambda_65f2c316694045dc9a3c14d65d6c686e_@@V_lambda_a6ec452e37ec8cf406a5dff16934bb26_@@@Z @ 0x18061AD94 (--$IterateOnChunks@V_lambda_65f2c316694045dc9a3c14d65d6c686e_@@V_lambda_a6ec452e37ec8cf406a5dff1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z @ 0x1803FA350 (--RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkView::HasKey(
        __int64 a1,
        HSTRING a2,
        _BYTE *a3)
{
  int v3; // ebx
  __int64 v4; // rax
  __int64 v8; // rdi
  unsigned int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rcx
  HSTRING v12; // rcx
  bool v14; // [rsp+50h] [rbp+8h] BYREF
  HSTRING string; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  v14 = 0;
  v8 = 0LL;
  v9 = *(_DWORD *)(v4 + 12);
  while ( (unsigned int)v8 < v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v8 + 16);
    string = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 48LL))(v10, &string);
    if ( v3 >= 0 )
    {
      v3 = XWinRT::StringEquals::operator()(v11, a2, string, &v14);
      if ( v3 >= 0 && v14 )
      {
        v12 = string;
        *a3 = 1;
        WindowsDeleteString(v12);
        return (unsigned int)v3;
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    v8 = (unsigned int)(v8 + 1);
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  return (unsigned int)v3;
}
