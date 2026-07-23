/*
 * XREFs of sub_1406DB388 @ 0x1406DB388
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     sub_1406DB910 @ 0x1406DB910 (sub_1406DB910.c)
 *     sub_14077C780 @ 0x14077C780 (sub_14077C780.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406DB388(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  unsigned int v6; // esi
  _WORD *Pool2; // rdi
  unsigned __int64 v10; // r14
  NTSTATUS inited; // ebx
  __int64 v12; // rdx
  NTSTATUS v13; // eax
  UNICODE_STRING AliasSymbolicLinkName; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  GUID AliasInterfaceClassGuid; // [rsp+70h] [rbp-29h] BYREF
  PCWSTR SourceString[2]; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+90h] [rbp-9h]

  v6 = 0;
  *a6 = 0;
  AliasSymbolicLinkName = 0LL;
  v19 = 0LL;
  Pool2 = 0LL;
  AliasInterfaceClassGuid = 0LL;
  LODWORD(v10) = 0;
  *(_OWORD *)SourceString = 0LL;
  DestinationString = 0LL;
  inited = sub_1406DB910(a1, a2, a5, &AliasInterfaceClassGuid);
  if ( inited < 0 )
    goto LABEL_23;
  if ( !SourceString[1] || *(_DWORD *)&AliasInterfaceClassGuid.Data2 || !a3 || a4 < 0x14 )
  {
    v12 = 0LL;
    inited = -1073741811;
    goto LABEL_20;
  }
  if ( a4 - 20 >= 2 )
    v6 = a4 - 20;
  if ( v6 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(256LL, v6, 879783504LL);
    if ( !Pool2 )
      inited = -1073741670;
    if ( inited < 0 )
      goto LABEL_26;
    if ( v6 >= 2 )
      *Pool2 = 0;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString[1]);
  if ( inited < 0
    || (inited = IoGetDeviceInterfaceAlias(
                   &DestinationString,
                   (const GUID *)AliasInterfaceClassGuid.Data4,
                   &AliasSymbolicLinkName),
        inited >= 0)
    && ((v10 = ((unsigned __int64)AliasSymbolicLinkName.Length + 2) >> 1, 2 * (unsigned __int64)(unsigned int)v10 > v6)
      ? (inited = -1073741789)
      : (memmove(Pool2, AliasSymbolicLinkName.Buffer, AliasSymbolicLinkName.Length), Pool2[(unsigned int)(v10 - 1)] = 0),
        ExFreePoolWithTag(AliasSymbolicLinkName.Buffer, 0),
        inited < 0) )
  {
    v12 = (unsigned int)(2 * v10);
LABEL_20:
    v13 = sub_14077C780((unsigned int)inited, v12, 0LL, 0LL, 0, HIDWORD(v19), a3, a4, a6);
    goto LABEL_21;
  }
LABEL_26:
  v12 = (unsigned int)(2 * v10);
  if ( inited < 0 )
    goto LABEL_20;
  v13 = sub_14077C780((unsigned int)inited, v12, 0LL, Pool2, v12, HIDWORD(v19), a3, a4, a6);
LABEL_21:
  inited = v13;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_23:
  if ( SourceString[1] )
    sub_1402DF554(*((_BYTE *)KeGetCurrentThread() + 562), (void *)SourceString[1]);
  return (unsigned int)inited;
}
