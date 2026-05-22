/*
 * XREFs of ?FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z @ 0x180087B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z @ 0x180088680 (-RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItemsCallback(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int *v4; // rsi
  unsigned int *i; // rdi
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
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v10, v2, v3);
  Microsoft::BamoImpl::BamoImplObject::Release(this[12], v6, v7, v8);
  return 0LL;
}
