/*
 * XREFs of PortPassThroughValidateNormalizedRequest @ 0x1C00A2218
 * Callers:
 *     PortPassThroughValidate @ 0x1C00A2050 (PortPassThroughValidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughValidateNormalizedRequest(unsigned __int16 *a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r11
  int v7; // eax
  unsigned __int64 v8; // rdx
  unsigned int v9; // r8d
  char v10; // dl
  __int64 result; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdx
  char v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax

  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(unsigned int *)(v4 + 16);
  v6 = *(unsigned int *)(v4 + 8);
  if ( *((_BYTE *)a1 + 6) > 0x10u )
    return 3221225485LL;
  v7 = *((unsigned __int8 *)a1 + 7);
  if ( (_BYTE)v7 )
  {
    v8 = *((unsigned int *)a1 + 8);
    v9 = v8 + v7;
    if ( (int)v8 + v7 < (unsigned int)v8 )
      return 3221225485LL;
    if ( *a1 > (unsigned int)v8 )
      return 3221225485LL;
    if ( !a3 )
    {
      if ( *((_DWORD *)a1 + 3) )
      {
        v12 = *((_QWORD *)a1 + 3);
        if ( v8 >= v12 || v9 > v12 )
          return 3221225485LL;
      }
    }
    if ( (unsigned int)v8 > (unsigned int)v6 || v9 > (unsigned int)v6 )
      return 3221225485LL;
  }
  if ( a3 )
  {
    if ( !*((_QWORD *)a1 + 3) && *((_DWORD *)a1 + 3) )
      return 3221225485LL;
  }
  else
  {
    v13 = *((_QWORD *)a1 + 3);
    if ( *a1 > v13 && *((_DWORD *)a1 + 3) )
      return 3221225485LL;
    v14 = *((_BYTE *)a1 + 8);
    if ( v14 == 1 )
      goto LABEL_33;
    v15 = *((unsigned int *)a1 + 3);
    if ( (_DWORD)v15 && (v13 > v5 || v13 + v15 > v5) )
      return 3221225485LL;
    if ( v14 )
    {
LABEL_33:
      v16 = *((unsigned int *)a1 + 3);
      if ( (_DWORD)v16 )
      {
        if ( v13 > v6 || v13 + v16 > v6 )
          return 3221225485LL;
      }
    }
  }
  if ( (unsigned int)(*((_DWORD *)a1 + 4) - 1) > 0x1A5DF )
    return 3221225485LL;
  v10 = *((_BYTE *)a1 + 36);
  if ( v10 == 24 || v10 == 57 )
    return 3221225488LL;
  result = 3221225488LL;
  if ( v10 != 58 )
    return 0LL;
  return result;
}
