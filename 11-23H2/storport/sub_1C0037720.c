/*
 * XREFs of sub_1C0037720 @ 0x1C0037720
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FE18 @ 0x1C000FE18 (sub_1C000FE18.c)
 *     sub_1C00668E8 @ 0x1C00668E8 (sub_1C00668E8.c)
 */

void __fastcall sub_1C0037720(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // ecx
  _DWORD *v7; // rax

  v4 = DeferredContext[8];
  v5 = *(unsigned int *)(v4 + 904);
  if ( (unsigned int)v5 > 1 )
  {
    v6 = 0;
    v7 = (_DWORD *)(*(_QWORD *)(v4 + 896) + 136LL);
    do
    {
      v6 += *v7;
      v7 += 80;
      --v5;
    }
    while ( v5 );
    if ( v6 > *(_DWORD *)(v4 + 548) && !(unsigned int)sub_1C000FE18(v4) )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 916)) != 2 )
        return;
      sub_1C00668E8(v4);
    }
    _InterlockedExchange((volatile __int32 *)(v4 + 916), 0);
  }
}
