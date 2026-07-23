/*
 * XREFs of CmEnumerateValueKey @ 0x14070EA50
 * Callers:
 *     NtEnumerateValueKey @ 0x14070E540 (NtEnumerateValueKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpQueryKeyValueData @ 0x1406DCE00 (CmpQueryKeyValueData.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1407689EC (CmpTransSearchAddTransFromKeyBody.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13E14 (CmEnumerateValueFromLayeredKey.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AF5530 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmEnumerateValueKey(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  int KeyValueData; // esi
  __int64 v16; // rax
  ULONG_PTR v17; // rcx
  ULONG_PTR v18; // rdx
  __int64 CellFlat; // rax
  ULONG_PTR v20; // rcx
  unsigned int v21; // esi
  __int64 v22; // rdi
  __int64 CellPaged; // rax
  __int64 v24; // rbp
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v32; // r13
  __int64 v33; // [rsp+40h] [rbp-88h] BYREF
  __int64 v34; // [rsp+48h] [rbp-80h] BYREF
  __int64 v35; // [rsp+50h] [rbp-78h] BYREF
  _OWORD v36[3]; // [rsp+58h] [rbp-70h] BYREF

  v34 = 0LL;
  v33 = 0LL;
  v35 = 0LL;
  memset(v36, 0, sizeof(v36));
  v9 = a2;
  HvpGetCellContextReinitialize(&v34);
  HvpGetCellContextReinitialize(&v33);
  CmpAttachToRegistryProcess(v36);
  CmpLockRegistry(v11, v10, v12, v13);
  v14 = a1[1];
  if ( *(_WORD *)(v14 + 66) )
  {
    KeyValueData = CmEnumerateValueFromLayeredKey(a1, (unsigned int)v9, a3, a4, a5, a6);
    goto LABEL_18;
  }
  CmpLockKcbShared(a1[1]);
  KeyValueData = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( KeyValueData >= 0 )
  {
    if ( !a1[7] && !a1[8] )
      goto LABEL_5;
    KeyValueData = CmpTransSearchAddTransFromKeyBody(a1, &v35);
    if ( KeyValueData >= 0 )
    {
      v32 = v35;
      KeyValueData = CmpPerformKeyBodyDeletionCheck(a1, v35);
      if ( KeyValueData >= 0 )
      {
        if ( v32 )
        {
          v16 = 280LL;
          if ( v32 == *(_QWORD *)(v14 + 288) )
          {
LABEL_6:
            if ( (unsigned int)v9 >= *(_DWORD *)(v16 + v14) )
            {
              KeyValueData = -2147483622;
            }
            else
            {
              v17 = *(_QWORD *)(v14 + 32);
              v18 = *(unsigned int *)(v16 + v14 + 4);
              if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
                CellFlat = HvpGetCellFlat(v17, v18);
              else
                CellFlat = HvpGetCellPaged(v17, v18, (unsigned int *)&v34);
              v20 = *(_QWORD *)(v14 + 32);
              v21 = *(_DWORD *)(CellFlat + 4 * v9);
              v22 = CellFlat;
              if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
                CellPaged = HvpGetCellFlat(v20, v21);
              else
                CellPaged = HvpGetCellPaged(v20, v21, (unsigned int *)&v33);
              v24 = CellPaged;
              KeyValueData = CmpQueryKeyValueData(v14, v21, CellPaged, a3, a4, a5, a6);
              if ( v24 )
              {
                v25 = *(_QWORD *)(v14 + 32);
                if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v25, &v33);
                else
                  HvpReleaseCellPaged(v25, (unsigned int *)&v33);
              }
              if ( v22 )
              {
                v26 = *(_QWORD *)(v14 + 32);
                if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v26, &v34);
                else
                  HvpReleaseCellPaged(v26, (unsigned int *)&v34);
              }
            }
            goto LABEL_17;
          }
        }
LABEL_5:
        v16 = 96LL;
        goto LABEL_6;
      }
    }
  }
LABEL_17:
  CmpUnlockKcb(v14);
LABEL_18:
  CmpUnlockRegistry(v28, v27, v29, v30);
  CmpDetachFromRegistryProcess(v36);
  return (unsigned int)KeyValueData;
}
