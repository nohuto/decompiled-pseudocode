/*
 * XREFs of sub_14091C1BC @ 0x14091C1BC
 * Callers:
 *     sub_14080C884 @ 0x14080C884 (sub_14080C884.c)
 * Callees:
 *     sub_14067F2D4 @ 0x14067F2D4 (sub_14067F2D4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

__int64 __fastcall sub_14091C1BC(__int64 a1, CLFS_LSN a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // r15
  _QWORD *v6; // r12
  NTSTATUS v7; // eax
  int v8; // esi
  CLFS_LSN v9; // rax
  _DWORD *v10; // rcx
  void ***v12; // rax
  int v13; // ecx
  void **v14; // rcx
  void **v15; // rdx
  PVOID pvReadContext; // [rsp+50h] [rbp-9h] BYREF
  CLFS_LSN plsnUser; // [rsp+58h] [rbp-1h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+60h] [rbp+7h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+68h] [rbp+Fh] BYREF
  CLFS_LSN plsnRecord; // [rsp+70h] [rbp+17h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+C0h] [rbp+67h] BYREF
  CLFS_LSN plsnFirst; // [rsp+C8h] [rbp+6Fh] BYREF
  ULONG pcbBuffer; // [rsp+D0h] [rbp+77h] BYREF
  PVOID ppvReadBuffer; // [rsp+D8h] [rbp+7Fh] BYREF

  plsnFirst = a2;
  pvReadContext = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  ppvReadBuffer = 0LL;
  v4 = *(_QWORD **)(a1 + 16);
  pcbBuffer = 0;
  plsnUndoNext.ullOffset = 0LL;
  plsnPrevious.ullOffset = 0LL;
  plsnRecord.ullOffset = 0LL;
  plsnUser.ullOffset = 0LL;
  peRecordType = 0;
  if ( v4 == v2 )
  {
    v5 = 0LL;
    v6 = 0LL;
  }
  else
  {
    v4[1] = *(_QWORD *)(a1 + 24);
    **(_QWORD **)(a1 + 24) = *v2;
    v5 = *v2;
    v6 = *(_QWORD **)(*v2 + 8LL);
    v2[1] = v2;
    *v2 = v2;
  }
  v7 = ClfsReadLogRecord(
         *(PVOID *)(a1 + 96),
         &plsnFirst,
         ClfsContextForward,
         &ppvReadBuffer,
         &pcbBuffer,
         &peRecordType,
         &plsnUndoNext,
         &plsnPrevious,
         &pvReadContext);
  v8 = v7;
  while ( v7 >= 0 )
  {
    if ( (peRecordType & 1) != 0 && pcbBuffer >= 0x30 )
    {
      v8 = sub_14067F2D4((_QWORD *)a1, 0LL, (__int64)ppvReadBuffer + 16, 1, (__int64)&plsnUser);
      if ( v8 < 0 )
        break;
      v9 = plsnUser;
      if ( !plsnUser.ullOffset )
      {
        v8 = -1072103422;
        break;
      }
      v10 = ppvReadBuffer;
      if ( *((_DWORD *)ppvReadBuffer + 2) == 16 )
      {
        *(_DWORD *)(plsnUser.ullOffset + 48) |= 4u;
        v10 = ppvReadBuffer;
      }
      if ( v10[2] == 8 )
      {
        *(_DWORD *)(v9.ullOffset + 48) |= 2u;
        v10 = ppvReadBuffer;
      }
      if ( v10[2] == 4 )
        *(_DWORD *)(v9.ullOffset + 48) |= 1u;
    }
    peRecordType = 1;
    v7 = ClfsReadNextLogRecord(
           pvReadContext,
           &ppvReadBuffer,
           &pcbBuffer,
           &peRecordType,
           0LL,
           &plsnUndoNext,
           &plsnPrevious,
           &plsnRecord);
    v8 = v7;
    if ( v7 == -1073741807 )
    {
      v8 = 0;
LABEL_24:
      plsnUser.ullOffset = 0LL;
      while ( 1 )
      {
        v12 = (void ***)sub_140AB4218(v2, &plsnUser, 0LL);
        if ( !v12 )
          goto LABEL_17;
        v13 = *((_DWORD *)v12 + 12);
        if ( (v13 & 1) == 0 || (v13 & 2) != 0 || (v13 & 4) != 0 )
        {
          v14 = *v12;
          if ( (*v12)[1] != v12 || (v15 = v12[1], *v15 != v12) )
            __fastfail(3u);
          *v15 = v14;
          v14[1] = v15;
          ExFreePoolWithTag(v12, 0x72544D43u);
          goto LABEL_24;
        }
      }
    }
  }
LABEL_17:
  if ( pvReadContext )
    ClfsTerminateReadLog(pvReadContext);
  if ( v5 )
  {
    *v6 = v2;
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(a1 + 24);
    **(_QWORD **)(a1 + 24) = v5;
    *(_QWORD *)(a1 + 24) = v6;
  }
  return (unsigned int)v8;
}
