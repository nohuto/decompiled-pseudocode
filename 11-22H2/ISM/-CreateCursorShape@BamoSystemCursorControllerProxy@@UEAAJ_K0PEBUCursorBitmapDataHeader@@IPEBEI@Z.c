/*
 * XREFs of ?CreateCursorShape@BamoSystemCursorControllerProxy@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1801315B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?CreateCursorShape@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x180131648 (-CreateCursorShape@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K0PEBUCursorBitmapDataHea.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoSystemCursorControllerProxy::CreateCursorShape(
        BamoSystemCursorControllerProxy *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        const struct CursorBitmapDataHeader *a4,
        unsigned int a5,
        unsigned __int8 *a6,
        unsigned int a7)
{
  BamoSystemCursorControllerProxy *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  Microsoft::BamoImpl::BamoImplObject *v14; // [rsp+50h] [rbp+8h] BYREF

  v10 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v14,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v10) = BamoImpl::BamoSystemCursorControllerProxyImpl::CreateCursorShape(
                   (BamoSystemCursorControllerProxy *)((char *)v10 + 8),
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v14, v11, v12);
  return (unsigned int)v10;
}
