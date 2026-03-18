/*
 * XREFs of DxgkWaitForVerticalBlankEvent2 @ 0x1C01E7A80
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C0177070 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent2(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v8; // r14
  int v9; // ecx
  __int64 v10; // rsi
  HANDLE v11; // r15
  NTSTATUS v12; // eax
  _QWORD *v13; // rax
  unsigned int v14; // r15d
  PVOID *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // sf
  PVOID *v24; // rbx
  int v25; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-E0h]
  char v27; // [rsp+60h] [rbp-D8h]
  PVOID Object; // [rsp+68h] [rbp-D0h] BYREF
  union _LARGE_INTEGER v29[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v30; // [rsp+80h] [rbp-B8h]
  HANDLE Handle[2]; // [rsp+90h] [rbp-A8h]
  __int128 v32; // [rsp+A0h] [rbp-98h]
  __int128 v33; // [rsp+B0h] [rbp-88h]
  __int128 v34; // [rsp+C0h] [rbp-78h]
  _QWORD v35[8]; // [rsp+D0h] [rbp-68h] BYREF

  v3 = (__int128 *)a1;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2083;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2083);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2083);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int128 *)MmUserProbeAddress;
  v30 = *v3;
  *(_OWORD *)Handle = v3[1];
  v32 = v3[2];
  v33 = v3[3];
  v34 = v3[4];
  if ( HIDWORD(v30) > 8 )
  {
    v20 = -1073741811;
    WdLogSingleEntry3(3LL, HIDWORD(*((_QWORD *)&v30 + 1)), 32LL, -1073741811LL);
LABEL_26:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( !v27 )
      return v20;
    v23 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_28:
    if ( v23 )
      McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v25);
    return v20;
  }
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress, v4, v5, v6);
  if ( !Current )
  {
    v20 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_26;
  }
  v8 = HIDWORD(v30);
  if ( HIDWORD(v30) )
  {
    v9 = *((_DWORD *)Current + 106);
    if ( (v9 & 4) == 0 && (!g_OSTestSigningEnabled || (v9 & 0x2000) == 0) )
    {
      v20 = -1073741790;
      WdLogSingleEntry1(3LL, -1073741790LL);
      goto LABEL_26;
    }
  }
  memset(v35, 0, sizeof(v35));
  v10 = 0LL;
  if ( HIDWORD(v30) )
  {
    while ( 1 )
    {
      Object = 0LL;
      v11 = Handle[v10];
      v12 = ObReferenceObjectByHandle(v11, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v35[v10] = Object;
      if ( v12 < 0 )
        break;
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= (unsigned int)v8 )
        goto LABEL_12;
    }
    if ( (_DWORD)v10 )
    {
      v24 = (PVOID *)v35;
      do
      {
        ObfDereferenceObject(*v24++);
        --v10;
      }
      while ( v10 );
    }
    v20 = -1073741811;
    WdLogSingleEntry2(3LL, v11, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( !v27 )
      return v20;
    LOBYTE(v21) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v23 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_28;
  }
LABEL_12:
  v29[0].QuadPart = -800000LL;
  v13 = v35;
  if ( !(_DWORD)v8 )
    v13 = 0LL;
  v14 = DxgkWaitForVerticalBlankEventInternal(
          (unsigned int)v30,
          DWORD1(v30),
          DWORD2(v30),
          (unsigned int)v8,
          v13,
          v29,
          0);
  if ( (_DWORD)v8 )
  {
    v15 = (PVOID *)v35;
    v16 = v8;
    do
    {
      ObfDereferenceObject(*v15++);
      --v16;
    }
    while ( v16 );
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v25);
  }
  return v14;
}
