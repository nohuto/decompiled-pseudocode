/*
 * XREFs of ??_GInputSystemServerConnection@@UEAAPEAXI@Z @ 0x180130090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x1800C0924 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
InputSystemServerConnection *__fastcall InputSystemServerConnection::`scalar deleting destructor'(
        InputSystemServerConnection *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 31);
  if ( v4 )
  {
    *((_QWORD *)this + 31) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((InputSystemServerConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
