/*
 * XREFs of LdrResGetRCConfig @ 0x180007BB0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180005938 (LdrpResSearchResourceMappedFile.c)
 *     RtlpResUltimateFallbackInfo @ 0x180007A14 (RtlpResUltimateFallbackInfo.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180008020 (LdrpVerifyAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x180005938 (LdrpResSearchResourceMappedFile.c)
 *     CheckOneBitValidFlag @ 0x18000839C (CheckOneBitValidFlag.c)
 *     LdrpResGetMappingSize @ 0x180022630 (LdrpResGetMappingSize.c)
 *     LdrpGetFromMUIMemCache @ 0x180022F48 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180030F14 (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     LdrpTraceLoadMUIDll @ 0x1800ED41C (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResGetRCConfig(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, char a5)
{
  unsigned int v5; // r13d
  int v7; // edi
  __int64 v8; // rdx
  _DWORD *v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 result; // rax
  __int64 v22; // r12
  int v23; // eax
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // [rsp+50h] [rbp-B8h]
  _DWORD *v29; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h]
  __int64 v31; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v32; // [rsp+70h] [rbp-98h]
  __int64 v33[2]; // [rsp+78h] [rbp-90h] BYREF
  int v34; // [rsp+88h] [rbp-80h] BYREF
  const wchar_t *v35; // [rsp+90h] [rbp-78h]
  int v36; // [rsp+98h] [rbp-70h] BYREF
  const wchar_t *v37; // [rsp+A0h] [rbp-68h]
  _QWORD v38[3]; // [rsp+A8h] [rbp-60h] BYREF

  v5 = a4;
  v32 = a3;
  v30 = a1;
  v33[1] = a1;
  v38[0] = L"MUI";
  v38[1] = 1LL;
  v38[2] = 0LL;
  v31 = a2;
  v29 = 0LL;
  v34 = 3145774;
  v35 = L"LdrResGetRCConfig Enter";
  v36 = 3014700;
  v37 = L"LdrResGetRCConfig Exit";
  v7 = a4 & 0x2000;
  v11 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v12 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v12 = 2147353477LL;
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    v13 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v8, v9, v10) )
      v27 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v27 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v34, *(unsigned __int8 *)v27);
  }
  else
  {
    v13 = 2147353476LL;
  }
  v14 = v30;
  if ( !v30 )
  {
    v16 = -1073741811;
    goto LABEL_9;
  }
  if ( !a5 )
  {
LABEL_16:
    if ( !a2 && !v7 )
    {
      result = LdrpResGetMappingSize(v14, &v31, v5, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    v22 = v30;
    v23 = LdrpResSearchResourceMappedFile(v30, v31, v7 != 0 ? 8240 : 4144, (__int64)v38, 3, &v29, v33, 0LL, 0LL);
    v14 = (unsigned int)v23;
    if ( v23 < 0 )
    {
      if ( v23 != -1073741701 )
        v14 = 3221225610LL;
      v16 = v14;
      v28 = v14;
      goto LABEL_21;
    }
    v9 = v29;
    if ( !v7 )
    {
      v8 = (unsigned int)v29[1];
      v14 = v31 + (v22 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (unsigned __int64)v29 + v8 > v14 )
      {
        v16 = -1073741701;
        v28 = -1073741701;
LABEL_21:
        v9 = 0LL;
        v29 = 0LL;
LABEL_22:
        if ( a5 )
        {
          v24 = -1;
          if ( v9 )
            v24 = (int)v9;
          LdrpSetAlternateResourceModuleHandle(v22, 0, 0, v24, 0, 2, v16, 0LL);
        }
        goto LABEL_10;
      }
      v16 = -1073020925;
      v28 = -1073020925;
      v14 = (unsigned int)v29[17];
      v10 = (unsigned int)(v14 + v29[18]);
      if ( (unsigned int)v10 > (unsigned int)v8 )
        goto LABEL_21;
      if ( (unsigned int)v10 < (unsigned int)v14 )
        goto LABEL_21;
      v14 = (unsigned int)v29[19];
      v10 = (unsigned int)(v14 + v29[20]);
      if ( (unsigned int)v10 > (unsigned int)v8 )
        goto LABEL_21;
      if ( (unsigned int)v10 < (unsigned int)v14 )
        goto LABEL_21;
      v14 = (unsigned int)v29[21];
      v10 = (unsigned int)(v14 + v29[22]);
      if ( (unsigned int)v10 > (unsigned int)v8 )
        goto LABEL_21;
      if ( (unsigned int)v10 < (unsigned int)v14 )
        goto LABEL_21;
      v14 = (unsigned int)v29[23];
      v10 = (unsigned int)(v14 + v29[24]);
      if ( (unsigned int)v10 > (unsigned int)v8 )
        goto LABEL_21;
      if ( (unsigned int)v10 < (unsigned int)v14 )
        goto LABEL_21;
      v14 = (unsigned int)v29[25];
      v10 = (unsigned int)(v14 + v29[26]);
      if ( (unsigned int)v10 > (unsigned int)v8 )
        goto LABEL_21;
      if ( (unsigned int)v10 < (unsigned int)v14 )
        goto LABEL_21;
      v14 = (unsigned int)v29[27];
      v10 = (unsigned int)(v14 + v29[28]);
      if ( (unsigned int)v10 > (unsigned int)v8 )
        goto LABEL_21;
      if ( (unsigned int)v10 < (unsigned int)v14 )
        goto LABEL_21;
      v14 = (unsigned int)v29[29];
      v10 = (unsigned int)(v14 + v29[30]);
      if ( (unsigned int)v10 > (unsigned int)v8 )
        goto LABEL_21;
      if ( (unsigned int)v10 < (unsigned int)v14 )
        goto LABEL_21;
      v14 = (unsigned int)v29[31];
      v10 = (unsigned int)(v14 + v29[32]);
      if ( (unsigned int)v10 > (unsigned int)v8 )
        goto LABEL_21;
      if ( (unsigned int)v10 < (unsigned int)v14 )
        goto LABEL_21;
      if ( *v29 != -20054323 )
        goto LABEL_21;
      if ( v8 != v33[0] )
        goto LABEL_21;
      if ( v29[2] != 0x10000 )
        goto LABEL_21;
      v25 = (unsigned int)v29[3];
      if ( (_DWORD)v25 )
      {
        if ( !(unsigned __int8)CheckOneBitValidFlag(v25, 7LL, v29) )
          goto LABEL_21;
      }
      if ( !(unsigned __int8)CheckOneBitValidFlag(v9[4] & 0xFFFFFFCF, 3LL, v9) )
        goto LABEL_21;
      if ( !(unsigned __int8)CheckOneBitValidFlag(*(_DWORD *)(v26 + 16) & 0xFFFFFFFC, 48LL, v26) )
        goto LABEL_21;
      if ( (v9[4] & 1) != 0 )
      {
        if ( !(unsigned __int8)CheckOneBitValidFlag((unsigned int)v9[6], 3LL, v9) )
          goto LABEL_21;
        v14 = (unsigned int)v9[5];
        if ( (_DWORD)v14 )
        {
          if ( !(unsigned __int8)CheckOneBitValidFlag(v14, 256LL, v9) )
            goto LABEL_21;
        }
      }
    }
    if ( v32 )
      *v32 = (__int64)v9;
    v16 = 0;
    v28 = 0;
    goto LABEL_22;
  }
  v15 = LdrpGetFromMUIMemCache(v30, 0LL, 0LL, 8LL);
  v29 = (_DWORD *)v15;
  if ( v15 != -1 )
  {
    if ( v15 )
    {
      v16 = 0;
      v28 = 0;
      v14 = (unsigned __int64)v32;
      if ( v32 )
        *v32 = v15;
      goto LABEL_10;
    }
    v14 = v30;
    goto LABEL_16;
  }
  v16 = -1073741686;
LABEL_9:
  v28 = v16;
LABEL_10:
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v8, v9, v10) )
  {
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
    v16 = v28;
  }
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v18, v17, v19, v20) )
    {
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
      v16 = v28;
    }
    LdrpTraceLoadMUIDll(&v36, *(unsigned __int8 *)v13);
  }
  return v16;
}
