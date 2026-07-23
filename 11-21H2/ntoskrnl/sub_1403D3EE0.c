/*
 * XREFs of sub_1403D3EE0 @ 0x1403D3EE0
 * Callers:
 *     sub_1403D3960 @ 0x1403D3960 (sub_1403D3960.c)
 *     sub_1403D9D88 @ 0x1403D9D88 (sub_1403D9D88.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     sub_1403D4120 @ 0x1403D4120 (sub_1403D4120.c)
 *     sub_1403D4274 @ 0x1403D4274 (sub_1403D4274.c)
 *     sub_1403D4314 @ 0x1403D4314 (sub_1403D4314.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403D3EE0(ULONG_PTR a1, __int64 a2)
{
  __int64 v4; // rbx
  ULONG_PTR v5; // r15
  __int64 v6; // r14
  __int64 v7; // rbp
  SIZE_T v8; // r12
  PVOID v9; // rax
  SIZE_T v10; // r12
  PVOID v11; // rax
  PVOID v12; // rbx
  void *v13; // rcx
  signed __int32 v14; // eax
  bool v15; // zf
  char v16; // al
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rbx
  void *v19; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v22; // eax
  __int64 v23; // r8
  ULONG_PTR Context[10]; // [rsp+30h] [rbp-88h] BYREF

  memset(Context, 0, sizeof(Context));
  if ( a2 )
  {
    v4 = *(unsigned int *)(a2 + 80);
    v5 = qword_140C296D8;
    v6 = *(_QWORD *)(qword_140C506E0 + 120 * v4 + 112);
    v7 = *(_QWORD *)(a1 + 16) + 24512 * v4;
    if ( !qword_140C296D8 )
      v5 = 0x800000LL;
    v8 = v5 * *(int *)(a2 + 128);
    v9 = sub_14030B860(66LL, v8, 0x655A694Du, *(_DWORD *)(a2 + 80));
    *(_QWORD *)(v7 + 22920) = v9;
    if ( v9 )
      *(_QWORD *)(v7 + 22928) = v8;
    else
      *(_BYTE *)(a1 + 16176) = 1;
    v10 = 16LL * *(int *)(a2 + 128);
    v11 = sub_14030B860(64LL, v10, 0x655A694Du, v4);
    v12 = v11;
    if ( v11 )
    {
      memset(v11, 0, v10);
      v13 = *(void **)(v6 + 72);
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      *(_QWORD *)(v6 + 72) = v12;
      *(_DWORD *)(v6 + 48) = *(_DWORD *)(a2 + 128);
      *(_QWORD *)(v6 + 56) = v5;
    }
    else
    {
      *(_BYTE *)(a1 + 16176) = 1;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16180), *(_DWORD *)(a2 + 128));
  }
  else
  {
    v7 = 0LL;
    v5 = 0LL;
  }
  v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16184), 0xFFFFFFFF);
  v15 = v14 == 1;
  v16 = v14 - 1;
  if ( v15 )
  {
    if ( *(_BYTE *)(a1 + 16176) != v16 )
    {
LABEL_21:
      *(_DWORD *)(a1 + 16184) = (unsigned __int16)word_140D05000;
      KeSetEvent((PRKEVENT)(a1 + 16128), 0, 0);
      goto LABEL_22;
    }
    Context[9] = a1;
    sub_1403D4314(a1);
    v17 = sub_1403D4274(Context);
    v18 = v17;
    if ( v17 == 17
      || (v15 = *(_BYTE *)(a1 + 16176) == 0, LODWORD(Context[1]) = *(_DWORD *)(a1 + 16180), Context[2] = v5, !v15) )
    {
      *(_BYTE *)(a1 + 16176) = 0;
      if ( v17 == 17 )
      {
LABEL_18:
        if ( Context[8] )
          ExFreePoolWithTag((PVOID)Context[8], 0);
        sub_1403D4120();
        goto LABEL_21;
      }
    }
    else
    {
      LODWORD(Context[5]) = *(_DWORD *)(a1 + 16180);
      KeIpiGenericCall((PKIPI_BROADCAST_WORKER)sub_1403CA510, (ULONG_PTR)Context);
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v23 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = (v22 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v22;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v18);
    goto LABEL_18;
  }
  if ( a2 )
    KeWaitForSingleObject((PVOID)(a1 + 16128), Executive, 0, 0, 0LL);
LABEL_22:
  if ( v7 )
  {
    v19 = *(void **)(v7 + 22920);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *(_QWORD *)(v7 + 22920) = 0LL;
    }
  }
}
