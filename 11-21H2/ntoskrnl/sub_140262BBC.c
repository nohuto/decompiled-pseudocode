/*
 * XREFs of sub_140262BBC @ 0x140262BBC
 * Callers:
 *     sub_140262938 @ 0x140262938 (sub_140262938.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140262BBC(__int64 a1, __int64 a2)
{
  PVOID *p_P; // r8
  bool v3; // zf
  PVOID *v6; // rcx
  char *v7; // rdx
  PVOID *v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  unsigned int v11; // ebx
  PVOID *v12; // rcx
  PVOID *PoolWithTag; // rax
  unsigned __int64 v15; // rcx
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *v17; // [rsp+28h] [rbp-8h]

  P = 0LL;
  p_P = &P;
  v3 = *(_DWORD *)(a2 + 4) == 0;
  v17 = &P;
  if ( !v3 )
  {
    do
    {
      PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x704E6D73u);
      p_P = PoolWithTag;
      if ( !PoolWithTag )
      {
        v11 = -1073741670;
        goto LABEL_11;
      }
      *PoolWithTag = (char *)*v17 + 1;
      *v17 = PoolWithTag;
      v15 = *(unsigned int *)(a2 + 4);
      v17 = PoolWithTag;
    }
    while ( (unsigned __int64)*PoolWithTag < v15 );
  }
  v6 = (PVOID *)(a1 + 64);
  if ( *p_P )
  {
    v7 = (char *)*p_P + **(_QWORD **)(a1 + 72);
    *p_P = *v6;
    *v6 = P;
    v8 = *(PVOID **)(a1 + 72);
    if ( v8 == v6 )
    {
      v8 = v17;
      *(_QWORD *)(a1 + 72) = v17;
    }
    *v8 = v7;
    p_P = &P;
    P = 0LL;
    v17 = &P;
  }
  v9 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v10 = *(_QWORD *)(a2 + 32);
  v11 = 0;
  *(_OWORD *)(a1 + 16) = v9;
  *(_QWORD *)(a1 + 32) = v10;
  while ( p_P != &P )
  {
    v12 = (PVOID *)P;
    P = *(PVOID *)P;
    if ( v12 == p_P )
    {
      P = 0LL;
      v17 = &P;
    }
    else
    {
      *p_P = (char *)*p_P - 1;
    }
    ExFreePoolWithTag(v12, 0);
LABEL_11:
    p_P = v17;
  }
  return v11;
}
