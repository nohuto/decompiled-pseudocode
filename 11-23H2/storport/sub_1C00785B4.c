/*
 * XREFs of sub_1C00785B4 @ 0x1C00785B4
 * Callers:
 *     StorPortRegistryRead @ 0x1C0046F70 (StorPortRegistryRead.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C00785B4(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // rax
  _BYTE *v9; // r14
  int v10; // eax
  int *v11; // rcx
  __int64 v12; // rbx
  PVOID SystemRoutineAddress; // rax
  unsigned int v14; // r12d
  size_t v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // ebx
  _WORD *v18; // rcx
  __int64 v19; // rbx
  int v20; // edx
  unsigned int i; // r8d
  int v22; // eax
  PVOID P[2]; // [rsp+30h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  void *Dst; // [rsp+50h] [rbp-39h] BYREF
  int v27; // [rsp+58h] [rbp-31h]
  __int64 v28; // [rsp+60h] [rbp-29h]
  PVOID *v29; // [rsp+68h] [rbp-21h]
  int v30; // [rsp+70h] [rbp-19h]
  int *v31; // [rsp+78h] [rbp-11h]
  int v32; // [rsp+80h] [rbp-9h]
  int v33; // [rsp+F0h] [rbp+67h] BYREF
  int v34; // [rsp+100h] [rbp+77h] BYREF

  v33 = 0;
  v34 = -1;
  *(_OWORD *)P = 0LL;
  memset_0(&Dst, 0, 0x70uLL);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = (_BYTE *)(*(_QWORD *)(a4 + 32) + *(unsigned int *)(a4 + 52));
  v30 = 0;
  v28 = v8;
  v10 = 20;
  v27 = 20;
  if ( a3 == 1 )
  {
    v10 = 52;
    v29 = P;
    v11 = &v33;
    v27 = 52;
  }
  else
  {
    if ( a3 == 4 )
    {
      v10 = 52;
      v29 = (PVOID *)v9;
      v27 = 52;
    }
    else
    {
      v29 = (PVOID *)a4;
      Dst = &sub_1C0078920;
    }
    v11 = &v34;
  }
  v31 = v11;
  v32 = 4;
  if ( (v10 & 0x20) != 0 )
  {
    v27 = v10 | 0x100;
    v30 = a3 << 24;
  }
  v12 = *(_QWORD *)(a1 + 8);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v14 = ((__int64 (__fastcall *)(_QWORD, __int64, void **, _QWORD, _QWORD))SystemRoutineAddress)(
          0LL,
          v12,
          &Dst,
          0LL,
          0LL);
  if ( (v14 & 0x80000000) != 0 )
    goto LABEL_30;
  if ( a3 != 1 )
  {
    if ( a3 == 4 )
    {
      *(_DWORD *)(a4 + 44) = 4;
      return v14;
    }
    if ( *(_DWORD *)(a4 + 60) != -1073741789 )
      return v14;
    v14 = -1073741789;
LABEL_30:
    v22 = *(_DWORD *)(a4 + 44);
    *(_DWORD *)(a4 + 44) = 0;
    *(_DWORD *)(a4 + 48) = v22;
    return v14;
  }
  if ( LOWORD(P[0])
    && (v15 = *(unsigned int *)(a4 + 44), v16 = LOWORD(P[0]) >> 1, (unsigned int)v16 < (unsigned int)v15) )
  {
    v17 = v16 + 1;
    if ( WORD1(P[0]) - (unsigned __int64)LOWORD(P[0]) >= 2 && *((_WORD *)P[1] + v16) && v17 < (unsigned int)v15 )
      v17 = v16 + 2;
    memset_0(v9, 0, v15);
    v18 = P[1];
    v19 = v17 - 1;
    v20 = 0;
    v9[v19] = 0;
    if ( v18 )
    {
      for ( i = 0; i < (unsigned int)v19; ++v20 )
      {
        if ( !*v18 )
          break;
        ++i;
        *v9++ = *(_BYTE *)v18++;
      }
    }
  }
  else
  {
    v14 = -1073741789;
    v20 = 0;
    *(_DWORD *)(a4 + 48) = ((unsigned int)LOWORD(P[0]) + 1) >> 1;
  }
  *(_DWORD *)(a4 + 44) = v20;
  ExFreePoolWithTag(P[1], 0);
  return v14;
}
