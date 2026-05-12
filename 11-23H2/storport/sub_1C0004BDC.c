/*
 * XREFs of sub_1C0004BDC @ 0x1C0004BDC
 * Callers:
 *     sub_1C0004AE0 @ 0x1C0004AE0 (sub_1C0004AE0.c)
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 *     sub_1C0019FDC @ 0x1C0019FDC (sub_1C0019FDC.c)
 *     sub_1C0074CA8 @ 0x1C0074CA8 (sub_1C0074CA8.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall sub_1C0004BDC(__int64 a1)
{
  int v1; // r9d
  PSLIST_ENTRY result; // rax
  unsigned int v4; // r8d
  __int64 v5; // rax
  int v6; // esi
  unsigned int v7; // ecx
  int v8; // edi

  v1 = *(_DWORD *)(a1 + 64);
  if ( !v1 )
    return ExpInterlockedPopEntrySList((PSLIST_HEADER)a1);
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 64LL) + 912LL);
  v5 = v1 * (HIDWORD(KeGetPcr()[1].LockArray) % v4) / v4;
  v6 = v5;
  result = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)a1 + 8 * v5));
  if ( result )
  {
LABEL_5:
    LODWORD(result->Next) = v6;
    return result;
  }
  v7 = *(_DWORD *)(a1 + 64);
  v8 = 1;
  if ( v7 > 1 )
  {
    while ( !result )
    {
      result = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)a1 + 8LL * ((v8 + v6) % v7)));
      v7 = *(_DWORD *)(a1 + 64);
      if ( ++v8 >= v7 )
      {
        if ( !result )
          return result;
        goto LABEL_5;
      }
    }
    goto LABEL_5;
  }
  return result;
}
