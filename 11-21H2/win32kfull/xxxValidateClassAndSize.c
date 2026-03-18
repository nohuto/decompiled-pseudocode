/*
 * XREFs of xxxValidateClassAndSize @ 0x1C015A2B0
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00A3BCC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C010CED0 (xxxTooltipWndProc.c)
 *     xxxSwitchWndProc @ 0x1C01EF940 (xxxSwitchWndProc.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C007709C (xxxClientAllocWindowClassExtraBytes.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     xxxDefWindowProc @ 0x1C00A3F90 (xxxDefWindowProc.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C00F806C (xxxClientFreeWindowClassExtraBytes.c)
 *     PopW32ThreadLock @ 0x1C0110810 (PopW32ThreadLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall xxxValidateClassAndSize(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int16 a5,
        int a6,
        __int64 *a7)
{
  __int64 v8; // r10
  __int16 v9; // ax
  __int16 v11; // si
  __int64 v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r8
  unsigned int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // rcx
  size_t v22; // rsi
  void *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned int v27; // ecx
  __int128 v28; // [rsp+20h] [rbp-48h] BYREF
  __int64 v29; // [rsp+30h] [rbp-38h]

  *a7 = 0LL;
  v8 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v8 + 232) & 0x10) != 0 )
    return 0LL;
  v9 = *(_WORD *)(v8 + 42);
  if ( (v9 & 0xD000) != 0 )
  {
    if ( (v9 & 0x1000) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    return 0LL;
  }
  v11 = a5;
  if ( v9 != a5 )
  {
    if ( v9 )
      return 0LL;
    if ( a2 != a6 )
    {
      *a7 = xxxDefWindowProc(a1, a2, a3, a4);
      return 0LL;
    }
    *(_WORD *)(v8 + 42) = 4096;
    v12 = *((_QWORD *)a1 + 5);
    v13 = *(_DWORD *)(v12 + 248);
    v14 = *(unsigned __int16 *)(gpsi + 2LL * ((a5 & 0x2FFFu) - 666) + 328);
    if ( v13 + 328 >= v14 )
    {
      v26 = *((_QWORD *)a1 + 35);
      if ( v26 )
      {
        v27 = 0;
        if ( v13 )
        {
          while ( !*(_BYTE *)(v27 + v26) )
          {
            if ( ++v27 >= v13 )
              goto LABEL_42;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v12 = *((_QWORD *)a1 + 5);
        }
LABEL_42:
        memset(*((void **)a1 + 35), 0, *(unsigned int *)(v12 + 248));
      }
    }
    else
    {
      if ( v13 + *(_DWORD *)(v12 + 200) + 328 < v14 )
      {
        *(_WORD *)(v12 + 42) &= ~0x1000u;
        return 0LL;
      }
      v28 = 0LL;
      v29 = 0LL;
      v15 = v14 - 328;
      v16 = Win32AllocPoolZInit(v15, 1937208149LL);
      v17 = v16;
      if ( !v16 )
      {
LABEL_15:
        *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) &= ~0x1000u;
        return 0LL;
      }
      PushW32ThreadLock(v16, &v28, (__int64)Win32FreePool);
      v18 = *((_QWORD *)a1 + 35);
      if ( v18 )
      {
        v19 = 0;
        v20 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 248LL);
        if ( v20 )
        {
          while ( !*(_BYTE *)(v19 + v18) )
          {
            if ( ++v19 >= v20 )
              goto LABEL_22;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        }
LABEL_22:
        Win32FreePool(*((_QWORD *)a1 + 35));
        *((_QWORD *)a1 + 35) = 0LL;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 248LL) = 0;
      v21 = *((_QWORD *)a1 + 5);
      v22 = *(unsigned int *)(v21 + 200);
      if ( (_DWORD)v22 )
      {
        v23 = (void *)xxxClientAllocWindowClassExtraBytes((unsigned int)v22, (__int64)a1);
        if ( !v23 || (v21 = *((_QWORD *)a1 + 5), (*(_WORD *)(v21 + 42) & 0xC000) != 0) )
        {
LABEL_25:
          PopAndFreeAlwaysW32ThreadLock((__int64)&v28);
          goto LABEL_15;
        }
      }
      else
      {
        v23 = 0LL;
      }
      v24 = *(_QWORD *)(v21 + 296);
      if ( v24 )
      {
        if ( v23 )
        {
          memmove(v23, (const void *)(v24 + v15), v22);
          v21 = *((_QWORD *)a1 + 5);
        }
        v25 = *(_QWORD *)(v21 + 296);
        *(_QWORD *)(v21 + 296) = v23;
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) = v22;
        xxxClientFreeWindowClassExtraBytes((__int64)a1, v25);
        if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0xC000) != 0 )
          goto LABEL_25;
      }
      else
      {
        *(_QWORD *)(v21 + 296) = v23;
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) = v22;
      }
      PopW32ThreadLock(&v28);
      *((_QWORD *)a1 + 35) = v17;
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 248LL) = v15;
      v11 = a5;
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) = v11;
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) &= ~0x1000u;
  }
  return 1LL;
}
