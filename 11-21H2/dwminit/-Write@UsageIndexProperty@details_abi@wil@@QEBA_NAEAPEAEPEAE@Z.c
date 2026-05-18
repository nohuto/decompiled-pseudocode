/*
 * XREFs of ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18000D868
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000BDF8 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1800025CA (_invalid_parameter_noinfo.c)
 *     memcpy_s @ 0x18000DED4 (memcpy_s.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Write(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char v3; // al
  unsigned __int8 *v4; // rbx
  unsigned __int8 *v8; // rbp
  rsize_t v9; // r9
  bool result; // al

  v3 = *((_BYTE *)this + 2);
  v4 = *a2;
  if ( v3 != 1 )
  {
    if ( v3 != 2 )
      goto LABEL_13;
    v8 = v4 + 4;
    if ( v4 + 4 > a3 )
      return 0;
    if ( v4 )
    {
      if ( this != (wil::details_abi::UsageIndexProperty *)-4LL )
      {
        *(_DWORD *)v4 = *((_DWORD *)this + 1);
        goto LABEL_12;
      }
      *(_DWORD *)v4 = 0;
    }
LABEL_11:
    *(_DWORD *)_o__errno(this, a2) = 22;
    invalid_parameter_noinfo();
    goto LABEL_12;
  }
  v8 = v4 + 2;
  if ( v4 + 2 > a3 )
    return 0;
  if ( !v4 )
    goto LABEL_11;
  *(_WORD *)v4 = *((_WORD *)this + 2);
LABEL_12:
  v4 = v8;
LABEL_13:
  if ( *(_WORD *)this )
    goto LABEL_16;
  if ( v4 + 2 > a3 )
    return 0;
  memcpy_s(v4, a3 - v4, (char *)this + 8, 2uLL);
  v4 += 2;
LABEL_16:
  v9 = *((unsigned __int16 *)this + 4);
  if ( &v4[v9] > a3 )
    return 0;
  memcpy_s(v4, a3 - v4, *((const void *const *)this + 3), v9);
  result = 1;
  *a2 = &v4[*((unsigned __int16 *)this + 4)];
  return result;
}
