/*
 * XREFs of sub_1402D8C20 @ 0x1402D8C20
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_14075F4A4 @ 0x14075F4A4 (sub_14075F4A4.c)
 * Callees:
 *     sub_140259480 @ 0x140259480 (sub_140259480.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_1402D8ABC @ 0x1402D8ABC (sub_1402D8ABC.c)
 *     sub_1402D8E00 @ 0x1402D8E00 (sub_1402D8E00.c)
 *     sub_1402D8E9C @ 0x1402D8E9C (sub_1402D8E9C.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1402D8C20(unsigned __int64 *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v5; // r8
  unsigned __int64 **v6; // rax
  _QWORD *v7; // rdx
  ULONG_PTR v8; // r10
  _QWORD *v9; // rax
  unsigned __int8 v10; // bl
  unsigned __int64 v12; // rcx
  unsigned __int64 **v13; // rax
  unsigned __int8 v14; // bl
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  __int64 v17; // r8
  int v18; // eax
  bool v19; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v22; // r8
  int v23; // eax
  unsigned __int8 v24; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v24 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  if ( a2 != 1 )
  {
    if ( (dword_140D06880 & 0x40000) == 0 )
      sub_140259480(a1[6]);
    sub_1402D8E9C(&v24);
    v12 = *a1;
    v13 = (unsigned __int64 **)a1[1];
    if ( *(unsigned __int64 **)(*a1 + 8) == a1 && *v13 == a1 )
    {
      *v13 = (unsigned __int64 *)v12;
      *(_QWORD *)(v12 + 8) = v13;
      RtlAvlRemoveNode(&BugCheckParameter3, a1 + 29);
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D311C0);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v14 = v24;
        if ( v24 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = v24;
          v23 = ~(unsigned __int16)(-1LL << (v24 + 1));
          v19 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
          *(_DWORD *)(v22 + 20) &= v23;
          if ( v19 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      else
      {
        v14 = v24;
      }
      __writecr8(v14);
      return sub_1402D8E00(CurrentThread, &PsLoadedModuleResource, 64LL);
    }
LABEL_24:
    __fastfail(3u);
  }
  sub_1402D8E9C(&v24);
  v6 = (unsigned __int64 **)*(&PsLoadedModuleList + 1);
  if ( *(PVOID **)*(&PsLoadedModuleList + 1) != &PsLoadedModuleList )
    goto LABEL_24;
  *a1 = (unsigned __int64)&PsLoadedModuleList;
  LOBYTE(v5) = 0;
  a1[1] = (unsigned __int64)v6;
  *v6 = a1;
  v7 = (_QWORD *)BugCheckParameter3;
  *(&PsLoadedModuleList + 1) = a1;
  v8 = a1[6];
  if ( BugCheckParameter3 )
  {
    while ( 1 )
    {
      v5 = *(v7 - 23);
      if ( v8 <= v5 + (unsigned int)(*((_DWORD *)v7 - 42) - 1) )
      {
        if ( v8 >= v5 )
          KeBugCheckEx(0x1Au, 0x2101uLL, v8, (ULONG_PTR)v7, 0LL);
        v9 = (_QWORD *)*v7;
        if ( !*v7 )
        {
          LOBYTE(v5) = 0;
          break;
        }
      }
      else
      {
        v9 = (_QWORD *)v7[1];
        if ( !v9 )
        {
          LOBYTE(v5) = 1;
          break;
        }
      }
      v7 = v9;
    }
  }
  RtlAvlInsertNodeEx(&BugCheckParameter3, v7, v5, a1 + 29);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D311C0);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v15 = KeGetCurrentIrql(), v15 <= 0xFu) )
  {
    v10 = v24;
    if ( v24 <= 0xFu && v15 >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      v17 = *((_QWORD *)v16 + 4375);
      v10 = v24;
      v18 = ~(unsigned __int16)(-1LL << (v24 + 1));
      v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
      *(_DWORD *)(v17 + 20) &= v18;
      if ( v19 )
        sub_140418E4C(v16);
    }
  }
  else
  {
    v10 = v24;
  }
  __writecr8(v10);
  if ( (dword_140D06880 & 0x40000) == 0 )
    sub_1402D8ABC(a1[6], *((_DWORD *)a1 + 16));
  return sub_1402D8E00(CurrentThread, &PsLoadedModuleResource, 64LL);
}
