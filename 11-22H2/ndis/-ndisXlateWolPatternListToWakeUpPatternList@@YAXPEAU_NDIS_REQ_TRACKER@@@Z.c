/*
 * XREFs of ?ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009B438
 * Callers:
 *     ?ndisOidPostWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095B10 (-ndisOidPostWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z @ 0x1C009316C (-ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z.c)
 */

void __fastcall ndisXlateWolPatternListToWakeUpPatternList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r10d
  size_t v4; // r9
  char *v5; // rbp
  char *v6; // r8
  int v7; // eax
  size_t v8; // r8
  size_t v9; // rbx
  char *Pool2; // rax
  char *v11; // r15
  int v12; // r12d
  char *v13; // rsi
  struct _NDIS_PM_PACKET_PATTERN *PMPacketPattern; // rax
  struct _NDIS_PM_PACKET_PATTERN *v15; // r13
  __int64 v16; // rbx
  int v17; // eax
  size_t Size; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  LODWORD(Size) = 0;
  v4 = *(unsigned int *)(v1 + 52);
  if ( (unsigned int)v4 > *(_DWORD *)(v1 + 48) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x73u,
        (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids);
    return;
  }
  if ( !(_DWORD)v4 )
    return;
  v5 = *(char **)(v1 + 40);
  *(_DWORD *)(v1 + 52) = 0;
  v6 = v5;
  for ( *(_DWORD *)(v1 + 56) = 0; v6; v6 = &v5[v7] )
  {
    if ( *((_DWORD *)v6 + 3) == 1 )
    {
      LODWORD(Size) = *((_DWORD *)v6 + 43) + *((_DWORD *)v6 + 41) + 24;
      v2 += Size;
    }
    v7 = *((_DWORD *)v6 + 38);
    if ( !v7 )
      break;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < v2 )
  {
    *(_DWORD *)(v1 + 56) = v2;
    v8 = v4;
    *((_DWORD *)a1 + 10) = -1073676268;
LABEL_12:
    memset(v5, 0, v8);
    return;
  }
  v9 = v4;
  Pool2 = (char *)ExAllocatePool2(66LL, v4, 2021082190);
  v11 = Pool2;
  v8 = v9;
  if ( !Pool2 )
  {
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_12;
  }
  memmove(Pool2, v5, v9);
  memset(v5, 0, *(unsigned int *)(v1 + 48));
  v12 = 0;
  v13 = v11;
  while ( 1 )
  {
    if ( *((_DWORD *)v13 + 3) != 1 )
      goto LABEL_19;
    PMPacketPattern = ndisCreatePMPacketPattern((struct _NDIS_PM_WOL_PATTERN *)v13, (unsigned int *)&Size);
    v15 = PMPacketPattern;
    if ( !PMPacketPattern )
      break;
    v16 = (unsigned int)Size;
    memmove(v5, PMPacketPattern, (unsigned int)Size);
    ExFreePoolWithTag(v15, 0);
    v12 += Size;
    v5 += v16;
LABEL_19:
    v17 = *((_DWORD *)v13 + 38);
    if ( v17 )
    {
      v13 = &v11[v17];
      if ( v13 )
        continue;
    }
    goto LABEL_23;
  }
  *((_DWORD *)a1 + 10) = -1073741670;
LABEL_23:
  *(_DWORD *)(v1 + 52) = v12;
  *(_DWORD *)(v1 + 56) = v12;
  ExFreePoolWithTag(v11, 0);
}
