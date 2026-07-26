/*
 * XREFs of ?SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z @ 0x1C0140320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ??1KnobTransaction@@QEAA@XZ @ 0x1C00BC0D4 (--1KnobTransaction@@QEAA@XZ.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x1C011BDF4 (-SetValueUlong@KRegKey@@QEAAJPEB_WK@Z.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x1C0120204 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 *     ?SetValueUlong64@KRegKey@@QEAAJPEB_W_K@Z @ 0x1C0139AD0 (-SetValueUlong64@KRegKey@@QEAAJPEB_W_K@Z.c)
 */

__int64 __fastcall RegistryKnobCollection::SetKnobInStore(
        RegistryKnobCollection *this,
        const struct KnobDescriptor *a2,
        __int64 a3)
{
  unsigned int v5; // ebx
  wchar_t *Name; // rdx
  NTSTATUS v7; // eax
  HANDLE Handle[2]; // [rsp+20h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF

  v11 = a3;
  v10 = 0;
  *(_OWORD *)Handle = 0LL;
  v5 = KnobCollection::ValidateKnobValue(this, (unsigned __int64 *)&v11, a2);
  if ( v5
    || (v5 = (**(__int64 (__fastcall ***)(RegistryKnobCollection *, __int64, HANDLE *))this)(this, 2LL, Handle)) != 0
    || ((Name = (wchar_t *)a2->Name, (a2->Flags & 4) == 0)
      ? (v7 = KRegKey::SetValueUlong((KRegKey *)Handle, Name, v11))
      : (v7 = KRegKey::SetValueUlong64((KRegKey *)Handle, Name, v11)),
        (v5 = v7) != 0) )
  {
    KnobTransaction::~KnobTransaction((KnobTransaction *)Handle);
    return v5;
  }
  else
  {
    if ( Handle[1] )
      ZwClose(Handle[1]);
    if ( Handle[0] )
      ZwClose(Handle[0]);
    return 0LL;
  }
}
