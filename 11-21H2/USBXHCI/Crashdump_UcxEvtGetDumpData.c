/*
 * XREFs of Crashdump_UcxEvtGetDumpData @ 0x1C004B0C0
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000182C (CommonBuffer_ReleaseBuffer.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0019A00 (memmove.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C0049F6C (Crashdump_CommonBufferAcquire.c)
 *     Crashdump_FreeDeviceContext @ 0x1C004A1BC (Crashdump_FreeDeviceContext.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C004A540 (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_Register_Initialize @ 0x1C004B720 (Crashdump_Register_Initialize.c)
 *     Crashdump_EventRing_InitializeForDump @ 0x1C004C318 (Crashdump_EventRing_InitializeForDump.c)
 */

__int64 __fastcall Crashdump_UcxEvtGetDumpData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r12
  unsigned int v8; // esi
  _QWORD *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rbp
  _QWORD *Pool2; // rax
  _QWORD *v13; // rbx
  int v14; // edi
  _QWORD **v15; // r14
  int v16; // edx
  const void *v17; // rdi
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  void *v21; // rcx
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // ebp
  unsigned int v26; // r12d
  __int64 v27; // r8
  int v28; // edx
  int v29; // edx
  __int64 v32; // [rsp+38h] [rbp-80h]
  __int128 v33; // [rsp+40h] [rbp-78h] BYREF
  __int128 v34; // [rsp+50h] [rbp-68h]
  int v35; // [rsp+60h] [rbp-58h]

  v35 = 0;
  v33 = 0LL;
  v34 = 0LL;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtGetDumpData: Begin\n");
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C00612C0);
  v8 = 0;
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C0061428);
  v10 = v9[11];
  v11 = v9[15];
  v32 = v9[17];
  *(_QWORD *)(a4 + 16) = Crashdump_Initialize;
  *(_QWORD *)(a4 + 56) = Crashdump_Cleanup;
  *(_QWORD *)(a4 + 24) = Crashdump_SendUrb;
  *(_QWORD *)(a4 + 48) = Crashdump_ResetDevice;
  *(_QWORD *)(a4 + 32) = Crashdump_SendUrbAsync;
  *(_QWORD *)(a4 + 40) = Crashdump_PollForCompletion;
  *(_BYTE *)(a4 + 84) = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 632LL, 1128482904LL);
  v13 = Pool2;
  if ( !Pool2 )
  {
    v14 = -1073741670;
    goto LABEL_36;
  }
  v15 = (_QWORD **)(Pool2 + 62);
  Pool2[61] = v11;
  Pool2[63] = Pool2 + 62;
  Pool2[62] = Pool2 + 62;
  Crashdump_Register_Initialize(Pool2, v10, v9);
  v14 = Crashdump_EventRing_InitializeForDump(v13 + 9, v13);
  if ( v14 >= 0 )
  {
    v13[25] = v13;
    v13[26] = v13;
    v13[27] = *(_QWORD *)(*v13 + 40LL) + 32LL;
    v13[41] = v13;
    v13[42] = v13;
    v13[43] = *(_QWORD *)(*v13 + 32LL) + 24LL;
    v14 = Crashdump_CommonBufferAcquire((__int64)v13, 32, (__int64)(v13 + 44));
    if ( v14 >= 0 )
    {
      v16 = *(_DWORD *)(a4 + 80);
      if ( !v16 )
        goto LABEL_8;
      v14 = Crashdump_CommonBufferAcquire((__int64)v13, v16, (__int64)(v13 + 74));
      if ( v14 >= 0 )
      {
        *(_QWORD *)(a4 + 64) = v13[75];
        *(_QWORD *)(a4 + 72) = v13[74];
LABEL_8:
        v17 = v13 + 68;
        *((_DWORD *)v13 + 131) = *(_DWORD *)(v7 + 20);
        *(_OWORD *)((char *)v13 + 532) = *(_OWORD *)(v7 + 32);
        *(_OWORD *)((char *)v13 + 548) = *(_OWORD *)(v7 + 48);
        *((_DWORD *)v13 + 141) = *(_DWORD *)(v7 + 64);
        v18 = 20;
        if ( *(_BYTE *)(112LL * (unsigned int)(*((_DWORD *)v13 + 136) - 1) + *(_QWORD *)(v9[19] + 48LL) + 13) != 2 )
          v18 = 30;
        *((_DWORD *)v13 + 132) = v18;
        v19 = ExAllocatePool2(64LL, 376LL * *((unsigned int *)v13 + 134), 1128482904LL);
        v13[71] = v19;
        v20 = v19;
        if ( v19 )
        {
          v24 = *((_DWORD *)v13 + 134);
          if ( v24 )
          {
            v25 = 1;
            while ( 1 )
            {
              v33 = 0LL;
              DWORD1(v33) = v25;
              v35 = 0;
              v26 = v25;
              v34 = 0LL;
              memmove((char *)&v33 + 12, v17, 4LL * v25);
              v27 = a3;
              if ( v25 != *((_DWORD *)v13 + 134) )
                v27 = 0LL;
              v14 = Crashdump_InitializeDeviceContext(v32, (int)v13, v27, (__int64)&v33, v13[71] + 376LL * (v25 - 1));
              if ( v14 < 0 )
                break;
              v24 = *((_DWORD *)v13 + 134);
              v17 = v13 + 68;
              ++v25;
              if ( v26 >= v24 )
              {
                v20 = v13[71];
                goto LABEL_28;
              }
            }
          }
          else
          {
LABEL_28:
            v13[72] = v20 + 376LL * (v24 - 1);
            v14 = Crashdump_CommonBufferAcquire((__int64)v13, 64, (__int64)(v13 + 55));
            if ( v14 >= 0 )
            {
              v28 = 2112;
              if ( (*(_DWORD *)(*v13 + 100LL) & 4) == 0 )
                v28 = 1056;
              v14 = Crashdump_CommonBufferAcquire((__int64)v13, v28, (__int64)(v13 + 58));
              if ( v14 >= 0 )
              {
                v29 = *((_DWORD *)v13 + 134);
                *((_DWORD *)v13 + 102) = v29;
                v14 = Crashdump_CommonBufferAcquire((__int64)v13, 8 * v29 + 8, (__int64)(v13 + 52));
                if ( v14 >= 0 )
                {
                  DbgPrintEx(
                    0x93u,
                    3u,
                    "XHCIDUMP: CommonBuffer: Allocated %u pages, %u bytes. Used %u bytes\n",
                    *((_DWORD *)v13 + 128),
                    *((_DWORD *)v13 + 128) << 12,
                    *((_DWORD *)v13 + 129));
                  *((_DWORD *)v13 + 146) = 0;
                  v14 = 0;
                  *(_QWORD *)(a4 + 8) = v13;
                  v13[77] = v9;
                  v9[53] = v13;
                  goto LABEL_36;
                }
              }
            }
          }
        }
        else
        {
          v14 = -1073741670;
        }
      }
    }
  }
  v21 = (void *)v13[71];
  if ( v21 )
  {
    if ( *((_DWORD *)v13 + 134) )
    {
      do
        Crashdump_FreeDeviceContext(v13[71] + 376LL * v8++);
      while ( v8 < *((_DWORD *)v13 + 134) );
      v21 = (void *)v13[71];
    }
    ExFreePoolWithTag(v21, 0x43434858u);
  }
  while ( 1 )
  {
    v22 = *v15;
    if ( *v15 == v15 )
      break;
    if ( (_QWORD **)v22[1] != v15 || (v23 = (_QWORD *)*v22, *(_QWORD **)(*v22 + 8LL) != v22) )
      __fastfail(3u);
    *v15 = v23;
    v23[1] = v15;
    CommonBuffer_ReleaseBuffer(v13[61], (__int64)v22);
  }
  ExFreePoolWithTag(v13, 0x43434858u);
LABEL_36:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtGetDumpData: End 0x%X\n", v14);
  return (unsigned int)v14;
}
