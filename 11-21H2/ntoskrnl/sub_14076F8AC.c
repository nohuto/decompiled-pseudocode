/*
 * XREFs of sub_14076F8AC @ 0x14076F8AC
 * Callers:
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     sub_1406E32E4 @ 0x1406E32E4 (sub_1406E32E4.c)
 *     sub_140765430 @ 0x140765430 (sub_140765430.c)
 *     sub_14076E82C @ 0x14076E82C (sub_14076E82C.c)
 *     sub_14076FAB0 @ 0x14076FAB0 (sub_14076FAB0.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14076F8AC(__int64 a1)
{
  _QWORD *v2; // rbx
  _DWORD *v3; // rcx
  __int64 i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  char v10; // bp
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rsi
  _QWORD *j; // rbx
  PDEVICE_OBJECT v17; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v2 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 528) )
  {
    while ( v2 )
    {
      sub_14076FBEC(v2, 16LL);
      v2 = (_QWORD *)*v2;
    }
  }
  else
  {
    while ( v2 )
    {
      if ( *(PDRIVER_OBJECT *)(v2[4] + 8LL) == DriverObject )
        sub_14076FBEC(v2, 16LL);
      v2 = (_QWORD *)*v2;
    }
  }
  v3 = *(_DWORD **)(a1 + 528);
  if ( v3 )
  {
    for ( i = 0LL; (unsigned int)i < *v3; i = (unsigned int)(i + 1) )
    {
      sub_14076FAB0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * i + 8));
      v3 = *(_DWORD **)(a1 + 528);
    }
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 528) = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
  v6 = (_QWORD **)sub_14076E82C();
  v8 = v6;
  if ( v6 )
  {
    for ( j = *v6; j != v8; j = (_QWORD *)*j )
    {
      v17 = sub_1406E32E4(*(PDEVICE_OBJECT *)(a1 + 32), (__int64)j, v7);
      if ( v17 )
        sub_14076FAB0(a1, v17);
    }
  }
  ExReleaseResourceLite(&stru_140C44820);
  KeLeaveCriticalRegion();
  v9 = *(_QWORD *)(a1 + 8);
  v10 = 0;
  if ( v9 )
  {
    do
    {
      v15 = *(_QWORD *)v9;
      if ( (*(_DWORD *)(v9 + 396) & 0x10010) == 0 )
      {
        sub_14076FB70(v9, 0x10000LL);
        sub_140765430(v9, 1, 24, 0);
        v10 = 1;
      }
      v9 = v15;
    }
    while ( v15 );
  }
  sub_1402DE844(a1, 778);
  if ( !v10 || (PVOID)a1 == qword_140C46278 )
    v11 = 0;
  else
    v11 = -1073741106;
  sub_140779DC4(&P);
  sub_140772044(v12, *((_QWORD *)qword_140C46278 + 6), 15LL);
  sub_140772044(v13, *((_QWORD *)qword_140C46278 + 6), 20LL);
  if ( P )
    sub_140779A50(P);
  return v11;
}
