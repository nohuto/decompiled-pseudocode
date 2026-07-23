/*
 * XREFs of EtwpTraceUmMessage @ 0x18008EA64
 * Callers:
 *     EtwTraceMessageVa @ 0x1800535C0 (EtwTraceMessageVa.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x18005A758 (EtwpReserveTraceBuffer.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     EtwpDemuxUmTraceHandle @ 0x180125560 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpTraceUmMessage(unsigned __int16 a1, char a2, signed __int32 *a3, __int16 a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  int v10; // r12d
  char v11; // di
  int v12; // r13d
  unsigned int v13; // ebx
  __int64 v14; // rsi
  _QWORD *i; // rcx
  __int64 v16; // rax
  signed __int32 v17; // ecx
  volatile signed __int32 *v18; // rdx
  int v19; // eax
  signed __int32 *v20; // rdi
  struct _TEB *v21; // rcx
  __int64 v22; // rsi
  const void *v23; // rdx
  size_t v24; // rbx
  signed __int32 *v25; // [rsp+30h] [rbp-98h]
  unsigned int v26; // [rsp+38h] [rbp-90h]
  int v27; // [rsp+4Ch] [rbp-7Ch]
  int v28; // [rsp+50h] [rbp-78h]
  int v29; // [rsp+54h] [rbp-74h]
  __int64 v30; // [rsp+58h] [rbp-70h] BYREF
  __int64 v31; // [rsp+60h] [rbp-68h] BYREF
  __int64 v32; // [rsp+68h] [rbp-60h]
  signed __int32 UniqueThread; // [rsp+70h] [rbp-58h]
  signed __int32 UniqueProcess; // [rsp+74h] [rbp-54h]
  __int64 v35; // [rsp+78h] [rbp-50h]
  struct _TEB *v36; // [rsp+80h] [rbp-48h]
  struct _TEB *v37; // [rsp+88h] [rbp-40h]
  const void *v38; // [rsp+90h] [rbp-38h]
  unsigned int v39; // [rsp+D0h] [rbp+8h] BYREF
  __int16 v40; // [rsp+E8h] [rbp+20h]

  v40 = a4;
  v30 = 0LL;
  v39 = a1 & 0x7FFF;
  if ( !EtwpLoggerArray )
    return 4201LL;
  if ( (a1 & 0x7FFFu) >= 0x40 && (result = EtwpDemuxUmTraceHandle(a1, &v39), (_DWORD)result) )
  {
    v8 = v32;
  }
  else
  {
    v9 = 2LL * v39;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v39 + 8));
    v8 = *(_QWORD *)(EtwpLoggerArray + 8 * v9);
    if ( (*(_BYTE *)(EtwpLoggerArray + 8 * v9) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v39 + 8));
      return 4201LL;
    }
    v32 = *(_QWORD *)(EtwpLoggerArray + 8 * v9);
    result = 0LL;
  }
  v26 = result;
  if ( !(_DWORD)result )
  {
    v10 = a2 & 0x18;
    v11 = a2 & 0xFE;
    if ( *(_QWORD *)(v8 + 384) )
      v11 = a2;
    v12 = v11 & 1;
    v28 = v11 & 2;
    v27 = v11 & 4;
    v29 = v11 & 0x20;
    v13 = (v10 != 0 ? 8 : 0) + (v28 != 0 ? 0x10 : 0) + (v27 != 0 ? 4 : 0) + (v29 != 0 ? 16 : 8) + 4 * v12;
    v14 = (__int64)a5;
    for ( i = a5; *i; v13 += *((_DWORD *)i - 2) )
    {
      i += 2;
      if ( v13 + *((_DWORD *)i - 2) < v13 )
        return 534LL;
    }
    v36 = NtCurrentTeb();
    v16 = EtwpReserveTraceBuffer(
            v8,
            v13,
            v36->CurrentIdealProcessor.Reserved,
            (LARGE_INTEGER *)((unsigned __int64)&v30 & -(__int64)(v10 != 0)),
            &v31);
    v35 = v16;
    v17 = 0;
    v18 = *(volatile signed __int32 **)(v8 + 384);
    if ( v18 )
    {
      v17 = _InterlockedIncrement(v18);
      v16 = v35;
    }
    if ( !v16 )
    {
      if ( v13 <= 0xFFF8 )
        v19 = *(_DWORD *)(v8 + 196) < v13 ? 234 : 8;
      else
        v19 = 534;
      v26 = v19;
LABEL_39:
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v8 + 20) + 8));
      return v26;
    }
    *(_DWORD *)v16 = -1879048192;
    *(_WORD *)v16 = v13;
    *(_WORD *)(v16 + 6) = v11 & 0x3F | 0x80;
    *(_WORD *)(v16 + 4) = v40;
    v20 = (signed __int32 *)(v16 + 8);
    v25 = (signed __int32 *)(v16 + 8);
    if ( v12 )
    {
      *v20 = v17;
      v20 = (signed __int32 *)(v16 + 12);
      v25 = (signed __int32 *)(v16 + 12);
    }
    if ( v27 )
    {
      *v20++ = *a3;
    }
    else
    {
      if ( !v28 )
      {
LABEL_32:
        if ( v10 )
        {
          *(_QWORD *)v20 = v30;
          v20 += 2;
          v25 = v20;
        }
        if ( v29 )
        {
          v21 = NtCurrentTeb();
          v37 = v21;
          UniqueThread = (signed __int32)v21->ClientId.UniqueThread;
          *v25 = UniqueThread;
          UniqueProcess = (signed __int32)v21->ClientId.UniqueProcess;
          v25[1] = UniqueProcess;
          v20 = v25 + 2;
        }
        while ( 1 )
        {
          v22 = v14 + 8;
          v23 = *(const void **)(v22 - 8);
          v38 = v23;
          if ( !v23 )
            break;
          v14 = v22 + 8;
          v24 = *(_QWORD *)(v14 - 8);
          memmove(v20, v23, v24);
          v20 = (signed __int32 *)((char *)v20 + v24);
        }
        _InterlockedDecrement((volatile signed __int32 *)(v31 + 12));
        goto LABEL_39;
      }
      *(_OWORD *)v20 = *(_OWORD *)a3;
      v20 += 4;
    }
    v25 = v20;
    goto LABEL_32;
  }
  return result;
}
