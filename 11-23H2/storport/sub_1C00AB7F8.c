/*
 * XREFs of sub_1C00AB7F8 @ 0x1C00AB7F8
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

__int64 __fastcall sub_1C00AB7F8(__int64 a1, IRP *a2)
{
  PIO_SECURITY_CONTEXT SecurityContext; // rcx
  bool v3; // zf

  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v3 = BYTE2(SecurityContext->SecurityQos) == 40;
  BYTE3(SecurityContext->SecurityQos) = 48;
  if ( v3 )
    SecurityContext[1].FullCreateOptions = -1073741637;
  else
    SecurityContext[2].DesiredAccess = -1073741637;
  return sub_1C0003440(a2, 0, 0xC00000BB);
}
