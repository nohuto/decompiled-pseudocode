/*
 * XREFs of USBCntrlGetSetDbLevel @ 0x1C0038D90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0003538 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     log10 @ 0x1C0017E64 (log10.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     pow @ 0x1C0018A70 (pow.c)
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
  unsigned int *v9; // r14
  char v10; // bp
  char v12; // bp
  char v13; // dl
  int v14; // r9d
  int v15; // r12d
  void *v16; // r11
  char v17; // al
  int v18; // ebx
  int v19; // edi
  double v20; // xmm0_8
  float v21; // xmm2_4
  int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // rcx
  unsigned int v26; // eax
  int v27; // edx
  int *v28; // rbx
  int v29; // edx
  int v30; // eax
  float v31; // xmm1_4
  int v32; // [rsp+20h] [rbp-98h]
  int v33; // [rsp+20h] [rbp-98h]
  int v34; // [rsp+28h] [rbp-90h]
  __int64 v35; // [rsp+60h] [rbp-58h]
  int v37; // [rsp+C0h] [rbp+8h]
  int v38; // [rsp+C8h] [rbp+10h]
  unsigned int v39; // [rsp+D0h] [rbp+18h] BYREF
  int *v40; // [rsp+D8h] [rbp+20h]

  v40 = a4;
  v7 = a4;
  v9 = (unsigned int *)(*(_QWORD *)(a2 + 128) + 32LL * a5);
  v35 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( a3 < 4 )
  {
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v32,
        0xAu,
        0xAu,
        (__int64)&WPP_9b39d06d20dd34f85528fc39f9299c88_Traceguids);
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
      v32,
      0xAu,
      0xBu,
      (__int64)&WPP_9b39d06d20dd34f85528fc39f9299c88_Traceguids);
    v7 = v40;
  }
  v14 = *(_DWORD *)(a2 + 76);
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
      v14 = *(_DWORD *)(a2 + 76);
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
          *(unsigned int *)(a2 + 80),
          v9[2],
          (unsigned int)(v14 - 6),
          &v39,
          v34);
  v24 = v37;
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
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v12,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v33,
        0xAu,
        0xCu,
        (__int64)&WPP_9b39d06d20dd34f85528fc39f9299c88_Traceguids);
      return (unsigned int)v37;
    }
  }
  else
  {
    if ( v38 )
    {
      if ( a6 == 131 && (v25 = *(_QWORD *)(v35 + 32), *(_WORD *)(v25 + 8) == 3468) )
      {
        v26 = v39;
        if ( *(_WORD *)(v25 + 10) == 1 )
          v26 = 0;
        v39 = v26;
      }
      else
      {
        LOWORD(v26) = v39;
      }
      v27 = (__int16)v26;
      if ( v15 != 256 )
        v27 = (char)v26;
      v28 = v40;
      v29 = v15 * v27;
      *v40 = v29;
      if ( *(_DWORD *)(a2 + 76) == 8 )
      {
        if ( *(_BYTE *)(v35 + 6) )
        {
          v30 = *(_DWORD *)(a2 + 96);
          if ( _bittest(&v30, a5) )
          {
            v31 = log10((float)((float)(int)(v29 - v9[6]) / (float)(int)(v9[7] - v9[6])));
            *v28 = (int)(float)((float)(v31 * 20.0) * 65536.0);
          }
        }
      }
      v24 = v37;
    }
    *a7 = 4;
  }
  return v24;
}
