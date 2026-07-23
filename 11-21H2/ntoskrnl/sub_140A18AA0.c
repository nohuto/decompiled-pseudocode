/*
 * XREFs of sub_140A18AA0 @ 0x140A18AA0
 * Callers:
 *     sub_14084192C @ 0x14084192C (sub_14084192C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140841A58 @ 0x140841A58 (sub_140841A58.c)
 *     sub_140841E14 @ 0x140841E14 (sub_140841E14.c)
 *     sub_140A14988 @ 0x140A14988 (sub_140A14988.c)
 *     sub_140A188C8 @ 0x140A188C8 (sub_140A188C8.c)
 *     sub_140A18F30 @ 0x140A18F30 (sub_140A18F30.c)
 */

__int64 __fastcall sub_140A18AA0(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  wchar_t *v8; // [rsp+30h] [rbp-138h] BYREF
  CHAR v9[256]; // [rsp+40h] [rbp-128h] BYREF

  memset(v9, 0, sizeof(v9));
  v8 = 0LL;
  v4 = sub_140841A58(a2);
  if ( v4 < 0 )
    goto LABEL_2;
  if ( *(_DWORD *)(a2 + 64) != 6 )
    goto LABEL_4;
  if ( (*(_DWORD *)(a1 + 920) & 1) != 0 || (v4 = sub_140A18F30(a1, a2), v4 >= 0) )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 912) - 12) > 3 )
    {
LABEL_4:
      *(_DWORD *)(a1 + 888) |= 2u;
      return 0;
    }
    v4 = sub_140A188C8(v9, a2);
    if ( v4 >= 0 )
    {
      v4 = sub_140A14988(&v8, v9);
      if ( v4 >= 0 )
      {
        v4 = sub_140841E14(v8);
        if ( v4 >= 0 )
        {
          *(_DWORD *)(a1 + 864) = 4;
          v6 = -1LL;
          do
            ++v6;
          while ( *(_WORD *)(v5 + 2 * v6) );
          *(_DWORD *)(a1 + 888) |= 5u;
          *(_QWORD *)(a1 + 872) = v6;
          *(_QWORD *)(a1 + 880) = v5;
          return 0;
        }
      }
    }
  }
LABEL_2:
  sub_1406E0C3C(1LL, (__int64)"AslpFileGetClrVersionAttribute");
  return (unsigned int)v4;
}
