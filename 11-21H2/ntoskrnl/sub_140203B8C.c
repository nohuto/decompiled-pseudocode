/*
 * XREFs of sub_140203B8C @ 0x140203B8C
 * Callers:
 *     sub_14072B630 @ 0x14072B630 (sub_14072B630.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     PsReleaseSiloHardReference @ 0x14020B0E0 (PsReleaseSiloHardReference.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     sub_1403D87A8 @ 0x1403D87A8 (sub_1403D87A8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066EF20 (FsRtlFreeExtraCreateParameter.c)
 *     sub_1409AD954 @ 0x1409AD954 (sub_1409AD954.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140203B8C(__int64 a1)
{
  _DWORD *v1; // rdi
  __int64 i; // rsi
  _QWORD *v4; // r15
  _QWORD *v5; // rbx
  void *v6; // rcx
  _QWORD *v7; // rbx
  void *v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  void *v11; // rcx
  __int64 v12; // rax
  void *v13; // rcx
  _QWORD **v14; // r14
  _QWORD *v15; // rbx
  void *v16; // rcx
  _BYTE *v17; // rbp
  _QWORD *v18; // r14
  unsigned __int64 v19; // r12
  __int64 v20; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v23; // r10
  int v24; // eax
  bool v25; // zf
  _QWORD *v26; // rcx
  _QWORD *v27; // rbx
  char v28; // [rsp+50h] [rbp+8h]

  v1 = *(_DWORD **)(a1 + 208);
  if ( v1 == off_140C06A80 )
    return;
  for ( i = 0LL; i < 9; ++i )
  {
    if ( !*(_QWORD *)&v1[2 * i + 2] )
      continue;
    if ( i == 4 )
    {
      v14 = (_QWORD **)*((_QWORD *)v1 + 5);
      v15 = *v14;
      while ( v15 != v14 )
      {
        v16 = v15;
        v15 = (_QWORD *)*v15;
        ExFreePoolWithTag(v16, 0);
      }
LABEL_22:
      ExFreePoolWithTag(*(PVOID *)&v1[2 * i + 2], 0);
      continue;
    }
    if ( !i )
    {
      v12 = *((_QWORD *)v1 + 1);
      if ( v12 )
      {
        v13 = *(void **)(v12 + 8);
        if ( v13 )
          ObDereferenceObjectDeferDelete(v13);
      }
      goto LABEL_22;
    }
    if ( i != 5 )
    {
      switch ( i )
      {
        case 1LL:
          v4 = (_QWORD *)*((_QWORD *)v1 + 2);
          v5 = (_QWORD *)v4[2];
          while ( v5 )
          {
            v6 = v5;
            v5 = (_QWORD *)*v5;
            ExFreePoolWithTag(v6, 0);
          }
          v7 = (_QWORD *)v4[3];
          while ( v7 )
          {
            v17 = (_BYTE *)v7[3];
            v18 = v7;
            v7 = (_QWORD *)*v7;
            v19 = KeAcquireSpinLockRaiseToDpc(&qword_140C47230);
            v28 = v17[18];
            if ( v17[16] == 1 )
              v17[17] = 1;
            else
              ExFreePoolWithTag(v17, 0);
            KeReleaseSpinLockFromDpcLevel(&qword_140C47230);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v23 = *((_QWORD *)CurrentPrcb + 4375);
                  v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
                  v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
                  *(_DWORD *)(v23 + 20) &= v24;
                  if ( v25 )
                    sub_140418E4C(CurrentPrcb);
                }
              }
            }
            __writecr8(v19);
            if ( *((_DWORD *)v18 + 4) )
            {
              LOBYTE(v20) = v28;
              sub_1409AD954(v18[1], 0xFFFFFFFFLL, a1, v20);
              ObfDereferenceObject((PVOID)v18[1]);
            }
            ExFreePoolWithTag(v18, 0);
          }
          v8 = (void *)v4[1];
          if ( v8 )
            ObfDereferenceObject(v8);
          break;
        case 6LL:
          sub_140203D88(&stru_140CE2980, *((_QWORD *)v1 + 7));
          continue;
        case 2LL:
          v26 = *(_QWORD **)(*((_QWORD *)v1 + 3) + 40LL);
          if ( v26 )
          {
            do
            {
              v27 = (_QWORD *)v26[5];
              ExFreePoolWithTag(v26, 0);
              v26 = v27;
            }
            while ( v27 );
          }
          break;
        case 7LL:
          v9 = *((_QWORD *)v1 + 8);
          v10 = *(_DWORD *)(v9 + 4);
          if ( (v10 & 1) != 0 )
          {
            v11 = *(void **)(v9 + 8);
            *(_DWORD *)(v9 + 4) = v10 & 0xFFFFFFFE;
            PsReleaseSiloHardReference(v11);
          }
          ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(v9 + 8), 0x70536F49u);
          break;
        case 8LL:
          ObfDereferenceObjectWithTag(**((PVOID **)v1 + 9), 0x6F466F49u);
          break;
      }
      goto LABEL_22;
    }
    FsRtlFreeExtraCreateParameter(*((PVOID *)v1 + 6));
  }
  if ( (*v1 & 2) != 0 )
    sub_1403D87A8(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a1);
  ExFreePoolWithTag(v1, 0);
}
