/*
 * XREFs of ??_GDiagCallbackClientConnection@@UEAAPEAXI@Z @ 0x18016B0D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18016AA64 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

DiagCallbackClientConnection *__fastcall DiagCallbackClientConnection::`scalar deleting destructor'(
        DiagCallbackClientConnection *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 31);
  if ( v4 )
  {
    *((_QWORD *)this + 31) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((DiagCallbackClientConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
