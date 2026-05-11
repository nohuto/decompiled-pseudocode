/*
 * XREFs of USBCaptureCopyRequestToBuffer @ 0x1C00376E0
 * Callers:
 *     USBCaptureProcessPin @ 0x1C00032E0 (USBCaptureProcessPin.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C0004F74 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     memmove @ 0x1C001AC80 (memmove.c)
 */

char __fastcall USBCaptureCopyRequestToBuffer(__int64 a1, struct _KSSTREAM_POINTER *a2, _BYTE *a3)
{
  ULONG Remaining; // ebp
  PKSPIN Pin; // rcx
  unsigned __int16 *v7; // r10
  __int64 v8; // r14
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r15
  bool v12; // sf
  unsigned __int16 *v13; // r15
  ULONG *v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  unsigned int v18; // r9d
  unsigned int v19; // ebx
  const void *v20; // r12
  ULONG v21; // eax
  __int64 v22; // rdi
  char v23; // dl
  __int64 v25; // [rsp+20h] [rbp-78h]
  _QWORD *Context; // [rsp+A0h] [rbp+8h]

  Remaining = a2->OffsetOut.Remaining;
  Pin = a2->Pin;
  *a3 = 0;
  v7 = *(unsigned __int16 **)(a1 + 24);
  Context = Pin->Context;
  v8 = Context[19];
  v9 = *(unsigned int *)(v8 + 108);
  if ( *v7 < (unsigned __int64)(12 * v9 + 152) )
  {
    v23 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v14 = &WPP_RECORDER_INITIALIZED;
    if ( v23 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      LOBYTE(v14) = WPP_RECORDER_AND_TRACE_SF_qdd(
                      (__int64)WPP_GLOBAL_Control->AttachedDevice,
                      v23,
                      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      v25,
                      3u,
                      0x14u,
                      (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
  }
  else
  {
    v10 = *(unsigned int *)(a1 + 32);
    v11 = v10 + 2 * v10 + 35;
    v12 = *(int *)&v7[2 * v11 + 4] < 0;
    v13 = &v7[2 * v11];
    LOBYTE(v14) = v12 || !*((_DWORD *)v13 + 1);
    if ( (unsigned int)v10 < (unsigned int)v9 )
    {
      v15 = *(_DWORD *)(a1 + 32);
      v16 = *(_DWORD *)(v8 + 108);
      do
      {
        v17 = v15;
        v18 = v16;
        if ( !(_BYTE)v14 )
          break;
        v13 += 6;
        a2->StreamHeader->OptionsFlags |= 4u;
        v15 = *(_DWORD *)(a1 + 32) + 1;
        *(_DWORD *)(a1 + 32) = v15;
        LOBYTE(v14) = *((int *)v13 + 2) < 0 || !*((_DWORD *)v13 + 1);
        v16 = *(_DWORD *)(v8 + 108);
        v17 = v15;
        v18 = v16;
      }
      while ( v15 < v16 );
      if ( v17 < v18 )
      {
        v19 = *((_DWORD *)v13 + 1);
        v20 = (const void *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)v13);
        if ( v19 )
        {
          while ( Remaining && *(_BYTE *)(v8 + 96) )
          {
            v21 = Remaining;
            if ( Remaining >= v19 )
              v21 = v19;
            v22 = v21;
            memmove(a2->OffsetOut.Data, v20, v21);
            v19 -= v22;
            Context[10] += v22;
            KsStreamPointerAdvanceOffsets(a2, 0, v22, 0);
            Remaining -= v22;
            if ( Remaining )
            {
              while ( 1 )
              {
                LODWORD(v14) = ++*(_DWORD *)(a1 + 32);
                if ( (unsigned int)v14 >= *(_DWORD *)(v8 + 108) )
                  break;
                v13 += 6;
                if ( *((int *)v13 + 2) >= 0 )
                {
                  v20 = (const void *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)v13);
                  v19 = *((_DWORD *)v13 + 1);
                  break;
                }
                a2->StreamHeader->OptionsFlags |= 4u;
              }
              if ( !v19 )
                return (char)v14;
            }
            else
            {
              LOBYTE(v14) = (_BYTE)a3;
              *a3 = 1;
              if ( !v19 )
              {
                ++*(_DWORD *)(a1 + 32);
                return (char)v14;
              }
              LODWORD(v14) = *((_DWORD *)v13 + 1) - v19;
              *((_DWORD *)v13 + 1) = v19;
              *(_DWORD *)v13 += (_DWORD)v14;
            }
          }
        }
      }
    }
  }
  return (char)v14;
}
