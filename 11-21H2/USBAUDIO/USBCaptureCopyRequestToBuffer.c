/*
 * XREFs of USBCaptureCopyRequestToBuffer @ 0x1C003A63C
 * Callers:
 *     USBCaptureProcessPin @ 0x1C00066A0 (USBCaptureProcessPin.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C0001D78 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     memmove @ 0x1C0019680 (memmove.c)
 */

char __fastcall USBCaptureCopyRequestToBuffer(__int64 a1, struct _KSSTREAM_POINTER *a2, _BYTE *a3)
{
  PKSPIN Pin; // r11
  unsigned __int16 *v6; // r10
  __int64 v7; // r13
  __int64 v8; // r9
  char v9; // si
  ULONG *v10; // rax
  __int64 v11; // rcx
  unsigned __int16 *v12; // rdi
  unsigned int v13; // edx
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // r9d
  ULONG v17; // edx
  const void *v18; // r15
  unsigned int v19; // r14d
  unsigned int v20; // eax
  __int64 v21; // rbx
  int v23; // [rsp+20h] [rbp-78h]
  ULONG Remaining; // [rsp+A0h] [rbp+8h]
  _QWORD *Context; // [rsp+A8h] [rbp+10h]

  Pin = a2->Pin;
  *a3 = 0;
  Remaining = a2->OffsetOut.Remaining;
  v6 = *(unsigned __int16 **)(a1 + 24);
  Context = Pin->Context;
  v7 = Context[19];
  v8 = *(unsigned int *)(v7 + 108);
  if ( *v6 >= (unsigned __int64)(12 * v8 + 152) )
  {
    v11 = *(unsigned int *)(a1 + 32);
    v12 = &v6[4 * v11 + 70 + 2 * v11];
    LOBYTE(v10) = *((int *)v12 + 2) < 0 || !*((_DWORD *)v12 + 1);
    if ( (unsigned int)v11 < (unsigned int)v8 )
    {
      v13 = v11;
      v14 = *(_DWORD *)(v7 + 108);
      do
      {
        v15 = v13;
        v16 = v14;
        if ( !(_BYTE)v10 )
          break;
        v12 += 6;
        a2->StreamHeader->OptionsFlags |= 4u;
        v13 = *(_DWORD *)(a1 + 32) + 1;
        *(_DWORD *)(a1 + 32) = v13;
        LOBYTE(v10) = *((int *)v12 + 2) < 0 || !*((_DWORD *)v12 + 1);
        v14 = *(_DWORD *)(v7 + 108);
        v15 = v13;
        v16 = v14;
      }
      while ( v13 < v14 );
      v17 = Remaining;
      if ( v15 < v16 )
      {
LABEL_23:
        v18 = (const void *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)v12);
        v19 = *((_DWORD *)v12 + 1);
        while ( v19 && v17 && *(_BYTE *)(v7 + 96) )
        {
          v20 = v17;
          if ( v17 >= v19 )
            v20 = v19;
          v21 = v20;
          memmove(a2->OffsetOut.Data, v18, v20);
          Remaining -= v21;
          v19 -= v21;
          Context[10] += v21;
          KsStreamPointerAdvanceOffsets(a2, 0, v21, 0);
          v17 = Remaining;
          if ( Remaining )
          {
            while ( 1 )
            {
              LODWORD(v10) = *(_DWORD *)(a1 + 32) + 1;
              *(_DWORD *)(a1 + 32) = (_DWORD)v10;
              if ( (unsigned int)v10 >= *(_DWORD *)(v7 + 108) )
                break;
              v12 += 6;
              if ( *((int *)v12 + 2) >= 0 )
                goto LABEL_23;
              a2->StreamHeader->OptionsFlags |= 4u;
            }
          }
          else
          {
            LOBYTE(v10) = (_BYTE)a3;
            *a3 = 1;
            if ( !v19 )
            {
              ++*(_DWORD *)(a1 + 32);
              return (char)v10;
            }
            LODWORD(v10) = *((_DWORD *)v12 + 1) - v19;
            *((_DWORD *)v12 + 1) = v19;
            *(_DWORD *)v12 += (_DWORD)v10;
          }
        }
      }
    }
  }
  else
  {
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v10 = &WPP_RECORDER_INITIALIZED;
    if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      LOBYTE(v10) = WPP_RECORDER_AND_TRACE_SF_qdd(
                      (__int64)WPP_GLOBAL_Control->AttachedDevice,
                      v9,
                      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      v23,
                      3u,
                      0x14u,
                      (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
  }
  return (char)v10;
}
