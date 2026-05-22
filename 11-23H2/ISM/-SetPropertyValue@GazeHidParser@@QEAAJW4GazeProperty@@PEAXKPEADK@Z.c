/*
 * XREFs of ?SetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEAXKPEADK@Z @ 0x1801A1350
 * Callers:
 *     ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x1800E64FC (-TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800CD748 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1801A1308 (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 *     ?at@?$map@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@@std@@QEAAAEAGAEBW4GazeProperty@@@Z @ 0x1801A1418 (-at@-$map@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@V-$allocator@U-$pair@$$CBW4GazeProperty.c)
 */

__int64 __fastcall GazeHidParser::SetPropertyValue(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        CHAR *Report,
        ULONG ReportLength)
{
  USHORT *v9; // rax
  ULONG UsageValue; // ecx
  NTSTATUS v11; // eax
  int v12[6]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v12[0] = 1;
  if ( !GazeHidParser::IsPropertySupported(a1, 1) )
    return 2147943568LL;
  v9 = (USHORT *)std::map<enum GazeProperty,unsigned short>::at(a1 + 72, v12);
  UsageValue = 255;
  if ( *a3 != 1 )
    UsageValue = 0;
  v11 = HidP_SetUsageValue(
          HidP_Feature,
          0x12u,
          *v9,
          0x400u,
          UsageValue,
          *(PHIDP_PREPARSED_DATA *)(a1 + 64),
          Report,
          ReportLength);
  if ( v11 >= 0 )
    return 0LL;
  else
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x1DA,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
             (const char *)(unsigned int)v11);
}
