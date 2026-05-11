/*
 * XREFs of TopologyBuildFilterTopology @ 0x1C002C258
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0029ED4 (FilterCreateFilterFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     TopologyCountComponents @ 0x1C002C780 (TopologyCountComponents.c)
 *     TopologyFreeFunctionUnits @ 0x1C002C880 (TopologyFreeFunctionUnits.c)
 */

__int64 __fastcall TopologyBuildFilterTopology(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v4; // r12
  __int64 *v5; // r8
  unsigned int v6; // edx
  int v7; // edi
  unsigned int i; // r9d
  __int64 v9; // r15
  bool v10; // cl
  __int64 *v11; // r10
  __int64 *v12; // rax
  int v13; // esi
  bool v14; // zf
  unsigned int v15; // eax
  __int64 *v16; // rax
  __int64 v17; // r13
  __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  __int64 v20; // r15
  _QWORD *v22; // rcx
  __int64 v23; // rax
  GUID *Pool2; // rax
  GUID *v25; // rsi
  NTSTATUS v26; // r12d
  _DWORD *v27; // rcx
  __int64 v28; // r11
  GUID *v29; // r15
  int *v30; // r14
  int *v31; // rdi
  __int64 v32; // rdx
  unsigned __int8 *Data4; // rcx
  _DWORD *v34; // rdi
  __int64 v35; // rax
  __int64 **v36; // rdi
  int v37; // eax
  unsigned int v38; // r8d
  unsigned int v39; // r9d
  int v40; // eax
  int v41; // eax
  int v42; // edx
  bool j; // zf
  int v44; // r10d
  unsigned __int8 *v45; // rcx
  __int64 v46; // rax
  int v47; // edx
  unsigned int v48; // [rsp+40h] [rbp-18h] BYREF
  int v49; // [rsp+44h] [rbp-14h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v51; // [rsp+4Ch] [rbp-Ch] BYREF
  int v54; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v55; // [rsp+B8h] [rbp+60h] BYREF

  v2 = (__int64 *)(*(_QWORD *)(a1 + 16) + 80LL);
  v54 = 0;
  v55 = 0;
  v4 = a1;
  v50 = 0;
  v48 = 0;
  v5 = (__int64 *)*v2;
  v6 = 0;
  v51 = 0;
  v49 = 0;
  if ( v5 == v2 )
  {
    v7 = -1073741438;
  }
  else
  {
    v7 = 0;
    do
    {
      if ( v7 < 0 )
        break;
      for ( i = 0; i < *((_DWORD *)v5 + 8); ++i )
      {
        v9 = v5[7];
        v10 = 0;
        v7 = -1073741275;
        v11 = 0LL;
        v12 = (__int64 *)*v2;
        v13 = *(_DWORD *)(v9 + 12LL * i);
        while ( v12 != v2 && !v10 )
        {
          v14 = *((_DWORD *)v12 + 4) == v13;
          if ( *((_DWORD *)v12 + 4) == v13 )
          {
            v11 = v12;
            v7 = 0;
          }
          else
          {
            v12 = (__int64 *)*v12;
          }
          v10 = v14;
        }
        if ( v7 >= 0 )
        {
          *(_DWORD *)(v9 + 12LL * i + 4) = *((_DWORD *)v11 + 6);
          *(_DWORD *)(v5[7] + 12LL * i + 8) = *((_DWORD *)v11 + 7);
        }
      }
      if ( *((_DWORD *)v5 + 5) <= 1u )
      {
        v15 = *((_DWORD *)v5 + 16);
        if ( v15 != -1 && v15 > v6 )
          v6 = *((_DWORD *)v5 + 16);
      }
      v5 = (__int64 *)*v5;
    }
    while ( v5 != v2 );
    v4 = a1;
  }
  v16 = (__int64 *)*v2;
  if ( (__int64 *)*v2 != v2 )
  {
    while ( v7 >= 0 )
    {
      if ( *((_DWORD *)v16 + 5) <= 1u && *((_DWORD *)v16 + 16) == -1 )
        *((_DWORD *)v16 + 16) = ++v6;
      v16 = (__int64 *)*v16;
      if ( v16 == v2 )
        goto LABEL_28;
    }
    goto LABEL_31;
  }
  if ( v7 < 0 )
  {
LABEL_31:
    while ( 1 )
    {
      v22 = (_QWORD *)*v2;
      if ( (__int64 *)*v2 == v2 )
        break;
      if ( (__int64 *)v22[1] != v2 || (v23 = *v22, *(_QWORD **)(*v22 + 8LL) != v22) )
        __fastfail(3u);
      *v2 = v23;
      *(_QWORD *)(v23 + 8) = v2;
      ExFreePool(v22);
    }
    return (unsigned int)v7;
  }
LABEL_28:
  TopologyCountComponents((_DWORD)v2, (unsigned int)&v50, (unsigned int)&v48, (unsigned int)&v51, (__int64)&v49);
  v17 = v48;
  v18 = v51;
  v19 = 200LL * v48 + 16 * (++v50 + (unsigned __int64)v51);
  v20 = v50;
  *(_DWORD *)(a2 + 68) = 168;
  if ( v19 > 0xFFFFFFFF )
    return 3221225858LL;
  Pool2 = (GUID *)ExAllocatePool2(64LL, (unsigned int)v19, 1096972357LL);
  v25 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v26 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(v4 + 8), Pool2, ExFreePool);
  if ( v26 >= 0 )
  {
    v27 = (_DWORD *)a2;
    v28 = v17;
    v29 = &v25[v20];
    v30 = (int *)v29 + 42 * v17;
    *(_QWORD *)(a2 + 56) = v25;
    v31 = &v30[4 * v18];
    *(_QWORD *)(a2 + 72) = v29;
    *(_QWORD *)(a2 + 88) = v30;
    if ( (_DWORD)v17 )
    {
      v32 = v17;
      Data4 = v29[6].Data4;
      do
      {
        *((_QWORD *)Data4 - 12) = v31;
        v34 = v31 + 4;
        *((_DWORD *)Data4 - 5) = -1;
        *((_QWORD *)Data4 - 11) = v34;
        v31 = v34 + 4;
        *(_DWORD *)Data4 = -1;
        *((_QWORD *)Data4 - 13) = Data4 - 80;
        Data4 += 168;
        --v32;
      }
      while ( v32 );
      LODWORD(v17) = v48;
      v27 = (_DWORD *)a2;
    }
    v35 = 1LL;
    *v25 = KSCATEGORY_AUDIO;
    if ( (v49 & 1) != 0 )
    {
      v35 = 2LL;
      v25[1] = KSCATEGORY_RENDER;
    }
    if ( (v49 & 2) != 0 )
      v25[v35] = KSCATEGORY_CAPTURE;
    v27[12] = v50;
    v36 = (__int64 **)*v2;
    if ( (__int64 *)*v2 != v2 )
    {
      do
      {
        if ( v26 < 0 )
          goto LABEL_55;
        v37 = pUnitProcessRtn[*((unsigned int *)v36 + 5)](
                a1,
                (int)v36,
                (int)v29,
                (int)v30,
                (__int64)&v54,
                (__int64)&v55);
        v26 = v37;
        if ( v37 >= 0 )
          v36 = (__int64 **)*v36;
      }
      while ( v36 != (__int64 **)v2 );
      if ( v37 < 0 )
      {
LABEL_55:
        TopologyFreeFunctionUnits(a1);
        return (unsigned int)v26;
      }
      v27 = (_DWORD *)a2;
      v28 = (unsigned int)v17;
    }
    v38 = v55;
    v39 = 0;
    v27[16] = v54;
    for ( v27[20] = v38; v39 < v38; ++v39 )
    {
      v40 = *v30;
      if ( *v30 != -1 )
      {
        if ( v40 >= 0 )
        {
          v42 = v17;
          for ( j = (_DWORD)v17 == 0; ; j = v44 == 0 )
          {
            v54 = v42;
            if ( j )
              break;
            v44 = v42 - 1;
            if ( *v30 == *(&v29[5].Data1 + 42 * (unsigned int)(v42 - 1)) )
            {
              v41 = v42 - 1;
              goto LABEL_67;
            }
            --v42;
          }
        }
        else
        {
          v41 = v40 & 0x7FFFFFFF;
LABEL_67:
          *v30 = v41;
          v38 = v55;
        }
      }
      v30 += 4;
    }
    if ( (_DWORD)v17 )
    {
      v45 = v29[1].Data4;
      do
      {
        v46 = 2LL * *((unsigned int *)v45 + 13);
        v47 = dword_1C001B390[4 * *((unsigned int *)v45 + 13)];
        if ( v47 )
        {
          *(_DWORD *)v45 = v47;
          *((_QWORD *)v45 + 1) = (&off_1C001B398)[v46];
          *((_DWORD *)v45 + 1) = 72;
        }
        v45 += 168;
        --v28;
      }
      while ( v28 );
    }
  }
  else
  {
    ExFreePool(v25);
  }
  return (unsigned int)v26;
}
