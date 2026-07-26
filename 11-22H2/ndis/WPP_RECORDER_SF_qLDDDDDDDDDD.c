/*
 * XREFs of WPP_RECORDER_SF_qLDDDDDDDDDD @ 0x1C008FE60
 * Callers:
 *     ndisQueryGuidDataSize @ 0x1C0026780 (ndisQueryGuidDataSize.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qLDDDDDDDDDD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+28h] [rbp-C9h]
  __int64 v8; // [rsp+130h] [rbp+3Fh] BYREF
  va_list va; // [rsp+130h] [rbp+3Fh]
  __int64 v10; // [rsp+138h] [rbp+47h] BYREF
  va_list va1; // [rsp+138h] [rbp+47h]
  __int64 v12; // [rsp+140h] [rbp+4Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+4Fh]
  __int64 v14; // [rsp+148h] [rbp+57h] BYREF
  va_list va3; // [rsp+148h] [rbp+57h]
  __int64 v16; // [rsp+150h] [rbp+5Fh] BYREF
  va_list va4; // [rsp+150h] [rbp+5Fh]
  __int64 v18; // [rsp+158h] [rbp+67h] BYREF
  va_list va5; // [rsp+158h] [rbp+67h]
  __int64 v20; // [rsp+160h] [rbp+6Fh] BYREF
  va_list va6; // [rsp+160h] [rbp+6Fh]
  __int64 v22; // [rsp+168h] [rbp+77h] BYREF
  va_list va7; // [rsp+168h] [rbp+77h]
  __int64 v24; // [rsp+170h] [rbp+7Fh] BYREF
  va_list va8; // [rsp+170h] [rbp+7Fh]
  __int64 v26; // [rsp+178h] [rbp+87h] BYREF
  va_list va9; // [rsp+178h] [rbp+87h]
  __int64 v28; // [rsp+180h] [rbp+8Fh] BYREF
  va_list va10; // [rsp+180h] [rbp+8Fh]
  va_list va11; // [rsp+188h] [rbp+97h] BYREF

  va_start(va11, a5);
  va_start(va10, a5);
  va_start(va9, a5);
  va_start(va8, a5);
  va_start(va7, a5);
  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v14 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v16 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v18 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v20 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v22 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v24 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v26 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v28 = va_arg(va11, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    ndisWppFastTraceMessage(
      &WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      0x1Bu,
      va,
      8LL,
      va1,
      4LL,
      va2,
      4LL,
      va3,
      4LL,
      va4,
      4LL,
      va5,
      4LL,
      va6,
      4LL,
      va7,
      4LL,
      va8,
      4LL,
      va9,
      4LL,
      va10,
      4LL,
      va11,
      4LL,
      0LL);
  LOWORD(v7) = 27;
  return WppAutoLogTrace(a1, 2LL, 18LL, &WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids, v7, (__int64 *)va);
}
