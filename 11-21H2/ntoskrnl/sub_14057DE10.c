/*
 * XREFs of sub_14057DE10 @ 0x14057DE10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057E574 @ 0x14057E574 (sub_14057E574.c)
 *     sub_14057EFCC @ 0x14057EFCC (sub_14057EFCC.c)
 */

__int64 __fastcall sub_14057DE10(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  int v5; // ebx
  int v7; // r14d
  unsigned int v8; // eax
  unsigned int v9; // r15d

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  LOBYTE(v5) = 0;
  v7 = *(unsigned __int8 *)(v4 + 1);
  if ( (unsigned int)(v7 - 2) <= 1 )
  {
    v3 = *(_DWORD *)(v4 + 16);
    v5 = *(_DWORD *)(v4 + 24);
    if ( v3 == 1 )
      sub_14042A5E0(a1, a2);
  }
  sub_14042A5E0(*(_QWORD *)(a1 + 8), a2);
  v8 = sub_14042A5E0(a1, a2);
  v9 = v8;
  if ( (unsigned int)(v7 - 2) <= 1 )
  {
    if ( v3 )
    {
      if ( v3 == 1 )
        sub_14057E574(*(_QWORD *)(a1 + 8), a1, a2, v7, 1, v5, v8);
    }
    else
    {
      sub_14057EFCC(*(_QWORD *)(a1 + 8), a1, a2, v7, 0, v5, v8);
    }
  }
  return v9;
}
