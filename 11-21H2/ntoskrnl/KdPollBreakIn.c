/*
 * XREFs of KdPollBreakIn @ 0x1402223B0
 * Callers:
 *     sub_140222368 @ 0x140222368 (sub_140222368.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 *     sub_14056E8F8 @ 0x14056E8F8 (sub_14056E8F8.c)
 */

char KdPollBreakIn()
{
  char v0; // bl
  __int16 v1; // di
  __int64 LockArray_high; // rcx
  unsigned int *v3; // rdx
  _DWORD **v4; // rsi
  bool v5; // di
  unsigned __int64 *v6; // rcx
  unsigned __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v9; // rcx
  struct _KPRCB *v10; // rcx
  __int64 v11; // rdx
  _DWORD *v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // rax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int16 v20; // [rsp+40h] [rbp-8h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !byte_140C09804 || KdEventLoggingEnabled )
  {
    v0 = 0;
    if ( !(_BYTE)KdDebuggerEnabled && !KdEventLoggingEnabled )
      return v0;
    v1 = v20;
    _disable();
    LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
    v3 = (unsigned int *)qword_140C40520[LockArray_high];
    v4 = (_DWORD **)&qword_140C40520[LockArray_high];
    v5 = (v1 & 0x200) != 0;
    if ( v3 )
    {
      v6 = (unsigned __int64 *)&v3[4 * *v3 + 4];
      v7 = __rdtsc();
      *v6 = ((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7;
      v6[1] = 4 * ((unsigned __int8)KdDebuggerNotPresent & 1u);
    }
    if ( BYTE4(xmmword_140C31E60) )
    {
      v0 = 1;
      BYTE4(xmmword_140C31E60) = 0;
    }
    else
    {
      if ( (BYTE6(xmmword_140D06900) & 0x21) == 0 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v9 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v17 = *(_DWORD *)(v9 + 24);
            *(_DWORD *)(v9 + 24) = v17 + 1;
            if ( v17 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140D31280, 0LL) )
        {
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v16 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v18 = *(_DWORD *)(v16 + 24) - 1;
              *(_DWORD *)(v16 + 24) = v18;
              if ( !v18 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          _mm_pause();
          goto LABEL_14;
        }
        goto LABEL_9;
      }
      if ( (unsigned __int8)sub_14056E8F8(&qword_140D31280) )
      {
LABEL_9:
        if ( !(unsigned int)KdReceivePacket(8LL, 0LL, 0LL, 0LL, 0LL) )
          v0 = 1;
        if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
          sub_14056E8CC(&qword_140D31280, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)&qword_140D31280, 0LL);
        v10 = KeGetCurrentPrcb();
        v11 = *((_QWORD *)v10 + 4375);
        if ( v11 )
        {
          if ( *((_BYTE *)v10 + 32) <= 1u )
          {
            v19 = *(_DWORD *)(v11 + 24) - 1;
            *(_DWORD *)(v11 + 24) = v19;
            if ( !v19 )
              sub_140418E4C(v10);
          }
        }
      }
    }
LABEL_14:
    v0 &= (unsigned __int8)KdDebuggerEnabled;
    v12 = *v4;
    byte_140C343D0 |= v0;
    if ( v12 )
    {
      v13 = (unsigned int)*v12;
      v14 = __rdtsc();
      *(_QWORD *)&v12[4 * v13 + 6] = v12[4 * v13 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1u)) | ((((unsigned __int64)HIDWORD(v14) << 32) | (unsigned int)v14) - *(_QWORD *)&v12[4 * v13 + 4]) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (_DWORD)v13 == 254 )
        *v12 = 0;
      else
        *v12 = v13 + 1;
    }
    if ( v5 )
      _enable();
    return v0;
  }
  return 0;
}
