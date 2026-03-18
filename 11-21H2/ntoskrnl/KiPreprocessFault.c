/*
 * XREFs of KiPreprocessFault @ 0x140299840
 * Callers:
 *     KiDispatchException @ 0x140299280 (KiDispatchException.c)
 * Callees:
 *     KiOpDecode @ 0x140299A64 (KiOpDecode.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiOpPreprocessSecureFault @ 0x14056ABF0 (KiOpPreprocessSecureFault.c)
 *     KiEnableOptionalXStateFeatures @ 0x14056FE5C (KiEnableOptionalXStateFeatures.c)
 *     KiOpCheckUnhandledSecurePciAccessViolation @ 0x14057B504 (KiOpCheckUnhandledSecurePciAccessViolation.c)
 *     KiEmulateAtlThunk @ 0x14057D2A8 (KiEmulateAtlThunk.c)
 */

char __fastcall KiPreprocessFault(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  int v6; // r8d
  char v7; // r14
  __int16 v8; // ax
  void *v9; // rdx
  void *v10; // rcx
  bool v11; // cf
  int v12; // edi
  int v13; // eax
  __int64 v14; // r14
  char v15; // si
  char v16; // cl
  struct _KTHREAD *CurrentThread; // rdx
  void *v19; // rax
  unsigned __int16 SListFaultCount; // ax
  unsigned __int16 v21; // ax
  int v22; // eax
  _QWORD v23[14]; // [rsp+30h] [rbp-39h] BYREF

  memset(v23, 0, sizeof(v23));
  v7 = 0;
  switch ( *(_DWORD *)a1 )
  {
    case 0x10000001:
      v12 = 0x80000000;
      goto LABEL_29;
    case 0x10000002:
      goto LABEL_41;
    case 0x10000003:
      v12 = 0x20000000;
      *(_DWORD *)a1 = -1073741676;
      goto LABEL_10;
  }
  if ( *(_DWORD *)a1 != 268435460 )
  {
    if ( *(_DWORD *)a1 == 268435462 )
    {
      v7 = 1;
      if ( (unsigned __int8)KiOpPreprocessSecureFault(a1, a2) )
        return 1;
      goto LABEL_5;
    }
    if ( *(_DWORD *)a1 != 268435463 )
    {
      if ( *(_DWORD *)a1 != 268435472 )
        return 0;
      if ( (int)KiEnableOptionalXStateFeatures(KeGetCurrentThread(), *(_QWORD *)(a1 + 32)) >= 0 )
        return 1;
LABEL_41:
      v12 = 0x40000000;
      *(_DWORD *)a1 = -1073741795;
      goto LABEL_10;
    }
    v12 = 0x4000000;
LABEL_29:
    *(_DWORD *)a1 = -1073741819;
    goto LABEL_10;
  }
LABEL_5:
  v8 = *(_WORD *)(a2 + 56);
  if ( v8 == 16 )
  {
    v9 = &ExpInterlockedPopEntrySListFault;
    v10 = &ExpInterlockedPopEntrySListResume;
  }
  else
  {
    if ( v8 != 51 )
      goto LABEL_8;
    v9 = (void *)qword_140D071B0;
    v10 = (void *)qword_140D071B8;
  }
  if ( *(void **)(a2 + 248) != v9 )
    goto LABEL_8;
  if ( v8 == 16 )
  {
    *(_QWORD *)(a2 + 248) = v10;
    if ( (_BYTE)KiKernelCetEnabled && (*(_DWORD *)(a2 + 48) & 0x100080) == 0x100080 )
      *(_QWORD *)(*(int *)(a2 + 1256) + a2 + 1240) = v10;
    return 1;
  }
  CurrentThread = KeGetCurrentThread();
  v19 = *(void **)(a1 + 40);
  if ( v19 == CurrentThread->SListFaultAddress )
  {
    SListFaultCount = CurrentThread->SListFaultCount;
    v6 = 1024;
    if ( SListFaultCount > 0x400u )
    {
      CurrentThread->SListFaultCount = 0;
LABEL_8:
      v11 = *(_DWORD *)(a1 + 24) < 2u;
      v12 = 0x10000000;
      *(_DWORD *)a1 = -1073741819;
      if ( v11 || (*(_BYTE *)(a1 + 32) & 8) == 0 )
      {
LABEL_10:
        LOBYTE(v6) = a3;
        v13 = KiOpDecode(a1, a2, v6, v12, v23);
        if ( v13 < 0 )
        {
          v15 = 0;
        }
        else
        {
          if ( v7 )
          {
            HIDWORD(v23[7]) |= 0x2000000u;
            v23[13] = -1LL;
          }
          v14 = v23[11];
          if ( v23[11] )
            v13 = (*(__int64 (__fastcall **)(_QWORD *))(v23[11] + 16LL))(v23);
          v15 = 0;
          if ( v13 >= 0 && v14 )
          {
            v16 = v23[12];
            v15 = v23[12];
            if ( LOBYTE(v23[12]) )
              return v15;
LABEL_17:
            if ( v12 == 0x80000000 )
            {
              if ( *(_DWORD *)a1 == -1073741819 && !BYTE1(v23[12]) )
              {
                *(_DWORD *)(a1 + 24) = 2;
                *(_QWORD *)(a1 + 40) = -1LL;
                *(_QWORD *)(a1 + 32) = 0LL;
              }
            }
            else if ( v12 == 0x8000000 )
            {
              if ( BYTE2(v23[7]) )
              {
                if ( (*(_BYTE *)(v23[4] + 32LL) & 8) != 0 && *(_QWORD *)(v23[4] + 40LL) == v23[0] )
                {
                  v22 = KiEmulateAtlThunk(
                          LODWORD(v23[3]) + 248,
                          LODWORD(v23[3]) + 152,
                          LODWORD(v23[3]) + 120,
                          LODWORD(v23[3]) + 128,
                          v23[3] + 136LL);
                  v16 = v23[12];
                  if ( v22 )
                    return 1;
                }
              }
              return v16;
            }
            else if ( v12 == 0x10000000 && (v23[7] & 0x200000000000000LL) != 0 )
            {
              KiOpCheckUnhandledSecurePciAccessViolation(v23, a1);
              if ( *(_DWORD *)a1 == 268435465 )
                KeBugCheckEx(
                  0x1EAu,
                  *(_QWORD *)(a1 + 32),
                  *(_QWORD *)(a1 + 40),
                  *(_QWORD *)(a1 + 48),
                  *(_QWORD *)(a1 + 56));
            }
            return v15;
          }
        }
        v16 = v23[12];
        goto LABEL_17;
      }
      if ( a3 )
      {
        v12 = 0x8000000;
        goto LABEL_10;
      }
      return 0;
    }
    v21 = SListFaultCount + 1;
  }
  else
  {
    CurrentThread->SListFaultAddress = v19;
    v21 = 0;
  }
  CurrentThread->SListFaultCount = v21;
  *(_QWORD *)(a2 + 248) = v10;
  return 1;
}
