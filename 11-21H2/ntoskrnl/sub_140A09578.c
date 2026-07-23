/*
 * XREFs of sub_140A09578 @ 0x140A09578
 * Callers:
 *     sub_140A0A16C @ 0x140A0A16C (sub_140A0A16C.c)
 * Callees:
 *     HalWheaUpdateCmciPolicy @ 0x1403DA050 (HalWheaUpdateCmciPolicy.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 */

void sub_140A09578()
{
  unsigned int v0; // ebx
  __int64 v1; // rsi
  unsigned __int64 v2; // rdi
  unsigned int *v3; // rcx
  bool v4; // zf
  int v5; // ecx
  unsigned int v6; // edx
  BOOL v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax

  v0 = 0;
  v1 = 0LL;
  v2 = 0LL;
  do
  {
    if ( !byte_140D3B300[v1] )
      goto LABEL_38;
    if ( v2 >= 68 )
      sub_140502A3C();
    v3 = (unsigned int *)(&off_140A3A108)[v2];
    byte_140D3B300[v1] = 0;
    if ( v0 <= 8 )
    {
      switch ( v0 )
      {
        case 8u:
          v6 = *v3;
          v5 = 8;
          dword_140D04C94 |= 0x400u;
          dword_140C0C8CC = v6;
          break;
        case 0u:
          byte_140D04C99 = *v3 != 0;
          dword_140D04C94 |= 1u;
          goto LABEL_38;
        case 1u:
          byte_140CE1AD3 = *v3 != 0;
          dword_140D04C94 |= 2u;
          goto LABEL_38;
        case 2u:
          byte_140D04C98 = *v3 != 0;
          dword_140D04C94 |= 4u;
          goto LABEL_38;
        case 3u:
          v10 = *v3;
          dword_140D04C94 |= 8u;
          dword_140C0C8C0 = v10;
          goto LABEL_38;
        case 4u:
          v9 = *v3;
          dword_140D04C94 |= 0x10u;
          dword_140C0C8D0 = v9;
          goto LABEL_38;
        case 5u:
          v8 = *v3;
          dword_140D04C94 |= 0x20u;
          qword_140C0DA98 = 10000000 * v8;
          goto LABEL_38;
        case 6u:
          v7 = *v3 != 0;
          dword_140D04C94 |= 0x100u;
          dword_140C0C8A0 = v7;
          goto LABEL_38;
        default:
          v4 = *v3 == 0;
          v5 = 7;
          dword_140D04C94 |= 0x200u;
          byte_140C0C8C8 = !v4;
          v6 = !v4;
          break;
      }
      goto LABEL_37;
    }
    switch ( v0 )
    {
      case 9u:
        v6 = *v3;
        v5 = 9;
        dword_140D04C94 |= 0x800u;
        dword_140C0C8C4 = v6;
        goto LABEL_37;
      case 0xAu:
        v6 = *v3;
        v5 = 10;
        dword_140D04C94 |= 0x1000u;
        dword_140C0DAA0 = v6;
        goto LABEL_37;
      case 0xBu:
        v6 = *v3;
        v5 = 11;
        dword_140D04C94 |= 0x2000u;
        dword_140C0DA8C = v6;
        goto LABEL_37;
      case 0xCu:
        v6 = *v3;
        v5 = 12;
        dword_140D04C94 |= 0x4000u;
        dword_140C0DA90 = v6;
LABEL_37:
        HalWheaUpdateCmciPolicy(v5, v6);
        break;
      case 0xDu:
        v13 = *v3;
        dword_140D04C94 |= 0x8000u;
        dword_140C0DA94 = v13;
        break;
      case 0xEu:
        v12 = *v3;
        dword_140D04C94 |= 0x10000u;
        dword_140C0DA88 = v12;
        break;
      case 0xFu:
        v11 = *v3;
        dword_140D04C94 |= 0x20000u;
        dword_140C0DA80 = v11;
        break;
      default:
        byte_140D01199 = *v3 != 0;
        dword_140D04C94 |= 0x40000u;
        break;
    }
LABEL_38:
    ++v0;
    ++v1;
    v2 += 4LL;
  }
  while ( v0 < 0x11 );
}
