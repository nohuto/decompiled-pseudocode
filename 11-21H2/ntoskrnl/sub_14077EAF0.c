/*
 * XREFs of sub_14077EAF0 @ 0x14077EAF0
 * Callers:
 *     sub_14077EA04 @ 0x14077EA04 (sub_14077EA04.c)
 * Callees:
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     sub_14077EBE0 @ 0x14077EBE0 (sub_14077EBE0.c)
 */

__int64 __fastcall sub_14077EAF0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbp
  unsigned int v4; // ebx
  int v8; // esi
  int v9; // edi
  unsigned int v10; // eax
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+90h] [rbp+18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v12 = 0LL;
  v15 = 0LL;
  while ( 1 )
  {
    sub_14077EBE0(a1, &v14, &v13);
    sub_14077EBE0(a2, &v15, &v12);
    v8 = (unsigned __int16)v13;
    v9 = (unsigned __int16)v12;
    if ( !(_WORD)v13 && !(_WORD)v12 )
      break;
    if ( (unsigned __int16)v13 < (unsigned __int16)v12 )
      v10 = (unsigned __int16)v13;
    else
      v10 = (unsigned __int16)v12;
    v4 = wcsnicmp(*((const wchar_t **)&v13 + 1), *((const wchar_t **)&v12 + 1), (unsigned __int64)v10 >> 1);
    if ( v4 )
      goto LABEL_10;
    v4 = v8 - v9;
    if ( v8 != v9 )
    {
      if ( !(_WORD)v8 || (_WORD)v9 )
      {
LABEL_10:
        v3 = 0LL;
        break;
      }
      break;
    }
    ++v3;
  }
  result = v4;
  if ( a3 )
    *a3 = v3;
  return result;
}
