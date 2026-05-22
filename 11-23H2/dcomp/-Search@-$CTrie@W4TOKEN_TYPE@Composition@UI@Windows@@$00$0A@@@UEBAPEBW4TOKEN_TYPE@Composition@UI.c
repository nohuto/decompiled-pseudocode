/*
 * XREFs of ?Search@?$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@UEBAPEBW4TOKEN_TYPE@Composition@UI@Windows@@PEBGPEAHH@Z @ 0x180074AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTrie<enum Windows::UI::Composition::TOKEN_TYPE,1,0>::Search(
        __int64 a1,
        unsigned __int16 *a2,
        _DWORD *a3,
        int a4)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int16 v9; // ax
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 *v12; // r12
  __int64 *v13; // rbp
  __int64 *v14; // rbx
  unsigned __int16 v15; // ax
  __int64 result; // rax

  v4 = 0LL;
  v5 = a4;
  if ( a3 )
    *a3 = 0;
  v9 = _o_towlower(*a2, a2);
  if ( v9 < *(_WORD *)(a1 + 48) || *(_WORD *)(a1 + 50) < v9 )
    return 0LL;
  if ( (_DWORD)v5 )
  {
    v11 = v5;
  }
  else
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a2[v11] );
  }
  v12 = (__int64 *)(a1 + 8);
  v13 = (__int64 *)(a1 + 8);
  if ( !v11 )
    goto LABEL_16;
  while ( 1 )
  {
    v14 = (__int64 *)v13[2];
    v15 = _o_towlower(a2[v4], v10);
    if ( *((_WORD *)v13 + 17) < v15 )
      goto LABEL_16;
    if ( !v14 )
      goto LABEL_25;
    while ( *((_WORD *)v14 + 16) < v15 )
    {
      v14 = (__int64 *)v14[1];
      if ( !v14 )
        goto LABEL_25;
    }
    if ( *((_WORD *)v14 + 16) > v15 )
    {
LABEL_25:
      if ( v4 )
      {
LABEL_16:
        LODWORD(v4) = v4 - 1;
        v14 = v13;
        break;
      }
      return 0LL;
    }
    v13 = v14;
    if ( !v14[2] || v4 == v11 - 1 )
      break;
    if ( ++v4 >= v11 )
      goto LABEL_16;
  }
  while ( 1 )
  {
    result = v14[3];
    if ( result )
      break;
    v14 = (__int64 *)*v14;
    LODWORD(v4) = v4 - 1;
    if ( v14 == v12 )
      return 0LL;
  }
  if ( a3 )
    *a3 = v4 + 1;
  return result;
}
