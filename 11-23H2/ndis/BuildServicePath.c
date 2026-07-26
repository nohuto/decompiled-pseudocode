/*
 * XREFs of BuildServicePath @ 0x1C0140FD0
 * Callers:
 *     CreateKModule @ 0x1C0141160 (CreateKModule.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D038 (--1-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1C011B4B8 (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 */

__int64 __fastcall BuildServicePath(PCUNICODE_STRING Source, void **a2)
{
  __int64 v4; // rcx
  PUNICODE_STRING v5; // rbx
  _UNICODE_STRING *v7; // rcx
  void *v8; // rcx
  PUNICODE_STRING Destination; // [rsp+30h] [rbp-59h] BYREF
  UNICODE_STRING Sourcea; // [rsp+38h] [rbp-51h] BYREF
  _OWORD v11[6]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v12; // [rsp+B0h] [rbp+27h]
  WCHAR v13; // [rsp+B8h] [rbp+2Fh]

  v4 = Source->Length + 16LL;
  v11[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\";
  v11[2] = *(_OWORD *)L"e\\System\\CurrentControlSet\\Services\\";
  v11[1] = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Services\\";
  v11[4] = *(_OWORD *)L"ControlSet\\Services\\";
  v11[3] = *(_OWORD *)L"\\CurrentControlSet\\Services\\";
  v13 = aRegistryMachin_0[52];
  v12 = *(_QWORD *)L"ces\\";
  v11[5] = *(_OWORD *)L"et\\Services\\";
  *(_QWORD *)&Sourcea.Length = 6946920LL;
  Sourcea.Buffer = (wchar_t *)v11;
  MakeSizedPoolPtr<_UNICODE_STRING>(&Destination, 1917609038, v4 + 104);
  v5 = Destination;
  if ( Destination )
  {
    v7 = Destination;
    Destination->Buffer = &Destination[1].Length;
    v5->Length = 0;
    v5->MaximumLength = Source->Length + Sourcea.Length;
    RtlAppendUnicodeStringToString(v7, &Sourcea);
    RtlAppendUnicodeStringToString(v5, Source);
    v8 = *a2;
    *a2 = v5;
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    return 0LL;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        (_DWORD)Destination + 1,
        (_WORD)Destination + 18,
        (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids);
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>((void **)&Destination);
    return 3221225626LL;
  }
}
