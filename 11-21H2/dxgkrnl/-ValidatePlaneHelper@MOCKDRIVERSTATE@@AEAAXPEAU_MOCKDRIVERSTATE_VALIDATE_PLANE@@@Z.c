/*
 * XREFs of ?ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z @ 0x1C005560C
 * Callers:
 *     ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z @ 0x1C00555D8 (-ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z.c)
 * Callees:
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0014310 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?QueuePlaneViolationWorkItem@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOCKDRIVERSTATE_PLANE@@@Z @ 0x1C00551A0 (-QueuePlaneViolationWorkItem@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOC.c)
 *     ?CreatePlaneLiveDumpAtPassive@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOCKDRIVERSTATE_PLANE@@@Z @ 0x1C0317F8C (-CreatePlaneLiveDumpAtPassive@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MO.c)
 */

void __fastcall MOCKDRIVERSTATE::ValidatePlaneHelper(DXGADAPTER **this, struct _MOCKDRIVERSTATE_VALIDATE_PLANE *a2)
{
  __int64 v2; // r8
  struct DXGADAPTER *v3; // r9
  __int64 *v4; // r10
  __int64 v5; // r10
  __int64 v6; // r11
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdi

  if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(this[3]) )
    return;
  v5 = *v4;
  if ( *(_BYTE *)(v5 + 8) )
    return;
  v6 = 0LL;
  v7 = *((_DWORD *)v3 + 386);
  v8 = *((_DWORD *)v3 + 658);
  if ( !*(_DWORD *)v2 )
    return;
  while ( *(_BYTE *)(v2 + 16) )
  {
    v9 = *(_QWORD *)(v5
                   + 16
                   * (*(unsigned int *)(*(_QWORD *)(v2 + 32) + 4 * v6)
                    + 10LL * *(unsigned int *)(*(_QWORD *)(v2 + 24) + 4 * v6))
                   + 56);
    if ( v9 && *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8 * v6) == v9 )
    {
      v10 = *(_DWORD *)(*(_QWORD *)(v2 + 32) + 4 * v6);
      LODWORD(v11) = *(_DWORD *)(*(_QWORD *)(v2 + 24) + 4 * v6);
      goto LABEL_8;
    }
LABEL_16:
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *(_DWORD *)v2 )
      return;
  }
  v11 = 0LL;
  if ( !v7 )
    goto LABEL_16;
  while ( 1 )
  {
    v10 = 0;
    if ( v8 )
      break;
LABEL_15:
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v7 )
      goto LABEL_16;
  }
  while ( 1 )
  {
    v12 = *(_QWORD *)(v5 + 16 * (10 * v11 + v10) + 56);
    if ( v12 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8 * v6) == v12 )
        break;
    }
    if ( ++v10 >= v8 )
      goto LABEL_15;
  }
LABEL_8:
  if ( *(_BYTE *)(v2 + 56) )
    CreatePlaneLiveDumpAtPassive(
      v11,
      v10,
      (struct _MOCKDRIVERSTATE_VALIDATE_PLANE *)v2,
      v3,
      (struct _MOCKDRIVERSTATE_PLANE *)v5);
  else
    QueuePlaneViolationWorkItem(
      v11,
      v10,
      (struct _MOCKDRIVERSTATE_VALIDATE_PLANE *)v2,
      v3,
      (struct _MOCKDRIVERSTATE_PLANE *)v5);
}
