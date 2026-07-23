/*
 * XREFs of sub_140252ED0 @ 0x140252ED0
 * Callers:
 *     sub_14031A5C0 @ 0x14031A5C0 (sub_14031A5C0.c)
 *     sub_14031B1C0 @ 0x14031B1C0 (sub_14031B1C0.c)
 * Callees:
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 */

unsigned __int64 __fastcall sub_140252ED0(unsigned __int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  unsigned __int64 i; // r10
  int v5; // eax
  _QWORD **v7; // rax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rcx

  v2 = 0;
  sub_1402ED128(1LL);
  i = sub_1403126F0(a1);
  while ( i )
  {
    v5 = *(_DWORD *)(i + 48);
    v3 = v5 & 0x70;
    if ( (((_DWORD)v3 - 16) & 0xFFFFFFDF) != 0
      && ((v5 & 0x200000) == 0 || (v5 & 0x800000) == 0 && (v5 & 0x180000u) < 0x100000)
      && (_DWORD)v3 != 80 )
    {
      break;
    }
    ++v2;
    a1 = ((*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) << 12) | 0xFFF;
    if ( v2 > 0x100 )
      break;
    v7 = *(_QWORD ***)(i + 8);
    v8 = i;
    if ( v7 )
    {
      v9 = *v7;
      for ( i = *(_QWORD *)(i + 8); v9; v9 = (_QWORD *)*v9 )
        i = (unsigned __int64)v9;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v8 )
          break;
        v8 = i;
      }
    }
  }
  LOBYTE(v3) = 17;
  sub_1402806E0(1LL, v3);
  return a1;
}
