/*
 * XREFs of sub_1402FDE54 @ 0x1402FDE54
 * Callers:
 *     sub_1402F9680 @ 0x1402F9680 (sub_1402F9680.c)
 *     sub_1402FB0E0 @ 0x1402FB0E0 (sub_1402FB0E0.c)
 *     sub_140384600 @ 0x140384600 (sub_140384600.c)
 *     sub_14038473C @ 0x14038473C (sub_14038473C.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     sub_1402FDEE8 @ 0x1402FDEE8 (sub_1402FDEE8.c)
 */

char __fastcall sub_1402FDE54(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        _BYTE *a5,
        _DWORD *a6,
        _BYTE *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  _BYTE *v11; // rax
  int v12; // ebx

  if ( *(_DWORD *)(a3 + 8) != 2 || *(_BYTE *)(a3 + 1) != 2 )
  {
    LOBYTE(v11) = (_BYTE)a7;
    *a7 = 1;
    if ( (*(_DWORD *)(a1 + 200) & 0x4000) == 0 )
      return (char)v11;
    LOBYTE(v11) = RtlEqualSid(*(PSID *)(a1 + 784), (PSID)a3);
    if ( !(_BYTE)v11 )
      return (char)v11;
LABEL_10:
    v12 = a4 & a2;
    goto LABEL_5;
  }
  LODWORD(v11) = *(_DWORD *)(a3 + 12);
  if ( (_DWORD)v11 == 1 )
  {
    v12 = a4 & a2;
    if ( !(unsigned __int8)sub_1402FDEE8() )
    {
      *a8 |= v12;
      v11 = a9;
      goto LABEL_6;
    }
LABEL_5:
    *a6 |= v12;
    v11 = a5;
LABEL_6:
    *v11 = 1;
    return (char)v11;
  }
  if ( (_DWORD)v11 == 2 )
    goto LABEL_10;
  return (char)v11;
}
