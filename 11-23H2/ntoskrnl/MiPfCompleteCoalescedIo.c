/*
 * XREFs of MiPfCompleteCoalescedIo @ 0x1406320F0
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x1402A3CD0 (MiPfCompletePrefetchIos.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     MiPfCompleteInPageSupport @ 0x1402A3D7C (MiPfCompleteInPageSupport.c)
 *     MmUnmapLockedPages @ 0x1402CB990 (MmUnmapLockedPages.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x14061CF10 (MiRetardMdl.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfCompleteCoalescedIo(char *P, char *a2)
{
  unsigned int v2; // ebp
  unsigned int *v5; // r14
  ULONG_PTR v6; // r9
  ULONG_PTR v7; // r8
  ULONG_PTR *v8; // rsi
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ecx

  v2 = 0;
  KeWaitForSingleObject(P + 32, WrPageIn, 0, 0, 0LL);
  v5 = (unsigned int *)(P + 80);
  if ( _bittest16((const signed __int16 *)P + 141, 9u) )
  {
    MiRetardMdl((__int64)(P + 272));
    *((_QWORD *)P + 11) = 0LL;
    *v5 = -1073741670;
  }
  if ( (P[282] & 1) != 0 )
    MmUnmapLockedPages(*((PVOID *)P + 37), (PMDL)(P + 272));
  if ( (*v5 & 0x80000000) != 0 )
  {
    v2 = *v5;
  }
  else
  {
    v6 = *((unsigned int *)P + 78);
    v7 = *((_QWORD *)P + 11);
    if ( v7 != v6 )
      KeBugCheckEx(0x7Au, 5uLL, v7, v6, (ULONG_PTR)P);
  }
  v8 = (ULONG_PTR *)(P + 16);
  while ( 1 )
  {
    v9 = *v8;
    if ( (ULONG_PTR *)*v8 == v8 )
      break;
    if ( *(ULONG_PTR **)(v9 + 8) != v8 || (v10 = *(_QWORD *)v9, *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    *(_DWORD *)(v9 + 80) = *v5;
    if ( (*v5 & 0x80000000) != 0 )
      v11 = 0LL;
    else
      v11 = *(unsigned int *)(v9 + 184);
    *(_QWORD *)(v9 + 88) = v11;
    KeSetEvent((PRKEVENT)(v9 + 32), 0, 0);
    v12 = MiPfCompleteInPageSupport(v9, a2);
    if ( ((v12 + 0x80000000) & 0x80000000) == 0 && v12 != -1073740748 )
      v2 = v12;
  }
  ExFreePoolWithTag(P, 0);
  return v2;
}
