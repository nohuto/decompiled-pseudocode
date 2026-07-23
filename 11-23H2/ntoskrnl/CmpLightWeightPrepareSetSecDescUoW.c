/*
 * XREFs of CmpLightWeightPrepareSetSecDescUoW @ 0x140A29AC4
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A1CB5C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     HvMarkCellDirty @ 0x1408ABF46 (HvMarkCellDirty.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x140A28208 (CmpLightWeightCleanupSetSecDescUoW.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetSecDescUoW(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // r14
  ULONG_PTR v4; // rbx
  unsigned int v5; // r12d
  __int64 Pool2; // rax
  unsigned int *v7; // r15
  int SecurityDescriptorNode; // edi
  __int64 CellFlat; // rax
  __int64 v10; // r13
  ULONG_PTR v11; // rdx
  __int64 CellPaged; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  ULONG_PTR v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r12d
  __int64 v19; // [rsp+40h] [rbp-18h] BYREF
  _QWORD v20[2]; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+A8h] [rbp+50h]
  unsigned int v23; // [rsp+B0h] [rbp+58h]
  __int64 v24; // [rsp+B8h] [rbp+60h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v19 = 0xFFFFFFFFLL;
  v2 = 0LL;
  v3 = 0LL;
  v24 = 0xFFFFFFFFLL;
  v20[0] = 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(v1 + 32);
  v5 = *(_DWORD *)(v1 + 40);
  Pool2 = ExAllocatePool2(256LL, 16LL, 2002079043LL);
  v7 = (unsigned int *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_QWORD *)(Pool2 + 8) = v4;
  *(_DWORD *)Pool2 = -1;
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v4, v5, &v19);
  else
    CellFlat = HvpGetCellPaged(v4, v5, (unsigned int *)&v19);
  v10 = CellFlat;
  if ( !CellFlat )
    goto LABEL_7;
  SecurityDescriptorNode = HvMarkCellDirty(v4, v5, 1);
  if ( SecurityDescriptorNode >= 0 )
  {
    v11 = *(unsigned int *)(a1 + 96);
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v4, v11, &v24);
    else
      CellPaged = HvpGetCellPaged(v4, v11, (unsigned int *)&v24);
    v2 = CellPaged;
    if ( !CellPaged
      || ((v13 = *(_DWORD *)(v10 + 44), (*(_BYTE *)(v4 + 140) & 1) == 0)
        ? (v14 = HvpGetCellPaged(v4, v13, (unsigned int *)v20))
        : (v14 = HvpGetCellFlat(v4, v13, v20)),
          (v3 = v14) == 0) )
    {
LABEL_7:
      SecurityDescriptorNode = -1073741670;
      goto LABEL_8;
    }
    v22 = *(_DWORD *)(v14 + 8);
    v23 = *(_DWORD *)(v14 + 4);
    SecurityDescriptorNode = HvMarkCellDirty(v4, v13, 1);
    if ( SecurityDescriptorNode >= 0 )
    {
      SecurityDescriptorNode = HvMarkCellDirty(v4, v22, 1);
      if ( SecurityDescriptorNode >= 0 )
      {
        SecurityDescriptorNode = HvMarkCellDirty(v4, v23, 1);
        if ( SecurityDescriptorNode >= 0 )
        {
          SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(v4, v5, v10, v5 >> 31, (void *)(v2 + 20), 1, v7);
          if ( SecurityDescriptorNode >= 0 )
          {
            if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v4, &v24);
            else
              HvpReleaseCellPaged(v4, (unsigned int *)&v24);
            v15 = *v7;
            v16 = (*(_BYTE *)(v4 + 140) & 1) != 0
                ? HvpGetCellFlat(v4, v15, &v24)
                : HvpGetCellPaged(v4, v15, (unsigned int *)&v24);
            v17 = *(_DWORD *)(v16 + 4);
            v2 = v16;
            SecurityDescriptorNode = HvMarkCellDirty(v4, *(unsigned int *)(v16 + 8), 1);
            if ( SecurityDescriptorNode >= 0 )
            {
              SecurityDescriptorNode = HvMarkCellDirty(v4, v17, 1);
              if ( SecurityDescriptorNode >= 0 )
              {
                SecurityDescriptorNode = 0;
                *(_QWORD *)(a1 + 104) = v7;
LABEL_9:
                if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v4, &v19);
                else
                  HvpReleaseCellPaged(v4, (unsigned int *)&v19);
                goto LABEL_34;
              }
            }
          }
        }
      }
    }
  }
LABEL_8:
  CmpLightWeightCleanupSetSecDescUoW(v7);
  if ( v10 )
    goto LABEL_9;
LABEL_34:
  if ( v2 )
  {
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v4, &v24);
    else
      HvpReleaseCellPaged(v4, (unsigned int *)&v24);
  }
  if ( v3 )
  {
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v4, v20);
    else
      HvpReleaseCellPaged(v4, (unsigned int *)v20);
  }
  return (unsigned int)SecurityDescriptorNode;
}
