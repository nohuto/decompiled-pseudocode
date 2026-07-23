/*
 * XREFs of sub_140A9D3E0 @ 0x140A9D3E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_140A9D340 @ 0x140A9D340 (sub_140A9D340.c)
 */

void __fastcall sub_140A9D3E0(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 i; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax

  if ( dword_140D57520 )
  {
    v4 = dword_140D57568++;
    v5 = dword_140D57568;
    KeAcquireSpinLockAtDpcLevel(&qword_140D57750);
    if ( v5 >= v4 )
    {
      if ( dword_140D57520 )
      {
        v7 = qword_140D576F0;
        if ( *(_DWORD *)(qword_140D576F0 + 24) < (unsigned int)dword_140D57568 )
        {
          sub_140A9D340(qword_140D576F0);
          v8 = *(_QWORD *)v7;
          if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = *(_QWORD **)(v7 + 8), *v9 != v7) )
            __fastfail(3u);
          *v9 = v8;
          *(_QWORD *)(v8 + 8) = v9;
          *(_BYTE *)(v7 + 28) = 0;
          --dword_140D57520;
        }
      }
    }
    else
    {
      for ( i = qword_140D576F0; (__int64 *)i != &qword_140D576F0; i = *(_QWORD *)i )
        *(_BYTE *)(i + 28) = 0;
      qword_140D576F8 = (__int64)&qword_140D576F0;
      qword_140D576F0 = (__int64)&qword_140D576F0;
      dword_140D57520 = 0;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140D57750);
  }
  if ( !dword_140D575E8 )
    sub_1402E2D20((unsigned __int64)&stru_140D58D80, -10000000LL, 0, 0, (__int64)&stru_140D58D40);
}
