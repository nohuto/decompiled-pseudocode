/*
 * XREFs of EtwSendTraceBuffer @ 0x140630940
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022AFF8 @ 0x14022AFF8 (sub_14022AFF8.c)
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402E1D0C @ 0x1402E1D0C (sub_1402E1D0C.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

__int64 __fastcall EtwSendTraceBuffer(unsigned __int16 a1, signed __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  unsigned int v9; // esi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // ecx
  bool v15; // zf
  signed __int64 v16; // rcx
  char v17; // [rsp+50h] [rbp+8h] BYREF

  v6 = a1;
  v17 = 0;
  v9 = 0;
  if ( (unsigned int)a1 >= *(_DWORD *)(*((_QWORD *)sub_140347DB0() + 108) + 16LL) )
    return 3221225480LL;
  v11 = sub_14022AFF8(v6, qword_140D05008, 0, &v17);
  v13 = v11;
  if ( !v11 )
    return 3221226134LL;
  if ( *(_DWORD *)(v11 + 320) )
  {
    if ( (*(_DWORD *)(v11 + 12) & 0x40000) != 0 )
    {
      if ( a3 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 240), a3);
      v14 = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(a2 + 4) = v14;
      v15 = (*(_BYTE *)(a2 + 52) & 0x20) == 0;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)a2 + v14;
      *(_DWORD *)(a2 + 44) = 3;
      *(_WORD *)(a2 + 54) = 5;
      if ( v15 )
        *(_WORD *)(a2 + 40) = *(unsigned __int8 *)(a2 + 40);
      *(_QWORD *)(a2 + 64) = a5;
      *(_QWORD *)(a2 + 56) = a4;
      *(LARGE_INTEGER *)(a2 + 16) = sub_1402E1D0C(v11, v12);
      do
      {
        v16 = *(_QWORD *)(v13 + 128);
        *(_QWORD *)(a2 + 32) = v16;
      }
      while ( v16 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 128), a2, v16) );
      if ( !v16 )
      {
        if ( KeGetEffectiveIrql() > 2u )
        {
          if ( !_interlockedbittestandset((volatile signed __int32 *)(v13 + 824), 8u) )
            KeInsertQueueDpc((PRKDPC)(v13 + 568), 0LL, 0LL);
        }
        else
        {
          KeSetEvent((PRKEVENT)(v13 + 480), 0, 0);
        }
      }
    }
    else
    {
      v9 = -1073741816;
    }
  }
  else
  {
    v9 = -1073741054;
  }
  if ( v17 )
  {
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(qword_140D05008 + 448) + 8 * v6),
      1u);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  return v9;
}
