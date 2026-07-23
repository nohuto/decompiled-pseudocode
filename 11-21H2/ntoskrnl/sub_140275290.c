/*
 * XREFs of sub_140275290 @ 0x140275290
 * Callers:
 *     sub_140242F10 @ 0x140242F10 (sub_140242F10.c)
 *     sub_140275000 @ 0x140275000 (sub_140275000.c)
 *     sub_14035D970 @ 0x14035D970 (sub_14035D970.c)
 *     sub_1403C4AE0 @ 0x1403C4AE0 (sub_1403C4AE0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140275290(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // r10
  char v5; // al
  unsigned int v6; // eax
  __int64 v8; // rax
  _QWORD *v9; // rcx

  v3 = (_QWORD *)*a3;
  v4 = 0LL;
  if ( (_QWORD *)*a3 == a3 )
    return v4;
  v5 = *((_BYTE *)v3 + 128);
  v4 = (_QWORD *)*a3;
  switch ( v5 )
  {
    case 4:
      v6 = *(_DWORD *)(a2 + 48);
      if ( v6 > 1 || *(_DWORD *)(a2 + 152) > 1u )
      {
        if ( !*(_BYTE *)(a2 + 196) )
        {
          *(_DWORD *)(a2 + 180) = v6;
          *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 152);
        }
        *(_BYTE *)(a2 + 196) = 1;
        return 0LL;
      }
      break;
    case 2:
      *(_QWORD *)(v3[2] + 496LL) = 0LL;
      break;
    case 1:
      *(_QWORD *)(*(_QWORD *)(v3[2] + 48LL) + 112LL) = 0LL;
      break;
  }
  v8 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v9 = (_QWORD *)v3[1], (_QWORD *)*v9 != v3) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  v3[1] = 0LL;
  *v3 = 0LL;
  return v4;
}
