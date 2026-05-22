/*
 * XREFs of ?FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z @ 0x18009ED70
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800276A0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z @ 0x18009F70C (-RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItemsCallback(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int *v4; // rbp
  unsigned int *i; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  Microsoft::BamoImpl::BamoImplObject *v10; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v10, this[12]);
  if ( this[8] )
  {
    v4 = (unsigned int *)this[25];
    for ( i = (unsigned int *)this[24]; i != v4; ++i )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::RemoveItemIdFromConversation(
        (Microsoft::BamoImpl::BaseBamoConnectionImpl *)this,
        *i);
  }
  *((_BYTE *)this + 219) = 0;
  this[25] = this[24];
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v10, v2, v3);
  Microsoft::BamoImpl::BamoImplObject::Release(this[12], v6, v7, v8);
  return 0LL;
}
