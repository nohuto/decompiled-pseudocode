/*
 * XREFs of sub_1C0061378 @ 0x1C0061378
 * Callers:
 *     sub_1C000F470 @ 0x1C000F470 (sub_1C000F470.c)
 * Callees:
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C001FCD0 @ 0x1C001FCD0 (sub_1C001FCD0.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 */

__int64 __fastcall sub_1C0061378(__int64 a1, __int64 a2)
{
  __int64 v5; // rbp
  _WORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  void *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 LockArray_high; // rdx
  int v13; // ecx
  int v14; // ecx
  char v15; // al
  PIRP v16; // rax
  __int64 v17; // r8
  IRP *v18; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STATUS_BLOCK v20; // [rsp+20h] [rbp-18h] BYREF

  v20 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = (_WORD *)sub_1C0007BA4(*(_QWORD *)(a1 + 8), 0x10u, *(_BYTE *)(v5 + 442), 0);
  if ( !v6 )
    return 3221225495LL;
  v7 = (_QWORD *)sub_1C0007CF4(64LL, 8LL, 1918067026LL, *(_QWORD *)(a1 + 8));
  v9 = v7;
  if ( !v7 )
  {
LABEL_20:
    ExFreePoolWithTag(v6, 0x72536152u);
    return 3221225495LL;
  }
  *v7 = a2;
  if ( *(_BYTE *)(v5 + 442) == 1 )
  {
    v10 = *((unsigned int *)v6 + 13);
    *((_DWORD *)v6 + 5) = 16;
    *((_BYTE *)v6 + v10 + 8) = *(_BYTE *)(a1 + 96);
    *((_BYTE *)v6 + v10 + 9) = *(_BYTE *)(a1 + 97);
    *((_BYTE *)v6 + v10 + 10) = *(_BYTE *)(a1 + 98);
    *((_DWORD *)v6 + 6) = 524562;
    if ( (unsigned int)sub_1C00230AC() && sub_1C0023100(*(_QWORD *)(a1 + 24)) )
    {
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v8 + 6080) + 8 * LockArray_high));
      v11 = **(_QWORD **)(*(_QWORD *)(v8 + 6080) + 8 * LockArray_high);
      *((_DWORD *)v6 + 11) = HIDWORD(v11);
    }
    else
    {
      LODWORD(v11) = -1;
    }
    *((_DWORD *)v6 + 8) = v11;
    v13 = 10;
    *((_QWORD *)v6 + 10) = 0LL;
    *((_QWORD *)v6 + 8) = v9;
    *((_DWORD *)v6 + 15) = 8;
    if ( *(_BYTE *)(a1 + 3280) )
    {
      if ( *(_DWORD *)(a1 + 3300) < 0xAu )
        v13 = *(_DWORD *)(a1 + 3300);
    }
    *((_DWORD *)v6 + 10) = v13;
    v6[19] = 33;
  }
  else
  {
    *((_BYTE *)v6 + 2) = 16;
    *v6 = 88;
    v14 = 10;
    *((_BYTE *)v6 + 5) = *(_BYTE *)(a1 + 96);
    *((_BYTE *)v6 + 6) = *(_BYTE *)(a1 + 97);
    v15 = *(_BYTE *)(a1 + 98);
    *((_QWORD *)v6 + 6) = 0LL;
    *((_BYTE *)v6 + 7) = v15;
    *((_DWORD *)v6 + 3) = 524562;
    *((_BYTE *)v6 + 8) = -1;
    *((_QWORD *)v6 + 3) = v9;
    *((_DWORD *)v6 + 4) = 8;
    if ( *(_BYTE *)(a1 + 3280) && *(_DWORD *)(a1 + 3300) < 0xAu )
      v14 = *(_DWORD *)(a1 + 3300);
    *((_DWORD *)v6 + 5) = v14;
    *((_BYTE *)v6 + 9) = 33;
  }
  v16 = sub_1C001FCD0(*(_QWORD *)(a1 + 8), (ULONG_PTR)v6, v8, &v20);
  v18 = v16;
  if ( !v16 )
  {
    ExFreePoolWithTag(v9, 0x72536152u);
    goto LABEL_20;
  }
  CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
  LOBYTE(v17) = 1;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&sub_1C00615D0;
  CurrentStackLocation[-1].Context = v6;
  CurrentStackLocation[-1].Control = -32;
  sub_1C00071D4(a1, (__int64)v18, v17);
  v18->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v18);
  return 259LL;
}
