/*
 * XREFs of sub_140363E50 @ 0x140363E50
 * Callers:
 *     sub_140351880 @ 0x140351880 (sub_140351880.c)
 *     sub_1403625F8 @ 0x1403625F8 (sub_1403625F8.c)
 *     sub_14036843C @ 0x14036843C (sub_14036843C.c)
 *     sub_14036EBE8 @ 0x14036EBE8 (sub_14036EBE8.c)
 *     sub_1403700FC @ 0x1403700FC (sub_1403700FC.c)
 *     sub_140370928 @ 0x140370928 (sub_140370928.c)
 *     sub_140370C40 @ 0x140370C40 (sub_140370C40.c)
 *     sub_1405F3870 @ 0x1405F3870 (sub_1405F3870.c)
 * Callees:
 *     sub_14023D6AC @ 0x14023D6AC (sub_14023D6AC.c)
 *     sub_140362B58 @ 0x140362B58 (sub_140362B58.c)
 *     sub_140366D64 @ 0x140366D64 (sub_140366D64.c)
 */

__int64 __fastcall sub_140363E50(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3, __int128 *a4)
{
  __int128 v4; // xmm0
  unsigned int v5; // ebx
  int v6; // eax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  void *v14; // rax
  _QWORD *v15; // r10
  _QWORD *v16; // r11
  __int128 v17; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a4;
  v5 = 0;
  v6 = a3 & 0x1000000;
  LODWORD(a3) = a3 & 0xFEFFFFFF;
  v17 = *a4;
  if ( (_DWORD)a3 != 0x8000 || v6 )
  {
    if ( BYTE1(v17) < 4u )
      return (unsigned int)sub_140366D64(a1, a2, a3);
  }
  else
  {
    v10 = *a1;
    v11 = v10 + *a2;
    v12 = (v10 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v13 = v11 - v12;
    *a1 = v12;
    *a2 = v13;
    if ( v13 )
    {
      v17 = v4;
      v14 = sub_140362B58(&v17);
      sub_14023D6AC((__int64)v14 + 88, v16, v15);
    }
  }
  return v5;
}
