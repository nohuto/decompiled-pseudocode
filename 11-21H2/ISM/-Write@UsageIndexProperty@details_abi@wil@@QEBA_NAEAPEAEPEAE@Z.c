/*
 * XREFs of ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18007ED44
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18007D2BC (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x18002FD08 (memcpy_s.c)
 *     _invalid_parameter_noinfo @ 0x18004A7EE (_invalid_parameter_noinfo.c)
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
  if ( v3 == 1 )
  {
    v8 = v4 + 2;
    if ( v4 + 2 > a3 )
      return 0;
    if ( v4 )
    {
      *(_WORD *)v4 = *((_WORD *)this + 2);
    }
    else
    {
      *(_DWORD *)_o__errno(this, a2, a3) = 22;
      invalid_parameter_noinfo();
    }
  }
  else
  {
    if ( v3 != 2 )
      goto LABEL_10;
    v8 = v4 + 4;
    if ( v4 + 4 > a3 )
      return 0;
    memcpy_s(v4, 4uLL, (char *)this + 4, 4uLL);
  }
  v4 = v8;
LABEL_10:
  if ( *(_WORD *)this )
    goto LABEL_13;
  if ( v4 + 2 > a3 )
    return 0;
  memcpy_s(v4, a3 - v4, (char *)this + 8, 2uLL);
  v4 += 2;
LABEL_13:
  v9 = *((unsigned __int16 *)this + 4);
  if ( &v4[v9] > a3 )
    return 0;
  memcpy_s(v4, a3 - v4, *((const void *const *)this + 3), v9);
  result = 1;
  *a2 = &v4[*((unsigned __int16 *)this + 4)];
  return result;
}
