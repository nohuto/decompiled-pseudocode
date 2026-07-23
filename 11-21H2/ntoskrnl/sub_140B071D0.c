/*
 * XREFs of sub_140B071D0 @ 0x140B071D0
 * Callers:
 *     sub_140B07AB0 @ 0x140B07AB0 (sub_140B07AB0.c)
 * Callees:
 *     sub_1403C3A30 @ 0x1403C3A30 (sub_1403C3A30.c)
 *     sub_140B06C7C @ 0x140B06C7C (sub_140B06C7C.c)
 *     sub_140B0728C @ 0x140B0728C (sub_140B0728C.c)
 *     sub_140B07614 @ 0x140B07614 (sub_140B07614.c)
 *     sub_140B077D4 @ 0x140B077D4 (sub_140B077D4.c)
 */

__int64 __fastcall sub_140B071D0(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // ebx
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 8) != 0 )
    dword_140D06880 |= 0x100000u;
  v6 = 0LL;
  v2 = 16;
  v3 = 8;
  while ( 1 )
  {
    result = sub_140B07614();
    if ( !(_DWORD)result )
      return result;
    result = sub_140B0728C(v2, &v6, 0xC8000000000LL);
    if ( (_DWORD)result )
      goto LABEL_8;
    if ( v3 )
    {
      --v3;
    }
    else
    {
      v3 = 8;
LABEL_8:
      if ( v2 == 1 )
      {
        if ( (_DWORD)result )
        {
LABEL_10:
          v5 = v6;
          if ( !v6 )
            v5 = 0xFFFFF78000000000uLL;
          sub_1403C3A30(a1, v5);
          sub_140B077D4();
          return sub_140B06C7C(a1);
        }
        if ( !(_DWORD)dword_140C52AB8 )
          LODWORD(dword_140C52AB8) = 5;
        return result;
      }
      v2 >>= 1;
      if ( (_DWORD)result )
        goto LABEL_10;
    }
  }
}
