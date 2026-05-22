/*
 * XREFs of ?BroadcastSetMatrix3x2Value@BamoDataSourcePrincipal@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800F4D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?BroadcastSetMatrix3x2Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800F4DD8 (-BroadcastSetMatrix3x2Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetMatrix3x2Value(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v9, this[3]);
  LODWORD(v5) = BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetMatrix3x2Value(
                  (BamoImpl::BamoDataSourcePrincipalImpl *)(v5 + 1),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v9, v6, v7);
  return (unsigned int)v5;
}
