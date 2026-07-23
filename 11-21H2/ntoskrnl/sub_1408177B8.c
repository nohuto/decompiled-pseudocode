/*
 * XREFs of sub_1408177B8 @ 0x1408177B8
 * Callers:
 *     IoDisconnectInterrupt @ 0x140816AA0 (IoDisconnectInterrupt.c)
 *     sub_140817258 @ 0x140817258 (sub_140817258.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14081788C @ 0x14081788C (sub_14081788C.c)
 *     sub_1408179B8 @ 0x1408179B8 (sub_1408179B8.c)
 */

void *__fastcall sub_1408177B8(__int64 a1, _QWORD *a2)
{
  void *result; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx

  result = memset(a2, 0, 0x50uLL);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    a2[1] = a2;
    *a2 = a2;
    KeInitializeEvent((PRKEVENT)(a2 + 5), SynchronizationEvent, 1u);
    *((_DWORD *)a2 + 16) = 1;
    LOBYTE(v5) = 1;
    v6 = *(_DWORD *)(a1 + 64);
    *((_DWORD *)a2 + 4) = v6;
    sub_14081788C(0LL, v5, 2LL);
    v8 = qword_140C46960;
    v9 = 0LL;
    while ( (__int64 *)v8 != &qword_140C46960 && *(_DWORD *)(v8 + 16) <= v6 )
    {
      if ( *(_DWORD *)(v8 + 16) == v6 )
      {
        v9 = v8;
        break;
      }
      v8 = *(_QWORD *)v8;
    }
    if ( v9 )
    {
      a2[3] = *(_QWORD *)(v9 + 24);
      a2[4] = *(_QWORD *)(v9 + 32);
      _InterlockedIncrement(*(volatile signed __int32 **)(v9 + 32));
    }
    else
    {
      a2[3] = a2 + 5;
      a2[4] = a2 + 8;
    }
    sub_1408179B8(a2, v7, &qword_140C46960);
    return (void *)sub_14081788C(0LL, 0LL, 2LL);
  }
  return result;
}
