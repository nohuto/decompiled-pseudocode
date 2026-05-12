/*
 * XREFs of ?PmQueryDepends@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z @ 0x1C0004470
 * Callers:
 *     ?PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0001F80 (-PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PmQueryDepends(struct _DEVICE_EXTENSION *a1, struct _LIST_ENTRY *a2)
{
  int v2; // r14d
  int v3; // r8d
  int Status; // r12d
  struct _LIST_ENTRY *v5; // rdi
  int v7; // ecx
  _DWORD *Pool2; // rsi
  struct _LIST_ENTRY *Flink; // r14
  __int64 v10; // r15
  IRP *v11; // rcx
  __int64 v12; // rax
  IRP *v13; // rbx
  struct _DEVICE_OBJECT *Blink; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _DWORD *v16; // rcx
  KIRQL v17; // al
  char *v18; // rdx
  KIRQL v19; // r8
  __int64 *v20; // rcx
  char *v21; // rax
  __int64 *v22; // rbx
  __int64 *v23; // rax
  int v24; // eax
  _DWORD *v25; // rdi
  _DWORD *v26; // rax
  _DWORD *v27; // r14
  __int64 v28; // r15
  _DWORD **v29; // rcx
  __int64 v30; // rdx
  _DWORD *v31; // r13
  __int64 v32; // rax
  __int64 k; // rdi
  _DWORD *v34; // rbx
  __int64 m; // r14
  __int64 i; // r14
  __int64 j; // rcx
  __int64 v38; // rax
  __int64 v39; // [rsp+20h] [rbp-38h]
  __int64 *v40; // [rsp+28h] [rbp-30h] BYREF
  char *v41; // [rsp+30h] [rbp-28h]
  __int128 v42; // [rsp+38h] [rbp-20h] BYREF
  __int64 v43; // [rsp+48h] [rbp-10h]
  int v44; // [rsp+A0h] [rbp+48h]
  int v45; // [rsp+A8h] [rbp+50h]
  __int64 v46; // [rsp+B0h] [rbp+58h]
  _DWORD **v47; // [rsp+B8h] [rbp+60h]

  v2 = 0;
  v44 = 0;
  v3 = 0;
  v43 = 0LL;
  v42 = 0LL;
  Status = 0;
  v5 = a2;
  while ( 1 )
  {
    a2 = a2->Flink;
    if ( a2 == v5 )
      break;
    v7 = v3 + 1;
    if ( !a2[-1].Blink )
      v7 = v3;
    v3 = v7;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(8 * v3 + 8), 1381133648LL);
  if ( Pool2 )
  {
    Flink = v5->Flink;
    v10 = 0LL;
    while ( Flink != v5 )
    {
      if ( Flink[-1].Blink )
      {
        v11 = (IRP *)*((_QWORD *)a1 + 107);
        *(_QWORD *)&v42 = Flink[-7].Flink;
        *((_QWORD *)&v42 + 1) = *((_QWORD *)a1 + 3);
        IoReuseIrp(v11, -1073741637);
        v12 = *((_QWORD *)a1 + 107);
        --*(_BYTE *)(v12 + 67);
        *(_QWORD *)(v12 + 184) -= 72LL;
        v13 = (IRP *)*((_QWORD *)a1 + 107);
        Blink = (struct _DEVICE_OBJECT *)Flink[-1].Blink[2].Blink;
        CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation->MajorFunction = 15;
        v13->AssociatedIrp.MasterIrp = (struct _IRP *)&v42;
        CurrentStackLocation->Parameters.Read.Length = 8;
        CurrentStackLocation->Parameters.Create.Options = 24;
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart = 7733260;
        IoForwardIrpSynchronously(Blink, v13);
        Status = v13->IoStatus.Status;
        if ( Status < 0 )
          break;
        v16 = (_DWORD *)v42;
        *(_QWORD *)&Pool2[2 * v10 + 2] = v42;
        v44 += *v16;
        v10 = (unsigned int)(v10 + 1);
      }
      Flink = Flink->Flink;
    }
    v2 = v44;
    *Pool2 = v10;
  }
  else
  {
    Status = -1073741670;
  }
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
  v18 = (char *)a1 + 672;
  v19 = v17;
  v20 = (__int64 *)*((_QWORD *)a1 + 84);
  if ( (struct _DEVICE_EXTENSION *)v20[1] != (struct _DEVICE_EXTENSION *)((char *)a1 + 672)
    || (v41 = (char *)a1 + 672,
        v40 = v20,
        v20[1] = (__int64)&v40,
        *(_QWORD *)v18 = &v40,
        v21 = (char *)*((_QWORD *)a1 + 85),
        v41 != v18)
    || *(char **)v21 != v18 )
  {
LABEL_60:
    __fastfail(3u);
  }
  *(_QWORD *)v21 = &v40;
  *((_QWORD *)a1 + 85) = (char *)a1 + 672;
  *(_QWORD *)v18 = v18;
  v41 = v21;
  KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v19);
  while ( 1 )
  {
    v22 = v40;
    if ( v40 == (__int64 *)&v40 )
      break;
    if ( (__int64 **)v40[1] != &v40 )
      goto LABEL_60;
    v23 = (__int64 *)*v40;
    if ( *(__int64 **)(*v40 + 8) != v40 )
      goto LABEL_60;
    v40 = (__int64 *)*v40;
    v23[1] = (__int64)&v40;
    v24 = v2;
    v22[1] = (__int64)v22;
    *v22 = (__int64)v22;
    v25 = (_DWORD *)*(v22 - 14);
    if ( v25 )
      v24 = v2 + *v25;
    if ( Status < 0 )
      goto LABEL_52;
    v26 = (_DWORD *)ExAllocatePool2(258LL, 8 * v24 + 8LL, 1381133648LL);
    v27 = v26;
    if ( !v26 )
    {
      Status = -1073741670;
LABEL_52:
      if ( v25 )
      {
        for ( i = 0LL; (unsigned int)i < *v25; i = (unsigned int)(i + 1) )
          ObfDereferenceObject(*(PVOID *)&v25[2 * i + 2]);
        ExFreePoolWithTag(v25, 0);
      }
      *(v22 - 14) = 0LL;
      goto LABEL_37;
    }
    v28 = 0LL;
    *v26 = 0;
    if ( *Pool2 )
    {
      v29 = (_DWORD **)(Pool2 + 2);
      v39 = (unsigned int)*Pool2;
      v47 = (_DWORD **)(Pool2 + 2);
      v30 = v39;
      do
      {
        v31 = *v29;
        if ( *v29 )
        {
          v32 = 0LL;
          v45 = 0;
          if ( *v31 )
          {
            do
            {
              v28 = 0LL;
              v46 = (unsigned int)v32;
              if ( *v27 )
              {
                while ( *(_QWORD *)&v27[2 * v28 + 2] != *(_QWORD *)&v31[2 * v32 + 2] )
                {
                  v28 = (unsigned int)(v28 + 1);
                  if ( (unsigned int)v28 >= *v27 )
                    goto LABEL_31;
                }
              }
              else
              {
                v46 = (unsigned int)v32;
LABEL_31:
                ObfReferenceObject(*(PVOID *)&v31[2 * v32 + 2]);
                *(_QWORD *)&v27[2 * v28 + 2] = *(_QWORD *)&v31[2 * v46 + 2];
                ++*v27;
              }
              v32 = (unsigned int)(v45 + 1);
              v45 = v32;
            }
            while ( (unsigned int)v32 < *v31 );
            v29 = v47;
            v30 = v39;
          }
        }
        ++v29;
        --v30;
        v47 = v29;
        v39 = v30;
      }
      while ( v30 );
    }
    if ( v25 )
    {
      for ( j = 0LL; (unsigned int)j < *v25; ++*v27 )
      {
        v38 = *(_QWORD *)&v25[2 * j + 2];
        j = (unsigned int)(j + 1);
        *(_QWORD *)&v27[2 * v28 + 2] = v38;
        v28 = (unsigned int)(v28 + 1);
      }
      ExFreePoolWithTag(v25, 0);
    }
    *(v22 - 14) = (__int64)v27;
LABEL_37:
    v2 = v44;
    *((_DWORD *)v22 - 30) = Status;
  }
  if ( Pool2 )
  {
    for ( k = 0LL; (unsigned int)k < *Pool2; k = (unsigned int)(k + 1) )
    {
      v34 = *(_DWORD **)&Pool2[2 * k + 2];
      if ( v34 )
      {
        for ( m = 0LL; (unsigned int)m < *v34; m = (unsigned int)(m + 1) )
          ObfDereferenceObject(*(PVOID *)&v34[2 * m + 2]);
        ExFreePoolWithTag(v34, 0);
        *(_QWORD *)&Pool2[2 * k + 2] = 0LL;
      }
    }
    ExFreePoolWithTag(Pool2, 0);
  }
}
