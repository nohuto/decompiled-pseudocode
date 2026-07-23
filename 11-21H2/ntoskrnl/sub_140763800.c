/*
 * XREFs of sub_140763800 @ 0x140763800
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_1407635A4 @ 0x1407635A4 (sub_1407635A4.c)
 *     sub_1407640D8 @ 0x1407640D8 (sub_1407640D8.c)
 *     sub_14076426C @ 0x14076426C (sub_14076426C.c)
 *     sub_140764814 @ 0x140764814 (sub_140764814.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     sub_140953508 @ 0x140953508 (sub_140953508.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140763800(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *DeviceExtension; // rdi
  NTSTATUS Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int MinorFunction; // ecx
  struct _KTHREAD *v8; // rax
  PIO_SECURITY_CONTEXT SecurityContext; // r8
  __m128i si128; // xmm0
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // ecx
  struct _KTHREAD *v16; // rax
  _QWORD *v17; // r10
  ULONG Length; // ecx
  ULONG v19; // ecx
  ULONG v20; // ecx
  ULONG v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rdx
  NTSTATUS v24; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  struct _KTHREAD *v30; // rax
  __int64 v31; // rdx
  ULONG v32; // ecx
  ULONG_PTR Pool2; // rax
  ULONG_PTR v34; // rax
  void *v35; // rcx
  struct _KTHREAD *v36; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR Information; // rax
  ULONG_PTR v39; // rdx
  unsigned __int64 v40; // rax
  struct _KTHREAD *v41; // rax
  int v42; // ebx
  int v43; // ebx
  __int64 v44; // rax
  ULONG_PTR v45; // rbx
  struct _KTHREAD *v46; // rax
  int v47; // edx
  char v48; // cl
  __int64 v49; // rax

  DeviceExtension = DeviceObject->DeviceExtension;
  Status = Irp->IoStatus.Status;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (DeviceExtension[2] & 0x10) != 0 )
  {
    Status = -1073741810;
    goto LABEL_24;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 0xC )
  {
    v15 = MinorFunction - 19;
    if ( v15 )
    {
      v26 = v15 - 1;
      if ( !v26 )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
        if ( *(_QWORD *)DeviceExtension )
        {
          Information = Irp->IoStatus.Information;
          v39 = Information | 2;
          v40 = Information & 0xFFFFFFFFFFFFFFFDuLL;
          if ( (*(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL) & 4) == 0 )
            v39 = v40;
          Irp->IoStatus.Information = v39;
          goto LABEL_12;
        }
LABEL_74:
        Status = -1073741810;
        goto LABEL_23;
      }
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( !v28 )
        {
          Status = CurrentStackLocation->Parameters.SetLock.Lock != 0 ? 0xC00000BB : 0;
          goto LABEL_24;
        }
        v29 = v28 - 1;
        if ( !v29 )
        {
          v46 = KeGetCurrentThread();
          --*((_WORD *)v46 + 242);
          ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
          v47 = DeviceExtension[2] | 4;
          DeviceExtension[2] = v47;
          v48 = v47;
          if ( (v47 & 8) != 0 )
          {
            v49 = *(_QWORD *)DeviceExtension;
            if ( *(_QWORD *)DeviceExtension )
            {
              if ( *(PDEVICE_OBJECT *)(v49 + 120) == DeviceObject && (*(_DWORD *)(v49 + 4) & 2) != 0 )
              {
                v48 = v47 | 0x40;
                DeviceExtension[2] = v47 | 0x40;
              }
            }
          }
          sub_1406619F8((__int64)DeviceObject, (v48 & 0x48) == 8);
          goto LABEL_60;
        }
        if ( v29 != 2 )
          goto LABEL_24;
        sub_14076426C(DeviceObject);
      }
      else
      {
        Pool2 = ExAllocatePool2(256LL, 24LL, 1466986064LL);
        if ( !Pool2 )
          goto LABEL_72;
        *(_DWORD *)(Pool2 + 20) = 0;
        *(_DWORD *)(Pool2 + 16) = 15;
        *(_OWORD *)Pool2 = xmmword_140015F48;
        Irp->IoStatus.Information = Pool2;
      }
LABEL_31:
      Status = 0;
      goto LABEL_24;
    }
    v16 = KeGetCurrentThread();
    --*((_WORD *)v16 + 242);
    ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
    v17 = *(_QWORD **)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_74;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      v19 = Length - 1;
      if ( !v19 )
      {
        v35 = (void *)v17[3];
        if ( !v35 )
          goto LABEL_23;
        v24 = sub_140764814(v35);
        goto LABEL_22;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        v24 = sub_1407640D8(*(_QWORD *)DeviceExtension, &Irp->IoStatus.Information);
        goto LABEL_22;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 != 2 || !v17[5] )
          goto LABEL_23;
        v34 = ExAllocatePool2(256LL, 78LL, 1466986064LL);
        Irp->IoStatus.Information = v34;
        if ( !v34 )
        {
          Status = -1073741670;
          goto LABEL_23;
        }
        v24 = sub_140773030(*(_QWORD *)(*(_QWORD *)DeviceExtension + 40LL), v34);
        goto LABEL_22;
      }
      v22 = v17[2];
    }
    else
    {
      v22 = v17[1];
    }
    v23 = 200LL;
LABEL_21:
    v24 = sub_14077DE70(v22, v23, 1466986064LL, &Irp->IoStatus.Information);
LABEL_22:
    Status = v24;
    goto LABEL_23;
  }
  if ( MinorFunction == 12 )
  {
    v30 = KeGetCurrentThread();
    --*((_WORD *)v30 + 242);
    ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
    v31 = *(_QWORD *)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_74;
    v32 = CurrentStackLocation->Parameters.Read.Length;
    if ( v32 )
    {
      if ( v32 != 1 )
        goto LABEL_23;
      v22 = *(_QWORD *)(v31 + 56);
    }
    else
    {
      v22 = *(_QWORD *)(v31 + 48);
    }
    if ( !v22 )
      goto LABEL_23;
    v23 = 0x7FFFFFFFLL;
    goto LABEL_21;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    v36 = KeGetCurrentThread();
    --*((_WORD *)v36 + 242);
    ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
    if ( (DeviceExtension[2] & 1) == 0 )
    {
      Status = sub_1407635A4(*(_QWORD *)DeviceExtension, 1);
      if ( Status < 0 )
        sub_1407635A4(*(_QWORD *)DeviceExtension, 0);
      else
        DeviceExtension[2] |= 1u;
      goto LABEL_23;
    }
    goto LABEL_12;
  }
  if ( MinorFunction == 1 )
    goto LABEL_31;
  if ( MinorFunction == 2 )
  {
    v41 = KeGetCurrentThread();
    --*((_WORD *)v41 + 242);
    ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
    v42 = DeviceExtension[2] | 2;
    DeviceExtension[2] = v42;
    v43 = v42 & 0x48;
    sub_1406619F8((__int64)DeviceObject, v43 == 8);
    if ( v43 != 8 )
      sub_140953508(DeviceObject);
LABEL_60:
    ExReleaseResourceLite(&stru_140C44820);
    KeLeaveCriticalRegion();
    goto LABEL_31;
  }
  if ( MinorFunction <= 6 )
    goto LABEL_31;
  if ( MinorFunction == 7 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 4 )
      goto LABEL_24;
    v44 = ExAllocatePool2(256LL, 16LL, 1466986064LL);
    v45 = v44;
    if ( v44 )
    {
      *(_DWORD *)v44 = 1;
      *(_QWORD *)(v44 + 8) = DeviceObject;
      ObfReferenceObject(DeviceObject);
      Irp->IoStatus.Information = v45;
      goto LABEL_31;
    }
LABEL_72:
    Status = -1073741670;
    goto LABEL_24;
  }
  if ( MinorFunction == 9 )
  {
    v8 = KeGetCurrentThread();
    --*((_WORD *)v8 + 242);
    ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
    if ( *(_QWORD *)DeviceExtension )
    {
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      si128 = _mm_load_si128((const __m128i *)&xmmword_14001C770);
      SecurityContext->DesiredAccess = 0;
      SecurityContext->FullCreateOptions = 1;
      *(__m128i *)&SecurityContext[1].SecurityQos = si128;
      SecurityContext[1].DesiredAccess = _mm_cvtsi128_si32(si128);
      SecurityContext[1].FullCreateOptions = 0;
      LODWORD(SecurityContext[2].SecurityQos) = 0;
      v11 = HIDWORD(SecurityContext->SecurityQos) | 0x240;
      HIDWORD(SecurityContext->SecurityQos) = v11;
      v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(16 * *(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL))) & 0x10;
      HIDWORD(SecurityContext->SecurityQos) = v12;
      v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(*(_QWORD *)DeviceExtension
                                                                                       + 64LL) << 6)) & 0x80;
      HIDWORD(SecurityContext->SecurityQos) = v13;
      v14 = v13 ^ (v13 ^ (*(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL) << 15)) & 0x20000;
      HIDWORD(SecurityContext->SecurityQos) = v14;
      HIDWORD(SecurityContext->SecurityQos) = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)~(32
                                                                                               * *(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL))) & 0x100;
LABEL_12:
      Status = 0;
LABEL_23:
      ExReleaseResourceLite(&stru_140C44820);
      KeLeaveCriticalRegion();
      goto LABEL_24;
    }
    goto LABEL_74;
  }
LABEL_24:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
