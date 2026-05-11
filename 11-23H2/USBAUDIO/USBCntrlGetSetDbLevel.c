/*
 * XREFs of USBCntrlGetSetDbLevel @ 0x1C003EC70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0009414 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     log10 @ 0x1C0019418 (log10.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 *     pow @ 0x1C001A030 (pow.c)
 */

__int64 __fastcall USBCntrlGetSetDbLevel(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int *a4,
        unsigned int a5,
        int a6,
        _DWORD *a7)
{
  int *v7; // r10
  _DWORD *v8; // r13
  unsigned int *v9; // r14
  bool v10; // bp
  char v12; // bp
  char v13; // dl
  int v14; // r9d
  int v15; // r15d
  void *v16; // r11
  char v17; // al
  int v18; // ebx
  int v19; // edi
  double v20; // xmm0_8
  float v21; // xmm2_4
  int v22; // eax
  unsigned int v23; // eax
  int v24; // r8d
  unsigned int v25; // edx
  __int64 v26; // rcx
  unsigned int v27; // eax
  int v28; // edx
  int *v29; // rbx
  int v30; // edx
  int v31; // eax
  float v32; // xmm1_4
  int v33; // [rsp+20h] [rbp-98h]
  int v34; // [rsp+28h] [rbp-90h]
  __int64 v35; // [rsp+60h] [rbp-58h]
  int v37; // [rsp+C0h] [rbp+8h]
  int v38; // [rsp+C8h] [rbp+10h]
  unsigned int v39; // [rsp+D0h] [rbp+18h] BYREF
  int *v40; // [rsp+D8h] [rbp+20h]

  v40 = a4;
  v7 = a4;
  v8 = (_DWORD *)a2;
  v9 = (unsigned int *)(*(_QWORD *)(a2 + 128) + 32LL * a5);
  v35 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( a3 < 4 )
  {
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = v10;
      LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
    }
    return 3221225990LL;
  }
  v39 = 0;
  v12 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v13 = 0;
  }
  if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_AND_TRACE_SF_ddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v13,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v33,
      0xAu,
      0xBu,
      (__int64)&WPP_9b39d06d20dd34f85528fc39f9299c88_Traceguids);
    v7 = v40;
  }
  v14 = v8[19];
  if ( v14 == 8 )
  {
    v16 = USBHwGetSetShort;
    v15 = 256;
    if ( *(_BYTE *)(v35 + 6) )
    {
      v17 = a6;
      if ( (a6 & 0x80u) != 0 )
        goto LABEL_24;
      v18 = v9[7];
      v19 = v9[6];
      v20 = pow(10.0, (float)((float)((float)*v7 * 0.000015258789) - (float)((float)v18 * 0.000015258789)) / 20.0);
      v7 = v40;
      v16 = USBHwGetSetShort;
      v21 = v20;
      *v40 = (int)(float)((float)(v21 * (float)(v18 - v19)) + (float)v19);
      v14 = v8[19];
    }
  }
  else
  {
    v15 = 0x4000;
    v16 = USBHwGetSetByte;
  }
  v17 = a6;
LABEL_24:
  v38 = v17 & 0x80;
  if ( (v17 & 0x80) == 0 )
  {
    v22 = *v7;
    if ( *v7 <= (int)v9[7] )
    {
      if ( v22 < (int)v9[6] )
      {
        v23 = 0xFF800000 / v15;
        goto LABEL_28;
      }
    }
    else
    {
      v22 = v9[7];
    }
    v23 = v22 / v15;
LABEL_28:
    v39 = v23;
  }
  LOBYTE(v34) = a6;
  v37 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int *, int))v16)(
          a1,
          (unsigned int)v8[20],
          v9[2],
          (unsigned int)(v14 - 6),
          &v39,
          v34);
  v25 = v37;
  if ( v37 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v12 = 0;
    }
    if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v25) = v12;
      LOBYTE(v24) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v25, v24, WPP_GLOBAL_Control->DeviceExtension);
      return (unsigned int)v37;
    }
  }
  else
  {
    if ( v38 )
    {
      if ( a6 == 131 && (v26 = *(_QWORD *)(v35 + 32), *(_WORD *)(v26 + 8) == 3468) )
      {
        v27 = v39;
        if ( *(_WORD *)(v26 + 10) == 1 )
          v27 = 0;
        v39 = v27;
      }
      else
      {
        LOWORD(v27) = v39;
      }
      v28 = (__int16)v27;
      if ( v15 != 256 )
        v28 = (char)v27;
      v29 = v40;
      v30 = v15 * v28;
      *v40 = v30;
      if ( v8[19] == 8 )
      {
        if ( *(_BYTE *)(v35 + 6) )
        {
          v31 = v8[24];
          if ( _bittest(&v31, a5) )
          {
            v32 = log10((float)((float)(int)(v30 - v9[6]) / (float)(int)(v9[7] - v9[6])));
            *v29 = (int)(float)((float)(v32 * 20.0) * 65536.0);
          }
        }
      }
      v25 = v37;
    }
    *a7 = 4;
  }
  return v25;
}
