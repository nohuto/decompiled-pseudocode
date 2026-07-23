/*
 * XREFs of IoCsqRemoveNextIrp @ 0x14022FA50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PIRP __stdcall IoCsqRemoveNextIrp(PIO_CSQ Csq, PVOID PeekContext)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  Csq->ReservePointer = 0LL;
  sub_14042A5E0(Csq, &v6);
  v3 = sub_14042A5E0(Csq, 0LL);
  if ( v3 )
  {
    while ( !_InterlockedExchange64((volatile __int64 *)(v3 + 104), 0LL) )
    {
      v3 = sub_14042A5E0(Csq, v3);
      if ( !v3 )
        goto LABEL_6;
    }
    sub_14042A5E0(Csq, v3);
    v4 = *(_QWORD *)(v3 + 144);
    if ( *(_DWORD *)v4 == 1 )
      *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v3 + 144) = 0LL;
    sub_14042A5E0(Csq, v6);
    return (PIRP)v3;
  }
  else
  {
LABEL_6:
    sub_14042A5E0(Csq, v6);
    return 0LL;
  }
}
