/*
 * XREFs of RegisterHvLpiStates @ 0x1C003A30C
 * Callers:
 *     RegisterHvIdleStates @ 0x1C002F320 (RegisterHvIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     DecodeAcpiIdleState @ 0x1C002D668 (DecodeAcpiIdleState.c)
 *     RegisterIdleComplete @ 0x1C002D9DC (RegisterIdleComplete.c)
 *     RegisterHvPepContext @ 0x1C003A6BC (RegisterHvPepContext.c)
 */

__int64 __fastcall RegisterHvLpiStates(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *Pool2; // rsi
  int v4; // ebx
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int64 *v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+28h] [rbp-30h]
  _DWORD v13[2]; // [rsp+40h] [rbp-18h] BYREF
  _DWORD *i; // [rsp+48h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 544);
  if ( v1 && *(_DWORD *)(v1 + 16) )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 392LL, 1919119952LL);
    if ( Pool2 )
    {
      v5 = 0LL;
      v13[1] = *(_DWORD *)(a1 + 48);
      v13[0] = 72;
      for ( i = Pool2; (unsigned int)v5 < *(_DWORD *)(v1 + 16); v5 = (unsigned int)(v5 + 1) )
      {
        v6 = (unsigned int)*Pool2;
        if ( (unsigned int)v6 >= 0x10 )
          break;
        v7 = (unsigned __int64 *)&Pool2[4 * v6 + 2 + 2 * v6];
        v8 = 80 * v5;
        if ( (*(_DWORD *)(80 * v5 + v1 + 32) & 1) != 0 )
        {
          v9 = v5 + 1;
          if ( (unsigned int)v5 >= 3 )
            v9 = 3;
          *((_DWORD *)v7 + 2) = v9;
          *(unsigned __int64 *)((char *)v7 + 12) = *(unsigned int *)(v8 + v1 + 28);
          if ( (int)DecodeAcpiIdleState(
                      a1,
                      (char *)(v8 + v1 + 48),
                      0xFFFFFFFF,
                      *(unsigned int *)(v8 + v1 + 36),
                      v7,
                      0LL,
                      0LL,
                      0LL) < 0 )
            _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80000u);
          else
            ++*Pool2;
        }
      }
      if ( *Pool2 )
      {
        if ( qword_1C001F368 )
          v10 = qword_1C001F368(v13);
        else
          v10 = -1073741822;
        v4 = 0;
        if ( v10 != -1073741637 )
          v4 = v10;
        if ( v4 >= 0 )
        {
          v4 = RegisterHvPepContext(a1);
          if ( v4 >= 0 )
          {
            if ( !*(_BYTE *)(a1 + 720) )
            {
              *(_BYTE *)(a1 + 720) = 1;
              RegisterIdleComplete(a1);
            }
            v4 = 0;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v12) = v4;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0xEu,
            (__int64)&WPP_1134dcafb4bf3ea3981945bba7864b28_Traceguids,
            v12);
        }
      }
      else
      {
        v4 = -1073741823;
      }
      ExFreePoolWithTag(Pool2, (ULONG)1919119952);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v4;
}
