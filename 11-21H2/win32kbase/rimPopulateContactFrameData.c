/*
 * XREFs of rimPopulateContactFrameData @ 0x1C01B1588
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C01B2140 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C01ACA2C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     rimExtractTransducerUsages @ 0x1C01AD584 (rimExtractTransducerUsages.c)
 *     rimExtractPointerDeviceUsages @ 0x1C01B00C4 (rimExtractPointerDeviceUsages.c)
 *     rimTransformGeometry @ 0x1C01B2990 (rimTransformGeometry.c)
 */

__int64 __fastcall rimPopulateContactFrameData(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        int a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        int *a12,
        _QWORD *a13)
{
  __int64 v13; // rsi
  __int64 v15; // r15
  _DWORD *v16; // r13
  __int64 v17; // r12
  struct _HIDP_PREPARSED_DATA *v18; // rax
  __int64 v19; // r14
  __int64 v20; // rdi
  int v21; // ebx
  _DWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned int v25; // edi
  unsigned int v26; // r9d
  struct _HIDP_PREPARSED_DATA *v27; // rdx
  int PointerDeviceUsages; // ebx
  int v29; // r8d
  PDEVICE_OBJECT *v30; // rdx
  bool v31; // zf
  int v32; // r8d
  PDEVICE_OBJECT *v33; // rdx
  __int64 v35; // [rsp+B0h] [rbp+8h] BYREF
  struct _HIDP_PREPARSED_DATA *v36; // [rsp+B8h] [rbp+10h]
  char *v37; // [rsp+C0h] [rbp+18h]
  unsigned int v38; // [rsp+C8h] [rbp+20h]

  v38 = a4;
  v37 = a3;
  v35 = a1;
  v13 = a7;
  v15 = *(_QWORD *)(a2 + 472);
  v16 = a8;
  v17 = a7 + 2344;
  v18 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 456) + 16LL);
  v19 = a7 + 2400;
  v20 = *(_QWORD *)(v15 + 864);
  v21 = *(_DWORD *)(v15 + 836);
  *(_DWORD *)(a7 + 2340) |= 2u;
  v36 = v18;
  v22 = a9;
  *v16 = 0;
  *v22 = 0;
  *a10 = 0;
  *a11 = 0;
  *a13 = *(_QWORD *)(v13 + 36);
  *a12 = (*(_DWORD *)(v13 + 8) >> 3) & 1;
  memset((void *)(v13 + 2348), 0, 0xECuLL);
  *(_DWORD *)v17 = *(_DWORD *)v13;
  *(_DWORD *)(v17 + 48) = a6;
  *(_WORD *)v19 = *(_WORD *)(v13 + 4);
  *(_WORD *)(v19 + 2) = a5;
  *(_DWORD *)(v19 + 72) = v21;
  *(_QWORD *)(v19 + 88) = v20;
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    v23 = *(_QWORD *)(a2 + 24);
  else
    v23 = *(_QWORD *)(a2 + 16);
  v24 = v35;
  v25 = v38;
  v26 = v38;
  v27 = v36;
  *(_QWORD *)(v19 + 24) = v23;
  PointerDeviceUsages = rimExtractPointerDeviceUsages(
                          v15,
                          v27,
                          v37,
                          v26,
                          *(_QWORD *)(v24 + 864) == 0LL,
                          *(unsigned __int8 *)(v24 + 1073),
                          v17,
                          v16,
                          a9,
                          a10,
                          a11);
  if ( PointerDeviceUsages >= 0 )
  {
    v31 = *v16 == 0;
    v35 = *(_QWORD *)(v17 + 4);
    if ( v31 )
    {
      *(_DWORD *)(v13 + 2340) ^= (*(_DWORD *)(v13 + 2340) ^ ~(*(_DWORD *)(v19 + 20) >> 22)) & 4;
      rimTransformGeometry((struct tagHID_POINTER_DEVICE_INFO *)v15, (__int64)a12);
    }
    if ( (unsigned int)(*(_DWORD *)(v15 + 24) - 5) > 1
      || (PointerDeviceUsages = rimExtractTransducerUsages(a2, a5, v37, v25, v13), PointerDeviceUsages >= 0) )
    {
      InputTraceLogging::RIM::PopulateContact(a2, *(_DWORD *)(v15 + 24), *(_WORD *)v19, (__int64)&v35, v19, 0);
    }
    else
    {
      v33 = &WPP_GLOBAL_Control;
      LOBYTE(v33) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v33,
          v32,
          (_DWORD)gRimLog,
          4,
          1,
          59,
          (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
      }
    }
  }
  else
  {
    v30 = &WPP_GLOBAL_Control;
    LOBYTE(v30) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v30,
        v29,
        (_DWORD)gRimLog,
        4,
        1,
        58,
        (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
    }
  }
  return (unsigned int)PointerDeviceUsages;
}
