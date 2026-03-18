/*
 * XREFs of ??1?$ObjectLock@UtagObjLock@@U1@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@VDLT_POST@@@@QEAA@XZ @ 0x1C01B4FA8
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011E780 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     ?unlock@?$ObjectLockBase@UtagObjLock@@U1@U1@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@VDLT_THREADINFO@@VDLT_QUEUE@@VDLT_POST@@@@AEAAXXZ @ 0x1C0150D1A (-unlock@-$ObjectLockBase@UtagObjLock@@U1@U1@@-$DomainExclusiveBase@$$V@-$DomainSharedBase@VDLT_T.c)
 */

void __fastcall DomainShared<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock,tagObjLock>(
        __int64 a1)
{
  DomainSharedBase<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock,tagObjLock,tagObjLock>::unlock(a1);
}
