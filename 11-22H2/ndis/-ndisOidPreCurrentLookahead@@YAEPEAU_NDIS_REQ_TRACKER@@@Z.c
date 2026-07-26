/*
 * XREFs of ?ndisOidPreCurrentLookahead@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0023EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 */

char __fastcall ndisOidPreCurrentLookahead(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  char v3; // di
  int v4; // eax
  unsigned int v5; // ebp
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rcx
  unsigned int v9; // r12d
  unsigned int v10; // eax
  KIRQL v11; // dl
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rax
  int v17; // eax
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Cu,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      *(_QWORD *)a1,
      v1);
  v4 = *(_DWORD *)(v1 + 4);
  if ( (v4 & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676266;
      goto LABEL_15;
    }
    v16 = *((_QWORD *)a1 + 3);
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 264);
    }
    else
    {
      if ( !*(_QWORD *)a1 )
        goto LABEL_15;
      v17 = *(_DWORD *)(*(_QWORD *)a1 + 596LL);
    }
    **(_DWORD **)(v1 + 40) = v17;
    *(_DWORD *)(v1 + 52) = 4;
    goto LABEL_15;
  }
  if ( v4 != 1 )
    goto LABEL_15;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 4u )
  {
    *(_DWORD *)(v1 + 56) = 4;
    *((_DWORD *)a1 + 10) = -1073676268;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x2Du,
        (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
        0,
        v1,
        -1073676268);
  }
  else
  {
    v5 = **(_DWORD **)(v1 + 40);
    if ( *((_QWORD *)a1 + 3) )
    {
      v6 = *(_QWORD *)(v1 + 104);
      NewIrql = 0;
      v7 = *(_QWORD *)(v6 + 16);
      if ( v5 <= *(_DWORD *)(v7 + 596) )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(*(struct _NDIS_MINIPORT_BLOCK **)(v6 + 16), &NewIrql);
        v8 = *(_QWORD *)(v7 + 56);
        v9 = 0;
        while ( v8 )
        {
          v10 = *(_DWORD *)(v8 + 264);
          v8 = *(_QWORD *)(v8 + 392);
          if ( v10 <= v9 )
            v10 = v9;
          v9 = v10;
        }
        v11 = NewIrql;
        *(_QWORD *)(v7 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v11);
        if ( v5 > v9 )
        {
          v3 = 0;
          *(_DWORD *)(v1 + 164) = v5;
          *(_QWORD *)(v1 + 152) = *(_QWORD *)(v1 + 40);
          *(_DWORD *)(v1 + 160) = *(_DWORD *)(v1 + 48);
          *(_DWORD *)(v1 + 48) = 4;
          *(_QWORD *)(v1 + 40) = v1 + 164;
          goto LABEL_15;
        }
        *(_DWORD *)(v6 + 264) = v5;
        goto LABEL_21;
      }
      *(_QWORD *)(v1 + 52) = 0LL;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    else
    {
      v13 = *(_QWORD *)a1;
      if ( !*(_QWORD *)a1 )
        goto LABEL_15;
      v14 = *(_DWORD *)(v13 + 596);
      if ( v5 <= v14 )
      {
        v15 = *(_DWORD *)(v13 + 592);
        if ( v5 < v15 )
        {
          *(_DWORD *)(v1 + 52) = 4;
          *(_DWORD *)(v1 + 56) = 4;
LABEL_21:
          *((_DWORD *)a1 + 10) = 0;
          goto LABEL_15;
        }
        if ( v15 )
          v14 = **(_DWORD **)(v1 + 40);
        if ( v14 > v15 )
        {
          *((_DWORD *)a1 + 10) = 0;
          v3 = 0;
        }
        else
        {
          *(_DWORD *)(v1 + 52) = 4;
          *(_DWORD *)(v1 + 56) = 4;
          *((_DWORD *)a1 + 10) = 0;
        }
      }
      else
      {
        *(_QWORD *)(v1 + 52) = 0LL;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
    }
  }
LABEL_15:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Eu,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      *(_QWORD *)a1,
      v1);
  return v3;
}
