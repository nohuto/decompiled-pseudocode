/*
 * XREFs of sub_14078AB30 @ 0x14078AB30
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402E0740 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoReportTargetDeviceChange @ 0x1407FB910 (IoReportTargetDeviceChange.c)
 *     sub_140944BB0 @ 0x140944BB0 (sub_140944BB0.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 *     sub_14078C4EC @ 0x14078C4EC (sub_14078C4EC.c)
 */

__int64 __fastcall sub_14078AB30(_QWORD *Object, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, unsigned __int16 *Src)
{
  __int64 v9; // rdi
  unsigned int v10; // ebp
  __int64 v11; // rbx
  const void *v12; // rdx
  void *v13; // rcx

  if ( a2 )
    *a3 = 259;
  if ( stru_140C46280.Header.SignalState )
    return 3221225865LL;
  if ( Object )
    v9 = *(_QWORD *)(Object[39] + 40LL);
  else
    v9 = 0LL;
  v10 = Src[1] + ((*(unsigned __int16 *)(v9 + 40) + 89) & 0xFFFFFFF8);
  v11 = sub_14078C4EC(v10 + 112);
  if ( !v11 )
    return 3221225626LL;
  ObfReferenceObjectWithTag(Object, 0x56706E50u);
  *(_QWORD *)(v11 + 32) = a4;
  *(_QWORD *)(v11 + 40) = a5;
  *(_QWORD *)(v11 + 24) = a2;
  *(_DWORD *)(v11 + 144) = 0;
  *(_DWORD *)(v11 + 128) = 3;
  *(_OWORD *)(v11 + 112) = xmmword_140010D08;
  *(_QWORD *)(v11 + 136) = a3;
  *(_DWORD *)(v11 + 148) = v10;
  *(_QWORD *)(v11 + 152) = Object;
  v12 = *(const void **)(v9 + 48);
  if ( v12 )
    memmove((void *)(v11 + 168), v12, *(unsigned __int16 *)(v9 + 40));
  v13 = (void *)(v11 + v10 + 112 - (unsigned __int64)Src[1]);
  *(_QWORD *)(v11 + 160) = v13;
  memmove(v13, Src, Src[1]);
  return sub_14078C398(v11);
}
