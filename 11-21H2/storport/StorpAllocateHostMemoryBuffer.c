/*
 * XREFs of StorpAllocateHostMemoryBuffer @ 0x1C0044A60
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zdqqqqqqqqq_EtwWriteTransfer @ 0x1C0041BC0 (McTemplateK0zdqqqqqqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall StorpAllocateHostMemoryBuffer(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        __int64 a8,
        __int64 a9,
        unsigned int *a10)
{
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  unsigned __int128 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rcx
  unsigned int v18; // r15d
  unsigned int *v19; // rdi
  char v20; // si
  unsigned int v21; // edi
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r9
  __int64 v24; // rsi
  _QWORD *v25; // r12
  SIZE_T v26; // r14
  unsigned int *Pool; // rbp
  __int64 (__fastcall *v28)(__int64, PHYSICAL_ADDRESS *, PHYSICAL_ADDRESS *, _QWORD, _DWORD); // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  SIZE_T v31; // rax
  unsigned int *v32; // rax
  __int64 v33; // rbp
  struct _MDL *v34; // rcx
  unsigned int *v35; // rsi
  int *Flags; // [rsp+28h] [rbp-B0h]
  int v38; // [rsp+40h] [rbp-98h]
  int v39; // [rsp+70h] [rbp-68h] BYREF
  unsigned int v40; // [rsp+74h] [rbp-64h]
  __int64 v41; // [rsp+80h] [rbp-58h]
  unsigned __int64 v42; // [rsp+88h] [rbp-50h]
  __int64 v43; // [rsp+90h] [rbp-48h]
  unsigned __int64 v44; // [rsp+98h] [rbp-40h]
  char v45; // [rsp+E8h] [rbp+10h]
  char v46; // [rsp+F0h] [rbp+18h]

  v46 = a3;
  v45 = a2;
  v10 = a3;
  v11 = a2;
  *(_QWORD *)&v12 = RaidpPortGetAdapter(a1);
  v41 = v12;
  v15 = v12;
  v39 = 0;
  v16 = 0LL;
  LOBYTE(v17) = 0;
  v18 = 0;
  v19 = 0LL;
  if ( !(_QWORD)v12 )
    goto LABEL_2;
  if ( *(_QWORD *)(v12 + 5464) )
  {
    v21 = -1056964607;
    v20 = 1;
    goto LABEL_60;
  }
  v13 = 4096LL;
  v22 = 4096LL;
  if ( v11 )
    v22 = v11;
  v44 = v22;
  if ( v10 < v22 )
    goto LABEL_2;
  if ( ((v10 | v22) & 0xFFF) != 0 || (*((_QWORD *)&v12 + 1) = 0x1000 % a5) != 0LL )
  {
    v20 = 3;
    goto LABEL_59;
  }
  v13 = (__int64)a10;
  if ( !a10 || (v40 = *a10) == 0 || a8 )
  {
LABEL_2:
    v20 = 2;
LABEL_59:
    v21 = -1056964602;
    goto LABEL_60;
  }
  if ( HmbAllocationPolicy == 1 )
    goto LABEL_20;
  if ( HmbAllocationPolicy == 2 )
  {
LABEL_19:
    v23 = v10;
    goto LABEL_21;
  }
  if ( HmbAllocationPolicy != 3 )
  {
    v21 = -1056964606;
    v20 = 4;
    goto LABEL_60;
  }
  v12 = v14 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
  v23 = (v14 / 0x3E8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v23 < v22 )
  {
LABEL_20:
    v23 = v22;
    goto LABEL_21;
  }
  if ( v23 > v10 )
    goto LABEL_19;
LABEL_21:
  v17 = (unsigned int)HmbMaximumSize;
  v24 = v15;
  v43 = *(_QWORD *)(v15 + 752);
  v25 = 0LL;
  if ( v23 <= (unsigned int)HmbMaximumSize )
    v17 = v23;
  v42 = v17;
  v26 = v17;
  while ( v26 >= 0x1000 && v16 < v17 )
  {
    Pool = (unsigned int *)RaidAllocatePool(64LL, 40LL, 1161912658LL, *(_QWORD *)(v24 + 8));
    if ( !Pool )
    {
      LOBYTE(v17) = v42;
      break;
    }
    v28 = *(__int64 (__fastcall **)(__int64, PHYSICAL_ADDRESS *, PHYSICAL_ADDRESS *, _QWORD, _DWORD))(*(_QWORD *)(v43 + 8) + 272LL);
    if ( v28 )
    {
      Flags = &v39;
      *((_QWORD *)Pool + 3) = v28(v43, &LowAddress, &HighAddress, (unsigned int)v26, 0);
    }
    else
    {
      *((_QWORD *)Pool + 1) = MmAllocatePagesForMdlEx(LowAddress, HighAddress, 0LL, v26, MmNonCached, 0x20u);
    }
    *(_QWORD *)&v12 = *((_QWORD *)Pool + 1);
    *((_QWORD *)&v12 + 1) = (unsigned int)v26;
    if ( (_QWORD)v12 )
    {
      *((_QWORD *)&v12 + 1) = *(unsigned int *)(v12 + 40);
      v13 = a9;
      v29 = 2LL * v18;
      v16 += *((_QWORD *)&v12 + 1);
      *(_QWORD *)(a9 + 8 * v29) = *(_QWORD *)(v12 + 48) << 12;
      *(_DWORD *)(v13 + 8 * v29 + 8) = DWORD2(v12);
LABEL_32:
      ++v18;
      if ( v19 )
        *v25 = Pool;
      else
        v19 = Pool;
      v25 = Pool;
      goto LABEL_39;
    }
    if ( *((_QWORD *)Pool + 3) )
    {
      v13 = a9;
      v30 = 2LL * v18;
      v16 += v26;
      *(_QWORD *)(a9 + 8 * v30) = *((_QWORD *)Pool + 2);
      *(_DWORD *)(v13 + 8 * v30 + 8) = v26;
      *((_QWORD *)Pool + 4) = v26;
      goto LABEL_32;
    }
    v26 -= 4096LL;
LABEL_39:
    v17 = v42;
    v31 = v42 - v16;
    if ( v26 <= v42 - v16 )
      v31 = v26;
    v26 = v31;
    if ( v18 >= v40 )
      break;
  }
  v20 = 0;
  if ( v18 )
  {
    if ( v16 < v44 )
    {
      if ( v19 )
      {
        v33 = v43;
        do
        {
          v34 = (struct _MDL *)*((_QWORD *)v19 + 1);
          v35 = *(unsigned int **)v19;
          if ( v34 )
          {
            MmFreePagesFromMdl(v34);
            ExFreePoolWithTag(*((PVOID *)v19 + 1), 0);
          }
          if ( *((_QWORD *)v19 + 3) )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v33 + 8) + 24LL))(
              v33,
              v19[8],
              *((_QWORD *)v19 + 2));
          ExFreePoolWithTag(v19, 0);
          v19 = v35;
        }
        while ( v35 );
      }
      v15 = v41;
      v21 = -1056964605;
      v20 = 5;
    }
    else
    {
      v15 = v41;
      v32 = a10;
      *(_QWORD *)(v41 + 5464) = v19;
      v21 = 0;
      *v32 = v18;
    }
    LOBYTE(v17) = v42;
  }
  else
  {
    v15 = v41;
    v21 = -1056964605;
    v20 = 5;
  }
  LOBYTE(v10) = v46;
  LOBYTE(v11) = v45;
LABEL_60:
  if ( byte_1C00799E4 < 0 )
    McTemplateK0zdqqqqqqqqq_EtwWriteTransfer(
      *(unsigned int *)(v15 + 56),
      *((__int64 *)&v12 + 1),
      v13,
      *(const wchar_t **)(v15 + 48),
      *(_DWORD *)(v15 + 56),
      (int)Flags,
      v11,
      v10,
      v38,
      v17,
      v16,
      v18,
      v21 == 0,
      v20);
  return v21;
}
