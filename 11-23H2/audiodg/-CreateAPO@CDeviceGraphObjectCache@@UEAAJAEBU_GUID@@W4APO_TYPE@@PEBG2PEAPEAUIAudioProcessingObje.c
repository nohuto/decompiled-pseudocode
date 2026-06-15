/*
 * XREFs of ?CreateAPO@CDeviceGraphObjectCache@@UEAAJAEBU_GUID@@W4APO_TYPE@@PEBG2PEAPEAUIAudioProcessingObject@@@Z @ 0x14000ECD0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14000EE2C (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _lambda_89f25345d625e50d879fcb99a1803143_::operator() @ 0x140011F68 (_lambda_89f25345d625e50d879fcb99a1803143_--operator().c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 */

__int64 CDeviceGraphObjectCache::CreateAPO(__int64 a1, __int64 a2, int a3, ...)
{
  unsigned int v5; // edi
  _DWORD *v6; // rax
  __int64 v7; // rdx
  char v9; // [rsp+38h] [rbp-69h] BYREF
  char v10; // [rsp+39h] [rbp-68h] BYREF
  char v11; // [rsp+3Ah] [rbp-67h] BYREF
  char v12; // [rsp+3Bh] [rbp-66h] BYREF
  unsigned int v13; // [rsp+3Ch] [rbp-65h] BYREF
  __int64 *v14; // [rsp+40h] [rbp-61h] BYREF
  __int64 v15; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v16[4]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v17; // [rsp+78h] [rbp-29h]
  __int64 v18; // [rsp+80h] [rbp-21h]
  __int64 *v19; // [rsp+88h] [rbp-19h]
  __int64 v20; // [rsp+90h] [rbp-11h]
  char *v21; // [rsp+98h] [rbp-9h]
  int v22; // [rsp+A0h] [rbp-1h]
  int v23; // [rsp+A4h] [rbp+3h]
  char *v24; // [rsp+A8h] [rbp+7h]
  int v25; // [rsp+B0h] [rbp+Fh]
  int v26; // [rsp+B4h] [rbp+13h]
  int *v27; // [rsp+B8h] [rbp+17h]
  int v28; // [rsp+C0h] [rbp+1Fh]
  int v29; // [rsp+C4h] [rbp+23h]
  int v30; // [rsp+108h] [rbp+67h] BYREF
  __int64 v31; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va; // [rsp+110h] [rbp+6Fh]
  __int64 v33; // [rsp+118h] [rbp+77h] BYREF
  va_list va1; // [rsp+118h] [rbp+77h]
  __int64 *v35; // [rsp+120h] [rbp+7Fh]
  va_list va2; // [rsp+128h] [rbp+87h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v31 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v33 = va_arg(va2, _QWORD);
  v35 = va_arg(va2, __int64 *);
  v30 = a3;
  v14 = v35;
  v16[0] = a2;
  *v35 = 0LL;
  va_copy((va_list)&v16[1], va);
  v16[2] = &v30;
  va_copy((va_list)&v16[3], va1);
  v17 = a1 - 8;
  v10 = 0;
  v18 = (__int64)&v10;
  v19 = (__int64 *)&v9;
  v20 = (__int64)&v14;
  v9 = 0;
  v5 = lambda_89f25345d625e50d879fcb99a1803143_::operator()(v16);
  v6 = *(_DWORD **)(a1 + 320);
  if ( *v6 > 4u )
  {
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v11 = v9;
    v12 = v10;
    v13 = v5;
    v28 = 4;
    v20 = 8LL;
    v7 = *v14;
    v27 = (int *)&v13;
    v24 = &v11;
    v21 = &v12;
    v19 = &v15;
    v15 = v7;
    v25 = 1;
    v22 = 1;
    v17 = a2;
    v18 = 16LL;
    tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v6, (unsigned int)&unk_1400B3B41, 0, 0, 7, (__int64)v16);
  }
  return v5;
}
