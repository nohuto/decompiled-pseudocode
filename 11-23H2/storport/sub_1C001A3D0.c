/*
 * XREFs of sub_1C001A3D0 @ 0x1C001A3D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1C001A3D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // eax
  int v7; // edx
  int v8; // eax
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+34h] [rbp-24h]
  int v12; // [rsp+3Ch] [rbp-1Ch]
  __int64 v13; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v2 + 3) |= 1u;
  if ( *(_DWORD *)(v3 + 352) == 5 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    if ( (v5 & 0x10) != 0 )
      *(_DWORD *)(v4 + 4) = v5 & 0xFFFFFDFF;
  }
  if ( (*(_BYTE *)(v3 + 104) & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(v3 + 568) + 184LL) & 4) != 0 )
  {
    v6 = *(_DWORD *)(v4 + 4);
    v11 = 0LL;
    v13 = 0LL;
    v10 = 1572865;
    v7 = v6 & 0x3FF | (v6 >> 7) & 0x400;
    v8 = *(_DWORD *)(v4 + 12);
    LODWORD(v11) = v7;
    v12 = v8;
    sub_1C001A4C0(a1, 9, v4, (unsigned int)&v10, 24);
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 296));
  return 0LL;
}
