/*
 * XREFs of ?CreateAPO@CDeviceGraphObjectCache@@UEAAJAEBU_GUID@@W4APO_TYPE@@PEBG2PEAPEAUIAudioProcessingObject@@@Z @ 0x14000D6F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_89f25345d625e50d879fcb99a1803143_::operator() @ 0x1400108C0 (_lambda_89f25345d625e50d879fcb99a1803143_--operator().c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 */

__int64 CDeviceGraphObjectCache::CreateAPO(__int64 a1, unsigned __int16 *a2, int a3, ...)
{
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned __int16 *v8; // rax
  __int64 v9; // rcx
  char v10; // [rsp+30h] [rbp-89h] BYREF
  char v11; // [rsp+31h] [rbp-88h] BYREF
  char v12; // [rsp+32h] [rbp-87h] BYREF
  char v13; // [rsp+33h] [rbp-86h] BYREF
  int v14; // [rsp+34h] [rbp-85h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-79h]
  __int64 v17; // [rsp+48h] [rbp-71h] BYREF
  _DWORD v18[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v19; // [rsp+58h] [rbp-61h]
  unsigned __int16 *v20; // [rsp+60h] [rbp-59h] BYREF
  va_list v21; // [rsp+68h] [rbp-51h]
  int *v22; // [rsp+70h] [rbp-49h]
  __int64 v23; // [rsp+78h] [rbp-41h]
  unsigned __int16 *v24; // [rsp+80h] [rbp-39h]
  __int64 v25; // [rsp+88h] [rbp-31h]
  __int64 *v26; // [rsp+90h] [rbp-29h]
  __int64 v27; // [rsp+98h] [rbp-21h]
  char *v28; // [rsp+A0h] [rbp-19h]
  __int64 v29; // [rsp+A8h] [rbp-11h]
  char *v30; // [rsp+B0h] [rbp-9h]
  __int64 v31; // [rsp+B8h] [rbp-1h]
  int *v32; // [rsp+C0h] [rbp+7h]
  __int64 v33; // [rsp+C8h] [rbp+Fh]
  int v34; // [rsp+120h] [rbp+67h] BYREF
  __int64 v35; // [rsp+128h] [rbp+6Fh] BYREF
  va_list va; // [rsp+128h] [rbp+6Fh]
  __int64 v37; // [rsp+130h] [rbp+77h] BYREF
  va_list va1; // [rsp+130h] [rbp+77h]
  __int64 *v39; // [rsp+138h] [rbp+7Fh]
  va_list va2; // [rsp+140h] [rbp+87h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v35 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v37 = va_arg(va2, _QWORD);
  v39 = va_arg(va2, __int64 *);
  v34 = a3;
  v15 = v39;
  v20 = a2;
  *v39 = 0LL;
  va_copy(v21, va);
  v22 = &v34;
  va_copy((va_list)v23, va1);
  v24 = (unsigned __int16 *)(a1 - 8);
  v11 = 0;
  v25 = (__int64)&v11;
  v26 = (__int64 *)&v10;
  v27 = (__int64)&v15;
  v10 = 0;
  result = lambda_89f25345d625e50d879fcb99a1803143_::operator()(&v20);
  v6 = *(_QWORD *)(a1 + 320);
  v7 = result;
  if ( *(_DWORD *)v6 > 4u )
  {
    v14 = result;
    v32 = &v14;
    v30 = &v12;
    v28 = &v13;
    v26 = &v17;
    v12 = v10;
    v18[1] = 4;
    v8 = *(unsigned __int16 **)(v6 + 8);
    v9 = *(_QWORD *)(v6 + 32);
    v13 = v11;
    v20 = v8;
    v33 = 4LL;
    v31 = 1LL;
    v17 = *v15;
    v29 = 1LL;
    v27 = 8LL;
    v24 = a2;
    v25 = 16LL;
    v18[0] = 184549376;
    v19 = 0LL;
    LODWORD(v21) = *v8;
    v22 = (int *)&unk_1400A6E6F;
    HIDWORD(v21) = 2;
    v23 = 0x100000067LL;
    v16 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(v9, v18, 0LL, 0LL, 7, &v20);
    return v7;
  }
  return result;
}
