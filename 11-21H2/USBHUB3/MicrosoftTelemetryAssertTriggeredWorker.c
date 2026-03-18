/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C003FC14
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1C004025C (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        const char *a6)
{
  KIRQL v7; // al
  __int64 *v8; // rcx
  KIRQL v9; // r14
  __int64 *v10; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v12; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int16 v18; // cx
  unsigned int v19; // r13d
  unsigned int v20; // r15d
  unsigned __int64 v21; // rcx
  unsigned int v22; // esi
  int v23; // eax
  __int64 v24; // rbx
  const char *v25; // rdi
  const char *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  KIRQL CurrentIrql; // al
  __int64 v30; // r8
  __int64 v31; // r9
  const char *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // r9
  int v36; // r14d
  int v37; // ebx
  KIRQL v38; // al
  __int64 *v39; // rcx
  int v40; // [rsp+58h] [rbp-B0h] BYREF
  int v41; // [rsp+5Ch] [rbp-ACh] BYREF
  int v42; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v43; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v44; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v45; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v46; // [rsp+70h] [rbp-98h] BYREF
  int v47; // [rsp+74h] [rbp-94h]
  int v48; // [rsp+78h] [rbp-90h]
  int v49; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v50; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v51; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v52; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+98h] [rbp-70h] BYREF
  int *v54; // [rsp+B8h] [rbp-50h]
  __int64 v55; // [rsp+C0h] [rbp-48h]
  int *v56; // [rsp+C8h] [rbp-40h]
  __int64 v57; // [rsp+D0h] [rbp-38h]
  int *v58; // [rsp+D8h] [rbp-30h]
  __int64 v59; // [rsp+E0h] [rbp-28h]
  int *v60; // [rsp+E8h] [rbp-20h]
  __int64 v61; // [rsp+F0h] [rbp-18h]
  const char *v62; // [rsp+F8h] [rbp-10h]
  int v63; // [rsp+100h] [rbp-8h]
  int v64; // [rsp+104h] [rbp-4h]
  int *v65; // [rsp+108h] [rbp+0h]
  __int64 v66; // [rsp+110h] [rbp+8h]
  int *v67; // [rsp+118h] [rbp+10h]
  __int64 v68; // [rsp+120h] [rbp+18h]
  int *v69; // [rsp+128h] [rbp+20h]
  __int64 v70; // [rsp+130h] [rbp+28h]
  const char *v71; // [rsp+138h] [rbp+30h]
  __int64 v72; // [rsp+140h] [rbp+38h]
  int *v73; // [rsp+148h] [rbp+40h]
  __int64 v74; // [rsp+150h] [rbp+48h]
  int *v75; // [rsp+158h] [rbp+50h]
  __int64 v76; // [rsp+160h] [rbp+58h]
  const char *v77; // [rsp+168h] [rbp+60h]
  int v78; // [rsp+170h] [rbp+68h]
  int v79; // [rsp+174h] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+178h] [rbp+70h] BYREF
  int *v81; // [rsp+198h] [rbp+90h]
  __int64 v82; // [rsp+1A0h] [rbp+98h]
  int *v83; // [rsp+1A8h] [rbp+A0h]
  __int64 v84; // [rsp+1B0h] [rbp+A8h]
  int *v85; // [rsp+1B8h] [rbp+B0h]
  __int64 v86; // [rsp+1C0h] [rbp+B8h]
  int *v87; // [rsp+1C8h] [rbp+C0h]
  __int64 v88; // [rsp+1D0h] [rbp+C8h]
  const char *v89; // [rsp+1D8h] [rbp+D0h]
  int v90; // [rsp+1E0h] [rbp+D8h]
  int v91; // [rsp+1E4h] [rbp+DCh]
  int *v92; // [rsp+1E8h] [rbp+E0h]
  __int64 v93; // [rsp+1F0h] [rbp+E8h]
  int *v94; // [rsp+1F8h] [rbp+F0h]
  __int64 v95; // [rsp+200h] [rbp+F8h]
  int *v96; // [rsp+208h] [rbp+100h]
  __int64 v97; // [rsp+210h] [rbp+108h]

  v43 = a4;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v7 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  v8 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  v9 = v7;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_5:
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v10 = (__int64 *)Pool2;
    if ( !Pool2 )
    {
LABEL_56:
      KeReleaseSpinLock(&g_AssertSpinLock, v9);
      return;
    }
    v12 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    *((_DWORD *)v10 + 4) = 0;
    *((_DWORD *)v10 + 5) = 0;
    *((_DWORD *)v10 + 6) = 0;
    v10[1] = ((__int64)((unsigned __int128)(v12 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
           + ((unsigned __int64)((unsigned __int128)(v12 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
           - 60001;
    v14 = v10 + 4;
    v15 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v14 = g_MicrosoftTelemetryAssertsTriggeredList;
    v10[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v15 + 8) = v14;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v10 + 4);
  }
  else
  {
    while ( 1 )
    {
      v10 = v8 - 4;
      if ( *(v8 - 4) == a1 )
        break;
      v8 = (__int64 *)*v8;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v8 )
        goto LABEL_5;
    }
  }
  ++*((_DWORD *)v10 + 4);
  ++*((_DWORD *)v10 + 5);
  v16 = MEMORY[0xFFFFF78000000320];
  v17 = v16 * KeQueryTimeIncrement() / 10000;
  if ( (unsigned __int64)(v17 - v10[1]) <= 0xEA60 )
    goto LABEL_56;
  v18 = *(_WORD *)(0x1C0000018LL + MEMORY[0x1C000003C]);
  if ( v18 == 267 || v18 == 523 )
  {
    v19 = *(_DWORD *)(0x1C0000008LL + MEMORY[0x1C000003C]);
    v20 = *(_DWORD *)(0x1C0000050LL + MEMORY[0x1C000003C]);
  }
  else
  {
    v19 = 0;
    v20 = 0;
  }
  if ( a1 < 0x1C0000000LL || (v21 = 0x1C0000000LL + v20, v21 <= 0x1C0000000LL) || a1 > v21 )
    v22 = 0;
  else
    v22 = a1 - 0xC0000000;
  v47 = *((_DWORD *)v10 + 4);
  v48 = *((_DWORD *)v10 + 5);
  v23 = *((_DWORD *)v10 + 6);
  v10[1] = v17;
  v46 = v23;
  KeReleaseSpinLock(&g_AssertSpinLock, v9);
  v24 = -1LL;
  v25 = "<unknown>";
  if ( (unsigned int)dword_1C0071040 > 5
    && (qword_1C0071050 & 0x400000000000LL) != 0
    && (qword_1C0071058 & 0x400000000000LL) == qword_1C0071058 )
  {
    v49 = 10;
    v54 = &v49;
    v55 = 4LL;
    v56 = (int *)&v50;
    v26 = "<unknown>";
    v50 = v22;
    v58 = (int *)&v51;
    v60 = (int *)&v52;
    v57 = 4LL;
    v51 = v19;
    if ( g_ModuleName )
      v26 = (const char *)g_ModuleName;
    v59 = 4LL;
    v52 = v20;
    v61 = 4LL;
    if ( v26 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( v26[v27] );
      v28 = v27 + 1;
    }
    else
    {
      v26 = File;
      v28 = 1;
    }
    v63 = v28;
    v40 = v47;
    v65 = &v40;
    v41 = v48;
    v67 = &v41;
    v62 = v26;
    v64 = 0;
    v66 = 4LL;
    v68 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v32 = "<unknown>";
    v70 = 4LL;
    v42 = CurrentIrql;
    v69 = &v42;
    v71 = "usbhub3.sys";
    v44 = v43;
    v73 = (int *)&v44;
    v45 = a5;
    v75 = (int *)&v45;
    v72 = 12LL;
    v74 = 4LL;
    if ( a6 )
      v32 = a6;
    v76 = 4LL;
    if ( v32 )
    {
      v33 = -1LL;
      do
        ++v33;
      while ( v32[v33] );
      v34 = v33 + 1;
    }
    else
    {
      v32 = File;
      v34 = 1;
    }
    v78 = v34;
    v77 = v32;
    v79 = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)v32, (unsigned __int8 *)dword_1C0063B81, v30, v31, 0xEu, &v53);
  }
  if ( dword_1C0071078 && !v46 && !KeGetCurrentIrql() )
  {
    v36 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v22, g_ModuleName, v19, v20, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C0071040 > 5
      && (qword_1C0071050 & 0x400000000000LL) != 0
      && (qword_1C0071058 & 0x400000000000LL) == qword_1C0071058 )
    {
      v82 = 4LL;
      v81 = &v46;
      v45 = v22;
      v83 = (int *)&v45;
      v46 = 10;
      v85 = (int *)&v44;
      v87 = (int *)&v43;
      v84 = 4LL;
      v44 = v19;
      if ( g_ModuleName )
        v25 = (const char *)g_ModuleName;
      v86 = 4LL;
      v43 = v20;
      v88 = 4LL;
      if ( v25 )
      {
        do
          ++v24;
        while ( v25[v24] );
        v37 = v24 + 1;
      }
      else
      {
        v25 = File;
        v37 = 1;
      }
      v42 = v47;
      v92 = &v42;
      v41 = v48;
      v94 = &v41;
      v96 = &v40;
      v89 = v25;
      v90 = v37;
      v91 = 0;
      v93 = 4LL;
      v95 = 4LL;
      v40 = v36;
      v97 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(0LL, (unsigned __int8 *)dword_1C0063C98, 10LL, v35, 0xAu, &v80);
    }
    if ( !v36 )
    {
      v38 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v39 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      v9 = v38;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v39 - 4) != a1 )
        {
          v39 = (__int64 *)*v39;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v39 )
            goto LABEL_56;
        }
        ++*((_DWORD *)v39 - 2);
      }
      goto LABEL_56;
    }
  }
}
