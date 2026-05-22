/*
 * XREFs of ?SetActivated@BamoActivationControllerProxy@@UEAAX_N@Z @ 0x18008F100
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?UpdateActivatedRemoteCache@BamoActivationControllerProxyImpl@BamoImpl@@AEAAXXZ @ 0x18008F1EC (-UpdateActivatedRemoteCache@BamoActivationControllerProxyImpl@BamoImpl@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoActivationControllerProxy::SetActivated(BamoActivationControllerProxy *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v6,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  *((_BYTE *)this + 40) = a2;
  if ( !*(_DWORD *)(*((_QWORD *)this + 3) + 44LL) )
    BamoImpl::BamoActivationControllerProxyImpl::UpdateActivatedRemoteCache((BamoActivationControllerProxy *)((char *)this + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v6, v4, v5);
}
