/*
 * XREFs of sub_140724E14 @ 0x140724E14
 * Callers:
 *     sub_1406C86A0 @ 0x1406C86A0 (sub_1406C86A0.c)
 *     sub_140724DC8 @ 0x140724DC8 (sub_140724DC8.c)
 *     sub_1407CDBA0 @ 0x1407CDBA0 (sub_1407CDBA0.c)
 *     sub_1409AD164 @ 0x1409AD164 (sub_1409AD164.c)
 * Callees:
 *     sub_140243648 @ 0x140243648 (sub_140243648.c)
 *     sub_1409AD180 @ 0x1409AD180 (sub_1409AD180.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140724E14(volatile signed __int32 *P)
{
  signed int v2; // esi
  char *v3; // r14
  char *i; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r8

  if ( _InterlockedExchangeAdd(P + 128, 0xFFFFFFFF) == 1 )
  {
    v2 = 0;
    v3 = byte_140D07030;
    for ( i = (char *)(P + 18); ; i += 128 )
    {
      if ( (*v3 & 3) == 1 )
      {
        v5 = *((_QWORD *)i + 1);
        v6 = *((_QWORD *)i - 1);
        if ( v6 + *(_QWORD *)i )
        {
          if ( v5 )
          {
            v7 = _InterlockedExchange64((volatile __int64 *)i, 0LL);
            v6 = _InterlockedExchange64((volatile __int64 *)i - 1, 0LL) + v7;
          }
          if ( v6 )
          {
LABEL_11:
            sub_140243648(v2, (__int64)(i - 72), v6, v5 != 0);
            goto LABEL_12;
          }
        }
        else
        {
          v6 = 0LL;
        }
        if ( v5 )
          goto LABEL_11;
      }
LABEL_12:
      ++v2;
      v3 += 8;
      if ( v2 >= 4 )
      {
        sub_1409AD180(P);
        ExFreePoolWithTag((PVOID)P, 0);
        return;
      }
    }
  }
}
