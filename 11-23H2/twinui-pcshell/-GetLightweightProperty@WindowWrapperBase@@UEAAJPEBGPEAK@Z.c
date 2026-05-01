/*
 * XREFs of ?GetLightweightProperty@WindowWrapperBase@@UEAAJPEBGPEAK@Z @ 0x1804EA110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z @ 0x1804F3690 (-GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z.c)
 */

__int64 __fastcall WindowWrapperBase::GetLightweightProperty(
        WindowWrapperBase *this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  int Property; // ebx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 208LL))(*((_QWORD *)this + 35), &SRWLock);
  Property = LightweightPropertySet::GetProperty((WindowWrapperBase *)((char *)this + 200), a2, a3);
  if ( Property >= 0 )
  {
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return 0LL;
  }
  else
  {
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return (unsigned int)Property;
  }
}
