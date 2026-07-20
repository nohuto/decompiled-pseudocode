/*
 * XREFs of SmpWaitForSubSysStartup @ 0x1400024F0
 * Callers:
 *     SmpTerminateCSR @ 0x140001660 (SmpTerminateCSR.c)
 *     wmain @ 0x140001BC0 (wmain.c)
 *     SmpHandleConnectionRequest @ 0x140003230 (SmpHandleConnectionRequest.c)
 *     SmpLoadSubSystem @ 0x1400199F8 (SmpLoadSubSystem.c)
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x140002444 (SmpDereferenceKnownSubSys.c)
 *     SmpLockKnownSubSysList @ 0x140002614 (SmpLockKnownSubSysList.c)
 *     SmpCheckSubSysStatus @ 0x140003C20 (SmpCheckSubSysStatus.c)
 *     SmpWaitForStatusChange @ 0x14001AFA4 (SmpWaitForStatusChange.c)
 */

_QWORD *__fastcall SmpWaitForSubSysStartup(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v7; // r15d
  _QWORD *result; // rax
  _QWORD *v9; // rdi
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rsi
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx

  v7 = a1;
  result = (_QWORD *)SmpLockKnownSubSysList(a1, (a2 & 2) != 0, a4);
  v9 = *(_QWORD **)(a4 + 8);
  if ( (a2 & 2) != 0 )
  {
    while ( (_QWORD *)*v9 == v9 )
      result = (_QWORD *)RtlSleepConditionVariableSRW(&SmpSubSysReadyCondition, v9 + 2, 0LL, 1LL);
  }
  else
  {
LABEL_2:
    for ( result = (_QWORD *)*v9; result != v9; result = (_QWORD *)*result )
    {
      if ( *((_DWORD *)result - 2) == v7 )
      {
        v10 = (volatile signed __int32 *)(result - 9);
        if ( result != (_QWORD *)72 )
        {
          while ( 1 )
          {
            v11 = v10 + 2;
            if ( (a2 & 1) == 0 || (*(_BYTE *)v11 & 1) != 0 )
            {
              if ( !(unsigned int)SmpCheckSubSysStatus(v10) )
              {
                _InterlockedIncrement(v10);
                SmpWaitForStatusChange(v12, 0LL, a4);
                if ( (*(_BYTE *)v11 & 4) != 0 )
                {
                  SmpDereferenceKnownSubSys(v10);
                  goto LABEL_2;
                }
                SmpDereferenceKnownSubSys(v10);
              }
              v13 = v10 + 18;
              result = (_QWORD *)*v13;
              if ( a3 )
              {
                _InterlockedOr(v11, 4u);
                v14 = (_QWORD *)*v13;
                if ( *(_QWORD **)(*v13 + 8LL) != v13
                  || (v15 = (_QWORD *)v13[1], (_QWORD *)*v15 != v13)
                  || (*v15 = v14, v14[1] = v15, v16 = *(_QWORD **)(a3 + 8), *v16 != a3) )
                {
                  __fastfail(3u);
                }
                *v13 = a3;
                v13[1] = v16;
                *v16 = v13;
                *(_QWORD *)(a3 + 8) = v13;
              }
            }
            else
            {
              result = (_QWORD *)*result;
            }
            if ( result != v9 )
            {
              v10 = (volatile signed __int32 *)(result - 9);
              if ( *((_DWORD *)result - 2) == v7 )
                continue;
            }
            return result;
          }
        }
        return result;
      }
    }
  }
  return result;
}
