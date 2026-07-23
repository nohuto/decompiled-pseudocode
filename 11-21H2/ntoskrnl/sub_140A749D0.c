/*
 * XREFs of sub_140A749D0 @ 0x140A749D0
 * Callers:
 *     sub_140A7042C @ 0x140A7042C (sub_140A7042C.c)
 *     sub_140A74CDC @ 0x140A74CDC (sub_140A74CDC.c)
 * Callees:
 *     sub_140565E78 @ 0x140565E78 (sub_140565E78.c)
 *     sub_140A74644 @ 0x140A74644 (sub_140A74644.c)
 *     sub_140A74AA0 @ 0x140A74AA0 (sub_140A74AA0.c)
 */

bool __fastcall sub_140A749D0(unsigned int a1)
{
  char *v1; // rbx
  int v2; // ecx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  ++dword_140C33EA0;
  v1 = (char *)&unk_140C33EC0 + 40 * a1;
  v2 = *((_DWORD *)v1 + 8);
  if ( (v2 & 2) != 0 )
  {
    *((_DWORD *)v1 + 8) = v2 & 0xFFFFFFFD;
    return 1;
  }
  if ( (v2 & 0x10) == 0 && (unsigned int)sub_140565E78((__int64)v1, v1 + 24) == 1 )
    return 1;
  if ( (int)sub_140A74644(
              (char *)(*(_QWORD *)v1 & ~(unsigned __int64)(unsigned __int8)v1[37]),
              (__int64)&v4,
              (unsigned __int8)v1[36],
              4) < 0 )
    goto LABEL_7;
  if ( !(unsigned int)sub_140565E78((__int64)v1, &v4) )
  {
    byte_140C40431 = 1;
LABEL_7:
    *((_DWORD *)v1 + 8) |= 8u;
    return 0;
  }
  if ( !(unsigned int)sub_140A74AA0(v1, &v4) )
  {
    *((_DWORD *)v1 + 8) |= 8u;
    return 0;
  }
  return (*((_DWORD *)v1 + 8) & 8) == 0;
}
