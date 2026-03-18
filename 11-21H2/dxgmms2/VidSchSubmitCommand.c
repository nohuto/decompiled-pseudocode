/*
 * XREFs of VidSchSubmitCommand @ 0x1C0096A70
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0003B04 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0005A40 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0005A90 (-VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0005B60 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0005BF0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006900 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiFreeQueuePacket @ 0x1C000EE3C (VidSchiFreeQueuePacket.c)
 *     VidSchiSetPriorityContext @ 0x1C0012DF0 (VidSchiSetPriorityContext.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0016FA4 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiConvertDeferredWaits @ 0x1C0017F1C (VidSchiConvertDeferredWaits.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001863C (VidSchiPropagatePresentHistoryToken.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C001D980 (memmove.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C00958B8 (VidSchRegisterCompletionEvent.c)
 *     VidSchiAllocateHistoryBufferStorage @ 0x1C00F2D84 (VidSchiAllocateHistoryBufferStorage.c)
 *     VidSchiEnsureHwFlipQueueLog @ 0x1C00F60EC (VidSchiEnsureHwFlipQueueLog.c)
 */

__int64 __fastcall VidSchSubmitCommand(struct _VIDSCH_CONTEXT *a1, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v4; // rbp
  __int64 v5; // r15
  unsigned int v6; // r12d
  int v7; // eax
  __int64 v8; // r14
  unsigned int v9; // r13d
  _QWORD *v10; // rax
  _DWORD *Pool2; // rbx
  unsigned __int32 v12; // r13d
  bool v13; // zf
  __int16 v14; // ax
  void *v15; // rcx
  __int64 v16; // rcx
  struct _VIDSCH_CONTEXT *v17; // rax
  char *v18; // rbx
  struct _VIDSCH_CONTEXT **v19; // rcx
  unsigned int v20; // ecx
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 result; // rax
  __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // r14d
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  const void *v38; // rbp
  KPRIORITY PriorityThread; // eax
  __int64 v40; // rcx
  _QWORD v41[20]; // [rsp+70h] [rbp-D8h] BYREF
  int v42; // [rsp+160h] [rbp+18h]
  __int64 v43; // [rsp+168h] [rbp+20h] BYREF

  if ( !a1 || !a2 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v40, 0x40000LL);
    return 3221225485LL;
  }
  v4 = *((_QWORD *)a1 + 13);
  v5 = *(_QWORD *)(v4 + 32);
  if ( *(_BYTE *)(v4 + 204) || (v6 = 0, _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 200), 0, 0)) )
  {
    WdLogSingleEntry2(3LL, v4, -1071775232LL);
    return 3223192064LL;
  }
  v43 = *(_QWORD *)a2;
  v7 = v43;
  if ( (v43 & 0x20) != 0 )
  {
    result = VidSchValidatePresentFlags(a2, (struct _VIDSCH_DEVICE *)v4, (struct _VIDSCH_SUBMIT_FLAGS *)&v43);
    if ( (int)result < 0 )
      return result;
    v7 = v43;
  }
  else if ( (v43 & 0x40000) != 0
         && !*((_DWORD *)a1 + 108)
         && !*((_DWORD *)a1 + 196)
         && (v43 & 0x1000000) == 0
         && (v43 & 0x400000000LL) == 0 )
  {
    VidSchiPropagatePresentHistoryToken(
      (struct _VIDSCH_GLOBAL *)v5,
      *((union _SLIST_HEADER **)a2 + 12),
      *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a2 + 13),
      0,
      0,
      0,
      0,
      0LL,
      0LL,
      (__int64)a2,
      0LL,
      0);
    return 0LL;
  }
  if ( (v7 & 0x800004) == 4 && *(_BYTE *)(v5 + 59) )
  {
    v33 = 600LL;
    if ( !*((_BYTE *)a2 + 356) )
      v33 = 496LL;
    *(_DWORD *)((char *)a2 + v33) = *(_DWORD *)((_BYTE *)a2 + v33) & 0xFFF003FF | ((((unsigned __int16)(1 << *(_DWORD *)(v5 + 152))
                                                                                   - 1) & 0x3FE) << 10);
  }
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  v9 = *(_DWORD *)(v8 + 152) * ((*(_DWORD *)(v8 + 76) << 6) + ((8 * *(_DWORD *)(v8 + 76) + 231) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v8 + 76) + 111);
  if ( v9 <= 0x460 )
    v9 = 1120;
  v10 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v8 + 1736), (_QWORD **)a1 + 89, (_DWORD *)a1 + 182);
  if ( !v10 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v9, 895576406LL);
    if ( Pool2 )
      goto LABEL_13;
    memset(v41, 0, sizeof(v41));
    v34 = *((_QWORD *)a1 + 12);
    LODWORD(v41[4]) |= 0x40u;
    LODWORD(v41[2]) = 1;
    LODWORD(v41[6]) = *(unsigned __int16 *)(v34 + 4);
    VidSchRegisterCompletionEvent(v8, (__int64)v41);
    do
    {
      v35 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v8 + 1736), (_QWORD **)a1 + 89, (_DWORD *)a1 + 182);
      if ( v35 )
        Pool2 = v35 - 1;
      else
        VidSchWaitForCompletionEvent((struct _VIDSCH_GLOBAL *)v8, (__int64)v41, 19LL);
    }
    while ( !Pool2 );
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v8 + 1744), v41, 0LL);
LABEL_12:
    memset(Pool2, 0, v9);
LABEL_13:
    *((_QWORD *)Pool2 + 7) = MEMORY[0xFFFFF78000000320];
    Pool2[13] = 1;
    VidSchiInterlockedInsertTailList(
      (KSPIN_LOCK *)(v8 + 1736),
      (__int64)a1 + 760,
      (_QWORD *)Pool2 + 1,
      (_DWORD *)a1 + 194);
    goto LABEL_14;
  }
  Pool2 = v10 - 1;
  if ( v10 != (_QWORD *)8 )
    goto LABEL_12;
LABEL_14:
  *Pool2 = 895576406;
  v12 = 2;
  v13 = (v43 & 0x40000) == 0;
  *((_QWORD *)Pool2 + 7) = MEMORY[0xFFFFF78000000320];
  Pool2[13] = 2;
  Pool2[16] = 0;
  if ( !v13 )
  {
    Pool2[12] = 7;
    goto LABEL_17;
  }
  if ( ((*((_DWORD *)a2 + 30) - 3) & 0xFFFFFFFD) != 0 )
  {
    Pool2[12] = 0;
    goto LABEL_17;
  }
  Pool2[12] = 3;
  v26 = *((_DWORD *)a2 + 29);
  if ( v26 == -1
    || (v27 = *((_DWORD *)a2 + 150),
        v28 = ((unsigned __int16)v27 | (unsigned __int16)(v27 >> 10)) & 0x3FF,
        (((unsigned __int16)v27 | (unsigned __int16)(v27 >> 10)) & 0x3FF) == 0) )
  {
LABEL_17:
    *((_QWORD *)Pool2 + 11) = a1;
    *((_QWORD *)Pool2 + 13) = KeGetCurrentThread();
    v14 = v43;
    *((_QWORD *)Pool2 + 9) = v43;
    *((_QWORD *)Pool2 + 18) = *((_QWORD *)a2 + 12);
    *((_QWORD *)Pool2 + 19) = *((_QWORD *)a2 + 13);
    Pool2[40] = *((_DWORD *)a2 + 29);
    if ( (v14 & 4) != 0 )
    {
      Pool2[16] ^= (Pool2[16] ^ (*(_DWORD *)(v5 + 2536) >> 4)) & 4;
      if ( ((*((_DWORD *)a2 + 30) - 3) & 0xFFFFFFFD) == 0 )
      {
        if ( (v14 & 0x400) != 0 )
          goto LABEL_88;
        goto LABEL_71;
      }
    }
    else if ( (v14 & 0x20) != 0 )
    {
      Pool2[16] ^= (Pool2[16] ^ (*(_DWORD *)(v5 + 2536) >> 5)) & 4;
    }
    else if ( Pool2[12] != 7 )
    {
      Pool2[16] |= 4u;
    }
    goto LABEL_21;
  }
  while ( 1 )
  {
    v13 = !_BitScanForward((unsigned int *)&v29, v28);
    if ( v13 )
      LOBYTE(v29) = -1;
    v12 = (char)v29;
    if ( *(_BYTE *)(v5 + 59) )
    {
      v42 = VidSchiEnsureHwFlipQueueLog((struct _VIDSCH_GLOBAL *)v5, v26, (char)v29);
      if ( v42 < 0 )
      {
        VidSchiFreeQueuePacket((__int64)a1, (__int64)Pool2);
        return (unsigned int)v42;
      }
    }
    v30 = *((unsigned int *)a2 + 29);
    v31 = *(int *)(*(_QWORD *)(v5 + 8 * v30 + 3200) + 280LL * v12 + 180);
    if ( (int)v31 > -1 && *(_DWORD *)(160 * v31 + *(_QWORD *)(v5 + 3328) + 112) == 2 )
      break;
    v26 = *((_DWORD *)a2 + 29);
    v28 &= ~(1 << v12);
    if ( !v28 )
    {
      v12 = 2;
      goto LABEL_17;
    }
  }
  v14 = WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v12, v30, v5);
  __debugbreak();
LABEL_88:
  if ( (v14 & 0x800) != 0 )
  {
LABEL_71:
    v32 = *((unsigned int *)a2 + 29);
    *((_QWORD *)a2 + 16) = ++*(_QWORD *)(v4 + 8 * v32 + 248);
  }
LABEL_21:
  memmove(Pool2 + 68, a2, *((unsigned int *)a2 + 139));
  if ( !*((_BYTE *)a1 + 909) )
    VidSchiAcquirePrivateDataReference(
      (struct _VIDSCH_GLOBAL *)v5,
      (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(Pool2 + 218));
  if ( *((_QWORD *)a2 + 4) && !*((_BYTE *)a1 + 909) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)Pool2 + 38) + 12LL));
  v15 = (void *)*((_QWORD *)Pool2 + 45);
  if ( v15 )
    ObfReferenceObject(v15);
  VidSchiAcquireFlipFencesReference(
    (struct _VIDSCH_GLOBAL *)v5,
    (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(Pool2 + 218));
  v16 = *((_QWORD *)Pool2 + 35);
  if ( v16 && (Pool2[68] & 0x8000000) != 0 && !*((_QWORD *)Pool2 + 39) )
    *((_QWORD *)Pool2 + 39) = *(_QWORD *)(v16 + 96);
  if ( (Pool2[152] & 1) != 0 )
    VidSchiConvertDeferredWaits((__int64)a1);
  if ( Pool2[118] )
  {
    v25 = *(_QWORD *)(v5 + 16);
    if ( *(_BYTE *)(v25 + 4648) )
    {
      if ( *(_DWORD *)(v25 + 288) == 1 )
      {
        v36 = (unsigned int)Pool2[40];
        if ( (unsigned int)v36 < *(_DWORD *)(v5 + 40) )
        {
          v37 = *(_QWORD *)(*(_QWORD *)(v5 + 8 * v36 + 3200) + 16LL);
          if ( v37 )
          {
            if ( v37 != v4 )
              Pool2[16] |= 0x80u;
          }
        }
      }
    }
  }
  if ( *((_DWORD *)a2 + 88) )
  {
    v38 = (const void *)*((_QWORD *)a2 + 43);
    result = VidSchiAllocateHistoryBufferStorage(Pool2);
    if ( (int)result >= 0 )
    {
      memmove(*((void **)Pool2 + 77), v38, 8LL * *((unsigned int *)a2 + 88));
      goto LABEL_31;
    }
  }
  else
  {
LABEL_31:
    if ( (*(_DWORD *)(v5 + 2536) & 2) != 0 )
    {
      PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
      VidSchiSetPriorityContext(a1, PriorityThread);
    }
    *((_QWORD *)Pool2 + 7) = MEMORY[0xFFFFF78000000320];
    v17 = (struct _VIDSCH_CONTEXT *)(Pool2 + 8);
    Pool2[13] = 3;
    v18 = (char *)a1 + 680;
    v19 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 86);
    if ( *v19 != (struct _VIDSCH_CONTEXT *)((char *)a1 + 680) )
      goto LABEL_97;
    *((_QWORD *)v17 + 1) = v19;
    *(_QWORD *)v17 = v18;
    *v19 = v17;
    *((_QWORD *)a1 + 86) = v17;
    v20 = *((_DWORD *)a1 + 108) + 1;
    *((_DWORD *)a1 + 108) = v20;
    if ( (*(_DWORD *)a2 & 0x40) != 0 )
      v6 = 1;
    if ( v20 > v6 )
    {
      while ( 1 )
      {
        v21 = *(__int64 **)v18;
        if ( *(char **)(*(_QWORD *)v18 + 8LL) != v18 )
          break;
        v22 = *v21;
        if ( *(__int64 **)(*v21 + 8) != v21 )
          break;
        *(_QWORD *)v18 = v22;
        *(_QWORD *)(v22 + 8) = v18;
        --*((_DWORD *)a1 + 108);
        VidSchiSubmitCommandPacketToQueue((__int64)(v21 - 4));
        if ( *((_DWORD *)a1 + 108) <= v6 )
          goto LABEL_40;
      }
LABEL_97:
      __fastfail(3u);
    }
LABEL_40:
    v23 = *((unsigned int *)a2 + 29);
    if ( (unsigned int)v23 < *(_DWORD *)(v5 + 40) && (*(_BYTE *)a2 & 5) == 5 )
      _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v23 + 3200) + 78576LL), v12, 1);
    return 0LL;
  }
  return result;
}
