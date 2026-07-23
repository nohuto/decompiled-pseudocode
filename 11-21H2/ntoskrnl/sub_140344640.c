/*
 * XREFs of sub_140344640 @ 0x140344640
 * Callers:
 *     sub_1402A86B0 @ 0x1402A86B0 (sub_1402A86B0.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140344640(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v9; // al
  char v10; // al
  unsigned int v11; // edx
  char v12; // dl
  char v13; // cl
  struct _KPRCB *v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+50h] [rbp+8h] BYREF
  __int64 v24; // [rsp+58h] [rbp+10h] BYREF

  v24 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v23 = 0;
  v7 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v7 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v19 = *(_DWORD *)(v7 + 24);
      *(_DWORD *)(v7 + 24) = v19 + 1;
      if ( v19 == -1 )
LABEL_21:
        sub_140418E4C(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    v17 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v17 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v20 = *(_DWORD *)(v17 + 24) - 1;
        *(_DWORD *)(v17 + 24) = v20;
        if ( !v20 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v23, a2, a3, a4);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    v18 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v18 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v21 = *(_DWORD *)(v18 + 24);
        *(_DWORD *)(v18 + 24) = v21 + 1;
        if ( v21 == -1 )
          goto LABEL_21;
      }
    }
  }
  v8 = *(char *)(BugCheckParameter1 + 795);
  v9 = *(_BYTE *)(v8 + BugCheckParameter1 + 824);
  if ( !v9 )
    KeBugCheckEx(0x157u, BugCheckParameter1, *(char *)(BugCheckParameter1 + 795), 2uLL, 0LL);
  v10 = v9 - 1;
  *(_BYTE *)(v8 + BugCheckParameter1 + 824) = v10;
  if ( !v10 )
  {
    v11 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v8);
    *(_DWORD *)(BugCheckParameter1 + 856) = v11;
    if ( v11 < 1 << v8 )
    {
      v12 = *(_BYTE *)(BugCheckParameter1 + 195);
      if ( v12 <= 31 )
      {
        v13 = *(_BYTE *)(BugCheckParameter1 + 563)
            + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
            + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4);
        if ( v13 < v12 )
          sub_140344A30(BugCheckParameter1, &v24, (unsigned int)v13);
      }
    }
  }
  *(_BYTE *)(BugCheckParameter1 + 795) = 0;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  v14 = KeGetCurrentPrcb();
  v15 = *((_QWORD *)v14 + 4375);
  if ( v15 )
  {
    if ( *((_BYTE *)v14 + 32) <= 1u )
    {
      v22 = *(_DWORD *)(v15 + 24) - 1;
      *(_DWORD *)(v15 + 24) = v22;
      if ( !v22 )
        sub_140418E4C(v14);
    }
  }
  return sub_140344800(KeGetCurrentPrcb(), &v24, CurrentIrql);
}
