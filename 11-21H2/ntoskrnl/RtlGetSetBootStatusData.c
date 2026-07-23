/*
 * XREFs of RtlGetSetBootStatusData @ 0x1406D66F0
 * Callers:
 *     sub_1406D5F3C @ 0x1406D5F3C (sub_1406D5F3C.c)
 *     sub_1406D6228 @ 0x1406D6228 (sub_1406D6228.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406D6860 @ 0x1406D6860 (sub_1406D6860.c)
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
  __int64 v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  __int64 v14; // r8
  char v15; // al
  __int64 v16; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v17[192]; // [rsp+40h] [rbp-C0h] BYREF

  LODWORD(v16) = 0;
  memset(v17, 0, sizeof(v17));
  if ( Read )
    return sub_1406D6860(FileHandle, BufferSize, (__int64)ReturnLength);
  if ( DataClass == RtlBsdItemChecksum )
    return -1073741811;
  result = sub_1406D6860(FileHandle, 1, 0LL);
  if ( result >= 0 )
  {
    result = sub_1406D6860(FileHandle, 192, 0LL);
    if ( result >= 0 )
    {
      result = sub_1406D6860(FileHandle, BufferSize, (__int64)&v16);
      if ( result >= 0 )
      {
        v11 = (unsigned int)v16;
        if ( ReturnLength )
          *ReturnLength = v16;
        if ( (_DWORD)v11 )
        {
          v12 = v11;
          v13 = v17;
          v14 = v11;
          v15 = 0;
          do
          {
            v15 += *v13++;
            --v14;
          }
          while ( v14 );
          do
          {
            v15 -= *(_BYTE *)Buffer;
            Buffer = (char *)Buffer + 1;
            --v12;
          }
          while ( v12 );
        }
        return sub_1406D6860(FileHandle, 1, 0LL);
      }
    }
  }
  return result;
}
