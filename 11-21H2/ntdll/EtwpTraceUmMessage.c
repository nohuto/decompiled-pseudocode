/*
 * XREFs of EtwpTraceUmMessage @ 0x18012280C
 * Callers:
 *     EtwTraceMessageVa @ 0x1800064C0 (EtwTraceMessageVa.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x180005850 (EtwpReserveTraceBuffer.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     EtwpDemuxUmTraceHandle @ 0x180122410 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpTraceUmMessage(unsigned __int16 a1, char a2, signed __int32 *a3, __int16 a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  int v10; // r13d
  char v11; // r15
  unsigned int v12; // ebx
  __int64 v13; // rsi
  _QWORD *i; // rcx
  __int64 v15; // rdi
  signed __int32 v16; // eax
  volatile signed __int32 *v17; // rcx
  int v18; // eax
  signed __int32 *v19; // rdi
  struct _TEB *v20; // rcx
  __int64 v21; // rsi
  const void *v22; // rdx
  size_t v23; // rbx
  signed __int32 *v24; // [rsp+30h] [rbp-98h]
  unsigned int v25; // [rsp+38h] [rbp-90h] BYREF
  __int64 v26; // [rsp+40h] [rbp-88h]
  signed __int32 v27; // [rsp+48h] [rbp-80h]
  int v28; // [rsp+4Ch] [rbp-7Ch]
  int v29; // [rsp+50h] [rbp-78h]
  int v30; // [rsp+54h] [rbp-74h]
  int v31; // [rsp+58h] [rbp-70h]
  __int64 v32; // [rsp+60h] [rbp-68h] BYREF
  __int64 v33; // [rsp+68h] [rbp-60h] BYREF
  __int64 v34; // [rsp+70h] [rbp-58h]
  signed __int32 UniqueThread; // [rsp+78h] [rbp-50h]
  signed __int32 UniqueProcess; // [rsp+7Ch] [rbp-4Ch]
  __int64 v37; // [rsp+80h] [rbp-48h]
  struct _TEB *v38; // [rsp+88h] [rbp-40h]
  struct _TEB *v39; // [rsp+90h] [rbp-38h]
  const void *v40; // [rsp+98h] [rbp-30h]
  unsigned int v41; // [rsp+D0h] [rbp+8h]

  v32 = 0LL;
  v25 = a1 & 0x7FFF;
  if ( EtwpLoggerArray )
  {
    if ( (a1 & 0x7FFFu) >= 0x40 )
    {
      result = EtwpDemuxUmTraceHandle(a1, &v25);
      if ( (_DWORD)result )
      {
        v8 = v34;
        goto LABEL_7;
      }
    }
    v9 = 2LL * v25;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v25 + 8));
    v8 = *(_QWORD *)(EtwpLoggerArray + 8 * v9);
    if ( (v8 & 1) == 0 )
    {
      v34 = *(_QWORD *)(EtwpLoggerArray + 8 * v9);
      result = 0LL;
LABEL_7:
      v41 = result;
      if ( (_DWORD)result )
        return result;
      v10 = a2 & 0x18;
      v11 = a2 & 0xFE;
      if ( *(_QWORD *)(v8 + 384) )
        v11 = a2;
      v28 = v11 & 1;
      v30 = v11 & 2;
      v29 = v11 & 4;
      v31 = v11 & 0x20;
      v12 = (v10 != 0 ? 8 : 0) + (v30 != 0 ? 0x10 : 0) + (v29 != 0 ? 4 : 0) + (v31 != 0 ? 16 : 8) + 4 * v28;
      v13 = (__int64)a5;
      for ( i = a5; ; v12 += *((_DWORD *)i - 2) )
      {
        v26 = (__int64)i;
        if ( !*i )
          break;
        i += 2;
        if ( v12 + *((_DWORD *)i - 2) < v12 )
          return 534LL;
      }
      v38 = NtCurrentTeb();
      v15 = EtwpReserveTraceBuffer(
              v8,
              v12,
              v38->CurrentIdealProcessor.Reserved,
              (LARGE_INTEGER *)((unsigned __int64)&v32 & -(__int64)(v10 != 0)),
              &v33);
      v37 = v15;
      v16 = 0;
      v27 = 0;
      v17 = *(volatile signed __int32 **)(v8 + 384);
      if ( v17 )
      {
        v16 = _InterlockedIncrement(v17);
        v27 = v16;
        v15 = v37;
      }
      if ( !v15 )
      {
        if ( v12 <= 0xFFF8 )
          v18 = *(_DWORD *)(v8 + 196) < v12 ? 234 : 8;
        else
          v18 = 534;
        v41 = v18;
LABEL_37:
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v8 + 20) + 8));
        return v41;
      }
      *(_DWORD *)v15 = -1879048192;
      *(_WORD *)v15 = v12;
      *(_WORD *)(v15 + 6) = v11 & 0x3F | 0x80;
      *(_WORD *)(v15 + 4) = a4;
      v19 = (signed __int32 *)(v15 + 8);
      v24 = v19;
      if ( v28 )
      {
        *v19++ = v16;
        v24 = v19;
      }
      if ( v29 )
      {
        *v19++ = *a3;
      }
      else
      {
        if ( !v30 )
        {
LABEL_29:
          if ( v10 )
          {
            *(_QWORD *)v19 = v32;
            v19 += 2;
            v24 = v19;
          }
          if ( v31 )
          {
            v20 = NtCurrentTeb();
            v39 = v20;
            UniqueThread = (signed __int32)v20->ClientId.UniqueThread;
            *v24 = UniqueThread;
            UniqueProcess = (signed __int32)v20->ClientId.UniqueProcess;
            v24[1] = UniqueProcess;
            v19 = v24 + 2;
          }
          v26 = (__int64)a5;
          while ( 1 )
          {
            v21 = v13 + 8;
            v26 = v21;
            v22 = *(const void **)(v21 - 8);
            v40 = v22;
            if ( !v22 )
              break;
            v13 = v21 + 8;
            v26 = v13;
            v23 = *(_QWORD *)(v13 - 8);
            memmove(v19, v22, v23);
            v19 = (signed __int32 *)((char *)v19 + v23);
          }
          _InterlockedDecrement((volatile signed __int32 *)(v33 + 12));
          goto LABEL_37;
        }
        *(_OWORD *)v19 = *(_OWORD *)a3;
        v19 += 4;
      }
      v24 = v19;
      goto LABEL_29;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v9 + 8));
  }
  return 4201LL;
}
