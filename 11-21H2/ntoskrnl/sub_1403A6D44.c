/*
 * XREFs of sub_1403A6D44 @ 0x1403A6D44
 * Callers:
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402500D4 @ 0x1402500D4 (sub_1402500D4.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402DDABC @ 0x1402DDABC (sub_1402DDABC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403A6D44(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  __int64 *v5; // rdi
  __int64 result; // rax
  __int64 **v7; // rax
  _DWORD *v8; // rax
  struct _KEVENT *v9; // rcx
  __int64 v10; // r15
  KIRQL v11; // al
  bool v12; // zf
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  __int64 v21; // r9
  int v22; // eax
  struct _KPRCB *v23; // r9
  __int64 v24; // r8

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C44A50);
  v3 = qword_140C44A40;
  v4 = v2;
  if ( (__int64 *)qword_140C44A40 != &qword_140C44A40 )
  {
    do
    {
      v5 = *(__int64 **)v3;
      if ( *(_QWORD *)(v3 + 16) == a1 )
      {
        v7 = *(__int64 ***)(v3 + 8);
        if ( v5[1] != v3 || *v7 != (__int64 *)v3 )
          __fastfail(3u);
        *v7 = v5;
        v5[1] = (__int64)v7;
        v8 = *(_DWORD **)(v3 + 48);
        if ( v8 )
          *v8 = -1073741810;
        v9 = *(struct _KEVENT **)(v3 + 40);
        if ( v9 )
          KeSetEvent(v9, 0, 0);
        v10 = *(unsigned int *)(v3 + 24);
        v11 = KeAcquireSpinLockRaiseToDpc(&qword_140C24268);
        v12 = dword_140C24270-- == 1;
        v13 = v11;
        if ( v12 )
          sub_1402500D4(4);
        KeReleaseSpinLockFromDpcLevel(&qword_140C24268);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v17 = *((_QWORD *)CurrentPrcb + 4375);
              v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v12 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
              *(_DWORD *)(v17 + 20) &= v18;
              if ( v12 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v13);
        v14 = KeAcquireSpinLockRaiseToDpc(&qword_140C1CB90);
        if ( !--dword_140C1CB98 && byte_140C1CC10 )
        {
          qword_140C1CC18 += MEMORY[0xFFFFF78000000008] - qword_140C1CC20;
          qword_140C1CC20 = 0LL;
        }
        --dword_140C1CBA0[v10];
        KeReleaseSpinLockFromDpcLevel(&qword_140C1CB90);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v19 = KeGetCurrentIrql();
            if ( v19 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v19 >= 2u )
            {
              v20 = KeGetCurrentPrcb();
              v21 = *((_QWORD *)v20 + 4375);
              v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
              v12 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
              *(_DWORD *)(v21 + 20) &= v22;
              if ( v12 )
                sub_140418E4C(v20);
            }
          }
        }
        __writecr8(v14);
        ObfDereferenceObject(*(PVOID *)(v3 + 16));
        sub_1402DDABC((volatile signed __int32 *)v3);
      }
      v3 = (__int64)v5;
    }
    while ( v5 != &qword_140C44A40 );
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C44A50);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v24 = *((_QWORD *)v23 + 4375);
        v12 = ((unsigned int)result & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= result;
        if ( v12 )
          result = sub_140418E4C(v23);
      }
    }
  }
  __writecr8(v4);
  return result;
}
