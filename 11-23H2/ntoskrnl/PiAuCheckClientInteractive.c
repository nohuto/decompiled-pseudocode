/*
 * XREFs of PiAuCheckClientInteractive @ 0x14095B650
 * Callers:
 *     PiCMQueryRemove @ 0x14096A274 (PiCMQueryRemove.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140297AD0 (RtlSubAuthoritySid.c)
 *     RtlValidSid @ 0x1407373A0 (RtlValidSid.c)
 *     RtlInitializeSid @ 0x140782050 (RtlInitializeSid.c)
 *     PiAuCheckTokenMembership @ 0x14095B710 (PiAuCheckTokenMembership.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiAuCheckClientInteractive(_BYTE *a1)
{
  void *Pool2; // rax
  void *v3; // rdi
  NTSTATUS v4; // ebx
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *a1 = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Pool2 = (void *)ExAllocatePool2(256LL, 12LL, 538996816LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    v4 = RtlInitializeSid(Pool2, &IdentifierAuthority, 1u);
    if ( v4 >= 0 )
    {
      *RtlSubAuthoritySid(v3, 0) = 4;
      if ( RtlValidSid(v3) )
      {
        v4 = PiAuCheckTokenMembership(v3);
        if ( v4 >= 0 )
          *a1 = 0;
      }
      else
      {
        v4 = -1073741595;
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
