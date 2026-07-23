/*
 * XREFs of sub_1405F27C0 @ 0x1405F27C0
 * Callers:
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 * Callees:
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     sub_1405F1C10 @ 0x1405F1C10 (sub_1405F1C10.c)
 *     sub_1405F1F34 @ 0x1405F1F34 (sub_1405F1F34.c)
 *     sub_1405F2400 @ 0x1405F2400 (sub_1405F2400.c)
 *     sub_1405F26CC @ 0x1405F26CC (sub_1405F26CC.c)
 */

__int64 __fastcall sub_1405F27C0(ULONG_PTR a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // r8d
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  __int64 *i; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // r15
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  int v13; // r14d
  unsigned int v14; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *(_QWORD *)a2 )
  {
    v5 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1;
    v6 = 2 * v5;
    if ( !*(_DWORD *)(a2 + 12) )
      v6 = v5;
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v6) = 0LL;
    v7 = (unsigned __int64)(unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1) >> 5;
    result = (unsigned int)~(1 << ((*(_BYTE *)(a2 + 8) - *(_BYTE *)(a2 + 24) - 1) & 0x1F));
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + 4 * v7) &= result;
  }
  for ( i = *(__int64 **)(a1 + 344); (__int64 *)(a1 + 336) != i; i = (__int64 *)i[1] )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_DWORD *)i - 2) ^= *(_DWORD *)(a1 + 136);
      if ( *((_BYTE *)i - 5) != (*((_BYTE *)i - 8) ^ (unsigned __int8)(*((_BYTE *)i - 7) ^ *((_BYTE *)i - 6))) )
        sub_1405F1C10(a1, (ULONG_PTR)(i - 2));
    }
    v9 = *((unsigned __int16 *)i - 4);
    v10 = a2;
    v11 = *(unsigned int *)(a2 + 8);
    if ( v9 < v11 )
    {
LABEL_12:
      v13 = *((unsigned __int16 *)i - 4);
    }
    else
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)v10;
        if ( !*(_QWORD *)v10 )
          break;
        v10 = *(_QWORD *)v10;
        if ( v9 < *(unsigned int *)(v12 + 8) )
          goto LABEL_12;
      }
      v13 = *(_DWORD *)(v10 + 8) - 1;
    }
    if ( *(_QWORD *)a2 )
    {
      v14 = v11 - 1;
      if ( (unsigned int)v9 < (unsigned int)v11 )
        v14 = *((unsigned __int16 *)i - 4);
      sub_1405F26CC(a1, a2, v11, i, v14, *((unsigned __int16 *)i - 4));
    }
    result = sub_1405F2400(a1, v10, v11, (__int64)i, v13, *((unsigned __int16 *)i - 4));
    if ( dword_140D04920 >= 1 )
    {
      result = *(unsigned int *)(*(_QWORD *)(v10 + 40)
                               + 4 * ((unsigned __int64)(unsigned int)(v13 - *(_DWORD *)(v10 + 24)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v13 - *(_BYTE *)(v10 + 24)) & 0x1F) )
      {
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        sub_1405F1F34();
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_BYTE *)i - 5) = *((_BYTE *)i - 8) ^ *((_BYTE *)i - 7) ^ *((_BYTE *)i - 6);
      result = *(unsigned int *)(a1 + 136);
      *((_DWORD *)i - 2) ^= result;
    }
  }
  return result;
}
