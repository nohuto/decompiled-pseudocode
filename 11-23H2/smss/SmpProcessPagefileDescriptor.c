/*
 * XREFs of SmpProcessPagefileDescriptor @ 0x14000A108
 * Callers:
 *     SmpCreatePagingFiles @ 0x140009EC4 (SmpCreatePagingFiles.c)
 *     SmpCreateEmergencyPagingFile @ 0x140016ED8 (SmpCreateEmergencyPagingFile.c)
 * Callees:
 *     SmpUpdatePagingFileSizes @ 0x140007C20 (SmpUpdatePagingFileSizes.c)
 *     SmpCreatePagefileFromDescriptor @ 0x14000A18C (SmpCreatePagefileFromDescriptor.c)
 *     SmpMakeSystemManagedPagingFileDescriptor @ 0x140017424 (SmpMakeSystemManagedPagingFileDescriptor.c)
 */

__int64 __fastcall SmpProcessPagefileDescriptor(__int64 a1)
{
  unsigned __int64 v2; // rax
  char v3; // r11
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a1 + 92) & 2) != 0 )
    SmpMakeSystemManagedPagingFileDescriptor();
  v2 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 > v2 )
    v2 = v6;
  v7 = v2;
  SmpUpdatePagingFileSizes((__int64 *)&v6, &v7);
  v4 = v6;
  *(_QWORD *)(a1 + 64) = v7;
  *(_QWORD *)(a1 + 56) = v4;
  if ( *(_QWORD *)(a1 + 48) > v4 )
    *(_QWORD *)(a1 + 48) = v4;
  if ( (v3 & 4) == 0 )
    return SmpCreatePagefileFromDescriptor(a1, 1LL);
  result = SmpCreatePagefileFromDescriptor(a1, 0LL);
  if ( (int)result < 0 )
    return SmpCreatePagefileFromDescriptor(a1, 1LL);
  return result;
}
