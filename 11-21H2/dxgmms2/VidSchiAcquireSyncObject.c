/*
 * XREFs of VidSchiAcquireSyncObject @ 0x1C00051F0
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0004DF0 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiAcquireSyncObject(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  char v4; // r11
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 v15; // rcx
  __int64 **v16; // rax
  __int64 **v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  int v22; // ecx
  int v23; // eax
  __int64 **v24; // rcx

  v3 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 36) == 0x7FFFFFFF )
  {
    WdLogSingleEntry0(1LL);
    DxgCoreInterface[85](
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Synchronization object already has MAX_LONG reference pending, can't reference more.\n",
      24610LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  v6 = *(_DWORD *)(a2 + 48);
  if ( !v6 )
  {
    if ( !*(_QWORD *)(a2 + 64) )
    {
      if ( !*(_QWORD *)(a2 + 56) )
      {
        v7 = *(_QWORD *)(a3 + 88);
        if ( !v7 )
          v7 = *(_QWORD *)(a3 + 96);
        *(_QWORD *)(a2 + 56) = v7;
        v3 = 1;
      }
      v8 = *(_QWORD *)(a3 + 88);
      if ( !v8 )
        v8 = *(_QWORD *)(a3 + 96);
      *(_QWORD *)(a2 + 64) = v8;
      goto LABEL_11;
    }
    WdLogSingleEntry0(1LL);
    DxgCoreInterface[85](
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Trying to acquire mutex without corresponding signal having been submitted.\n",
      24628LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  if ( v6 == 2 )
  {
    if ( *(_BYTE *)(a2 + 27) )
      v19 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 40LL);
    else
      v19 = *(_QWORD *)(a2 + 64);
    v20 = *(_QWORD *)(a3 + 304);
    if ( v19 >= v20 )
    {
      if ( *(_BYTE *)(a2 + 27) )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 32LL);
        v20 = *(_QWORD *)(a3 + 304);
      }
      else
      {
        v21 = *(_QWORD *)(a2 + 72);
      }
      if ( v21 >= v20 )
        goto LABEL_12;
      goto LABEL_28;
    }
    if ( !*(_BYTE *)(a2 + 25) )
    {
      WdLogSingleEntry0(1LL);
      DxgCoreInterface[85](
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Trying to wait the fence without signal having been submitted.\n",
        24696LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
    goto LABEL_27;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 3 )
    {
      WdLogSingleEntry0(1LL);
      DxgCoreInterface[85](
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Trying to wait on CpuNotification.\n",
        24776LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
    if ( (unsigned int)(v6 - 4) > 1 )
      goto LABEL_29;
    v10 = *(_QWORD *)(a3 + 304);
    if ( *(_BYTE *)(a2 + 28) )
      goto LABEL_12;
    v11 = *(unsigned __int64 **)(a2 + 64);
    if ( *(_BYTE *)(a2 + 29) )
    {
      if ( *v11 >= v10 )
        goto LABEL_12;
    }
    else if ( *(_DWORD *)v11 - (int)v10 >= 0 )
    {
      goto LABEL_12;
    }
    if ( *(_QWORD *)(a2 + 80) )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
      ++*(_DWORD *)(v18 + 820);
      *(_DWORD *)(a3 + 272) |= 8u;
      goto LABEL_28;
    }
    if ( *(_BYTE *)(a2 + 30) )
    {
      if ( *(_BYTE *)(a2 + 27) )
        v12 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 40LL);
      else
        v12 = *(_DWORD *)(a2 + 48) == 2 ? *(_QWORD *)(a2 + 64) : *(_QWORD *)(a2 + 88);
      if ( *(_QWORD *)(a3 + 304) <= v12 )
        goto LABEL_28;
    }
LABEL_27:
    ++*(_DWORD *)(a2 + 40);
    v4 = 1;
    ++*(_DWORD *)(*(_QWORD *)(a3 + 88) + 796LL);
    ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 1588LL);
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
    ++*(_DWORD *)(v13 + 816);
    *(_DWORD *)(a3 + 272) |= 4u;
LABEL_28:
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 800));
    goto LABEL_29;
  }
  v22 = *(_DWORD *)(a2 + 64);
  if ( v22 )
  {
    v23 = *(_DWORD *)(a2 + 56);
    if ( v23 )
    {
      v3 = 1;
      *(_DWORD *)(a2 + 56) = v23 - 1;
    }
    *(_DWORD *)(a2 + 64) = v22 - 1;
LABEL_11:
    if ( v3 )
    {
LABEL_12:
      *(_DWORD *)(a3 + 272) |= 1u;
      return 0LL;
    }
LABEL_29:
    v14 = (__int64 *)(a3 + 288);
    if ( (unsigned int)(*(_DWORD *)(a2 + 48) - 4) > 1 )
    {
      if ( v4 )
      {
        v24 = *(__int64 ***)(a2 + 120);
        if ( *v24 == (__int64 *)(a2 + 112) )
        {
          *v14 = a2 + 112;
          v14[1] = (__int64)v24;
          *v24 = v14;
          *(_QWORD *)(a2 + 120) = v14;
          goto LABEL_32;
        }
      }
      else
      {
        v17 = *(__int64 ***)(a2 + 104);
        if ( *v17 == (__int64 *)(a2 + 96) )
        {
          *v14 = a2 + 96;
          v14[1] = (__int64)v17;
          *v17 = v14;
          *(_QWORD *)(a2 + 104) = v14;
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 36));
          return 0LL;
        }
      }
    }
    else
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 824LL;
      v16 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 832LL);
      if ( *v16 == (__int64 *)v15 )
      {
        *v14 = v15;
        v14[1] = (__int64)v16;
        *v16 = v14;
        *(_QWORD *)(v15 + 8) = v14;
LABEL_32:
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 36));
        return 0LL;
      }
    }
    __fastfail(3u);
  }
  WdLogSingleEntry0(1LL);
  DxgCoreInterface[85](
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Trying to acquire semaphore without corresponding signal having been submitted.\n",
    24660LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225473LL;
}
