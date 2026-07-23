/*
 * XREFs of RtlGetSetBootStatusData @ 0x1407ECAC0
 * Callers:
 *     PopBootStatGet @ 0x1407EC7B8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1407EED48 (PopBootStatSet.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlpGetSetBootStatusData @ 0x1407ECC3C (RtlpGetSetBootStatusData.c)
 */

NTSTATUS __cdecl RtlGetSetBootStatusData(
        HANDLE FileHandle,
        BOOLEAN Read,
        RTL_BSD_ITEM_TYPE DataClass,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax
  __int64 v11; // rcx
  char v12; // al
  _BYTE *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v17[192]; // [rsp+40h] [rbp-C0h] BYREF

  LODWORD(v16) = 0;
  memset(v17, 0, sizeof(v17));
  if ( Read )
    return RtlpGetSetBootStatusData(FileHandle, BufferSize, (__int64)ReturnLength);
  if ( DataClass == RtlBsdItemChecksum )
    return -1073741811;
  result = RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
  if ( result >= 0 )
  {
    result = RtlpGetSetBootStatusData(FileHandle, 192, 0LL);
    if ( result >= 0 )
    {
      result = RtlpGetSetBootStatusData(FileHandle, BufferSize, (__int64)&v16);
      if ( result >= 0 )
      {
        v11 = (unsigned int)v16;
        if ( ReturnLength )
          *ReturnLength = v16;
        v12 = 0;
        if ( (_DWORD)v11 )
        {
          v13 = v17;
          v14 = v11;
          do
          {
            v12 += *v13++;
            --v14;
          }
          while ( v14 );
          v15 = v11;
          do
          {
            v12 -= *(_BYTE *)Buffer;
            Buffer = (char *)Buffer + 1;
            --v15;
          }
          while ( v15 );
        }
        return RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
      }
    }
  }
  return result;
}
