/*
 * XREFs of sub_1408260F8 @ 0x1408260F8
 * Callers:
 *     sub_140826000 @ 0x140826000 (sub_140826000.c)
 * Callees:
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_140826270 @ 0x140826270 (sub_140826270.c)
 */

__int64 __fastcall sub_1408260F8(int a1)
{
  int v1; // edi
  const wchar_t *v3; // rbp
  __int64 i; // rbx
  int v5; // eax
  int v6; // eax
  int v8; // [rsp+90h] [rbp+8h] BYREF
  int v9; // [rsp+98h] [rbp+10h] BYREF

  v1 = 0;
  v8 = 0;
  v9 = 0;
  if ( a1 )
  {
    if ( a1 != 2 )
      return (unsigned int)v1;
    v3 = L"SOFTWARE";
  }
  else
  {
    v3 = L"SYSTEM";
  }
  for ( i = qword_140C445B0; (__int64 *)i != &qword_140C445B0; i = *(_QWORD *)i )
  {
    v5 = *(_DWORD *)(i + 64);
    if ( (v5 & 4) == 0 )
    {
      if ( !a1 )
      {
        v1 = sub_14077DA5C(
               *(__int64 *)&qword_140D00AC0,
               *(_QWORD *)(i + 24),
               7,
               *(_QWORD *)(i + 72),
               0LL,
               (__int64)qword_140011B70,
               (__int64)&v8,
               i + 492,
               4,
               (__int64)&v9,
               0);
        if ( v1 < 0 || v8 != 7 || v9 != 4 )
        {
          *(_DWORD *)(i + 492) = 51;
          v1 = 0;
        }
        *(_DWORD *)(i + 496) = 0;
        *(_DWORD *)(i + 64) |= 0x20u;
        v5 = *(_DWORD *)(i + 64);
      }
      if ( (v5 & 0x20) != 0 )
      {
        v6 = sub_140826270(i, v3);
        v1 = v6;
        if ( v6 < 0 )
        {
          if ( *(int *)(i + 496) >= 0 )
            *(_DWORD *)(i + 496) = v6;
          v1 = 0;
        }
        if ( a1 == 2 )
        {
          sub_14077198C(
            *(__int64 *)&qword_140D00AC0,
            *(_QWORD *)(i + 24),
            7,
            *(_QWORD *)(i + 72),
            0LL,
            (__int64)qword_140011B58,
            24,
            i + 496,
            4u,
            0);
          *(_DWORD *)(i + 64) &= ~0x20u;
        }
      }
    }
  }
  return (unsigned int)v1;
}
