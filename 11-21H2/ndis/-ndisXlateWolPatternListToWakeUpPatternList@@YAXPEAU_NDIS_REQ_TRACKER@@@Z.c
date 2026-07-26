/*
 * XREFs of ?ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095414
 * Callers:
 *     ?ndisOidPostWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008FB40 (-ndisOidPostWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z @ 0x1C008D148 (-ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z.c)
 */

void __fastcall ndisXlateWolPatternListToWakeUpPatternList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  int v2; // r12d
  unsigned int v4; // r10d
  size_t v5; // r9
  char *v6; // rsi
  char *i; // r8
  int v8; // eax
  size_t v9; // r8
  size_t v10; // rbx
  char *Pool2; // rax
  char *v12; // r15
  char *v13; // rbp
  struct _NDIS_PM_PACKET_PATTERN *PMPacketPattern; // rax
  struct _NDIS_PM_PACKET_PATTERN *v15; // r13
  __int64 v16; // rbx
  int v17; // eax
  size_t Size; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  LODWORD(Size) = 0;
  v4 = 0;
  v5 = *(unsigned int *)(v1 + 52);
  if ( (unsigned int)v5 > *(_DWORD *)(v1 + 48) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x73u,
        (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids);
    return;
  }
  if ( !(_DWORD)v5 )
    return;
  v6 = *(char **)(v1 + 40);
  *(_QWORD *)(v1 + 52) = 0LL;
  for ( i = v6; i; i = &v6[v8] )
  {
    if ( *((_DWORD *)i + 3) == 1 )
    {
      LODWORD(Size) = *((_DWORD *)i + 43) + *((_DWORD *)i + 41) + 24;
      v4 += Size;
    }
    v8 = *((_DWORD *)i + 38);
    if ( !v8 )
      break;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < v4 )
  {
    *(_DWORD *)(v1 + 56) = v4;
    v9 = v5;
    *((_DWORD *)a1 + 10) = -1073676268;
LABEL_12:
    memset(v6, 0, v9);
    return;
  }
  v10 = v5;
  Pool2 = (char *)ExAllocatePool2(66LL, v5, 2021082190);
  v12 = Pool2;
  v9 = v10;
  if ( !Pool2 )
  {
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_12;
  }
  memmove(Pool2, v6, v10);
  memset(v6, 0, *(unsigned int *)(v1 + 48));
  v13 = v12;
  while ( 1 )
  {
    if ( *((_DWORD *)v13 + 3) != 1 )
      goto LABEL_19;
    PMPacketPattern = ndisCreatePMPacketPattern((struct _NDIS_PM_WOL_PATTERN *)v13, (unsigned int *)&Size);
    v15 = PMPacketPattern;
    if ( !PMPacketPattern )
      break;
    v16 = (unsigned int)Size;
    memmove(v6, PMPacketPattern, (unsigned int)Size);
    ExFreePoolWithTag(v15, 0);
    v2 += Size;
    v6 += v16;
LABEL_19:
    v17 = *((_DWORD *)v13 + 38);
    if ( v17 )
    {
      v13 = &v12[v17];
      if ( v13 )
        continue;
    }
    goto LABEL_23;
  }
  *((_DWORD *)a1 + 10) = -1073741670;
LABEL_23:
  *(_DWORD *)(v1 + 52) = v2;
  *(_DWORD *)(v1 + 56) = v2;
  ExFreePoolWithTag(v12, 0);
}
