/*
 * XREFs of sub_1408634D0 @ 0x1408634D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407EED48 @ 0x1407EED48 (sub_1407EED48.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1408634D0(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v4; // r10d
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = -1073741811;
  v5 = 0x4EFD1DC7D502F7EELL - *a1;
  if ( *a1 == 0x4EFD1DC7D502F7EELL )
    v5 = 0x45055C6F4BF05DA5LL - a1[1];
  if ( !v5 && a3 == 4 && a2 )
  {
    sub_140A48330((_DWORD)a1);
    byte_140C1FB82 = *a2 != 0;
    sub_1407EED48();
    sub_140A47CF8(v7, v6);
    return 0;
  }
  return v4;
}
