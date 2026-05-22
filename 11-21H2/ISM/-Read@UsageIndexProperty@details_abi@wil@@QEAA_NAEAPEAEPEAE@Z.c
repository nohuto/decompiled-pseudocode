/*
 * XREFs of ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18007CB7C
 * Callers:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18007BBD4 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18007C374 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x18007C51C (-LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18007D2BC (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x18007E518 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 * Callees:
 *     memcpy_s @ 0x18002FD08 (memcpy_s.c)
 *     _invalid_parameter_noinfo @ 0x18004A7EE (_invalid_parameter_noinfo.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Read(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char v3; // al
  unsigned __int8 *v5; // r8
  unsigned __int8 *v8; // rsi
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax
  unsigned __int8 *v11; // rsi
  unsigned __int8 *v12; // rcx
  bool result; // al

  v3 = *((_BYTE *)this + 2);
  v5 = *a2;
  if ( v3 == 1 )
  {
    v8 = v5 + 2;
    if ( v5 + 2 > a3 )
      return 0;
    *((_QWORD *)this + 2) = v5;
    if ( v5 )
    {
      v9 = *(_WORD *)v5;
    }
    else
    {
      *(_DWORD *)_o__errno(this, a2, 0LL) = 22;
      invalid_parameter_noinfo();
      v9 = 0;
    }
    *((_DWORD *)this + 1) = v9;
  }
  else
  {
    if ( v3 != 2 )
      goto LABEL_11;
    v8 = v5 + 4;
    if ( v5 + 4 > a3 )
      return 0;
    *((_QWORD *)this + 2) = v5;
    memcpy_s((char *)this + 4, 4uLL, v5, 4uLL);
  }
  v5 = v8;
LABEL_11:
  v10 = *(_WORD *)this;
  *((_WORD *)this + 4) = *(_WORD *)this;
  if ( v10 )
    goto LABEL_14;
  v11 = v5 + 2;
  if ( v5 + 2 > a3 )
    return 0;
  memcpy_s((char *)this + 8, 2uLL, v5, 2uLL);
  v10 = *((_WORD *)this + 4);
  v5 = v11;
LABEL_14:
  v12 = &v5[v10];
  if ( v12 > a3 )
    return 0;
  *((_QWORD *)this + 3) = v5;
  result = 1;
  *a2 = v12;
  return result;
}
