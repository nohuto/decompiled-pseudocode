/*
 * XREFs of IsFileObjectForNetworkInterface @ 0x1C00CBBE8
 * Callers:
 *     ndisLwmCreateIrpHandler @ 0x1C00CBD60 (ndisLwmCreateIrpHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

char __fastcall IsFileObjectForNetworkInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int16 v4; // r9
  char result; // al
  unsigned __int16 Length; // r8
  UNICODE_STRING String2; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v9[2]; // [rsp+50h] [rbp-30h] BYREF
  int v10; // [rsp+70h] [rbp-10h]
  wchar_t v11; // [rsp+74h] [rbp-Ch]

  v2 = *(_QWORD *)(a1 + 48);
  if ( !v2 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v4 = 11;
LABEL_10:
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        v4,
        (struct _GUID *)&WPP_9c8fc78aeca7325506c7c0cc4d060098_Traceguids);
      return 0;
    }
    return 0;
  }
  if ( !*(_WORD *)(v2 + 88) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v4 = 12;
      goto LABEL_10;
    }
    return 0;
  }
  v10 = *(_DWORD *)L"e\\";
  v11 = aNetworkinterfa[18];
  String2.Buffer = (wchar_t *)v9;
  v9[0] = *(_OWORD *)L"\\NetworkInterface\\";
  *(_QWORD *)&String2.Length = 2490404LL;
  v9[1] = *(_OWORD *)L"Interface\\";
  if ( *(_WORD *)(v2 + 88) < 0x24u )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v4 = 13;
      goto LABEL_10;
    }
    return 0;
  }
  *(_DWORD *)(&String1.MaximumLength + 1) = 0;
  String1.Buffer = *(wchar_t **)(v2 + 96);
  *(_DWORD *)&String1.Length = 2359332;
  if ( !RtlEqualUnicodeString(&String1, &String2, 1u) )
    return 0;
  result = 1;
  Length = String2.Length;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(v2 + 96) + 2 * ((unsigned __int64)String2.Length >> 1);
  *(_WORD *)a2 = *(_WORD *)(v2 + 88) - Length;
  *(_WORD *)(a2 + 2) = *(_WORD *)(v2 + 90) - Length;
  return result;
}
