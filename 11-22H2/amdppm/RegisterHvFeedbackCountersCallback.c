/*
 * XREFs of RegisterHvFeedbackCountersCallback @ 0x1C0024F10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     DecodeGenAddressToHvPerfReg @ 0x1C002485C (DecodeGenAddressToHvPerfReg.c)
 */

__int64 __fastcall RegisterHvFeedbackCountersCallback(__int64 a1)
{
  unsigned __int8 v2; // cl
  unsigned int v3; // edx
  __int64 v4; // r8
  _BYTE *v5; // rax
  int v6; // esi
  _DWORD *Pool2; // r12
  _QWORD *v8; // rcx
  __int64 v9; // r11
  _DWORD *v10; // r15
  _DWORD *v11; // r13
  __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // rsi
  _DWORD *v15; // rcx
  _DWORD *v16; // rdx
  bool v17; // al
  unsigned __int64 (__fastcall *v18)(unsigned __int64 *, char, unsigned __int64 *, unsigned __int64 *); // rax
  __int64 v19; // rax
  int LpIndexFromProcessorIndex; // eax
  unsigned int i; // ecx
  __int64 v22; // rax
  _QWORD *v24; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+38h] [rbp-40h]
  __int64 v26; // [rsp+40h] [rbp-38h]
  __int64 v27; // [rsp+48h] [rbp-30h]
  _DWORD *P; // [rsp+50h] [rbp-28h]
  __int128 v29; // [rsp+58h] [rbp-20h] BYREF
  __int64 v30; // [rsp+68h] [rbp-10h]
  unsigned int v31; // [rsp+C0h] [rbp+48h]
  int v32; // [rsp+C8h] [rbp+50h]
  __int64 v33; // [rsp+D0h] [rbp+58h]
  __int64 v34; // [rsp+D8h] [rbp+60h]

  LODWORD(v30) = 0;
  v2 = 0;
  v29 = 0LL;
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
        v8 = *(_QWORD **)(a1 + 560);
        LODWORD(v9) = 0;
        v10 = Pool2;
        v11 = P;
        v31 = 0;
        v24 = v8;
        v27 = *(_QWORD *)(a1 + 552);
        while ( (unsigned int)v9 < *(_DWORD *)(a1 + 16) )
        {
          *v10 = 0;
          v12 = 0LL;
          while ( 1 )
          {
            v32 = v12;
            if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 36) )
              break;
            v13 = *(_QWORD *)(a1 + 544);
            if ( *(_BYTE *)(v13 + 24 * v12 + 17) && *(_BYTE *)(v13 + 24 * v12 + 16) )
            {
              v34 = *v8;
              v14 = *v8 + 56LL;
              v26 = v14;
              v15 = &v10[4 * *v10 + 2 + 2 * *v10];
              v9 = v31;
              v33 = (__int64)v15;
              if ( *(unsigned __int64 (__fastcall **)(__int64, __int64, unsigned __int64 *, unsigned __int64 *))(v34 + 48) == GetCpcDifferentialFeedback )
              {
                v25 = *(_QWORD *)v14;
                v6 = DecodeGenAddressToHvPerfReg((unsigned __int8 *)(*(_QWORD *)v14 + 296LL), (__int64)(v15 + 2));
                if ( v6 < 0 )
                  goto LABEL_40;
                v6 = DecodeGenAddressToHvPerfReg((unsigned __int8 *)(v25 + 272), v33);
                if ( v6 < 0 )
                  goto LABEL_40;
                v14 = v26;
                v17 = 0;
                v15 = v16;
              }
              else
              {
                v18 = *(unsigned __int64 (__fastcall **)(unsigned __int64 *, char, unsigned __int64 *, unsigned __int64 *))(v13 + 24 * v12);
                *((_QWORD *)v15 + 1) = 0x100040000000E8LL;
                *(_QWORD *)v15 = 0x100040000000E7LL;
                v17 = v18 != PerfReadWrappingCounter;
              }
              *((_BYTE *)v15 + 16) = v17;
              v19 = 32 * v9;
              if ( *(_DWORD *)(32 * v9 + v27 + 28) )
              {
                v11[1] = -1;
                LpIndexFromProcessorIndex = *(_DWORD *)(v19 + v27);
              }
              else
              {
                v11[1] = *(_DWORD *)(v19 + v27);
                LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex();
                LODWORD(v12) = v32;
                LODWORD(v9) = v31;
              }
              v11[2] = LpIndexFromProcessorIndex;
              *v11 = *v10;
              *(_QWORD *)v14 = v11;
              *(_QWORD *)(v34 + 48) = PerfHvReadFeedback;
              ++*v10;
              v8 = v24;
              v11 += 8;
            }
            v12 = (unsigned int)(v12 + 1);
            v24 = ++v8;
          }
          v10 += 26;
          LODWORD(v9) = v9 + 1;
          v31 = v9;
        }
        for ( i = 0; i < *(_DWORD *)(a1 + 36); ++i )
        {
          v22 = *(_QWORD *)(a1 + 544);
          if ( *(_BYTE *)(v22 + 24LL * i + 17) && *(_BYTE *)(v22 + 24LL * i + 16) )
            *(_BYTE *)(v22 + 24LL * i + 16) = 0;
        }
        LODWORD(v29) = 72;
        *((_QWORD *)&v29 + 1) = Pool2;
        v30 = a1;
        if ( qword_1C0012830 )
        {
          v6 = qword_1C0012830(&v29);
          if ( v6 >= 0 )
            goto LABEL_41;
        }
        else
        {
          v6 = -1073741822;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x12u,
            (__int64)&WPP_1134dcafb4bf3ea3981945bba7864b28_Traceguids,
            v6);
      }
      else
      {
        v6 = -1073741670;
      }
LABEL_40:
      ExFreePoolWithTag(P, (ULONG)1919119952);
      if ( !Pool2 )
        return (unsigned int)v6;
LABEL_41:
      ExFreePoolWithTag(Pool2, (ULONG)1919119952);
      return (unsigned int)v6;
    }
  }
  LODWORD(v29) = 72;
  *((_QWORD *)&v29 + 1) = 0LL;
  v30 = a1;
  if ( qword_1C0012830 )
  {
    v6 = qword_1C0012830(&v29);
    if ( v6 >= 0 )
      return (unsigned int)v6;
  }
  else
  {
    v6 = -1073741822;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x11u,
      (__int64)&WPP_1134dcafb4bf3ea3981945bba7864b28_Traceguids,
      v6);
  return (unsigned int)v6;
}
