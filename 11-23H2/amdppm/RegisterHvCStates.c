/*
 * XREFs of RegisterHvCStates @ 0x1C0025518
 * Callers:
 *     RegisterHvIdleStates @ 0x1C0025BA0 (RegisterHvIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004990 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     DecodeAcpi2CState @ 0x1C0023BF0 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterHvCStates(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int *Pool2; // rdi
  int v4; // ebx
  unsigned __int8 v5; // r14
  unsigned int v6; // edx
  unsigned int i; // ebx
  __int64 v8; // r10
  char v9; // cl
  __int64 j; // r8
  char v11; // cl
  unsigned int *v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  unsigned int *v17; // [rsp+38h] [rbp-50h]
  __int128 v18; // [rsp+40h] [rbp-48h] BYREF
  int v19; // [rsp+50h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 528);
  v19 = 0;
  v18 = 0LL;
  if ( v1 && *(_DWORD *)v1 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, 392LL, 1919119952LL);
    if ( Pool2 )
    {
      v5 = 1;
      HIDWORD(v16) = *(_DWORD *)(a1 + 48);
      LODWORD(v16) = 72;
      v17 = Pool2;
      if ( *(_BYTE *)(v1 + 16) != 1 )
      {
        *(_QWORD *)(Pool2 + 5) = 0LL;
        Pool2[4] = 1;
        LOBYTE(v18) = 127;
        BYTE12(v18) = 1;
        HIWORD(v18) = 0;
        v19 = 0;
        DecodeAcpi2CState(a1, (__int64)&v18, (__int64)(Pool2 + 2), 0LL, 0LL);
        ++*Pool2;
      }
      v6 = *(_DWORD *)v1;
      for ( i = 0; i < *(_DWORD *)v1; ++v5 )
      {
        if ( v5 > 3u )
          break;
        v8 = *Pool2;
        if ( (unsigned int)v8 >= 0x10 )
          break;
        v9 = *(_BYTE *)(v1 + 20LL * i + 16);
        if ( (unsigned __int8)v9 > 3u )
          v9 = 3;
        if ( v9 == v5 )
        {
          for ( j = i + 1; (unsigned int)j < v6; j = (unsigned int)(j + 1) )
          {
            v11 = *(_BYTE *)(v1 + 20 * j + 16);
            if ( (unsigned __int8)v11 > 3u )
              v11 = 3;
            if ( v11 != v5 || *(_DWORD *)(v1 + 20 * j + 20) >= *(_DWORD *)(v1 + 20 * (i + 1LL)) )
              break;
            ++i;
          }
          v12 = &Pool2[4 * v8 + 2 + 2 * v8];
          v12[2] = v5;
          v13 = v1 + 4 * (i + 4LL * i + 1);
          v12[3] = *(unsigned __int16 *)(v13 + 14);
          v12[4] = *(_DWORD *)(v13 + 16);
          if ( (int)DecodeAcpi2CState(a1, v13, (__int64)v12, 0LL, 0LL) < 0 )
            _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
          else
            ++*Pool2;
        }
        else
        {
          --i;
        }
        v6 = *(_DWORD *)v1;
        ++i;
      }
      if ( *Pool2 )
      {
        if ( qword_1C0012828 )
          v14 = qword_1C0012828(&v16);
        else
          v14 = -1073741822;
        v4 = 0;
        if ( v14 != -1073741637 )
          v4 = v14;
        if ( v4 >= 0 )
        {
          v4 = 0;
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0xDu,
            (__int64)&WPP_1134dcafb4bf3ea3981945bba7864b28_Traceguids,
            v4,
            v16,
            v17);
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
