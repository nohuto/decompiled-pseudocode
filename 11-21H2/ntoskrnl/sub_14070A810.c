/*
 * XREFs of sub_14070A810 @ 0x14070A810
 * Callers:
 *     sub_14070A4FC @ 0x14070A4FC (sub_14070A4FC.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14070A810(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // esi
  __int64 v3; // rbp
  char v5; // r15
  unsigned __int64 v6; // r14
  int v7; // ecx
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-38h]

  v1 = *(_DWORD *)(a1 + 2512);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 1680);
  v18 = 0LL;
  v5 = 0;
  v17 = 1LL;
  v6 = 2LL;
  if ( (v1 & 0x40) != 0 )
    goto LABEL_19;
  v7 = sub_140363220(1);
  v8 = (unsigned __int8)v7;
  if ( !(_DWORD)dword_140C4E560 )
    *(_DWORD *)(a1 + 2512) |= 0x20u;
  if ( *(_QWORD *)(a1 + 1496) > 0x100000000uLL && (*(_DWORD *)(a1 + 2512) & 0x20) != 0 )
  {
    v9 = *(_QWORD *)&v7 & 0xFFFFFFLL;
    v8 = 0x10000LL;
    v5 = 1;
    if ( v9 > 0x10000 )
      v8 = v9;
  }
  if ( !v8 )
    v8 = 1LL;
  v17 = v8;
  if ( !v5 )
  {
LABEL_19:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2512), 0xFFFFFFDF);
    v10 = v17;
  }
  else
  {
    v10 = v8 + (sub_140363220(1) & 0xFFFFFF) + 0x1000000;
  }
  v16 = v10;
  if ( *(_QWORD *)(a1 + 1496) <= 0x100000000uLL )
  {
    v6 = 3LL;
    v18 = (sub_140363220(1) & 0xFFFFFF) + 0x10000;
  }
  *(_QWORD *)(v3 + 264) = v6;
  v11 = 0LL;
  do
  {
    v12 = 9 * v11;
    v13 = *(_QWORD *)(a1 + 1496) - 1LL;
    if ( v2 == 2 )
      v13 = 0x7FFFFFFEFFFFLL;
    ++v2;
    *(_QWORD *)(v3 + 72 * v11 + 88) = v13 >> 16;
    v14 = *(&v16 + v11);
    *(_QWORD *)(v3 + 72 * v11 + 112) = v14;
    result = v14 << 16;
    v11 = v2;
    *(_QWORD *)(v3 + 8 * v12 + 104) = result;
  }
  while ( v2 < v6 );
  return result;
}
