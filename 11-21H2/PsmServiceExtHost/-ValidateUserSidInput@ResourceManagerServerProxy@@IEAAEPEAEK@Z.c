/*
 * XREFs of ?ValidateUserSidInput@ResourceManagerServerProxy@@IEAAEPEAEK@Z @ 0x1800834C0
 * Callers:
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x180083000 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 * Callees:
 *     <none>
 */

bool __fastcall ResourceManagerServerProxy::ValidateUserSidInput(
        ResourceManagerServerProxy *this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  return a3 >= 0xC && a3 == RtlLengthSid(a2) && RtlValidSid(a2);
}
