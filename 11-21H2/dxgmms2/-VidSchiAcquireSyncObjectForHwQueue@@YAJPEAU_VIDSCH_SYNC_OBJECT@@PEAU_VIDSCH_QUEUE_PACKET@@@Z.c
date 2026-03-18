/*
 * XREFs of ?VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C003E994
 * Callers:
 *     VidSchSubmitWaitToHwQueue @ 0x1C00426F0 (VidSchSubmitWaitToHwQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiAcquireSyncObjectForHwQueue(struct _VIDSCH_SYNC_OBJECT *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // r11
  char v3; // r10
  char v4; // si
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v8; // eax
  unsigned __int64 v9; // r9
  unsigned __int64 *v10; // rax
  char *v11; // rax
  char *v12; // rdx
  char **v13; // r9
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9
  int v18; // r9d
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // r9

  v2 = *((_QWORD *)a2 + 12);
  v3 = 0;
  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 8LL);
  v6 = *(_QWORD *)(v5 + 32);
  if ( *((_DWORD *)a1 + 9) == 0x7FFFFFFF )
  {
    WdLogSingleEntry0(1LL);
    DxgCoreInterface[85](
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Synchronization object already has MAX_LONG reference pending, can't reference more.\n",
      2696LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  v8 = *((_DWORD *)a1 + 12);
  switch ( v8 )
  {
    case 0:
      if ( *((_QWORD *)a1 + 8) )
        goto LABEL_41;
      if ( !*((_QWORD *)a1 + 7) )
      {
        v20 = *((_QWORD *)a2 + 11);
        if ( !v20 )
          v20 = *((_QWORD *)a2 + 12);
        *((_QWORD *)a1 + 7) = v20;
        v3 = 1;
      }
      v21 = *((_QWORD *)a2 + 11);
      if ( !v21 )
        v21 = *((_QWORD *)a2 + 12);
      *((_QWORD *)a1 + 8) = v21;
      goto LABEL_53;
    case 1:
      v18 = *((_DWORD *)a1 + 16);
      if ( !v18 )
      {
LABEL_41:
        WdLogSingleEntry0(3LL);
        return 3221225473LL;
      }
      v19 = *((_DWORD *)a1 + 14);
      if ( v19 )
      {
        v3 = 1;
        *((_DWORD *)a1 + 14) = v19 - 1;
      }
      *((_DWORD *)a1 + 16) = v18 - 1;
LABEL_53:
      if ( !v3 )
        goto LABEL_15;
      goto LABEL_54;
    case 2:
      if ( *((_BYTE *)a1 + 27) )
        v15 = *(_QWORD *)(*((_QWORD *)a1 + 26) + 40LL);
      else
        v15 = *((_QWORD *)a1 + 8);
      v16 = *((_QWORD *)a2 + 38);
      if ( v15 < v16 )
      {
        if ( !*((_BYTE *)a1 + 25) )
        {
          WdLogSingleEntry0(1LL);
          DxgCoreInterface[85](
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Trying to wait the fence without signal having been submitted.\n",
            2781LL,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225473LL;
        }
LABEL_28:
        ++*((_DWORD *)a1 + 10);
        v4 = 1;
        ++*(_DWORD *)(v2 + 156);
        ++*(_DWORD *)(v5 + 1588);
        ++*(_DWORD *)(v6 + 816);
        *((_DWORD *)a2 + 68) |= 4u;
        goto LABEL_15;
      }
      if ( *((_BYTE *)a1 + 27) )
      {
        v17 = *(_QWORD *)(*((_QWORD *)a1 + 26) + 32LL);
        v16 = *((_QWORD *)a2 + 38);
      }
      else
      {
        v17 = *((_QWORD *)a1 + 9);
      }
      if ( v17 >= v16 )
        goto LABEL_54;
LABEL_15:
      if ( (unsigned int)(*((_DWORD *)a1 + 12) - 4) <= 1 )
      {
        v22 = (_QWORD *)((char *)a2 + 288);
        v23 = *(_QWORD **)(v6 + 832);
        if ( *v23 == v6 + 824 )
        {
          *v22 = v6 + 824;
          v22[1] = v23;
          *v23 = v22;
          *(_QWORD *)(v6 + 832) = v22;
          goto LABEL_59;
        }
      }
      else
      {
        v11 = (char *)a2 + 288;
        if ( v4 )
          v12 = (char *)a1 + 112;
        else
          v12 = (char *)a1 + 96;
        v13 = (char **)*((_QWORD *)v12 + 1);
        if ( *v13 == v12 )
        {
          *(_QWORD *)v11 = v12;
          *((_QWORD *)v11 + 1) = v13;
          *v13 = v11;
          *((_QWORD *)v12 + 1) = v11;
LABEL_59:
          _InterlockedAdd((volatile signed __int32 *)a1 + 9, 1u);
          return 0LL;
        }
      }
      __fastfail(3u);
  }
  if ( (unsigned int)(v8 - 4) > 1 )
    goto LABEL_15;
  v9 = *((_QWORD *)a2 + 38);
  if ( !*((_BYTE *)a1 + 28) )
  {
    v10 = (unsigned __int64 *)*((_QWORD *)a1 + 8);
    if ( *((_BYTE *)a1 + 29) )
    {
      if ( *v10 >= v9 )
        goto LABEL_54;
LABEL_13:
      if ( *((_QWORD *)a1 + 10) )
      {
        ++*(_DWORD *)(v6 + 820);
        *((_DWORD *)a2 + 68) |= 8u;
        goto LABEL_15;
      }
      if ( !*((_BYTE *)a1 + 30) && (unsigned int)(((2 * *((_DWORD *)a1 + 13)) >> 1) - 3) > 1 )
        goto LABEL_28;
      if ( *((_BYTE *)a1 + 27) )
        v14 = *(_QWORD *)(*((_QWORD *)a1 + 26) + 40LL);
      else
        v14 = *((_DWORD *)a1 + 12) == 2 ? *((_QWORD *)a1 + 8) : *((_QWORD *)a1 + 11);
      if ( *((_QWORD *)a2 + 38) > v14 )
        goto LABEL_28;
      goto LABEL_15;
    }
    if ( *(_DWORD *)v10 - (int)v9 < 0 )
      goto LABEL_13;
  }
LABEL_54:
  *((_DWORD *)a2 + 68) |= 1u;
  return 0LL;
}
