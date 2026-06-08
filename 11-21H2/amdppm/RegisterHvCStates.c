/*
 * XREFs of RegisterHvCStates @ 0x1C0024058
 * Callers:
 *     RegisterHvIdleStates @ 0x1C0024720 (RegisterHvIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     DecodeAcpi2CState @ 0x1C0035540 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterHvCStates(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v2; // ebx
  unsigned int *Pool2; // rdi
  unsigned __int8 v5; // r15
  unsigned int v6; // edx
  unsigned int i; // esi
  __int64 v8; // r10
  char v9; // cl
  __int64 j; // r8
  char v11; // cl
  unsigned int *v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  int v15; // esi
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  unsigned int *v18; // [rsp+38h] [rbp-50h]
  __int128 v19; // [rsp+40h] [rbp-48h] BYREF
  int v20; // [rsp+50h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 528);
  v2 = 0;
  v20 = 0;
  v19 = 0LL;
  if ( !v1 || !*(_DWORD *)v1 )
    return (unsigned int)-1073741823;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 392LL, 1919119952LL);
  if ( Pool2 )
  {
    v5 = 1;
    HIDWORD(v17) = *(_DWORD *)(a1 + 48);
    LODWORD(v17) = 69;
    v18 = Pool2;
    if ( *(_BYTE *)(v1 + 16) != 1 )
    {
      *(_QWORD *)(Pool2 + 5) = 0LL;
      Pool2[4] = 1;
      LOBYTE(v19) = 127;
      BYTE12(v19) = 1;
      HIWORD(v19) = 0;
      v20 = 0;
      DecodeAcpi2CState(a1, (unsigned int)&v19, (_DWORD)Pool2 + 8, 0, 0LL);
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
        if ( (int)DecodeAcpi2CState(a1, v13, (_DWORD)v12, 0, 0LL) < 0 )
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
      if ( qword_1C0011798 )
      {
        v14 = qword_1C0011798(&v17);
        v15 = 0;
        if ( v14 != -1073741637 )
          v15 = v14;
        if ( v15 >= 0 )
          goto LABEL_36;
      }
      else
      {
        v15 = -1073741822;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xDu,
          (__int64)&WPP_b02ab77d5f99361f7885e64d10ae00da_Traceguids,
          v15,
          v17,
          v18);
      v2 = v15;
    }
    else
    {
      v2 = -1073741823;
    }
LABEL_36:
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
    return v2;
  }
  return (unsigned int)-1073741670;
}
