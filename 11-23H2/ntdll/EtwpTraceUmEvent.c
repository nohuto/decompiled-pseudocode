/*
 * XREFs of EtwpTraceUmEvent @ 0x180125BB4
 * Callers:
 *     EtwLogTraceEvent @ 0x1800B1D50 (EtwLogTraceEvent.c)
 *     EtwTraceEventInstance @ 0x1801251E0 (EtwTraceEventInstance.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x18005A758 (EtwpReserveTraceBuffer.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     EtwpDemuxUmTraceHandle @ 0x180125560 (EtwpDemuxUmTraceHandle.c)
 *     EtwpRelogEvent @ 0x1801259C4 (EtwpRelogEvent.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpTraceUmEvent(unsigned __int16 a1, unsigned __int16 *a2, unsigned int a3, int a4)
{
  size_t v4; // r12
  _DWORD *v6; // rsi
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int16 v10; // r13
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edx
  unsigned int v14; // ebx
  unsigned int i; // ecx
  int v16; // r13d
  struct _TEB *v17; // rax
  LARGE_INTEGER *v18; // r9
  size_t v19; // r14
  char *v20; // rax
  char *v21; // rdi
  unsigned int j; // r12d
  const void *v23; // rdx
  unsigned int v24; // ecx
  __int64 v25; // rbx
  unsigned __int64 v26; // rax
  struct _TEB *v27; // rax
  char *v28; // rcx
  unsigned int v29; // [rsp+30h] [rbp-1B8h]
  unsigned int v30; // [rsp+34h] [rbp-1B4h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-1B0h]
  unsigned int v32; // [rsp+3Ch] [rbp-1ACh]
  int UniqueThread; // [rsp+40h] [rbp-1A8h]
  unsigned int v34; // [rsp+44h] [rbp-1A4h]
  int v35; // [rsp+48h] [rbp-1A0h]
  unsigned int v36; // [rsp+4Ch] [rbp-19Ch]
  int v37; // [rsp+50h] [rbp-198h]
  void *v38; // [rsp+58h] [rbp-190h]
  __int64 v39; // [rsp+60h] [rbp-188h] BYREF
  unsigned __int64 v40; // [rsp+68h] [rbp-180h] BYREF
  __int64 v41; // [rsp+70h] [rbp-178h]
  int UniqueProcess; // [rsp+78h] [rbp-170h]
  char *v43; // [rsp+80h] [rbp-168h]
  struct _TEB *v44; // [rsp+88h] [rbp-160h]
  struct _TEB *v45; // [rsp+90h] [rbp-158h]
  _CLIENT_ID *p_ClientId; // [rsp+98h] [rbp-150h]
  void *Src[32]; // [rsp+A0h] [rbp-148h] BYREF

  UniqueThread = a4;
  v4 = a3;
  v39 = 0LL;
  v6 = 0LL;
  v41 = 0LL;
  v32 = 0;
  v40 = 0LL;
  v30 = a1 & 0x7FFF;
  if ( !EtwpLoggerArray )
    return 4201LL;
  if ( (a1 & 0x7FFFu) < 0x40 || (result = EtwpDemuxUmTraceHandle(a1, &v30), !(_DWORD)result) )
  {
    v8 = 2LL * v30;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v30 + 8));
    v6 = *(_DWORD **)(EtwpLoggerArray + 8 * v8);
    if ( (*(_BYTE *)(EtwpLoggerArray + 8 * v8) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v30 + 8));
      return 4201LL;
    }
    v41 = *(_QWORD *)(EtwpLoggerArray + 8 * v8);
    result = 0LL;
  }
  v29 = result;
  if ( !(_DWORD)result )
  {
    v9 = *a2;
    v31 = v9;
    if ( v9 >= (unsigned int)v4 )
    {
      v37 = *((_DWORD *)a2 + 11);
      v10 = v37;
      if ( (v37 & 0x200000) != 0 )
      {
        v11 = EtwpRelogEvent((__int64)v6, (__int64)a2);
      }
      else
      {
        v35 = v37 & 0x100000;
        if ( (v37 & 0x100000) != 0 )
        {
          v12 = v9 - v4;
          if ( v12 > 0x100 )
          {
            v29 = 13;
            goto LABEL_46;
          }
          memset_thunk_772440563353939046(Src, 0, 0x100uLL);
          if ( v12 )
            memmove(Src, (char *)a2 + v4, v12);
          v13 = v4;
          v31 = v4;
          v14 = v12 >> 4;
          v32 = v14;
          for ( i = 0; ; ++i )
          {
            v34 = i;
            if ( i >= v14 )
              break;
            v13 += LODWORD(Src[2 * i + 1]);
            v31 = v13;
            if ( v13 < LODWORD(Src[2 * i + 1]) )
            {
              v29 = 234;
              goto LABEL_46;
            }
          }
        }
        v16 = v10 & 0x200;
        v17 = NtCurrentTeb();
        v44 = v17;
        v18 = (LARGE_INTEGER *)&v40;
        if ( v16 )
          v18 = 0LL;
        v19 = v31;
        v20 = (char *)EtwpReserveTraceBuffer((__int64)v6, v31, v17->CurrentIdealProcessor.Reserved, v18, &v39);
        v21 = v20;
        v43 = v20;
        if ( v20 )
        {
          if ( v35 )
          {
            v38 = &v20[v4];
            memmove(v20, a2, v4);
            for ( j = 0; ; ++j )
            {
              v36 = j;
              if ( j >= v32 )
                break;
              v23 = Src[2 * j];
              v24 = (unsigned int)Src[2 * j + 1];
              if ( v23 && v24 )
              {
                v25 = v24;
                memmove(v38, v23, v24);
                v38 = (char *)v38 + v25;
              }
            }
          }
          else
          {
            memmove(v20, a2, v19);
          }
          if ( (v37 & 0x80000) != 0 )
            *(_OWORD *)(v21 + 24) = *(_OWORD *)*((_QWORD *)a2 + 3);
          if ( !v16 )
          {
            v26 = v40;
            *((_QWORD *)v21 + 2) = v40;
            if ( v6[4] != 3 )
              v26 = __rdtsc();
            *((_QWORD *)v21 + 5) = v26;
          }
          *(_DWORD *)v21 = UniqueThread | v19;
          v27 = NtCurrentTeb();
          v45 = v27;
          p_ClientId = &v27->ClientId;
          UniqueThread = (int)v27->ClientId.UniqueThread;
          v28 = v43;
          *((_DWORD *)v43 + 2) = UniqueThread;
          UniqueProcess = (int)v27->ClientId.UniqueProcess;
          *((_DWORD *)v28 + 3) = UniqueProcess;
          _InterlockedDecrement((volatile signed __int32 *)(v39 + 12));
          goto LABEL_46;
        }
        if ( (unsigned int)v19 <= 0xFFF8 )
          v11 = v6[49] < (unsigned int)v19 ? 234 : 8;
        else
          v11 = 534;
      }
      v29 = v11;
    }
    else
    {
      v29 = 87;
    }
LABEL_46:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * (unsigned int)v6[5] + 8));
    return v29;
  }
  return result;
}
