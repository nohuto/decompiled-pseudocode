/*
 * XREFs of ?DuckWithNotification@DeactivatableDuckingDescriptor@@UEBA_NXZ @ 0x180010920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DeactivatableDuckingDescriptor::DuckWithNotification(DeactivatableDuckingDescriptor *this)
{
  return *(_BYTE *)(*((_QWORD *)this + 1) + 12LL);
}
