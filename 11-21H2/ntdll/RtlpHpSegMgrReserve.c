/*
 * XREFs of RtlpHpSegMgrReserve @ 0x18005675C
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x1800566B4 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpFreeVA @ 0x180021224 (RtlpHpFreeVA.c)
 *     RtlpHpHeapValidateProtection @ 0x1800227CC (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x180022888 (RtlpHpAllocVA.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x180120770 (RtlpHpSegMgrVaCtxInitialize.c)
 */

__int64 __fastcall RtlpHpSegMgrReserve(__int64 a1, char a2, PVOID *a3, unsigned int *a4, _DWORD *a5)
{
  _QWORD **v5; // r15
  _QWORD **v6; // rdi
  unsigned int v8; // esi
  void *v10; // rbx
  ULONG_PTR v11; // r9
  _DWORD *v12; // rcx
  bool v13; // cf
  ULONG v14; // eax
  __int64 v15; // rcx
  int v16; // ebx
  PVOID *v17; // rcx
  PVOID v18; // rax
  _RTL_SRWLOCK *v20; // r12
  _QWORD *v21; // rbx
  unsigned int v22; // eax
  int v23; // r15d
  int v24; // eax
  __int64 v25; // rdx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp+40h] BYREF
  PVOID *v29; // [rsp+A0h] [rbp+50h]
  unsigned int *v30; // [rsp+A8h] [rbp+58h]

  v30 = a4;
  v29 = a3;
  v5 = (_QWORD **)(a1 + 120);
  v6 = (_QWORD **)(a1 + 128);
  v8 = -*(_DWORD *)a1;
  v10 = 0LL;
  RegionSize = v8;
  v11 = v8;
  if ( *(_QWORD *)(a1 + 120) || *v6 )
  {
    v20 = (_RTL_SRWLOCK *)(a1 + 112);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 112));
    v21 = *v6;
    if ( !*v6 )
    {
      if ( (a2 & 2) != 0 || (v21 = *v5, v6 = v5, !*v5) )
      {
        RtlReleaseSRWLockExclusive(v20);
        v11 = RegionSize;
        BaseAddress[0] = 0LL;
        goto LABEL_4;
      }
    }
    v22 = *((unsigned __int16 *)v21 - 3);
    _BitScanForward((unsigned int *)&v23, v22);
    v24 = v22 ^ (1 << v23);
    *((_WORD *)v21 - 3) = v24;
    if ( !(_WORD)v24 )
    {
      if ( *v6 )
        *v6 = (_QWORD *)**v6;
      *v21 = 0LL;
    }
    RtlReleaseSRWLockExclusive(v20);
    v25 = qword_18017BFF0[6 * *((unsigned __int8 *)v21 - 15)];
    v10 = (void *)(*(_QWORD *)(v25 + 8)
                 + v8 * v23
                 + (((unsigned __int64)v21 - *(_QWORD *)(v25 + 40) - 16) >> *(_DWORD *)(v25 + 24) << 20));
    v11 = RegionSize;
  }
  BaseAddress[0] = v10;
  if ( v10 )
  {
LABEL_8:
    v16 = 0;
    v17 = v29;
    *v30 = v8;
    *a5 = v11;
    *v17 = BaseAddress[0];
    v18 = 0LL;
    BaseAddress[0] = 0LL;
    goto LABEL_9;
  }
LABEL_4:
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    if ( v8 < 0x200000 )
      v11 = 0x200000LL;
    RegionSize = v11;
  }
  v12 = *(_DWORD **)(a1 + 56);
  v13 = (v12[5] & 0x40000000) != 0;
  *(_OWORD *)v27 = *(_OWORD *)(a1 + 40);
  v14 = RtlpHpHeapValidateProtection(v12, v13 ? 64 : 4);
  v16 = RtlpHpAllocVA(BaseAddress, &RegionSize, RegionSize, 0x2000, v14, (__int128 *)v27);
  if ( v16 >= 0 )
  {
    LODWORD(v11) = RegionSize;
    if ( v8 < RegionSize )
    {
      RtlpHpSegMgrVaCtxInitialize(v15, BaseAddress[0], v8, RegionSize);
      LODWORD(v11) = RegionSize;
    }
    goto LABEL_8;
  }
  v18 = BaseAddress[0];
LABEL_9:
  if ( v18 )
  {
    *(_OWORD *)v27 = *(_OWORD *)(a1 + 40);
    RtlpHpFreeVA(BaseAddress, &RegionSize, 0x8000, (__int128 *)v27);
  }
  return (unsigned int)v16;
}
