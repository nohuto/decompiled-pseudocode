/*
 * XREFs of sub_140953048 @ 0x140953048
 * Callers:
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 * Callees:
 *     sub_140952F10 @ 0x140952F10 (sub_140952F10.c)
 *     sub_140953154 @ 0x140953154 (sub_140953154.c)
 */

__int64 __fastcall sub_140953048(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  unsigned int v3; // esi
  _QWORD *v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  int v13; // eax

  v2 = 0;
  v3 = 0;
  if ( *(_DWORD *)(a1 + 4) )
  {
    while ( 1 )
    {
      v2 = sub_140952F10(a2, *(_QWORD *)(a1 + 16LL * v3 + 16), *(_QWORD *)(a1 + 16LL * v3 + 24));
      if ( v2 < 0 )
        break;
      if ( ++v3 >= *(_DWORD *)(a1 + 4) )
        goto LABEL_4;
    }
    v8 = qword_140C448A8;
    v9 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v9 )
      v9 = 4502;
    *(_DWORD *)(qword_140C448A8 + 33272) = v9;
    v10 = *(_DWORD *)(v8 + 33276);
    if ( !v10 )
      v10 = 1;
LABEL_19:
    *(_DWORD *)(v8 + 33276) = v10;
    sub_140953154(a2);
  }
  else
  {
LABEL_4:
    v6 = (_QWORD *)*a2;
    v7 = 0LL;
    while ( v6 != a2 )
    {
      v11 = v6[3];
      if ( !v11 || (v12 = v6[2], v12 < v7) )
      {
        v8 = qword_140C448A8;
        v2 = -1073741811;
        v13 = *(_DWORD *)(qword_140C448A8 + 33272);
        if ( !v13 )
          v13 = 4523;
        *(_DWORD *)(qword_140C448A8 + 33272) = v13;
        v10 = *(_DWORD *)(v8 + 33276);
        if ( !v10 )
          v10 = 6;
        goto LABEL_19;
      }
      v6 = (_QWORD *)*v6;
      v7 = v12 + v11;
    }
  }
  return (unsigned int)v2;
}
