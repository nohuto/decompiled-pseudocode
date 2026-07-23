/*
 * XREFs of sub_14095F0F0 @ 0x14095F0F0
 * Callers:
 *     sub_14095ECBC @ 0x14095ECBC (sub_14095ECBC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14095F0F0(__int64 a1, void *a2, unsigned int *a3, int *a4)
{
  unsigned int v7; // ebp
  unsigned int v8; // r10d
  int v9; // edi
  __int64 v10; // rbx
  unsigned __int16 *v11; // rbx
  __int64 v12; // rbx
  _QWORD *v13; // rbx
  size_t v14; // r8

  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( a3 )
    v7 = *a3;
  if ( a4 )
    v9 = *a4;
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x1000) == 0 )
    {
      v10 = *(_QWORD *)(a1 + 8);
LABEL_8:
      if ( !v10 )
        goto LABEL_20;
      v11 = (unsigned __int16 *)(v10 + 56);
      v9 |= 1u;
      goto LABEL_15;
    }
    v12 = *(_QWORD *)(a1 + 312);
    if ( !v12 )
      goto LABEL_20;
    v13 = *(_QWORD **)(v12 + 40);
    if ( !v13 )
      goto LABEL_20;
    if ( v13 == qword_140C46278 )
    {
      v9 |= 2u;
    }
    else if ( !v13[2] )
    {
      v10 = v13[54];
      goto LABEL_8;
    }
    v11 = (unsigned __int16 *)(v13 + 5);
LABEL_15:
    if ( v11 )
    {
      if ( a2 )
      {
        v14 = *v11;
        if ( 2 * (unsigned __int64)v7 > v14 )
          memmove(a2, *((const void **)v11 + 1), v14);
      }
      v8 = *v11 >> 1;
    }
  }
LABEL_20:
  if ( a2 && v7 > v8 )
    *((_WORD *)a2 + v8) = 0;
  if ( a3 )
    *a3 = v8 + 1;
  if ( a4 )
    *a4 = v9;
  return 0LL;
}
