/*
 * XREFs of RegisterHvFeedbackCountersCallback @ 0x1C0024300
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     DecodeGenAddressToHvPerfReg @ 0x1C0023BAC (DecodeGenAddressToHvPerfReg.c)
 */

__int64 __fastcall RegisterHvFeedbackCountersCallback(__int64 a1)
{
  unsigned int v2; // r13d
  unsigned __int8 v3; // cl
  unsigned int v4; // edx
  __int64 v5; // r8
  _BYTE *v6; // rax
  int v7; // esi
  _DWORD *Pool2; // r15
  __int64 *v9; // r8
  _DWORD *v10; // r14
  _DWORD *v11; // r12
  unsigned int v12; // r10d
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  _DWORD *v16; // r9
  __int64 v17; // r11
  __int64 v18; // r11
  bool v19; // al
  unsigned __int64 (__fastcall *v20)(unsigned __int64 *, char, unsigned __int64 *, unsigned __int64 *); // rax
  __int64 v21; // rax
  int LpIndexFromProcessorIndex; // eax
  unsigned int i; // ecx
  __int64 v24; // rax
  __int64 v26; // [rsp+30h] [rbp-78h]
  _DWORD *P; // [rsp+38h] [rbp-70h]
  __int128 v28; // [rsp+40h] [rbp-68h] BYREF
  __int64 v29; // [rsp+50h] [rbp-58h]
  unsigned int v30; // [rsp+B0h] [rbp+8h]
  __int64 v31; // [rsp+B8h] [rbp+10h]
  __int64 v32; // [rsp+C0h] [rbp+18h]
  __int64 *v33; // [rsp+C8h] [rbp+20h]

  v2 = 0;
  LODWORD(v29) = 0;
  v3 = 0;
  v28 = 0LL;
  v4 = *(_DWORD *)(a1 + 36);
  if ( v4 )
  {
    v5 = v4;
    v6 = (_BYTE *)(*(_QWORD *)(a1 + 544) + 16LL);
    do
    {
      if ( v6[1] && *v6 )
        ++v3;
      v6 += 24;
      --v5;
    }
    while ( v5 );
    if ( v3 )
    {
      P = (_DWORD *)ExAllocatePool2(64LL, 32 * *(_DWORD *)(a1 + 16) * (unsigned int)v3, 1919119952LL);
      if ( !P )
        return (unsigned int)-1073741670;
      Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(104 * *(_DWORD *)(a1 + 16)), 1919119952LL);
      if ( Pool2 )
      {
        v9 = *(__int64 **)(a1 + 560);
        v10 = Pool2;
        v11 = P;
        v12 = 0;
        v33 = v9;
        v26 = *(_QWORD *)(a1 + 552);
        v30 = 0;
        while ( v12 < *(_DWORD *)(a1 + 16) )
        {
          *v10 = 0;
          while ( v2 < *(_DWORD *)(a1 + 36) )
          {
            v13 = *(_QWORD *)(a1 + 544);
            if ( *(_BYTE *)(v13 + 24LL * v2 + 17) && *(_BYTE *)(v13 + 24LL * v2 + 16) )
            {
              v14 = *v9;
              v15 = (unsigned int)*v10;
              v32 = *v9;
              v31 = 3 * v15;
              v16 = &v10[6 * v15];
              if ( *(unsigned __int64 (__fastcall **)(__int64, __int64, unsigned __int64 *, unsigned __int64 *))(*v9 + 48) == GetCpcDifferentialFeedback )
              {
                v7 = DecodeGenAddressToHvPerfReg((unsigned __int8 *)(*(_QWORD *)(v14 + 56) + 296LL), (__int64)(v16 + 4));
                if ( v7 < 0 )
                  goto LABEL_40;
                v7 = DecodeGenAddressToHvPerfReg((unsigned __int8 *)(v17 + 272), (__int64)&v10[2 * v31 + 2]);
                if ( v7 < 0 )
                  goto LABEL_40;
                v14 = v32;
                v19 = 0;
              }
              else
              {
                v20 = *(unsigned __int64 (__fastcall **)(unsigned __int64 *, char, unsigned __int64 *, unsigned __int64 *))(v13 + 24LL * v2);
                v18 = v31;
                *((_QWORD *)v16 + 2) = 0x100040000000E8LL;
                v19 = v20 != PerfReadWrappingCounter;
                *((_QWORD *)v16 + 1) = 0x100040000000E7LL;
              }
              LOBYTE(v10[2 * v18 + 6]) = v19;
              v21 = 32LL * v12;
              if ( *(_DWORD *)(v21 + v26 + 28) )
              {
                v11[1] = -1;
                LpIndexFromProcessorIndex = *(_DWORD *)(v21 + v26);
              }
              else
              {
                v11[1] = *(_DWORD *)(v21 + v26);
                LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex();
                v12 = v30;
              }
              v9 = v33;
              v11[2] = LpIndexFromProcessorIndex;
              *v11 = *v10;
              *(_QWORD *)(v14 + 56) = v11;
              *(_QWORD *)(v14 + 48) = PerfHvReadFeedback;
              ++*v10;
              v11 += 8;
            }
            ++v2;
            v33 = ++v9;
          }
          ++v12;
          v10 += 26;
          v30 = v12;
          v2 = 0;
        }
        for ( i = 0; i < *(_DWORD *)(a1 + 36); ++i )
        {
          v24 = *(_QWORD *)(a1 + 544);
          if ( *(_BYTE *)(v24 + 24LL * i + 17) && *(_BYTE *)(v24 + 24LL * i + 16) )
            *(_BYTE *)(v24 + 24LL * i + 16) = 0;
        }
        LODWORD(v28) = 69;
        *((_QWORD *)&v28 + 1) = Pool2;
        v29 = a1;
        if ( qword_1C00117A0 )
        {
          v7 = qword_1C00117A0(&v28);
          if ( v7 >= 0 )
            goto LABEL_41;
        }
        else
        {
          v7 = -1073741822;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x12u,
            (__int64)&WPP_b02ab77d5f99361f7885e64d10ae00da_Traceguids,
            v7);
      }
      else
      {
        v7 = -1073741670;
      }
LABEL_40:
      ExFreePoolWithTag(P, (ULONG)1919119952);
      if ( !Pool2 )
        return (unsigned int)v7;
LABEL_41:
      ExFreePoolWithTag(Pool2, (ULONG)1919119952);
      return (unsigned int)v7;
    }
  }
  LODWORD(v28) = 69;
  *((_QWORD *)&v28 + 1) = 0LL;
  v29 = a1;
  if ( qword_1C00117A0 )
  {
    v7 = qword_1C00117A0(&v28);
    if ( v7 >= 0 )
      return (unsigned int)v7;
  }
  else
  {
    v7 = -1073741822;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x11u,
      (__int64)&WPP_b02ab77d5f99361f7885e64d10ae00da_Traceguids,
      v7);
  return (unsigned int)v7;
}
