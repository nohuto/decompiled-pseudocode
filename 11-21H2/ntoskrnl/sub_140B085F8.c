/*
 * XREFs of sub_140B085F8 @ 0x140B085F8
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_1402D8F30 @ 0x1402D8F30 (sub_1402D8F30.c)
 *     sub_140760B20 @ 0x140760B20 (sub_140760B20.c)
 *     sub_140761128 @ 0x140761128 (sub_140761128.c)
 *     sub_140B0872C @ 0x140B0872C (sub_140B0872C.c)
 */

void sub_140B085F8()
{
  PVOID *i; // rbx
  unsigned __int64 v1; // rdx
  volatile signed __int32 *v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int v4; // edi
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    *((_DWORD *)i + 26) |= 0x400000u;
    v1 = (unsigned __int64)i[6];
    if ( qword_140D068F0
      && (v1 < qword_140D06AD8 && v1 >= (unsigned __int64)qword_140D068F0
       || v1 < qword_140D06AF0 && v1 >= (unsigned __int64)qword_140D06988) )
    {
      v2 = (volatile signed __int32 *)&xmmword_140C4F4F8;
    }
    else
    {
      v2 = (volatile signed __int32 *)&xmmword_140C4F4F8 + 1;
    }
    _InterlockedExchangeAdd(v2, (((_DWORD)i[8] & 0xFFF) != 0) + (*((_DWORD *)i + 16) >> 12));
    v3 = (unsigned __int64)i[6];
    v6 = 0LL;
    v5 = 0LL;
    if ( sub_140761128(i, v3) )
    {
      v4 = 0;
      do
      {
        v4 = sub_140760B20((__int64)i, v4, 1, 0LL, &v5, &v6);
        if ( v5 )
          sub_1402D8F30((__int64)i, v5, v6);
      }
      while ( v4 );
    }
    sub_140B0872C(i, 1LL);
  }
}
