/*
 * XREFs of PopCreateTimebrokerServiceSid @ 0x140B73154
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     RtlInitializeSid @ 0x140782560 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x1407D1BF0 (RtlLengthRequiredSid.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 PopCreateTimebrokerServiceSid()
{
  ULONG v0; // eax
  _DWORD *Pool2; // rax
  _DWORD *v2; // rbx
  NTSTATUS v3; // edi
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v0 = RtlLengthRequiredSid(6u);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v0, 0x67696450u);
  v2 = Pool2;
  if ( Pool2 )
  {
    v3 = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
    if ( v3 < 0 )
    {
      ExFreePoolWithTag(v2, 0x67696450u);
    }
    else
    {
      v2[2] = 80;
      v2[3] = 410965207;
      v2[4] = -1744070425;
      v2[5] = 1717734767;
      v2[6] = -1973635081;
      v2[7] = -539001157;
      PopTimeBrokerServiceSid = v2;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
