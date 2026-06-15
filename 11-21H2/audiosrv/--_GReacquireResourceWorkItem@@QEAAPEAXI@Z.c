/*
 * XREFs of ??_GReacquireResourceWorkItem@@QEAAPEAXI@Z @ 0x180109ECC
 * Callers:
 *     ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z @ 0x180066100 (-ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

ReacquireResourceWorkItem *__fastcall ReacquireResourceWorkItem::`scalar deleting destructor'(
        ReacquireResourceWorkItem *this)
{
  operator delete(this);
  return this;
}
