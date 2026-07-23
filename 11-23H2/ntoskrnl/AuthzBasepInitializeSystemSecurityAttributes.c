/*
 * XREFs of AuthzBasepInitializeSystemSecurityAttributes @ 0x140842114
 * Callers:
 *     SeRmInitPhase1 @ 0x140B60C6C (SeRmInitPhase1.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140224DF8 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8FD0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14036B12C (AuthzBasepAllocateSecurityAttributesList.c)
 *     RtlIsMultiSessionSku @ 0x1407ECFF0 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall AuthzBasepInitializeSystemSecurityAttributes(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *SecurityAttributesList; // rdi
  BOOLEAN IsMultiSessionSku; // al
  char v5; // si
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD v11[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-38h]
  _QWORD v13[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h]
  __int64 *v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+80h] [rbp+20h] BYREF
  int v17; // [rsp+84h] [rbp+24h]
  __int64 v18; // [rsp+88h] [rbp+28h] BYREF

  v17 = HIDWORD(a1);
  v13[0] = 3145774LL;
  v13[1] = L"WIN://ISMULTISESSIONSKU";
  v11[0] = 1;
  v15 = 0LL;
  v2 = 0LL;
  v14 = 0LL;
  v16 = 2;
  v11[1] = 1;
  v12 = v13;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(a1, a2);
  if ( SecurityAttributesList )
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    DWORD2(v14) = 1;
    v5 = IsMultiSessionSku;
    LOBYTE(v2) = IsMultiSessionSku != 0;
    LOWORD(v14) = 6;
    v18 = v2;
    v15 = &v18;
    v7 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v16, (__int64)v11);
    if ( _InterlockedCompareExchange64(&WindowsSystemAttributes, (signed __int64)SecurityAttributesList, 0LL) )
    {
      v7 = -1073741823;
      AuthzBasepFreeSecurityAttributesList(SecurityAttributesList, v6, v8, v9);
    }
    else
    {
      SepAllowAccessUponLogoff = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
