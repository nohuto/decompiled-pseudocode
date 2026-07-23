/*
 * XREFs of sub_14051D768 @ 0x14051D768
 * Callers:
 *     sub_1405091D0 @ 0x1405091D0 (sub_1405091D0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1404593D2 @ 0x1404593D2 (sub_1404593D2.c)
 *     sub_14051D24C @ 0x14051D24C (sub_14051D24C.c)
 */

__int64 __fastcall sub_14051D768(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  unsigned int v6; // edi

  if ( !byte_140C54BB0 || !(unsigned __int8)sub_14042A5E0(0LL, a1) )
    return 3221225485LL;
  v2 = sub_14051D24C(a1);
  v4 = v2;
  if ( !v2 )
    return 3221266721LL;
  if ( *(_BYTE *)(v2 + 16LL * (a1 - *(_DWORD *)(v2 + 16)) + 172) )
    v6 = sub_14042A5E0(*(_QWORD *)(v2 + 32), a1);
  else
    v6 = -1073741823;
  LOBYTE(v3) = 1;
  sub_1404593D2(v4, v3);
  return v6;
}
