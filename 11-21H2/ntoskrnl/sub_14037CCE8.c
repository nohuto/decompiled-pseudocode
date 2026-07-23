/*
 * XREFs of sub_14037CCE8 @ 0x14037CCE8
 * Callers:
 *     sub_140236F54 @ 0x140236F54 (sub_140236F54.c)
 *     sub_140379C88 @ 0x140379C88 (sub_140379C88.c)
 *     sub_14037A04C @ 0x14037A04C (sub_14037A04C.c)
 *     sub_14037A368 @ 0x14037A368 (sub_14037A368.c)
 *     sub_14037C144 @ 0x14037C144 (sub_14037C144.c)
 *     sub_14037C880 @ 0x14037C880 (sub_14037C880.c)
 *     sub_140393C58 @ 0x140393C58 (sub_140393C58.c)
 *     sub_1405F6DBC @ 0x1405F6DBC (sub_1405F6DBC.c)
 *     sub_1405FC7D8 @ 0x1405FC7D8 (sub_1405FC7D8.c)
 * Callees:
 *     sub_140383620 @ 0x140383620 (sub_140383620.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14037CCE8(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  _DWORD *v15; // r9
  __int64 *v17; // r8

  v3 = 0;
  v5 = a2;
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    v11 = (_QWORD *)(a3 + 8);
    v7 = 0;
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  else
  {
    *(_DWORD *)(a3 + 24) = 0;
    v7 = 1;
    v8 = *a1;
    v9 = 0LL;
    if ( v8 )
      v9 = *(unsigned __int8 *)(v8 + 2);
    v10 = (_DWORD *)(a3 + 28);
    if ( *v10 < (unsigned int)v9 && !(unsigned int)sub_140383620(v9, a2, v10, a3) )
      return (unsigned int)-1073741670;
    v11 = *(_QWORD **)a3;
  }
  v12 = *a1;
  if ( !*a1 )
  {
    if ( !v7 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
    }
    return (unsigned int)-1073741275;
  }
  while ( 1 )
  {
    v13 = -1;
    v14 = (unsigned __int16)*(_DWORD *)v12;
    if ( *(_BYTE *)(v12 + 3) )
      break;
    if ( (unsigned __int16)*(_DWORD *)v12 )
    {
      do
      {
        if ( *(_DWORD *)(v12 + 16LL * ((v14 + v13) >> 1) + 16) > v5 )
          v14 = (v14 + v13) >> 1;
        else
          v13 = (v14 + v13) >> 1;
      }
      while ( v13 + 1 != v14 );
    }
    if ( v7 )
    {
      *v11 = v12;
      v11[1] = v12 + 16 * (v14 + 1LL);
      v11 += 2;
    }
    if ( v14 )
      v17 = (__int64 *)(16LL * (v14 - 1) + v12 + 24);
    else
      v17 = (__int64 *)(v12 + 8);
    v12 = *v17;
  }
  if ( (unsigned __int16)*(_DWORD *)v12 )
  {
    do
    {
      if ( *(_DWORD *)(v12 + 8LL * ((v14 + v13) >> 1) + 16) >= v5 )
        v14 = (v14 + v13) >> 1;
      else
        v13 = (v14 + v13) >> 1;
    }
    while ( v13 + 1 != v14 );
  }
  *v11 = v12;
  v15 = (_DWORD *)(v12 + 8 * (v14 + 2LL));
  v11[1] = v15;
  if ( v7 )
    *(_DWORD *)(a3 + 24) = (((__int64)v11 - *(_QWORD *)a3) >> 4) + 1;
  if ( v14 >= (unsigned __int16)*(_DWORD *)v12 || *v15 != v5 )
    return (unsigned int)-1073741275;
  return v3;
}
