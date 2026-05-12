/*
 * XREFs of PortPassThroughFreeSrb @ 0x1C001E594
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C001E46C (PortpCompleteRequestIrp.c)
 *     PortPassThroughSendAsync @ 0x1C00A1E80 (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

void __fastcall PortPassThroughFreeSrb(_QWORD *P)
{
  void *v2; // rcx
  unsigned int v3; // r11d
  char v4; // di
  void *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx

  if ( *((_BYTE *)P + 2) != 40 )
  {
    v2 = (void *)P[4];
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x69506C50u);
      P[4] = 0LL;
    }
    goto LABEL_4;
  }
  v3 = *((_DWORD *)P + 14);
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( !v3 )
    goto LABEL_4;
  while ( 1 )
  {
    v7 = *((unsigned int *)P + v6 + 30);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v8 = *((unsigned int *)P + 4);
      if ( (unsigned int)v7 <= (unsigned int)v8 )
        break;
    }
LABEL_16:
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= v3 )
      goto LABEL_17;
  }
  v9 = (unsigned int)v7;
  v10 = *(_DWORD *)((char *)P + v7) - 64;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 1 && v9 + 40 <= v8 )
      {
        v5 = *(void **)((char *)P + v9 + 24);
        goto LABEL_17;
      }
    }
    else if ( v9 + 56 <= v8 )
    {
      v5 = *(void **)((char *)P + v9 + 16);
      v4 = 1;
    }
    goto LABEL_15;
  }
  if ( v9 + 40 > v8 )
  {
LABEL_15:
    if ( v4 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v5 = *(void **)((char *)P + v9 + 16);
LABEL_17:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x69506C50u);
LABEL_4:
  ExFreePoolWithTag(P, 0x69506C50u);
}
