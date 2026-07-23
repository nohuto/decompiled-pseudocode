/*
 * XREFs of sub_140A849F0 @ 0x140A849F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 */

__int64 __fastcall sub_140A849F0(__int64 a1, __int64 a2, struct _MDL *a3, PMDL *a4)
{
  _QWORD *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rsi
  KSPIN_LOCK *v11; // r14
  KIRQL v12; // al
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rbp
  _QWORD *v15; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  int v21; // eax
  unsigned int v22; // esi
  __int64 v23; // rbp
  PMDL Mdl; // rax
  PMDL v25; // rdi

  v8 = 0LL;
  v9 = sub_140A88430(a1);
  if ( v9 )
  {
    if ( *(_QWORD *)(a2 + 8) != -559026163LL )
      goto LABEL_21;
    v10 = (_QWORD *)(v9 + 56);
    if ( (_QWORD *)*v10 != v10 )
    {
      v11 = (KSPIN_LOCK *)(v9 + 72);
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 72));
      v13 = (_QWORD *)*v10;
      v14 = v12;
      while ( 1 )
      {
        v15 = v13 - 9;
        if ( v10 == v15 + 9 )
          break;
        if ( v15[8] == a2 )
        {
          v8 = (_QWORD *)v15[12];
          break;
        }
        v13 = (_QWORD *)v15[9];
      }
      KeReleaseSpinLockFromDpcLevel(v11);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = *((_QWORD *)CurrentPrcb + 4375);
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= v19;
            if ( v20 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v14);
    }
  }
  if ( *(_QWORD *)(a2 + 8) == -559026163LL && v8 )
    *(_QWORD *)(a2 + 8) = v8[6];
LABEL_21:
  sub_140A88738(a1);
  v21 = sub_14042A5E0(a1, a2);
  v22 = v21;
  if ( v8 )
  {
    v8[6] = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = -559026163LL;
  }
  if ( v21 >= 0 && *a4 == a3 && v8 )
  {
    if ( v8[5] )
    {
      return (unsigned int)-1073741709;
    }
    else
    {
      v23 = v8[7];
      Mdl = IoAllocateMdl(0LL, *(_DWORD *)(v23 + 40), 0, 0, 0LL);
      v25 = Mdl;
      if ( Mdl )
      {
        v8[5] = Mdl;
        memmove(&Mdl[1], (const void *)(v23 + 48), 8 * ((unsigned __int64)*(unsigned int *)(v23 + 40) >> 12));
        v25->ByteOffset += a3->ByteOffset;
        v25->ByteCount -= v25->ByteOffset;
        v25->MdlFlags |= 2u;
        *a4 = v25;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v22;
}
