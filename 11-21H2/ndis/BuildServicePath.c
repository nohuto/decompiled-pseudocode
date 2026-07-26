/*
 * XREFs of BuildServicePath @ 0x1C01351E0
 * Callers:
 *     CreateKModule @ 0x1C0135364 (CreateKModule.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1C0113830 (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 */

__int64 __fastcall BuildServicePath(PCUNICODE_STRING Source, void **a2)
{
  __int64 v4; // rcx
  PUNICODE_STRING v5; // rbx
  unsigned int v6; // edi
  _UNICODE_STRING *v7; // rcx
  void *v8; // rcx
  UNICODE_STRING Sourcea; // [rsp+30h] [rbp-59h] BYREF
  PUNICODE_STRING Destination[2]; // [rsp+40h] [rbp-49h] BYREF
  _OWORD v12[6]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+27h]
  WCHAR v14; // [rsp+B8h] [rbp+2Fh]

  v4 = Source->Length + 16LL;
  v12[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\";
  v12[2] = *(_OWORD *)L"e\\System\\CurrentControlSet\\Services\\";
  v12[1] = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Services\\";
  v12[4] = *(_OWORD *)L"ControlSet\\Services\\";
  v12[3] = *(_OWORD *)L"\\CurrentControlSet\\Services\\";
  v14 = aRegistryMachin_0[52];
  v13 = *(_QWORD *)L"ces\\";
  v12[5] = *(_OWORD *)L"et\\Services\\";
  *(_QWORD *)&Sourcea.Length = 6946920LL;
  Sourcea.Buffer = (wchar_t *)v12;
  MakeSizedPoolPtr<_UNICODE_STRING>(Destination, 1917609038, v4 + 104);
  v5 = Destination[0];
  v6 = 0;
  if ( Destination[0] )
  {
    v7 = Destination[0];
    Destination[0]->Buffer = &Destination[0][1].Length;
    v5->Length = 0;
    v5->MaximumLength = Sourcea.Length + Source->Length;
    RtlAppendUnicodeStringToString(v7, &Sourcea);
    RtlAppendUnicodeStringToString(v5, Source);
    v8 = *a2;
    *a2 = v5;
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        LODWORD(Destination[0]) + 1,
        LOWORD(Destination[0]) + 18,
        (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids);
    return (unsigned int)-1073741670;
  }
  return v6;
}
