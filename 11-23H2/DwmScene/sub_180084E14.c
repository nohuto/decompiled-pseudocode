/*
 * XREFs of sub_180084E14 @ 0x180084E14
 * Callers:
 *     sub_18004F214 @ 0x18004F214 (sub_18004F214.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800817C4 @ 0x1800817C4 (sub_1800817C4.c)
 *     sub_180081A24 @ 0x180081A24 (sub_180081A24.c)
 *     sub_180081F38 @ 0x180081F38 (sub_180081F38.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 *     sub_180082C44 @ 0x180082C44 (sub_180082C44.c)
 *     sub_180082FEC @ 0x180082FEC (sub_180082FEC.c)
 *     sub_1800830E0 @ 0x1800830E0 (sub_1800830E0.c)
 *     sub_180083134 @ 0x180083134 (sub_180083134.c)
 *     sub_180084168 @ 0x180084168 (sub_180084168.c)
 */

__int64 __fastcall sub_180084E14(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  _QWORD *v11; // r8
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // r8
  void *v15; // r9
  Spectre::Utils::SpectreException *v18; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v19[56]; // [rsp+30h] [rbp-58h] BYREF

  sub_180082C44(*(_QWORD *)(a1 + 16));
  try
  {
    v4 = sub_180082598(*(_QWORD *)(a1 + 16), a2, 1);
    v5 = *(_QWORD *)(a1 + 16);
  }
  catch ( Spectre::Utils::SpectreException *v18 )
  {
    sub_180082B30(*(_QWORD *)(a1 + 16));
    sub_180017890((__int64)v19, (__int64)v18);
    throw (Spectre::Utils::SpectreException *)v19;
  }
  sub_180082B30(v5);
  v6 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(v6 + 1242);
  v7 = sub_180082FEC(v6, v4);
  v10 = v7;
  if ( *(_DWORD *)(v7 + 36) == 8 )
  {
    v11 = (_QWORD *)(*(_QWORD *)(v9 + 104) + 40LL * *(unsigned int *)(v7 + 40));
    if ( *(_QWORD *)(a1 + 64) == *(_QWORD *)(a1 + 72) )
    {
      sub_1800817C4((__int64 *)(a1 + 56), *(_QWORD *)(a1 + 64), (__int64)v11);
    }
    else
    {
      sub_180081F38(*(_QWORD **)(a1 + 64), v11);
      *(_QWORD *)(a1 + 64) += 40LL;
    }
  }
  else
  {
    v12 = sub_180083134(v8);
    sub_180081A24((__int64 *)(a1 + 32), v12);
    v13 = sub_1800830E0(*(_DWORD *)(v10 + 36));
    sub_180084168(v15, (__int64)v15 + 4 * v13, (void *)(*(_QWORD *)(a1 + 32) + 4 * v14));
    ++*(_DWORD *)(a1 + 80);
  }
  return v4;
}
