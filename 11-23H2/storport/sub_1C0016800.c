/*
 * XREFs of sub_1C0016800 @ 0x1C0016800
 * Callers:
 *     sub_1C00166D4 @ 0x1C00166D4 (sub_1C00166D4.c)
 * Callees:
 *     sub_1C001D744 @ 0x1C001D744 (sub_1C001D744.c)
 *     sub_1C001DDAC @ 0x1C001DDAC (sub_1C001DDAC.c)
 *     sub_1C0022D90 @ 0x1C0022D90 (sub_1C0022D90.c)
 *     sub_1C003F5C8 @ 0x1C003F5C8 (sub_1C003F5C8.c)
 */

__int64 __fastcall sub_1C0016800(__int64 *a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 *v4; // r12
  __int64 *v5; // rsi
  int v6; // ebp
  int v7; // r14d
  unsigned int v9; // r15d
  int v11; // ecx
  int v12; // eax
  const char *v13; // rcx

  v3 = *a1;
  v4 = a1 + 15;
  v5 = (__int64 *)a1[15];
  v6 = 0;
  v7 = 0;
  v9 = 0;
  while ( v5 != v4 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x4000) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      v12 = *((_DWORD *)v5 + 18);
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          v13 = "new";
        }
        else
        {
          v13 = "matched";
          if ( v12 != 2 )
            v13 = "invalid";
        }
      }
      else
      {
        v13 = "unmatched";
      }
      sub_1C003F5C8(
        off_1C0093070->AttachedDevice,
        *((unsigned __int8 *)v5 - 11),
        *((unsigned __int8 *)v5 - 12),
        v3,
        *(v5 - 1),
        *((_BYTE *)v5 - 12),
        *((_BYTE *)v5 - 11),
        *((_BYTE *)v5 - 10),
        (__int64)v13);
    }
    v11 = *((_DWORD *)v5 + 18);
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        sub_1C001DDAC(a1, v5 - 2);
        ++v6;
        v9 = 1;
      }
    }
    else
    {
      v9 = (unsigned __int8)sub_1C0022D90(*(v5 - 1));
      ++v7;
    }
    v5 = (__int64 *)*v5;
  }
  if ( *(_BYTE *)(v3 + 4306) && (v6 || v7) && (byte_1C0093A06 & 2) != 0 )
    sub_1C001D744(*(_DWORD *)(v3 + 56), a2, a3, *(_QWORD *)(v3 + 4656), *(_DWORD *)(v3 + 56), v3 + 5000, v6, v7);
  return v9;
}
