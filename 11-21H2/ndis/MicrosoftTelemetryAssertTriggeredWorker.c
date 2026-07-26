/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00CC258
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00CC228 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0024C54 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0024D50 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     GetImageTuple @ 0x1C00CC1D8 (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1C00CC7D0 (_tlgCreate1Sz_char.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  KIRQL v2; // al
  __int64 *v3; // rcx
  KIRQL v4; // r14
  __int64 *v5; // rdi
  __int64 *Pool2; // rax
  __int64 v7; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int ImageTuple; // eax
  __int64 v14; // r10
  __int64 v15; // r15
  int v16; // r12d
  unsigned int v17; // ebx
  unsigned int v18; // eax
  int v19; // edi
  const char *v20; // r13
  __int64 v21; // r14
  const char *v22; // rdx
  KIRQL CurrentIrql; // al
  __int64 v24; // r8
  unsigned int v25; // edi
  const GUID *v26; // r8
  ULONG v27; // r10d
  KIRQL v28; // al
  __int64 *v29; // rcx
  unsigned int v30; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v31; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v32; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v33; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v34; // [rsp+68h] [rbp-A0h] BYREF
  int v35; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v36; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v37; // [rsp+74h] [rbp-94h] BYREF
  _DWORD v38[4]; // [rsp+78h] [rbp-90h] BYREF
  _EVENT_DATA_DESCRIPTOR v39; // [rsp+88h] [rbp-80h] BYREF
  _DWORD *v40; // [rsp+A8h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp-58h]
  int *v42; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-48h]
  int *v44; // [rsp+C8h] [rbp-40h]
  __int64 v45; // [rsp+D0h] [rbp-38h]
  int *v46; // [rsp+D8h] [rbp-30h]
  __int64 v47; // [rsp+E0h] [rbp-28h]
  char v48[16]; // [rsp+E8h] [rbp-20h] BYREF
  int *v49; // [rsp+F8h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp-8h]
  int *v51; // [rsp+108h] [rbp+0h]
  __int64 v52; // [rsp+110h] [rbp+8h]
  int *v53; // [rsp+118h] [rbp+10h]
  __int64 v54; // [rsp+120h] [rbp+18h]
  _EVENT_DATA_DESCRIPTOR v55; // [rsp+128h] [rbp+20h] BYREF
  unsigned int *v56; // [rsp+148h] [rbp+40h]
  __int64 v57; // [rsp+150h] [rbp+48h]
  int *v58; // [rsp+158h] [rbp+50h]
  __int64 v59; // [rsp+160h] [rbp+58h]
  int *v60; // [rsp+168h] [rbp+60h]
  __int64 v61; // [rsp+170h] [rbp+68h]
  int *v62; // [rsp+178h] [rbp+70h]
  __int64 v63; // [rsp+180h] [rbp+78h]
  char v64[16]; // [rsp+188h] [rbp+80h] BYREF
  int *v65; // [rsp+198h] [rbp+90h]
  __int64 v66; // [rsp+1A0h] [rbp+98h]
  int *v67; // [rsp+1A8h] [rbp+A0h]
  __int64 v68; // [rsp+1B0h] [rbp+A8h]
  _DWORD *v69; // [rsp+1B8h] [rbp+B0h]
  int v70; // [rsp+1C0h] [rbp+B8h]
  int v71; // [rsp+1C4h] [rbp+BCh]
  char v72[16]; // [rsp+1C8h] [rbp+C0h] BYREF

  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v2 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  v3 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  v4 = v2;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_5:
    Pool2 = (__int64 *)ExAllocatePool2(66LL, 48LL, 1953657665);
    v5 = Pool2;
    if ( !Pool2 )
    {
LABEL_35:
      KeReleaseSpinLock(&g_AssertSpinLock, v4);
      return;
    }
    v7 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v5[2] = 0LL;
    *((_DWORD *)v5 + 6) = 0;
    v5[1] = ((__int64)((unsigned __int128)(v7 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v7 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v9 = v5 + 4;
    v10 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v9 = g_MicrosoftTelemetryAssertsTriggeredList;
    v5[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v10 + 8) = v9;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v5 + 4);
  }
  else
  {
    while ( 1 )
    {
      v5 = v3 - 4;
      if ( *(v3 - 4) == a1 )
        break;
      v3 = (__int64 *)*v3;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v3 )
        goto LABEL_5;
    }
  }
  ++*((_DWORD *)v5 + 4);
  ++*((_DWORD *)v5 + 5);
  v11 = MEMORY[0xFFFFF78000000320];
  v12 = v11 * KeQueryTimeIncrement();
  v31 = 0;
  v30 = 0;
  if ( (unsigned __int64)(v12 / 10000 - v5[1]) <= 0xEA60 )
    goto LABEL_35;
  ImageTuple = GetImageTuple(v12, &v31, &v30);
  v15 = v30;
  v16 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v30 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v30 )
  {
    v17 = a1 - 0xC0000000;
  }
  else
  {
    v17 = 0;
  }
  v30 = *((_DWORD *)v5 + 4);
  v18 = *((_DWORD *)v5 + 5);
  v5[1] = v14;
  v19 = *((_DWORD *)v5 + 6);
  v32 = v18;
  KeReleaseSpinLock(&g_AssertSpinLock, v4);
  v20 = "<unknown>";
  v21 = v31;
  if ( (unsigned int)dword_1C0100040 > 5 && tlgKeywordOn((__int64)&dword_1C0100040, 0x400000000000LL) )
  {
    v31 = 10;
    v56 = &v31;
    v22 = "<unknown>";
    v57 = 4LL;
    v58 = (int *)&v33;
    v33 = v17;
    v59 = 4LL;
    v60 = (int *)&v34;
    v61 = 4LL;
    v34 = v16 != 0 ? v21 : 0;
    v63 = 4LL;
    v62 = &v35;
    v35 = v16 != 0 ? v15 : 0;
    if ( g_ModuleName )
      v22 = (const char *)g_ModuleName;
    tlgCreate1Sz_char(v64, v22, 0LL);
    v65 = (int *)&v36;
    v37 = v32;
    v67 = (int *)&v37;
    v36 = v30;
    v66 = 4LL;
    v68 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v71 = 0;
    v38[0] = CurrentIrql;
    v69 = v38;
    v70 = 4;
    tlgCreate1Sz_char(v72, "<unknown>", v24);
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_1C0100040,
      (unsigned __int8 *)dword_1C00D7A46,
      0LL,
      0LL,
      0xBu,
      &v55);
  }
  if ( dword_1C0100078 && !v19 && !KeGetCurrentIrql() )
  {
    v25 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v17, g_ModuleName, v21, v15, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C0100040 > 5 && tlgKeywordOn((__int64)&dword_1C0100040, 0x400000000000LL) )
    {
      v41 = 4LL;
      v40 = v38;
      v38[0] = 10;
      v42 = (int *)&v37;
      v37 = v17;
      v43 = 4LL;
      v44 = (int *)&v36;
      v45 = 4LL;
      v36 = v16 != 0 ? v21 : 0;
      v47 = 4LL;
      v35 = v16 != 0 ? v15 : 0;
      v46 = &v35;
      if ( g_ModuleName )
        v20 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(v48, v20, 0LL);
      v34 = v30;
      v50 = 4LL;
      v49 = (int *)&v34;
      v33 = v32;
      v51 = (int *)&v33;
      v53 = (int *)&v32;
      v52 = 4LL;
      v32 = v25;
      v54 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0100040,
        (unsigned __int8 *)dword_1C00D7AB3,
        v26,
        0LL,
        v27,
        &v39);
    }
    if ( !v25 )
    {
      v28 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v29 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      v4 = v28;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v29 - 4) != a1 )
        {
          v29 = (__int64 *)*v29;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v29 )
            goto LABEL_35;
        }
        ++*((_DWORD *)v29 - 2);
      }
      goto LABEL_35;
    }
  }
}
