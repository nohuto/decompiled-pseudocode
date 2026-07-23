/*
 * XREFs of sub_14079A984 @ 0x14079A984
 * Callers:
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_14079A984(__int64 a1)
{
  ULONG_PTR v1; // rsi
  LONG result; // eax
  __int64 v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rcx
  int v7; // ebp
  __int64 v8; // rdi
  _QWORD *i; // rcx

  v1 = a1 + 688;
  if ( (*(_DWORD *)(a1 + 824) & 0x20) != 0 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
    v4 = *(_QWORD *)(a1 + 352);
    *(_QWORD *)(a1 + 352) = 0LL;
    ExReleasePushLockEx(v1, 0LL);
    v5 = *(_QWORD *)(v4 + 40);
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_OWORD *)(v5 + 80) = *(_OWORD *)(a1 + 432);
    v6 = *(_QWORD **)(a1 + 336);
    if ( *v6 != a1 + 328 )
      __fastfail(3u);
    *(_QWORD *)v4 = a1 + 328;
    *(_QWORD *)(v4 + 8) = v6;
    *v6 = v4;
    *(_QWORD *)(a1 + 336) = v4;
    ++*(_DWORD *)(a1 + 344);
    *(_BYTE *)(v4 + 90) &= ~8u;
    _InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x40u);
    *(_DWORD *)(a1 + 40) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(a1 + 456), 0, 0);
  }
  result = *(_DWORD *)(a1 + 824);
  if ( (result & 0x10) != 0 )
  {
    v7 = -1073741162;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    v8 = *(_QWORD *)(a1 + 352);
    *(_QWORD *)(a1 + 352) = 0LL;
    ExReleasePushLockEx(v1, 0LL);
    for ( i = *(_QWORD **)(a1 + 328); i != (_QWORD *)(a1 + 328); i = (_QWORD *)*i )
    {
      if ( (_QWORD *)v8 == i && (*(_BYTE *)(v8 + 90) & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 824), 4u);
        *(_BYTE *)(v8 + 90) |= 1u;
        v7 = 0;
      }
    }
    *(_DWORD *)(a1 + 40) = v7;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFEF);
    return KeSetEvent((PRKEVENT)(a1 + 456), 0, 0);
  }
  return result;
}
