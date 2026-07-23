/*
 * XREFs of sub_14075A480 @ 0x14075A480
 * Callers:
 *     sub_14067023C @ 0x14067023C (sub_14067023C.c)
 *     sub_1406E5CB0 @ 0x1406E5CB0 (sub_1406E5CB0.c)
 *     sub_1406E9488 @ 0x1406E9488 (sub_1406E9488.c)
 *     sub_14075A12C @ 0x14075A12C (sub_14075A12C.c)
 *     sub_14079350C @ 0x14079350C (sub_14079350C.c)
 *     sub_140A082E4 @ 0x140A082E4 (sub_140A082E4.c)
 * Callees:
 *     RtlInt64ToUnicodeString @ 0x14075A520 (RtlInt64ToUnicodeString.c)
 */

__int64 __fastcall sub_14075A480(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned int v5; // r10d
  unsigned int v6; // r8d
  __int64 v7; // r9
  wchar_t *Buffer; // rdx
  __int64 v9; // rcx

  LODWORD(v3) = 16;
  RtlInt64ToUnicodeString(a1 ^ 0x41C64E6DA3BC0074LL, 0x10u, a2);
  result = 32LL;
  v5 = a2->Length >> 1;
  v6 = 16 - v5;
  a2->Length = 32;
  if ( v5 )
  {
    v7 = v5;
    do
    {
      Buffer = a2->Buffer;
      --v7;
      v3 = (unsigned int)(v3 - 1);
      result = Buffer[v7];
      Buffer[v3] = result;
      --v5;
    }
    while ( v5 );
  }
  if ( v6 )
  {
    v9 = 2LL * v6;
    do
    {
      result = (__int64)a2->Buffer;
      v9 -= 2LL;
      *(_WORD *)(v9 + result) = 48;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
