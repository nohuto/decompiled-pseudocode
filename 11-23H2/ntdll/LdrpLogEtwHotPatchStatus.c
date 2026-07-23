/*
 * XREFs of LdrpLogEtwHotPatchStatus @ 0x1800DB554
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180024A58 (LdrpMapAndSnapDependency.c)
 *     LdrpFastpthReloadedDll @ 0x180029988 (LdrpFastpthReloadedDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002C7AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadPatchImage @ 0x1800D9DC0 (LdrpLoadPatchImage.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     LdrpApplyPatchImage @ 0x1800E0FB4 (LdrpApplyPatchImage.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800328D0 (RtlRunOnceExecuteOnce.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007CB24 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18007CD5C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

char __fastcall LdrpLogEtwHotPatchStatus(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3, int a4, int a5)
{
  unsigned __int16 v9; // di
  char result; // al
  _QWORD *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r10d
  int v15; // r11d
  unsigned __int16 v16; // cx
  unsigned __int16 *v17; // rax
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  _QWORD v22[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  _EVENT_DATA_DESCRIPTOR v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  int *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  int *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  _DWORD *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  __int64 v33; // [rsp+C8h] [rbp-40h]
  _DWORD v34[2]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  __int64 v37; // [rsp+E8h] [rbp-20h]
  _DWORD v38[2]; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  __int64 v41; // [rsp+108h] [rbp+0h]
  _DWORD v42[2]; // [rsp+110h] [rbp+8h] BYREF
  int *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  int *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  _QWORD *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]

  LODWORD(v22[0]) = 1310738;
  v22[1] = L"Not found";
  v9 = 18;
  result = RtlRunOnceExecuteOnce(&LibLoaderTelemetryInitRunOnce, LibLoaderTelemetryInitOnce, 0LL, 0LL);
  if ( a2 )
    v11 = (_QWORD *)(a2 + 88);
  else
    v11 = v22;
  if ( (unsigned int)dword_180181900 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_180181900, 0x400000000001LL);
    if ( result )
    {
      v23 = v13;
      v25 = &v23;
      v27 = &v18;
      v29 = &v19;
      v31 = v34;
      v33 = *((_QWORD *)a1 + 1);
      v34[0] = *a1;
      v26 = 8LL;
      v18 = v14;
      v28 = 4LL;
      v19 = v15;
      v30 = 4LL;
      v32 = 2LL;
      v34[1] = 0;
      if ( v11 )
      {
        v16 = *(_WORD *)v11;
      }
      else
      {
        v11 = v22;
        v16 = 18;
      }
      v36 = 2LL;
      v35 = v38;
      v37 = v11[1];
      v38[0] = v16;
      v38[1] = 0;
      if ( a3 )
        v9 = *a3;
      v40 = 2LL;
      v39 = v42;
      v42[1] = 0;
      v17 = (unsigned __int16 *)v22;
      v20 = a4;
      if ( a3 )
        v17 = a3;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 8LL;
      v41 = *((_QWORD *)v17 + 1);
      v42[0] = v9;
      v43 = &v20;
      v21 = a5;
      v45 = &v21;
      v22[0] = 2164260864LL;
      v47 = v22;
      return tlgWriteTransfer_EtwEventWriteTransfer(
               (__int64)&dword_180181900,
               (unsigned __int8 *)dword_18014DCD8,
               v12,
               v13,
               0xEu,
               &v24);
    }
  }
  return result;
}
