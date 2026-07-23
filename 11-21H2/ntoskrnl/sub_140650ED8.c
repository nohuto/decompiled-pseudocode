/*
 * XREFs of sub_140650ED8 @ 0x140650ED8
 * Callers:
 *     sub_140650F50 @ 0x140650F50 (sub_140650F50.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406509F8 @ 0x1406509F8 (sub_1406509F8.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     sub_140930250 @ 0x140930250 (sub_140930250.c)
 */

__int64 __fastcall sub_140650ED8(UNICODE_STRING *a1, __int64 a2)
{
  CHAR *v4; // rax
  CHAR *v5; // rdi
  unsigned int v6; // ebx

  v4 = (CHAR *)sub_140930250((unsigned int)(*(_DWORD *)(a2 + 8) + 1));
  v5 = v4;
  if ( v4 )
  {
    memmove(v4, (const void *)(a2 + 12), *(unsigned int *)(a2 + 8));
    v6 = sub_1406509F8(v5, a1 + 17);
    sub_1406D9550(v5);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
