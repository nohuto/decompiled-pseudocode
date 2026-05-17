/*
 * XREFs of LdrGetKnownDllSectionHandle @ 0x18008AA50
 * Callers:
 *     <none>
 * Callees:
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     NtOpenSection @ 0x1800A4750 (NtOpenSection.c)
 */

__int64 __fastcall LdrGetKnownDllSectionHandle(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // rdi
  int inited; // ebx
  _BYTE v9[16]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h]
  _BYTE *v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  __int128 v14; // [rsp+60h] [rbp-18h]

  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    4728,
    (__int64)"LdrGetKnownDllSectionHandle",
    3u,
    "DLL name: %ws\n",
    a1);
  if ( a2 )
    return 3221225485LL;
  v6 = LdrpKnownDllDirectoryHandle;
  if ( LdrpKnownDllDirectoryHandle )
  {
    inited = RtlInitUnicodeStringEx((__int64)v9, a1);
    if ( inited >= 0 )
    {
      v10 = 48;
      v12 = v9;
      v11 = v6;
      v13 = 64;
      v14 = 0LL;
      inited = NtOpenSection(a3, 13LL, &v10);
    }
  }
  else
  {
    inited = -1073741816;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    4759,
    (__int64)"LdrGetKnownDllSectionHandle",
    4u,
    "Status: 0x%08lx\n",
    inited);
  return (unsigned int)inited;
}
