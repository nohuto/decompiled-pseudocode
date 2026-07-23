/*
 * XREFs of sub_140594698 @ 0x140594698
 * Callers:
 *     sub_1402792E0 @ 0x1402792E0 (sub_1402792E0.c)
 * Callees:
 *     sub_14027938C @ 0x14027938C (sub_14027938C.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140584530 @ 0x140584530 (sub_140584530.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140594698(char *P, char *a2)
{
  unsigned int v2; // ebp
  __int16 v5; // ax
  ULONG_PTR v6; // r9
  ULONG_PTR v7; // r8
  __int64 *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ecx

  v2 = 0;
  KeWaitForSingleObject(P + 32, WrPageIn, 0, 0, 0LL);
  v5 = *((_WORD *)P + 141);
  if ( (v5 & 0x200) != 0 )
  {
    sub_140584530((__int64)(P + 272));
    *((_QWORD *)P + 11) = 0LL;
    v5 = *((_WORD *)P + 141);
    *((_DWORD *)P + 20) = -1073741670;
  }
  if ( (v5 & 1) != 0 )
    MmUnmapLockedPages(*((PVOID *)P + 37), (PMDL)(P + 272));
  if ( *((int *)P + 20) < 0 )
  {
    v2 = *((_DWORD *)P + 20);
  }
  else
  {
    v6 = *((unsigned int *)P + 78);
    v7 = *((_QWORD *)P + 11);
    if ( v7 != v6 )
      KeBugCheckEx(0x7Au, 5uLL, v7, v6, (ULONG_PTR)P);
  }
  v8 = (__int64 *)(P + 16);
  while ( 1 )
  {
    v9 = *v8;
    if ( (__int64 *)*v8 == v8 )
      break;
    if ( *(__int64 **)(v9 + 8) != v8 || (v10 = *(_QWORD *)v9, *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    *(_DWORD *)(v9 + 80) = *((_DWORD *)P + 20);
    if ( *((int *)P + 20) < 0 )
      v11 = 0LL;
    else
      v11 = *(unsigned int *)(v9 + 184);
    *(_QWORD *)(v9 + 88) = v11;
    KeSetEvent((PRKEVENT)(v9 + 32), 0, 0);
    v12 = sub_14027938C(v9, a2);
    if ( ((v12 + 0x80000000) & 0x80000000) == 0 && v12 != -1073740748 )
      v2 = v12;
  }
  ExFreePoolWithTag(P, 0);
  return v2;
}
