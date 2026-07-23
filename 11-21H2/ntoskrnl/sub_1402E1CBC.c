/*
 * XREFs of sub_1402E1CBC @ 0x1402E1CBC
 * Callers:
 *     sub_1402E1704 @ 0x1402E1704 (sub_1402E1704.c)
 *     sub_14079885C @ 0x14079885C (sub_14079885C.c)
 *     sub_1409E971C @ 0x1409E971C (sub_1409E971C.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_1402E1AB0 @ 0x1402E1AB0 (sub_1402E1AB0.c)
 *     sub_1402E1D0C @ 0x1402E1D0C (sub_1402E1D0C.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_140634F40 @ 0x140634F40 (sub_140634F40.c)
 *     sub_1406354FC @ 0x1406354FC (sub_1406354FC.c)
 */

char __fastcall sub_1402E1CBC(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 12);
  if ( (v2 & 0x400) != 0 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      sub_1402E1AB0(a1, (unsigned int *)a2, 4u);
      if ( !*(_DWORD *)(a1 + 1168) && *(_QWORD *)(a1 + 1264) >= 2LL * *(_QWORD *)(a1 + 1272) )
        sub_1406354FC(a1);
      LODWORD(v5) = *(_DWORD *)(a1 + 1168);
      if ( (_DWORD)v5 )
      {
        LODWORD(v5) = _InterlockedExchange((volatile __int32 *)(a1 + 1136), 2);
        if ( !(_DWORD)v5 )
        {
          if ( KeGetEffectiveIrql() > 2u )
            LOBYTE(v5) = KeInsertQueueDpc((PRKDPC)(a1 + 1192), 0LL, 0LL);
          else
            LOBYTE(v5) = sub_140634F40(0LL, a1, 0LL, 0LL);
        }
      }
    }
    else
    {
      LOBYTE(v5) = sub_1402E1AB0(a1, (unsigned int *)a2, 0);
    }
  }
  else
  {
    *(_DWORD *)(a2 + 44) = 3;
    v5 = sub_1402E1D0C();
    *(_QWORD *)(a2 + 16) = v5;
  }
  return v5;
}
