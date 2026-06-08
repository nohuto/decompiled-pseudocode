/*
 * XREFs of AcpiCStateIdlePrepare @ 0x1C0001190
 * Callers:
 *     PepIdlePrepare @ 0x1C000C140 (PepIdlePrepare.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiCStateIdlePrepare(__int64 *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ecx
  char v4; // dl
  __int64 v5; // rcx
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  __int64 v8; // rbp
  __int64 result; // rax
  unsigned int v10; // esi
  unsigned __int8 v11; // dl
  __int64 v12; // rcx
  unsigned __int64 v13; // r10
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 i; // rdx
  bool v17; // zf

  v1 = *a1;
  v3 = *((_DWORD *)a1 + 10);
  v4 = 0;
  if ( v3 != -1 )
  {
    v15 = *(_DWORD *)(v1 + 56);
    v10 = v15 - 1;
    if ( v3 < v15 )
      v10 = v3;
    LODWORD(v8) = 0;
    for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v1 + 20); i = (unsigned int)(i + 1) )
    {
      if ( (_DWORD)i && *(unsigned __int8 *)(i + v1 + 21) <= v10 )
        LODWORD(v8) = i;
    }
    goto LABEL_29;
  }
  if ( *((_BYTE *)a1 + 50) )
  {
    LODWORD(v8) = *(unsigned __int8 *)(v1 + 20) - 1;
    v10 = *(unsigned __int8 *)((unsigned int)v8 + v1 + 21);
LABEL_29:
    *(_DWORD *)(v1 + 12) = v10;
    *(_DWORD *)(v1 + 16) = v8;
LABEL_16:
    *(_QWORD *)(v1 + 32) = a1[1];
    result = a1[2];
    *(_QWORD *)(v1 + 24) = result;
    goto LABEL_7;
  }
  v5 = *((unsigned __int8 *)a1 + 49);
  if ( !(_BYTE)v5 || (v6 = *((unsigned __int8 *)a1 + 48), !(_BYTE)v6) )
  {
    LODWORD(v8) = *(unsigned __int8 *)(v1 + 20) - 1;
    v10 = *(_DWORD *)(v1 + 56) - 1;
    goto LABEL_29;
  }
  v7 = a1[1] - *(_QWORD *)(v1 + 32);
  LODWORD(v8) = *(_DWORD *)(v1 + 16);
  if ( v7 >= *((unsigned int *)a1 + 11) )
  {
    v13 = a1[2] - *(_QWORD *)(v1 + 24);
    if ( v13 < (unsigned int)(v7 * v5 / 0x64) && (_DWORD)v8 )
    {
      LODWORD(v8) = v8 - 1;
      v4 = 1;
    }
    else
    {
      v14 = (v7 * v6 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
      if ( v13 >= (unsigned int)((v14 + ((v7 * v6 - v14) >> 1)) >> 6)
        && (int)v8 + 1 < (unsigned int)*(unsigned __int8 *)(v1 + 20) )
      {
        LODWORD(v8) = v8 + 1;
      }
      v4 = 1;
    }
  }
  result = (unsigned int)v8;
  v10 = *(unsigned __int8 *)((unsigned int)v8 + v1 + 21);
  *(_DWORD *)(v1 + 12) = v10;
  *(_DWORD *)(v1 + 16) = v8;
  if ( v4 )
    goto LABEL_16;
LABEL_7:
  v11 = *((_BYTE *)a1 + 54);
  if ( v11 )
  {
    if ( (_DWORD)v8 )
    {
      do
      {
        result = v10;
        if ( *(_BYTE *)(88LL * v10 + v1 + 146) <= v11 )
          break;
        v17 = (_DWORD)v8 == 1;
        v8 = (unsigned int)(v8 - 1);
        v10 = *(unsigned __int8 *)(v8 + v1 + 21);
      }
      while ( !v17 );
    }
    *(_DWORD *)(v1 + 12) = v10;
    *(_DWORD *)(v1 + 16) = v8;
  }
  if ( v10 )
  {
    do
    {
      v12 = 88LL * v10;
      result = *(_QWORD *)(v12 + v1 + 80);
      if ( !result )
        break;
      result = ((__int64 (__fastcall *)(__int64))result)(v1 + v12 + 96);
      if ( (int)result >= 0 )
        break;
      v8 = (unsigned int)(v8 - 1);
      result = (unsigned int)(1 << v10);
      *((_DWORD *)a1 + 20) |= result;
      v10 = *(unsigned __int8 *)(v8 + v1 + 21);
    }
    while ( *(_BYTE *)(v8 + v1 + 21) );
  }
  *(_DWORD *)(v1 + 8) = v10;
  *((_DWORD *)a1 + 19) = v10;
  *((_DWORD *)a1 + 15) = 0;
  *((_DWORD *)a1 + 18) = -1;
  return result;
}
