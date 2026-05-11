/*
 * XREFs of TopologyBuildFilterTopology @ 0x1C002C7F0
 * Callers:
 *     FilterCreateFilterContext @ 0x1C002BCD4 (FilterCreateFilterContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 *     TopologyCountComponents @ 0x1C002CC30 (TopologyCountComponents.c)
 *     TopologyFixUpFunctionUnits @ 0x1C002CD44 (TopologyFixUpFunctionUnits.c)
 *     TopologyFreeFunctionUnits @ 0x1C002CE9C (TopologyFreeFunctionUnits.c)
 */

__int64 __fastcall TopologyBuildFilterTopology(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  _QWORD *v4; // r12
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r13
  unsigned __int64 v10; // rcx
  GUID *Pool2; // rax
  GUID *v12; // rbx
  int v13; // esi
  unsigned int v14; // r11d
  GUID *v15; // r13
  int *v16; // r14
  int *v17; // rdi
  unsigned __int8 *Data4; // rcx
  __int64 v19; // rdx
  _DWORD *v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // r8d
  int v25; // r9d
  int v26; // eax
  int v27; // r10d
  __int64 v28; // rsi
  unsigned __int8 *v29; // rcx
  __int64 v30; // rax
  int v31; // edx
  unsigned int v32; // [rsp+40h] [rbp-20h] BYREF
  int v33; // [rsp+44h] [rbp-1Ch] BYREF
  NTSTATUS v34; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v35; // [rsp+4Ch] [rbp-14h] BYREF
  int v36; // [rsp+50h] [rbp-10h]
  unsigned int v38; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v39; // [rsp+B8h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v34 = 0;
  v4 = (_QWORD *)(v2 + 80);
  v38 = 0;
  v35 = 0;
  v33 = 0;
  v39 = 0;
  v32 = 0;
  result = TopologyFixUpFunctionUnits(v4);
  if ( (int)result >= 0 )
  {
    TopologyCountComponents((_DWORD)v4, (unsigned int)&v34, (unsigned int)&v38, (unsigned int)&v35, (__int64)&v33);
    v7 = v38;
    v8 = v35;
    v9 = (unsigned int)(v34 + 1);
    v36 = v34 + 1;
    v10 = 200LL * v38 + 16 * (v35 + v9);
    *(_DWORD *)(a2 + 68) = 168;
    if ( v10 > 0xFFFFFFFF )
      return 3221225858LL;
    Pool2 = (GUID *)ExAllocatePool2(64LL, (unsigned int)v10, 1096972357LL);
    v12 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v34 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Pool2, ExFreePool);
    v13 = v34;
    if ( v34 < 0 )
    {
      ExFreePool(v12);
      return (unsigned int)v13;
    }
    v14 = v38;
    v15 = &v12[v9];
    v16 = (int *)v15 + 42 * v7;
    *(_QWORD *)(a2 + 56) = v12;
    v17 = &v16[4 * v8];
    *(_QWORD *)(a2 + 72) = v15;
    *(_QWORD *)(a2 + 88) = v16;
    if ( v14 )
    {
      Data4 = v15[6].Data4;
      v19 = v14;
      do
      {
        *((_QWORD *)Data4 - 12) = v17;
        v20 = v17 + 4;
        *((_DWORD *)Data4 - 5) = -1;
        *((_QWORD *)Data4 - 11) = v20;
        v17 = v20 + 4;
        *(_DWORD *)Data4 = -1;
        *((_QWORD *)Data4 - 13) = Data4 - 80;
        Data4 += 168;
        --v19;
      }
      while ( v19 );
      v13 = v34;
    }
    v21 = 1LL;
    *v12 = KSCATEGORY_AUDIO;
    if ( (v33 & 1) != 0 )
    {
      v21 = 2LL;
      v12[1] = KSCATEGORY_RENDER;
    }
    if ( (v33 & 2) != 0 )
      v12[v21] = KSCATEGORY_CAPTURE;
    *(_DWORD *)(a2 + 48) = v36;
    v22 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 != v4 )
    {
      do
      {
        if ( v13 < 0 )
          goto LABEL_24;
        v23 = *((unsigned int *)v22 + 5);
        if ( (unsigned int)v23 >= 9 )
        {
          v13 = -1073741637;
        }
        else
        {
          v13 = pUnitProcessRtn[v23](a1, (int)v22, (int)v15, (int)v16, (__int64)&v39, (__int64)&v32);
          if ( v13 >= 0 )
            v22 = (_QWORD *)*v22;
        }
      }
      while ( v22 != v4 );
      v34 = v13;
      if ( v13 < 0 )
      {
LABEL_24:
        TopologyFreeFunctionUnits(a1);
        return (unsigned int)v13;
      }
      v14 = v38;
    }
    v24 = v32;
    v25 = 0;
    *(_DWORD *)(a2 + 64) = v39;
    *(_DWORD *)(a2 + 80) = v24;
    if ( !v24 )
    {
LABEL_38:
      if ( v14 )
      {
        v28 = v38;
        v29 = v15[1].Data4;
        do
        {
          v30 = 2LL * *((unsigned int *)v29 + 13);
          v31 = dword_1C001D420[4 * *((unsigned int *)v29 + 13)];
          if ( v31 )
          {
            *(_DWORD *)v29 = v31;
            *((_QWORD *)v29 + 1) = (&off_1C001D428)[v30];
            *((_DWORD *)v29 + 1) = 72;
          }
          v29 += 168;
          --v28;
        }
        while ( v28 );
        return (unsigned int)v34;
      }
      return (unsigned int)v13;
    }
    while ( 1 )
    {
      v26 = *v16;
      if ( *v16 != -1 )
      {
        if ( v26 < 0 )
        {
          *v16 = v26 & 0x7FFFFFFF;
LABEL_36:
          v24 = v32;
          goto LABEL_37;
        }
        v39 = v14;
        if ( v14 )
        {
          v27 = v14;
          while ( *v16 != *(&v15[5].Data1 + 42 * (unsigned int)--v27) )
          {
            v39 = v27;
            if ( !v27 )
              goto LABEL_37;
          }
          *v16 = v27;
          goto LABEL_36;
        }
      }
LABEL_37:
      v16 += 4;
      if ( ++v25 >= v24 )
        goto LABEL_38;
    }
  }
  return result;
}
