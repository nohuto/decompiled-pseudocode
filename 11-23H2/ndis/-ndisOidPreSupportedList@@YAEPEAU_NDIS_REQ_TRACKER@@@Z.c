/*
 * XREFs of ?ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0025F90
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 */

__int64 __fastcall ndisOidPreSupportedList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdi
  unsigned int v5; // ebp
  KIRQL v6; // dl
  unsigned __int8 v7; // di
  __int64 v9; // rcx
  KIRQL v10; // dl
  KIRQL v11; // dl
  unsigned __int8 v12; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v12 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Au,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    v7 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_12;
  }
  v3 = *((_QWORD *)a1 + 3);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 16);
    goto LABEL_8;
  }
  if ( !*((_QWORD *)a1 + 1) )
  {
    v4 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL);
LABEL_8:
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
    *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
    if ( *(_QWORD *)(v4 + 3088) )
    {
      v5 = *(_DWORD *)(v4 + 3096) + *(_DWORD *)(v4 + 3408);
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v1 + 48) < v5 )
      {
LABEL_10:
        v6 = v12;
        *(_DWORD *)(v1 + 56) = v5;
        *((_DWORD *)a1 + 10) = -1073676268;
        *(_QWORD *)(v4 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v6);
LABEL_11:
        v7 = 1;
        goto LABEL_12;
      }
      memmove(*(void **)(v1 + 40), *(const void **)(v4 + 3088), *(unsigned int *)(v4 + 3096));
      v9 = *(unsigned int *)(v4 + 3096);
LABEL_16:
      memmove((void *)(*(_QWORD *)(v1 + 40) + v9), *(const void **)(v4 + 3400), *(unsigned int *)(v4 + 3408));
      v10 = v12;
      *(_QWORD *)(v4 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v10);
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 52LL) = v5;
      goto LABEL_11;
    }
LABEL_23:
    v11 = v12;
    *(_QWORD *)(v4 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v11);
    goto LABEL_24;
  }
  if ( !*((_QWORD *)a1 + 2) )
  {
    v4 = *(_QWORD *)a1;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(*(struct _NDIS_MINIPORT_BLOCK **)a1, &v12);
    if ( *(_QWORD *)(v4 + 496) )
    {
      v5 = *(_DWORD *)(v4 + 200) + *(_DWORD *)(v4 + 3408);
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v1 + 48) < v5 )
        goto LABEL_10;
      memmove(*(void **)(v1 + 40), *(const void **)(v4 + 496), *(unsigned int *)(v4 + 200));
      v9 = *(unsigned int *)(v4 + 200);
      goto LABEL_16;
    }
    goto LABEL_23;
  }
LABEL_24:
  v7 = 0;
LABEL_12:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Bu,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v1);
  return v7;
}
