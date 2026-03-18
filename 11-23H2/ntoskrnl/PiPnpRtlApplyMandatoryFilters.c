/*
 * XREFs of PiPnpRtlApplyMandatoryFilters @ 0x140741438
 * Callers:
 *     PiUEventApplyAdditionalFilters @ 0x14077E4E0 (PiUEventApplyAdditionalFilters.c)
 *     PiDqQueryApplyObjectEvent @ 0x140786C94 (PiDqQueryApplyObjectEvent.c)
 *     IopGetDeviceInterfaces @ 0x1407873F0 (IopGetDeviceInterfaces.c)
 *     PiDqQueryEnumObject @ 0x140788234 (PiDqQueryEnumObject.c)
 *     PiCMValidateDeviceInstance @ 0x140799EB8 (PiCMValidateDeviceInstance.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407C54D0 (IoGetDeviceInterfaceAlias.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1407CE340 (IopDeviceInterfaceFilterCallback.c)
 *     PiCMMandatoryFilterCallback @ 0x1407CF2B0 (PiCMMandatoryFilterCallback.c)
 * Callees:
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1406C9768 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x140740830 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     SeQuerySessionIdTokenEx @ 0x140741DD0 (SeQuerySessionIdTokenEx.c)
 *     PiAuVerifyAccessToObject @ 0x14079A8CC (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1407E65A4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryFilters(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        struct _SECURITY_SUBJECT_CONTEXT *SessionId,
        _BYTE *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT *v6; // rdi
  PACCESS_TOKEN ClientToken; // rcx
  NTSTATUS SessionIdToken; // ecx
  __int64 v13; // r8
  _BYTE *v14; // rax
  int v15; // ebx
  int v18; // ebx
  BOOLEAN IsServiceSession[24]; // [rsp+30h] [rbp-18h] BYREF

  v6 = SessionId;
  IsServiceSession[0] = 0;
  ClientToken = SessionId->ClientToken;
  if ( !SessionId->ClientToken )
    ClientToken = SessionId->PrimaryToken;
  SessionIdToken = SeQuerySessionIdTokenEx(ClientToken, (PULONG)&SessionId, IsServiceSession);
  if ( SessionIdToken >= 0 )
  {
    if ( IsServiceSession[0] )
    {
      LOBYTE(SessionId) = 0;
      SessionIdToken = PiAuVerifyAccessToObject(
                         0xF0000u,
                         PiAuLocalSystemSecurityObject,
                         (PGENERIC_MAPPING)&PiAuLocalSystemSecurityMapping,
                         v6,
                         (__int64)&SessionId);
      if ( SessionIdToken < 0 )
        return (unsigned int)SessionIdToken;
      if ( (_BYTE)SessionId )
      {
        v14 = a6;
LABEL_14:
        *v14 = 1;
        return (unsigned int)SessionIdToken;
      }
    }
    v14 = a6;
    v15 = a3 - 1;
    if ( v15 )
    {
      v18 = v15 - 2;
      if ( v18 )
      {
        if ( v18 != 2 )
          goto LABEL_14;
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceContainerFilters(a1, a2, v13, v6, a6);
      }
      else
      {
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceInterfaceFilters(a1, a2, a4, (int)v6, (__int64)a6);
      }
    }
    else
    {
      return (unsigned int)PiPnpRtlApplyMandatoryDeviceFilters(a1, a2, a4, v6, a6);
    }
  }
  return (unsigned int)SessionIdToken;
}
