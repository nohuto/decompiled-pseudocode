/*
 * XREFs of sub_1800A20B0 @ 0x1800A20B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180062BE0 @ 0x180062BE0 (sub_180062BE0.c)
 *     sub_18006BFF8 @ 0x18006BFF8 (sub_18006BFF8.c)
 */

__int64 __fastcall sub_1800A20B0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v7 = *a2;
  *((_QWORD *)&v7 + 1) = v4;
  sub_180062BE0(a1, &v7);
  sub_18006BFF8(v8, a2);
  v5 = v8[0];
  *(_DWORD *)(v8[0] + 1800) = *(_DWORD *)(a1 + 1800);
  *(_DWORD *)(v5 + 1804) = *(_DWORD *)(a1 + 1804);
  *(_DWORD *)(v5 + 1808) = *(_DWORD *)(a1 + 1808);
  *(_DWORD *)(v5 + 1812) = *(_DWORD *)(a1 + 1812);
  *(_DWORD *)(v5 + 1816) = *(_DWORD *)(a1 + 1816);
  *(_DWORD *)(v5 + 1820) = *(_DWORD *)(a1 + 1820);
  *(_DWORD *)(v5 + 1824) = *(_DWORD *)(a1 + 1824);
  *(_DWORD *)(v5 + 1828) = *(_DWORD *)(a1 + 1828);
  *(_DWORD *)(v5 + 1832) = *(_DWORD *)(a1 + 1832);
  *(_DWORD *)(v5 + 1836) = *(_DWORD *)(a1 + 1836);
  *(_DWORD *)(v5 + 1840) = *(_DWORD *)(a1 + 1840);
  *(_DWORD *)(v5 + 1844) = *(_DWORD *)(a1 + 1844);
  *(_DWORD *)(v5 + 1848) = *(_DWORD *)(a1 + 1848);
  *(_DWORD *)(v5 + 1852) = *(_DWORD *)(a1 + 1852);
  *(_DWORD *)(v5 + 1856) = *(_DWORD *)(a1 + 1856);
  *(_DWORD *)(v5 + 1860) = *(_DWORD *)(a1 + 1860);
  *(_BYTE *)(v5 + 1864) = *(_BYTE *)(a1 + 1864);
  *(_DWORD *)(v5 + 1868) = *(_DWORD *)(a1 + 1868);
  *(_DWORD *)(v5 + 1872) = *(_DWORD *)(a1 + 1872);
  *(_DWORD *)(v5 + 1876) = *(_DWORD *)(a1 + 1876);
  *(_DWORD *)(v5 + 1880) = *(_DWORD *)(a1 + 1880);
  *(_DWORD *)(v5 + 1884) = *(_DWORD *)(a1 + 1884);
  *(_DWORD *)(v5 + 1888) = *(_DWORD *)(a1 + 1888);
  *(_DWORD *)(v5 + 1892) = *(_DWORD *)(a1 + 1892);
  *(_BYTE *)(v5 + 1896) = *(_BYTE *)(a1 + 1896);
  *(_BYTE *)(v5 + 1897) = *(_BYTE *)(a1 + 1897);
  *(_BYTE *)(v5 + 1898) = *(_BYTE *)(a1 + 1898);
  *(_DWORD *)(v5 + 1900) = *(_DWORD *)(a1 + 1900);
  sub_180010910((__int64)v8);
  return sub_180010910((__int64)a2);
}
