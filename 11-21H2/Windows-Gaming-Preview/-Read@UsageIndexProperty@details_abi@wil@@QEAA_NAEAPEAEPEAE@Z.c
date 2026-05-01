/*
 * XREFs of ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180004F98
 * Callers:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180005454 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180005730 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180005DE0 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18004B6AE (_invalid_parameter_noinfo.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Read(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char v3; // al
  unsigned __int16 *v4; // r9
  unsigned __int16 *v8; // rdi
  unsigned __int16 v9; // ax
  _DWORD *v10; // rcx
  unsigned __int16 v11; // ax
  unsigned __int16 *v12; // rdi
  unsigned __int16 *v13; // rsi
  unsigned __int8 *v14; // rcx
  bool result; // al

  v3 = *((_BYTE *)this + 2);
  v4 = (unsigned __int16 *)*a2;
  if ( v3 == 1 )
  {
    v8 = v4 + 1;
    if ( v4 + 1 > (unsigned __int16 *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v4;
    if ( v4 )
    {
      v9 = *v4;
    }
    else
    {
      *(_DWORD *)_o__errno() = 22;
      invalid_parameter_noinfo();
      v9 = 0;
    }
    *((_DWORD *)this + 1) = v9;
    goto LABEL_14;
  }
  if ( v3 != 2 )
    goto LABEL_15;
  v8 = v4 + 2;
  if ( v4 + 2 > (unsigned __int16 *)a3 )
    return 0;
  *((_QWORD *)this + 2) = v4;
  v10 = (_DWORD *)((char *)this + 4);
  if ( !v10 )
    goto LABEL_13;
  if ( !v4 )
  {
    *v10 = 0;
LABEL_13:
    *(_DWORD *)_o__errno() = 22;
    invalid_parameter_noinfo();
    goto LABEL_14;
  }
  *v10 = *(_DWORD *)v4;
LABEL_14:
  v4 = v8;
LABEL_15:
  v11 = *(_WORD *)this;
  v12 = (unsigned __int16 *)((char *)this + 8);
  *((_WORD *)this + 4) = *(_WORD *)this;
  if ( v11 )
    goto LABEL_23;
  v13 = v4 + 1;
  if ( v4 + 1 > (unsigned __int16 *)a3 )
    return 0;
  if ( this == (wil::details_abi::UsageIndexProperty *)-8LL )
  {
LABEL_21:
    *(_DWORD *)_o__errno() = 22;
    invalid_parameter_noinfo();
    goto LABEL_22;
  }
  if ( !v4 )
  {
    *v12 = 0;
    goto LABEL_21;
  }
  *v12 = *v4;
LABEL_22:
  v11 = *v12;
  v4 = v13;
LABEL_23:
  v14 = (unsigned __int8 *)v4 + v11;
  if ( v14 > a3 )
    return 0;
  *((_QWORD *)this + 3) = v4;
  result = 1;
  *a2 = v14;
  return result;
}
