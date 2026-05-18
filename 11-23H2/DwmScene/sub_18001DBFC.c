/*
 * XREFs of sub_18001DBFC @ 0x18001DBFC
 * Callers:
 *     sub_18001CD8C @ 0x18001CD8C (sub_18001CD8C.c)
 *     sub_180024E9C @ 0x180024E9C (sub_180024E9C.c)
 *     sub_180024F9C @ 0x180024F9C (sub_180024F9C.c)
 *     sub_180027CE8 @ 0x180027CE8 (sub_180027CE8.c)
 *     sub_180029084 @ 0x180029084 (sub_180029084.c)
 *     sub_18002AAE4 @ 0x18002AAE4 (sub_18002AAE4.c)
 *     sub_18002E3D0 @ 0x18002E3D0 (sub_18002E3D0.c)
 *     sub_18002E4C4 @ 0x18002E4C4 (sub_18002E4C4.c)
 *     sub_18002F8F8 @ 0x18002F8F8 (sub_18002F8F8.c)
 *     sub_18002F9F0 @ 0x18002F9F0 (sub_18002F9F0.c)
 *     sub_18002FAEC @ 0x18002FAEC (sub_18002FAEC.c)
 *     sub_18002FC2C @ 0x18002FC2C (sub_18002FC2C.c)
 *     sub_18002FD24 @ 0x18002FD24 (sub_18002FD24.c)
 *     sub_18002FE3C @ 0x18002FE3C (sub_18002FE3C.c)
 *     sub_18002FF08 @ 0x18002FF08 (sub_18002FF08.c)
 *     sub_18003F260 @ 0x18003F260 (sub_18003F260.c)
 *     sub_18003F644 @ 0x18003F644 (sub_18003F644.c)
 *     sub_1800436E4 @ 0x1800436E4 (sub_1800436E4.c)
 *     sub_18004D5EC @ 0x18004D5EC (sub_18004D5EC.c)
 *     sub_18004D6B4 @ 0x18004D6B4 (sub_18004D6B4.c)
 *     sub_18004D7D8 @ 0x18004D7D8 (sub_18004D7D8.c)
 *     sub_18004DB34 @ 0x18004DB34 (sub_18004DB34.c)
 *     sub_18004DC30 @ 0x18004DC30 (sub_18004DC30.c)
 *     sub_18004DD30 @ 0x18004DD30 (sub_18004DD30.c)
 *     sub_18004DE24 @ 0x18004DE24 (sub_18004DE24.c)
 *     sub_180052654 @ 0x180052654 (sub_180052654.c)
 *     sub_180054270 @ 0x180054270 (sub_180054270.c)
 *     sub_180056FB8 @ 0x180056FB8 (sub_180056FB8.c)
 *     sub_180058DE4 @ 0x180058DE4 (sub_180058DE4.c)
 *     sub_18005EFFC @ 0x18005EFFC (sub_18005EFFC.c)
 *     sub_18005F370 @ 0x18005F370 (sub_18005F370.c)
 *     sub_18005F46C @ 0x18005F46C (sub_18005F46C.c)
 *     sub_180062BB4 @ 0x180062BB4 (sub_180062BB4.c)
 *     sub_180062F40 @ 0x180062F40 (sub_180062F40.c)
 *     sub_18007BE40 @ 0x18007BE40 (sub_18007BE40.c)
 *     sub_180084204 @ 0x180084204 (sub_180084204.c)
 *     sub_1800A06AC @ 0x1800A06AC (sub_1800A06AC.c)
 *     sub_1800A23F4 @ 0x1800A23F4 (sub_1800A23F4.c)
 *     sub_1800A2510 @ 0x1800A2510 (sub_1800A2510.c)
 *     sub_1800C891C @ 0x1800C891C (sub_1800C891C.c)
 *     sub_1800C8A10 @ 0x1800C8A10 (sub_1800C8A10.c)
 *     sub_1800D8AEC @ 0x1800D8AEC (sub_1800D8AEC.c)
 *     sub_1800DABC8 @ 0x1800DABC8 (sub_1800DABC8.c)
 *     sub_1800DD92C @ 0x1800DD92C (sub_1800DD92C.c)
 *     sub_1800DDA48 @ 0x1800DDA48 (sub_1800DDA48.c)
 *     sub_1800DDC64 @ 0x1800DDC64 (sub_1800DDC64.c)
 *     sub_1800DFD10 @ 0x1800DFD10 (sub_1800DFD10.c)
 * Callees:
 *     sub_18001DD34 @ 0x18001DD34 (sub_18001DD34.c)
 *     sub_18001DDA8 @ 0x18001DDA8 (sub_18001DDA8.c)
 */

__int64 __fastcall sub_18001DBFC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r11
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 i; // r10
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rcx

  ++*(_QWORD *)(a1 + 8);
  v3 = a3;
  v4 = *(_QWORD **)a1;
  v6 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v6 != v4 )
  {
    if ( *(_DWORD *)(a2 + 8) )
    {
      *v6 = a3;
      if ( v6 == (_QWORD *)*v4 )
        *v4 = a3;
    }
    else
    {
      v6[2] = a3;
      if ( v6 == (_QWORD *)v4[2] )
        v4[2] = a3;
    }
    v7 = *(_QWORD *)(a3 + 8);
    for ( i = a3; ; v7 = *(_QWORD *)(i + 8) )
    {
      if ( *(_BYTE *)(v7 + 24) )
      {
        *(_BYTE *)(v4[1] + 24LL) = 1;
        return v3;
      }
      v9 = *(_QWORD *)(i + 8);
      v10 = *(__int64 **)(v9 + 8);
      v11 = *v10;
      if ( v9 == *v10 )
      {
        v11 = v10[2];
        if ( !*(_BYTE *)(v11 + 24) )
          goto LABEL_15;
        if ( i == *(_QWORD *)(v9 + 16) )
          sub_18001DD34(a1, *(_QWORD *)(i + 8));
        *(_BYTE *)(*(_QWORD *)(i + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
        sub_18001DDA8(a1, *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL));
      }
      else
      {
        if ( !*(_BYTE *)(v11 + 24) )
        {
LABEL_15:
          *(_BYTE *)(v9 + 24) = 1;
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
          i = *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL);
          continue;
        }
        if ( i == *(_QWORD *)v9 )
          sub_18001DDA8(a1, *(_QWORD *)(i + 8));
        *(_BYTE *)(*(_QWORD *)(i + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
        sub_18001DD34(a1, *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL));
      }
    }
  }
  *v4 = a3;
  v4[1] = a3;
  v4[2] = a3;
  *(_BYTE *)(a3 + 24) = 1;
  return v3;
}
