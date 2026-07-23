/*
 * XREFs of sub_140A74918 @ 0x140A74918
 * Callers:
 *     sub_140A74B1C @ 0x140A74B1C (sub_140A74B1C.c)
 * Callees:
 *     sub_140565E78 @ 0x140565E78 (sub_140565E78.c)
 *     sub_140A74644 @ 0x140A74644 (sub_140A74644.c)
 *     sub_140A748B4 @ 0x140A748B4 (sub_140A748B4.c)
 */

char __fastcall sub_140A74918(unsigned int a1)
{
  char *v1; // rbx
  int v2; // ecx
  int v4; // eax
  int v5; // ecx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  ++dword_140C33EA0;
  v1 = (char *)&unk_140C33EC0 + 40 * a1;
  v2 = *((_DWORD *)v1 + 8);
  if ( (v2 & 8) == 0 )
  {
    if ( (v2 & 0x10) == 0 && (unsigned int)sub_140565E78((__int64)v1, v1 + 24) == 1 )
      return 1;
    if ( (int)sub_140A74644(
                (char *)(*(_QWORD *)v1 & ~(unsigned __int64)(unsigned __int8)v1[37]),
                (__int64)&v6,
                (unsigned __int8)v1[36],
                4) >= 0 )
    {
      v4 = sub_140A748B4((__int64)v1, &v6);
      v5 = *((_DWORD *)v1 + 8);
      if ( v4 )
      {
        *((_DWORD *)v1 + 8) = v5 ^ ((unsigned __int8)v4 ^ (unsigned __int8)v5) & 2;
        return 1;
      }
      *((_DWORD *)v1 + 8) = v5 | 2;
    }
    else
    {
      *((_DWORD *)v1 + 8) |= 2u;
    }
    return 0;
  }
  *((_DWORD *)v1 + 8) = v2 & 0xFFFFFFF7;
  return 1;
}
