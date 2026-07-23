/*
 * XREFs of sub_140858D04 @ 0x140858D04
 * Callers:
 *     sub_140858C40 @ 0x140858C40 (sub_140858C40.c)
 *     sub_140997FD0 @ 0x140997FD0 (sub_140997FD0.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     sub_140858E74 @ 0x140858E74 (sub_140858E74.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_140858D04(int a1, const UNICODE_STRING *a2)
{
  unsigned int *v4; // rsi
  const UNICODE_STRING **v5; // rax
  const UNICODE_STRING *v6; // rbx
  UNICODE_STRING *Pool2; // rax
  PVOID *Context; // rdi
  __int64 v9; // rax
  PDRIVER_OBJECT *v10; // rbx
  PIRP Irp; // rax
  PVOID v12; // rbp
  IRP *v13; // r14
  __int64 v14; // rdx
  PVOID *v15; // rax
  PVOID **v16; // rdx
  PVOID EventCategoryData; // [rsp+70h] [rbp+18h] BYREF

  EventCategoryData = 0LL;
  v4 = (unsigned int *)((char *)&unk_140C04A80 + 32 * a1);
  v5 = (const UNICODE_STRING **)*((_QWORD *)v4 + 1);
  v6 = *v5;
  if ( *v5 == (const UNICODE_STRING *)v5 )
  {
LABEL_4:
    Pool2 = (UNICODE_STRING *)ExAllocatePool2(64LL, *v4 + a2->Length, v4[1]);
    Context = (PVOID *)Pool2;
    if ( !Pool2 )
      return;
    Pool2[2].Buffer = (unsigned __int16 *)((char *)&Pool2->Length + *v4);
    Pool2[2].MaximumLength = a2->Length;
    RtlCopyUnicodeString(Pool2 + 2, a2);
    *((_DWORD *)Context + 4) = a1;
    v9 = sub_140858E74(Context + 4, &EventCategoryData);
    v10 = (PDRIVER_OBJECT *)v9;
    if ( !v9 )
      goto LABEL_17;
    Irp = IoAllocateIrp(*(_BYTE *)(v9 + 76), 0);
    v12 = EventCategoryData;
    v13 = Irp;
    if ( Irp )
    {
      if ( IoRegisterPlugPlayNotification(
             EventCategoryTargetDeviceChange,
             0,
             EventCategoryData,
             v10[1],
             sub_140997FD0,
             Context,
             Context + 3) >= 0 )
      {
        Context[6] = v10;
        Context[7] = v13;
        sub_14042A5E0(Context, v14);
        v15 = (PVOID *)*((_QWORD *)v4 + 1);
        v16 = (PVOID **)v15[1];
        if ( *v16 != v15 )
          __fastfail(3u);
        *Context = v15;
        Context[1] = v16;
        *v16 = Context;
        v15[1] = Context;
        Context = 0LL;
LABEL_10:
        if ( v12 )
          ObfDereferenceObjectWithTag(v12, 0x64506F50u);
        if ( !Context )
          return;
LABEL_17:
        ExFreePoolWithTag(Context, v4[1]);
        return;
      }
      IoFreeIrp(v13);
    }
    ObfDereferenceObjectWithTag(v10, 0x64506F50u);
    goto LABEL_10;
  }
  while ( RtlCompareUnicodeString(v6 + 2, a2, 1u) )
  {
    v6 = *(const UNICODE_STRING **)&v6->Length;
    if ( v6 == *((const UNICODE_STRING **)v4 + 1) )
      goto LABEL_4;
  }
}
