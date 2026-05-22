/*
 * XREFs of ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1800B0FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800276A0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800AF55C (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnZeroReferenceCount(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BamoImplObject *v5; // rcx

  if ( !*((_BYTE *)this + 217) )
  {
    if ( *((_QWORD *)this + 8) )
    {
      *((_BYTE *)this + 217) = 1;
      Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave((struct Microsoft::BamoImpl::ConnectionIndirector **)this);
      *((_BYTE *)this + 217) = 0;
    }
    if ( *((int *)this + 2) <= 0 )
    {
      v5 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = 0LL;
      if ( v5 )
        Microsoft::BamoImpl::BamoImplObject::Release(v5, a2, a3, a4);
    }
  }
}
