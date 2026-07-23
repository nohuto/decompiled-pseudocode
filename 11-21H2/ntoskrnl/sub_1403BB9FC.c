/*
 * XREFs of sub_1403BB9FC @ 0x1403BB9FC
 * Callers:
 *     sub_140A55270 @ 0x140A55270 (sub_140A55270.c)
 * Callees:
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403BB9FC(__int64 a1, __int64 a2)
{
  bool v3; // si
  const char *v4; // rcx
  __int64 result; // rax
  char v6; // [rsp+38h] [rbp+10h] BYREF

  if ( byte_140C4BCBC )
  {
    v6 = 0;
    result = sub_14042A5E0(&v6, a2);
    if ( (int)result >= 0 )
    {
      byte_140D01778 = v6;
      if ( v6 )
      {
        dword_140C4BCF0 = 3;
        dword_140C4BCB8 = 1;
      }
    }
  }
  else
  {
    v3 = 0;
    if ( a1 )
    {
      v4 = *(const char **)(a1 + 216);
      if ( v4 )
        v3 = strstr(v4, "DMAGUARDPOLICY=ENABLE") != 0LL;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2648LL) & 8) != 0 || v3 )
        goto LABEL_13;
    }
    if ( byte_140C4BCD0 )
    {
LABEL_13:
      dword_140C4BCF0 = 3;
      dword_140C4BCB8 = 1;
    }
    return 0LL;
  }
  return result;
}
