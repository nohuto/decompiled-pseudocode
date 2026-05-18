/*
 * XREFs of sub_18001D194 @ 0x18001D194
 * Callers:
 *     sub_18001CE60 @ 0x18001CE60 (sub_18001CE60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001CD8C @ 0x18001CD8C (sub_18001CD8C.c)
 *     sub_18001D464 @ 0x18001D464 (sub_18001D464.c)
 *     sub_18001D4F0 @ 0x18001D4F0 (sub_18001D4F0.c)
 *     sub_18001DBA4 @ 0x18001DBA4 (sub_18001DBA4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001D194(__int64 a1, __int64 a2)
{
  unsigned int v4; // r8d
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int v7; // r8d
  __int64 v8; // rcx
  __int64 *v9; // rdi
  struct _Mtx_internal_imp_t *v11; // [rsp+20h] [rbp-58h]
  _BYTE v12[16]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-40h] BYREF

  *(_QWORD *)(a1 + 16) = a2;
  sub_18001DBA4();
  v5 = HIBYTE(v4) & 0xF;
  if ( !v5 )
    v5 = *(_DWORD *)a1;
  *(_DWORD *)a1 = v5;
  v6 = HIWORD(v4) & 0xF;
  if ( !v6 )
    v6 = *(_DWORD *)(a1 + 4);
  if ( v6 <= v5 )
    v5 = v6;
  *(_DWORD *)(a1 + 4) = v5;
  v7 = (v4 >> 8) & 0xF;
  if ( !v7 )
    v7 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 12) = 6;
  v11 = (struct _Mtx_internal_imp_t *)sub_18001D4F0();
  sub_180011C7C(v11);
  v9 = (__int64 *)sub_18001D464(v8);
  sub_180010DD0(v13, a2);
  *(_QWORD *)(*(_QWORD *)sub_18001CD8C(v9, (__int64)v12, v13) + 64LL) = a1;
  sub_180011B24((__int64)v13);
  Mtx_unlock(v11);
  return a1;
}
