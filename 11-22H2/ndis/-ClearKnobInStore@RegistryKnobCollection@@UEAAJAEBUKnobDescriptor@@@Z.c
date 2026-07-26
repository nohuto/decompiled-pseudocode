/*
 * XREFs of ?ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z @ 0x1C01402A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ??1KnobTransaction@@QEAA@XZ @ 0x1C00BC0B4 (--1KnobTransaction@@QEAA@XZ.c)
 *     ?DeleteValue@KRegKey@@QEAAJPEB_W@Z @ 0x1C0139A68 (-DeleteValue@KRegKey@@QEAAJPEB_W@Z.c)
 */

__int64 __fastcall RegistryKnobCollection::ClearKnobInStore(
        __int64 (__fastcall ***this)(RegistryKnobCollection *, __int64, HANDLE *),
        const struct KnobDescriptor *a2)
{
  __int64 (__fastcall **v2)(RegistryKnobCollection *, __int64, HANDLE *); // rax
  unsigned int v4; // ebx
  HANDLE Handle[2]; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v2 = *this;
  v7 = 0;
  *(_OWORD *)Handle = 0LL;
  v4 = (*v2)((RegistryKnobCollection *)this, 2LL, Handle);
  if ( v4 || (v4 = KRegKey::DeleteValue((KRegKey *)Handle, (wchar_t *)a2->Name)) != 0 )
  {
    KnobTransaction::~KnobTransaction((KnobTransaction *)Handle);
    return v4;
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
