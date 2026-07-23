/*
 * XREFs of sub_14082EC0C @ 0x14082EC0C
 * Callers:
 *     sub_14082E998 @ 0x14082E998 (sub_14082E998.c)
 *     sub_14082EA28 @ 0x14082EA28 (sub_14082EA28.c)
 *     NetpGetPrivilege @ 0x14093FF38 (NetpGetPrivilege.c)
 *     sub_140940290 @ 0x140940290 (sub_140940290.c)
 *     sub_140B0F20C @ 0x140B0F20C (sub_140B0F20C.c)
 *     sub_140B10490 @ 0x140B10490 (sub_140B10490.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 */

__int64 __fastcall sub_14082EC0C(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  void *v7; // rcx
  void *v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  if ( a3 )
  {
    v5 = sub_14078014C(*(__int64 *)&qword_140D00AC0, 15, (__int64)&v10);
    if ( v5 < 0
      || (!*(_QWORD *)&qword_140D00AC0 ? (v6 = 0LL) : (v6 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL)),
          v5 = sub_14077FFEC(v6, v10, (__int64)L"Current", 0, a2, (__int64)&v9),
          v5 < 0) )
    {
      v7 = v9;
    }
    else
    {
      v7 = 0LL;
      *a3 = v9;
      v9 = 0LL;
    }
    if ( v7 )
      ZwClose(v7);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
