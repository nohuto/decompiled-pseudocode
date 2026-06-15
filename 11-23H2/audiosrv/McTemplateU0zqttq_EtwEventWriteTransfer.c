/*
 * XREFs of McTemplateU0zqttq_EtwEventWriteTransfer @ 0x180083B3C
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000F420 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     AudioServerGetMixFormat @ 0x1801221C0 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180123830 (AudioServerIsFormatSupported.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18008148A (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0zqttq_EtwEventWriteTransfer(
        __int64 a1,
        int a2,
        const wchar_t *a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  __int64 v7; // rax
  int v8; // ecx
  _BYTE v10[16]; // [rsp+30h] [rbp-31h] BYREF
  const wchar_t *v11; // [rsp+40h] [rbp-21h]
  int v12; // [rsp+48h] [rbp-19h]
  int v13; // [rsp+4Ch] [rbp-15h]
  int *v14; // [rsp+50h] [rbp-11h]
  __int64 v15; // [rsp+58h] [rbp-9h]
  char *v16; // [rsp+60h] [rbp-1h]
  __int64 v17; // [rsp+68h] [rbp+7h]
  char *v18; // [rsp+70h] [rbp+Fh]
  __int64 v19; // [rsp+78h] [rbp+17h]
  char *v20; // [rsp+80h] [rbp+1Fh]
  __int64 v21; // [rsp+88h] [rbp+27h]
  int v22; // [rsp+C8h] [rbp+67h] BYREF

  v22 = a4;
  if ( a3 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v13 = 0;
  v12 = v8;
  if ( !a3 )
    a3 = L"NULL";
  v15 = 4LL;
  v11 = a3;
  v14 = &v22;
  v17 = 4LL;
  v16 = &a5;
  v18 = &a6;
  v20 = &a7;
  v19 = 4LL;
  v21 = 4LL;
  return McGenEventWrite_EtwEventWriteTransfer(v8, a2, (_DWORD)a3, 6, (__int64)v10);
}
