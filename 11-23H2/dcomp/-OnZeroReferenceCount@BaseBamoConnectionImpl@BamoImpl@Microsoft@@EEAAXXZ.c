/*
 * XREFs of ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18016DAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18016CE4C (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18016DDE0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnZeroReferenceCount(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  Microsoft::BamoImpl::BamoImplObject *v2; // rcx

  if ( !*((_BYTE *)this + 217) )
  {
    if ( *((_QWORD *)this + 8) )
    {
      *((_BYTE *)this + 217) = 1;
      Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave(this);
      *((_BYTE *)this + 217) = 0;
    }
    if ( *((int *)this + 2) <= 0 )
    {
      v2 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = 0LL;
      if ( v2 )
        Microsoft::BamoImpl::BamoImplObject::Release(v2);
    }
  }
}
