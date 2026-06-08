/*
 * XREFs of RegisterHvFeedbackCountersCallback @ 0x1C0038AF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     DecodeGenAddressToHvPerfReg @ 0x1C003839C (DecodeGenAddressToHvPerfReg.c)
 */

__int64 __fastcall RegisterHvFeedbackCountersCallback(__int64 a1)
{
  unsigned __int8 v2; // cl
  unsigned int v3; // edx
  __int64 v4; // r8
  _BYTE *v5; // rax
  int v6; // esi
  _DWORD *Pool2; // r15
  __int64 *v8; // r8
  _DWORD *v9; // r14
  _DWORD *v10; // r12
  unsigned int v11; // r10d
  unsigned int j; // r13d
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  _DWORD *v16; // r9
  __int64 v17; // r11
  __int64 v18; // r11
  bool v19; // al
  __int64 (__fastcall *v20)(__int64, char, _QWORD *, _QWORD *); // rax
  __int64 v21; // rax
  int LpIndexFromProcessorIndex; // eax
  unsigned int k; // ecx
  __int64 v24; // rax
  __int64 v26; // [rsp+30h] [rbp-78h]
  _DWORD *P; // [rsp+38h] [rbp-70h]
  __int128 v28; // [rsp+40h] [rbp-68h] BYREF
  __int64 v29; // [rsp+50h] [rbp-58h]
  unsigned int i; // [rsp+B0h] [rbp+8h]
  __int64 v31; // [rsp+B8h] [rbp+10h]
  __int64 v32; // [rsp+C0h] [rbp+18h]
  __int64 *v33; // [rsp+C8h] [rbp+20h]

  LODWORD(v29) = 0;
  v2 = 0;
  v28 = 0LL;
  v3 = *(_DWORD *)(a1 + 36);
  if ( v3 )
  {
    v4 = v3;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 544) + 16LL);
    do
    {
      if ( v5[1] && *v5 )
        ++v2;
      v5 += 24;
      --v4;
    }
    while ( v4 );
    if ( v2 )
    {
      P = (_DWORD *)ExAllocatePool2(64LL, 32 * *(_DWORD *)(a1 + 16) * (unsigned int)v2, 1919119952LL);
      if ( !P )
        return (unsigned int)-1073741670;
      Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(104 * *(_DWORD *)(a1 + 16)), 1919119952LL);
      if ( Pool2 )
      {
        v8 = *(__int64 **)(a1 + 560);
        v9 = Pool2;
        v10 = P;
        v11 = 0;
        v33 = v8;
        v26 = *(_QWORD *)(a1 + 552);
        for ( i = 0; v11 < *(_DWORD *)(a1 + 16); i = v11 )
        {
          *v9 = 0;
          for ( j = 0; j < *(_DWORD *)(a1 + 36); v33 = v8 )
          {
            v13 = *(_QWORD *)(a1 + 544);
            if ( *(_BYTE *)(v13 + 24LL * j + 17) && *(_BYTE *)(v13 + 24LL * j + 16) )
            {
              v14 = *v8;
              v15 = (unsigned int)*v9;
              v32 = *v8;
              v31 = 3 * v15;
              v16 = &v9[6 * v15];
              if ( *(unsigned __int64 (__fastcall **)(__int64, __int64, unsigned __int64 *, unsigned __int64 *))(*v8 + 48) == GetCpcDifferentialFeedback )
              {
                v6 = DecodeGenAddressToHvPerfReg((unsigned __int8 *)(*(_QWORD *)(v14 + 56) + 296LL), (__int64)(v16 + 4));
                if ( v6 < 0 )
                  goto LABEL_38;
                v6 = DecodeGenAddressToHvPerfReg((unsigned __int8 *)(v17 + 272), (__int64)&v9[2 * v31 + 2]);
                if ( v6 < 0 )
                  goto LABEL_38;
                v14 = v32;
                v19 = 0;
              }
              else
              {
                v20 = *(__int64 (__fastcall **)(__int64, char, _QWORD *, _QWORD *))(v13 + 24LL * j);
                v18 = v31;
                *((_QWORD *)v16 + 2) = 0x100040000000E8LL;
                v19 = v20 != PerfReadWrappingCounter;
                *((_QWORD *)v16 + 1) = 0x100040000000E7LL;
              }
              LOBYTE(v9[2 * v18 + 6]) = v19;
              v21 = 32LL * v11;
              if ( *(_DWORD *)(v21 + v26 + 28) )
              {
                v10[1] = -1;
                LpIndexFromProcessorIndex = *(_DWORD *)(v21 + v26);
              }
              else
              {
                v10[1] = *(_DWORD *)(v21 + v26);
                LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex();
                v11 = i;
              }
              v8 = v33;
              v10[2] = LpIndexFromProcessorIndex;
              *v10 = *v9;
              *(_QWORD *)(v14 + 56) = v10;
              v10 += 8;
              *(_QWORD *)(v14 + 48) = PerfHvReadFeedback;
              ++*v9;
            }
            ++v8;
            ++j;
          }
          ++v11;
          v9 += 26;
        }
        for ( k = 0; k < *(_DWORD *)(a1 + 36); ++k )
        {
          v24 = *(_QWORD *)(a1 + 544);
          if ( *(_BYTE *)(v24 + 24LL * k + 17) && *(_BYTE *)(v24 + 24LL * k + 16) )
            *(_BYTE *)(v24 + 24LL * k + 16) = 0;
        }
        LODWORD(v28) = 69;
        *((_QWORD *)&v28 + 1) = Pool2;
        v29 = a1;
        if ( qword_1C001E040 )
        {
          v6 = qword_1C001E040(&v28);
          if ( v6 >= 0 )
            goto LABEL_39;
        }
        else
        {
          v6 = -1073741822;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x12u,
            (__int64)&WPP_b02ab77d5f99361f7885e64d10ae00da_Traceguids,
            v6);
      }
      else
      {
        v6 = -1073741670;
      }
LABEL_38:
      ExFreePoolWithTag(P, (ULONG)1919119952);
      if ( !Pool2 )
        return (unsigned int)v6;
LABEL_39:
      ExFreePoolWithTag(Pool2, (ULONG)1919119952);
      return (unsigned int)v6;
    }
  }
  LODWORD(v28) = 69;
  *((_QWORD *)&v28 + 1) = 0LL;
  v29 = a1;
  if ( qword_1C001E040 )
  {
    v6 = qword_1C001E040(&v28);
    if ( v6 >= 0 )
      return (unsigned int)v6;
  }
  else
  {
    v6 = -1073741822;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x11u,
      (__int64)&WPP_b02ab77d5f99361f7885e64d10ae00da_Traceguids,
      v6);
  return (unsigned int)v6;
}
