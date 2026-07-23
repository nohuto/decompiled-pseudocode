/*
 * XREFs of sub_140594ABC @ 0x140594ABC
 * Callers:
 *     sub_1402AD610 @ 0x1402AD610 (sub_1402AD610.c)
 * Callees:
 *     sub_1402464E0 @ 0x1402464E0 (sub_1402464E0.c)
 *     sub_14030FBE0 @ 0x14030FBE0 (sub_14030FBE0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033FD38 @ 0x14033FD38 (sub_14033FD38.c)
 *     sub_1405943E4 @ 0x1405943E4 (sub_1405943E4.c)
 */

__int64 __fastcall sub_140594ABC(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 result; // rax

  v6 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) + 4096;
  if ( (*(_DWORD *)(a2 + 48) & 0x200000) != 0 )
  {
    if ( (((*(_DWORD *)(a2 + 48) & 0x70) - 16) & 0xFFFFFFDF) != 0 && !sub_14030FBE0(a2) )
    {
      v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v9 > (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
        v9 = ((((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      while ( v8 < v9 )
      {
        v10 = sub_140317A10(v8);
        v8 += 8LL;
        if ( v10 )
        {
          if ( (v10 & 1) != 0 )
            goto LABEL_13;
          if ( (v10 & 0x400) != 0 )
            break;
          if ( (v10 & 0x800) != 0 )
          {
LABEL_13:
            sub_1402464E0(a1, a3, a2);
          }
          else if ( sub_14033FD38(v10) )
          {
            break;
          }
        }
        a3 += 4096LL;
      }
      v6 = (__int64)(v8 << 25) >> 16;
    }
  }
  else
  {
    result = *(unsigned int *)(a2 + 64);
    if ( (result & 0x1000000) == 0 )
      return result;
  }
  result = sub_1405943E4((_QWORD *)a1, v6);
  *(_BYTE *)(a1 + 1) = 1;
  return result;
}
