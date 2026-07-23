/*
 * XREFs of sub_14095319C @ 0x14095319C
 * Callers:
 *     sub_140A67C74 @ 0x140A67C74 (sub_140A67C74.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_14095319C()
{
  _DWORD *v0; // rdi
  int v1; // ecx
  int v2; // r8d
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // ecx
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[0] = 0LL;
  v0 = (_DWORD *)(qword_140C448A8 + 72);
  v11[1] = *(_QWORD *)(qword_140C448A8 + 16);
  v11[2] = *(_QWORD *)(qword_140C448A8 + 48);
  v1 = 0;
  if ( (*(_DWORD *)(qword_140C448A8 + 33184) & 2) != 0 )
  {
    v1 = 1;
    LODWORD(v11[0]) = 1;
  }
  if ( (*(_DWORD *)(qword_140C448A8 + 64) & 0x20) != 0 )
    LODWORD(v11[0]) = v1 | 2;
  v2 = sub_14042A5E0(v11, qword_140C448A8 + 33160);
  if ( v2 >= 0 )
  {
    v6 = (_QWORD *)qword_140C448A8;
    if ( *(_DWORD *)(*(_QWORD *)(qword_140C448A8 + 24) + 4LL) )
    {
      memset(v0, 0, 0x40uLL);
      *v0 = 64;
      v0[1] = 2;
      *((_QWORD *)v0 + 1) = v6[1];
      *((_QWORD *)v0 + 2) = v6[5];
      *((_QWORD *)v0 + 3) = v6[2];
      *((_QWORD *)v0 + 4) = v6[6];
      *((_QWORD *)v0 + 5) = v6[3];
      *((_QWORD *)v0 + 6) = v6[7];
      *((_QWORD *)v0 + 7) = sub_140A68220;
      v2 = sub_14042A5E0(v0, v6 + 4146);
      if ( v2 < 0 )
      {
        v7 = qword_140C448A8;
        v8 = *(_DWORD *)(qword_140C448A8 + 33272);
        if ( !v8 )
          v8 = 2762;
        *(_DWORD *)(qword_140C448A8 + 33272) = v8;
        v9 = *(_DWORD *)(v7 + 33276);
        if ( !v9 )
          v9 = 8;
        *(_DWORD *)(v7 + 33276) = v9;
      }
    }
  }
  else
  {
    v3 = qword_140C448A8;
    v4 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v4 )
      v4 = 2736;
    *(_DWORD *)(qword_140C448A8 + 33272) = v4;
    v5 = *(_DWORD *)(v3 + 33276);
    if ( !v5 )
      v5 = 6;
    *(_DWORD *)(v3 + 33276) = v5;
  }
  return (unsigned int)v2;
}
