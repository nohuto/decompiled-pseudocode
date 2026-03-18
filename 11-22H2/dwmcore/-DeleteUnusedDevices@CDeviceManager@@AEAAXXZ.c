/*
 * XREFs of ?DeleteUnusedDevices@CDeviceManager@@AEAAXXZ @ 0x1800DA320
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x1800764A4 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800895E0 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z @ 0x1801049FC (--$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z.c)
 */

void __fastcall CDeviceManager::DeleteUnusedDevices(CDeviceManager *this)
{
  __int64 v1; // rbx
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  unsigned __int64 CurrentFrameId; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rsi
  __int64 v7; // r14

  EnterCriticalSection(&stru_1803EA130);
  v1 = qword_1803EA158;
  v2 = (_QWORD *)xmmword_1803EA160;
  while ( (_QWORD *)v1 != v2 )
  {
    v3 = *(_QWORD *)v1;
    if ( *(int *)(*(_QWORD *)v1 + 1088LL) >= 0
      && (*(_DWORD *)(v3 + 8) != 1
       || *(_DWORD *)(*(_QWORD *)(v3 + 184) + 16LL)
       || *(_DWORD *)(v3 + 1176)
       || (CurrentFrameId = GetCurrentFrameId(), CurrentFrameId < *(_QWORD *)(v5 + 1496))) )
    {
      v1 += 16LL;
    }
    else
    {
      v6 = (_QWORD *)(v1 + 16);
      if ( (_QWORD *)(v1 + 16) != v2 )
      {
        v7 = v1;
        do
        {
          if ( (_QWORD *)v7 != v6 )
          {
            ReleaseInterface<CD3DDevice>(v7);
            *(_QWORD *)v7 = *v6;
            *(_BYTE *)(v7 + 8) = *(_BYTE *)(v7 + 24);
            *v6 = 0LL;
          }
          v6 += 2;
          v7 += 16LL;
        }
        while ( v6 != v2 );
        v2 = (_QWORD *)xmmword_1803EA160;
      }
      ReleaseInterface<CD3DDevice>(v2 - 2);
      v2 = (_QWORD *)(xmmword_1803EA160 - 16);
      *(_QWORD *)&xmmword_1803EA160 = xmmword_1803EA160 - 16;
    }
  }
  LeaveCriticalSection(&stru_1803EA130);
}
