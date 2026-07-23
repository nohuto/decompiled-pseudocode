/*
 * XREFs of sub_14036843C @ 0x14036843C
 * Callers:
 *     sub_140362540 @ 0x140362540 (sub_140362540.c)
 *     sub_14036808C @ 0x14036808C (sub_14036808C.c)
 * Callees:
 *     sub_140351880 @ 0x140351880 (sub_140351880.c)
 *     sub_140362864 @ 0x140362864 (sub_140362864.c)
 *     sub_140363E50 @ 0x140363E50 (sub_140363E50.c)
 *     sub_140367E68 @ 0x140367E68 (sub_140367E68.c)
 */

char __fastcall sub_14036843C(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // rax
  _WORD *v7; // r14
  unsigned __int64 v8; // r15
  unsigned int v9; // edi
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  _WORD *v13; // [rsp+88h] [rbp+38h] BYREF
  unsigned __int64 v14; // [rsp+98h] [rbp+48h] BYREF

  LODWORD(v6) = *(_DWORD *)a1;
  v3 = a2;
  v13 = 0LL;
  v14 = a2;
  v4 = (unsigned int)-(int)v6;
  LOBYTE(v6) = *(_BYTE *)(a1 + 13) & 7;
  v12 = v4;
  if ( !(_BYTE)v6 )
  {
LABEL_12:
    if ( v3 )
    {
      v11 = *(_OWORD *)(a1 + 40);
      LOBYTE(v6) = sub_140363E50(&v14, &v12, 0x8000LL, &v11);
    }
    return v6;
  }
  if ( v4 >= 0x200000 )
  {
LABEL_8:
    v11 = *(_OWORD *)(a1 + 40);
    LOBYTE(v6) = sub_140362864(v3, &v11, &v13, 0LL);
    v7 = v13;
    v8 = (unsigned __int64)&v13[v4 >> 21];
    v9 = 0;
    if ( (unsigned __int64)v13 < v8 )
    {
      do
      {
        LOWORD(v6) = *v7;
        if ( (*v7 & 0x7FF) != 0 )
          LOBYTE(v6) = sub_140351880(a1, v3, v9, 512, -(v6 & 0x7FF), 0x4000, 0);
        ++v7;
        v9 += 512;
      }
      while ( (unsigned __int64)v7 < v8 );
    }
    goto LABEL_12;
  }
  if ( a3 > 0 )
    sub_140351880(a1, a2, 0, (unsigned int)v4 >> 12, -a3, 0x4000, 0);
  v6 = sub_140367E68(a1, v3, &v12);
  v14 = v6;
  v3 = v6;
  if ( v6 )
  {
    v4 = v12;
    goto LABEL_8;
  }
  return v6;
}
