/*
 * XREFs of sub_140AD4E50 @ 0x140AD4E50
 * Callers:
 *     sub_140AD4DC4 @ 0x140AD4DC4 (sub_140AD4DC4.c)
 * Callees:
 *     sub_140AD4F4C @ 0x140AD4F4C (sub_140AD4F4C.c)
 */

void __fastcall sub_140AD4E50(__int64 a1)
{
  __int64 v1; // r9
  int v2; // ecx
  int v3; // r10d
  int v4; // eax
  int v5; // r10d
  unsigned __int16 v6; // dx
  int v7; // eax
  __int64 v8; // r9

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12) - 1;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
LABEL_3:
      __debugbreak();
      return;
    }
    v3 = *(_DWORD *)(v1 + 28);
    if ( *(_DWORD *)(v1 + 24) )
    {
      v4 = sub_140AD4F4C(*(unsigned __int16 *)(v1 + 20), *(unsigned __int16 *)(v1 + 22));
      v3 = v4 & *(_DWORD *)(v1 + 24) | ~*(_DWORD *)(v1 + 24) & v5;
    }
    v6 = *(_WORD *)(v1 + 20);
    switch ( *(_WORD *)(v1 + 22) )
    {
      case 1:
        __outbyte(v6, v3);
        break;
      case 2:
        __outword(v6, v3);
        break;
      case 4:
        __outdword(v6, v3);
        break;
      default:
        goto LABEL_3;
    }
  }
  else
  {
    v7 = sub_140AD4F4C(*(unsigned __int16 *)(v1 + 20), *(unsigned __int16 *)(v1 + 22));
    *(_DWORD *)(v8 + 24) = v7;
  }
}
