/*
 * XREFs of RtlpHpLfhOwnerCleanup @ 0x1800676A4
 * Callers:
 *     RtlpHpLfhContextCleanup @ 0x180067614 (RtlpHpLfhContextCleanup.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFree @ 0x1800678C0 (RtlpHpLfhSubsegmentFree.c)
 */

_QWORD *__fastcall RtlpHpLfhOwnerCleanup(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  _QWORD ***v5; // rcx
  _QWORD *result; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rdx
  _QWORD **v13; // rcx

  v4 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 1) + 128);
  v5 = (_QWORD ***)(a2 + 40);
  result = *(_QWORD **)(a2 + 40);
  if ( result == (_QWORD *)(a2 + 40) )
  {
    v7 = (_QWORD *)(a2 + 24);
    goto LABEL_3;
  }
  if ( (_QWORD ***)result[1] != v5
    || (v11 = *(_QWORD **)(a2 + 48), (_QWORD ***)*v11 != v5)
    || (*v11 = result,
        v7 = (_QWORD *)(a2 + 24),
        result[1] = v11,
        v12 = *(_QWORD **)(a2 + 32),
        *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != a2 + 24)
    || (_QWORD *)*v12 != v7
    || (v13 = *v5, (_QWORD **)(*v13)[1] != v13)
    || (_QWORD **)*v13[1] != v13 )
  {
LABEL_9:
    __fastfail(3u);
  }
  *v12 = v13;
  *(_QWORD *)(a2 + 32) = v13[1];
  result = v13[1];
  *result = v7;
  v13[1] = v12;
LABEL_3:
  while ( 1 )
  {
    v8 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 == v7 )
      return result;
    if ( (_QWORD *)v8[1] != v7 )
      goto LABEL_9;
    v9 = *v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 )
      goto LABEL_9;
    *v7 = v9;
    *(_QWORD *)(v9 + 8) = v7;
    if ( *((_WORD *)v8 + 16) )
      --*(_QWORD *)(a2 + 8);
    *((_WORD *)v8 + 16) = *((_WORD *)v8 + 17);
    v10 = *((unsigned __int16 *)v8 + 23);
    *((_BYTE *)v8 + 38) = 2;
    *(_WORD *)((char *)v8 + v10) = 1;
    result = (_QWORD *)RtlpHpLfhSubsegmentFree(a1, v8, v4, 0LL);
  }
}
