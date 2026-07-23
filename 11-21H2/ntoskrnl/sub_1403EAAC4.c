/*
 * XREFs of sub_1403EAAC4 @ 0x1403EAAC4
 * Callers:
 *     sub_1403E8F20 @ 0x1403E8F20 (sub_1403E8F20.c)
 *     sub_1403E9268 @ 0x1403E9268 (sub_1403E9268.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

__int64 __fastcall sub_1403EAAC4(int a1, __int64 *a2)
{
  int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // r9
  _BYTE *v5; // r11
  __int64 result; // rax

  if ( !a2 )
    goto LABEL_14;
  if ( a1 == -1 )
    return 0xFFFFFFFFLL;
  v2 = *((_DWORD *)a2 + 6);
  if ( (v2 & 1) == 0 && (v2 & 0x82) != 0x80 )
    return 0xFFFFFFFFLL;
  v3 = a2[2];
  if ( !v3 )
  {
LABEL_14:
    _misaligned_access();
    return 0xFFFFFFFFLL;
  }
  v4 = *a2;
  if ( *a2 != v3 )
  {
LABEL_9:
    v5 = (_BYTE *)(v4 - 1);
    *a2 = v4 - 1;
    if ( (v2 & 0x40) != 0 )
    {
      if ( *v5 != (_BYTE)a1 )
      {
        *a2 = v4;
        return 0xFFFFFFFFLL;
      }
    }
    else
    {
      *v5 = a1;
      v2 = *((_DWORD *)a2 + 6);
    }
    ++*((_DWORD *)a2 + 2);
    result = (unsigned __int8)a1;
    *((_DWORD *)a2 + 6) = v2 & 0xFFFFFFEE | 1;
    return result;
  }
  if ( !*((_DWORD *)a2 + 2) )
  {
    ++v4;
    goto LABEL_9;
  }
  return 0xFFFFFFFFLL;
}
