/*
 * XREFs of RaidUnitHandleReportLunsDataChanged @ 0x1C00549E0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     McTemplateK0pqquuuqpp_EtwWriteTransfer @ 0x1C004134C (McTemplateK0pqquuuqpp_EtwWriteTransfer.c)
 */

void __fastcall RaidUnitHandleReportLunsDataChanged(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _WORD *Pool; // rdi
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rcx
  int v9; // eax
  signed __int32 v10[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+48h] [rbp-30h]
  void *v17; // [rsp+50h] [rbp-28h]
  _WORD *v18; // [rsp+58h] [rbp-20h]

  if ( *(_QWORD *)(a2 + 216) )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 24) + 443LL) )
    {
      Pool = (_WORD *)RaidAllocatePool(64LL, 16LL, 1398038866LL, *(_QWORD *)(a1 + 8));
      if ( Pool )
      {
        v6 = *(_QWORD *)(a2 + 168);
        if ( *(_BYTE *)(v6 + 2) == 40 )
        {
          *(_OWORD *)Pool = *(_OWORD *)(*(unsigned int *)(v6 + 52) + v6);
        }
        else
        {
          *Pool = 1;
          Pool[1] = *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 56LL);
          *((_DWORD *)Pool + 1) = 4;
          *((_BYTE *)Pool + 8) = *(_BYTE *)(a1 + 96);
          *((_BYTE *)Pool + 9) = *(_BYTE *)(a1 + 97);
          *((_BYTE *)Pool + 10) = *(_BYTE *)(a1 + 98);
          *((_BYTE *)Pool + 11) = 0;
        }
        if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
        {
          v7 = *(_BYTE *)(a1 + 98);
          v8 = *(_QWORD *)(a1 + 24);
          v18 = Pool;
          v17 = &RaidUnitHandleReportLunsDataChangedCompletion;
          LODWORD(v16) = 0;
          LOBYTE(v15) = v7;
          LOBYTE(v14) = *(_BYTE *)(a1 + 97);
          LOBYTE(v13) = *(_BYTE *)(a1 + 96);
          v9 = *(_DWORD *)(v8 + 56);
          LODWORD(v12) = 1;
          LODWORD(v11) = v9;
          McTemplateK0pqquuuqpp_EtwWriteTransfer(
            v8,
            v4,
            (const GUID *)(a2 + 728),
            a1,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16,
            &RaidUnitHandleReportLunsDataChangedCompletion,
            Pool);
        }
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4696LL), 1, 0) )
        {
          _InterlockedOr(v10, 0);
          *(_DWORD *)(*(_QWORD *)(a2 + 216) + 4700LL) = 2;
          *(_QWORD *)(*(_QWORD *)(a2 + 216) + 4712LL) = Pool;
          *(_DWORD *)(*(_QWORD *)(a2 + 216) + 4704LL) = 0;
          *(_QWORD *)(*(_QWORD *)(a2 + 216) + 4720LL) = &RaidUnitHandleReportLunsDataChangedCompletion;
          *(_QWORD *)(*(_QWORD *)(a2 + 216) + 4728LL) = 0LL;
          _InterlockedOr(v10, 0);
          *(_BYTE *)(*(_QWORD *)(a2 + 216) + 104LL) |= 0x40u;
LABEL_13:
          *(_BYTE *)(*(_QWORD *)(a2 + 216) + 105LL) = 1;
          KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(a2 + 216) + 1784LL), 0LL, 0LL);
          return;
        }
        ExFreePoolWithTag(Pool, 0x53546152u);
      }
    }
    *(_BYTE *)(*(_QWORD *)(a2 + 216) + 106LL) = 1;
    goto LABEL_13;
  }
}
