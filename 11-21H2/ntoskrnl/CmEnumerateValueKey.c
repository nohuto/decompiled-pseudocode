/*
 * XREFs of CmEnumerateValueKey @ 0x1406A18C0
 * Callers:
 *     NtEnumerateValueKey @ 0x1406A1370 (NtEnumerateValueKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14067F480 (CmpTransSearchAddTransFromKeyBody.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpQueryKeyValueData @ 0x1407C5730 (CmpQueryKeyValueData.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407F6698 (CmEnumerateValueFromLayeredKey.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmEnumerateValueKey(_QWORD *a1, unsigned int a2, unsigned int a3, size_t a4, int a5, __int64 a6)
{
  __int64 v9; // rbp
  __int64 v10; // rbx
  int KeyValueData; // esi
  __int64 v12; // rax
  ULONG_PTR v13; // rcx
  __int64 CellFlat; // rax
  ULONG_PTR v15; // rcx
  int v16; // esi
  __int64 v17; // rdi
  __int64 CellPaged; // rax
  __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // r13
  __int64 v28; // [rsp+40h] [rbp-88h] BYREF
  __int64 v29; // [rsp+48h] [rbp-80h] BYREF
  __int64 v30; // [rsp+50h] [rbp-78h] BYREF
  _OWORD v31[3]; // [rsp+58h] [rbp-70h] BYREF

  v29 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  memset(v31, 0, sizeof(v31));
  v9 = a2;
  HvpGetCellContextReinitialize(&v29);
  HvpGetCellContextReinitialize(&v28);
  CmpAttachToRegistryProcess(v31);
  CmpLockRegistry();
  v10 = a1[1];
  if ( *(_WORD *)(v10 + 66) )
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
    KeyValueData = CmpTransSearchAddTransFromKeyBody(a1, &v30);
    if ( KeyValueData >= 0 )
    {
      v27 = v30;
      KeyValueData = CmpPerformKeyBodyDeletionCheck(a1, v30);
      if ( KeyValueData >= 0 )
      {
        if ( v27 )
        {
          v12 = 280LL;
          if ( v27 == *(_QWORD *)(v10 + 288) )
          {
LABEL_6:
            if ( (unsigned int)v9 >= *(_DWORD *)(v12 + v10) )
            {
              KeyValueData = -2147483622;
            }
            else
            {
              v13 = *(_QWORD *)(v10 + 32);
              if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
                CellFlat = HvpGetCellFlat(v13, *(unsigned int *)(v12 + v10 + 4));
              else
                CellFlat = HvpGetCellPaged(v13);
              v15 = *(_QWORD *)(v10 + 32);
              v16 = *(_DWORD *)(CellFlat + 4 * v9);
              v17 = CellFlat;
              if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
                CellPaged = HvpGetCellFlat(v15, *(unsigned int *)(CellFlat + 4 * v9));
              else
                CellPaged = HvpGetCellPaged(v15);
              v19 = CellPaged;
              KeyValueData = CmpQueryKeyValueData(v10, v16, CellPaged, a3, a4, a5, a6);
              if ( v19 )
              {
                v20 = *(_QWORD *)(v10 + 32);
                if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v20, &v28);
                else
                  HvpReleaseCellPaged(v20, &v28);
              }
              if ( v17 )
              {
                v21 = *(_QWORD *)(v10 + 32);
                if ( (*(_BYTE *)(v21 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v21, &v29);
                else
                  HvpReleaseCellPaged(v21, &v29);
              }
            }
            goto LABEL_17;
          }
        }
LABEL_5:
        v12 = 96LL;
        goto LABEL_6;
      }
    }
  }
LABEL_17:
  CmpUnlockKcb(v10);
LABEL_18:
  CmpUnlockRegistry(v23, v22, v24, v25);
  CmpDetachFromRegistryProcess(v31);
  return (unsigned int)KeyValueData;
}
