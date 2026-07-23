/*
 * XREFs of MiFreeLargePageChain @ 0x14064F66C
 * Callers:
 *     MiReturnExcessPoolCommit @ 0x140286828 (MiReturnExcessPoolCommit.c)
 *     MiGetLargePageChain @ 0x1402EBCD0 (MiGetLargePageChain.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x1402D6E70 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void __fastcall MiFreeLargePageChain(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v3; // al
  unsigned int v4; // ecx
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = *(_QWORD *)v1;
      v3 = MiLockPageInline(v1);
      v4 = *(_BYTE *)(v1 + 34) & 7;
      v6 = 0LL;
      v5[1] = v4;
      LOBYTE(v6) = v3;
      v5[0] = 0xAAAAAAAAAAAAAAABuLL * ((v1 + 0x220000000000LL) >> 4);
      MiInsertLargePageInNodeList((__int64)v5);
      v1 = v2;
    }
    while ( v2 );
  }
}
