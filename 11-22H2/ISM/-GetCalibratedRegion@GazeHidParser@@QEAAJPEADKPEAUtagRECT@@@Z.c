/*
 * XREFs of ?GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z @ 0x1801AEC7C
 * Callers:
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800F56EC (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1801AEDF4 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 *     ?at@?$map@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@@std@@QEAAAEAGAEBW4GazeProperty@@@Z @ 0x1801AF3F8 (-at@-$map@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@V-$allocator@U-$pair@$$CBW4GazeProperty.c)
 */

__int64 __fastcall GazeHidParser::GetCalibratedRegion(
        PHIDP_PREPARSED_DATA *this,
        char *a2,
        unsigned int a3,
        struct tagRECT *a4)
{
  LONG v6; // eax
  LONG LogicalMax; // eax
  USHORT *v8; // rax
  USHORT v9; // r14
  NTSTATUS SpecificValueCaps; // edi
  __int64 v11; // rdx
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-39h] BYREF
  int v14; // [rsp+44h] [rbp-35h] BYREF
  __int64 v15; // [rsp+48h] [rbp-31h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+50h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v15 = 0LL;
  if ( !a2 || (int)GazeHidParser::GetPropertyValue(this, 4LL, a2, a3, 2, &v15, 8) < 0 )
  {
    memset_0(&ValueCaps, 0, sizeof(ValueCaps));
    v14 = 6;
    ValueCapsLength[0] = 1;
    v8 = (USHORT *)std::map<enum GazeProperty,unsigned short>::at(this + 9, &v14);
    v9 = *v8;
    SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0x12u, *v8, 0x21u, &ValueCaps, ValueCapsLength, this[8]);
    if ( SpecificValueCaps >= 0 )
    {
      a4->left = ValueCaps.LogicalMin;
      a4->right = ValueCaps.LogicalMax;
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0x12u, v9, 0x22u, &ValueCaps, ValueCapsLength, this[8]);
      if ( SpecificValueCaps >= 0 )
      {
        a4->top = ValueCaps.LogicalMin;
        LogicalMax = ValueCaps.LogicalMax;
        goto LABEL_10;
      }
      v11 = 534LL;
    }
    else
    {
      v11 = 522LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
      (const char *)(unsigned int)SpecificValueCaps);
    return (unsigned int)SpecificValueCaps;
  }
  v6 = v15;
  a4->left = 0;
  a4->top = 0;
  a4->right = v6;
  LogicalMax = HIDWORD(v15);
LABEL_10:
  a4->bottom = LogicalMax;
  return 0LL;
}
