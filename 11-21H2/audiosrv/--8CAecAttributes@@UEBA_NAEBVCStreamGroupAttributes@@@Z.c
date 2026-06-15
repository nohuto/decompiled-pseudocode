/*
 * XREFs of ??8CAecAttributes@@UEBA_NAEBVCStreamGroupAttributes@@@Z @ 0x180105260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CAecAttributes::operator==(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  int v6; // edx
  int v7; // ecx

  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a2 + 8) )
    return 0;
  v2 = *(unsigned __int16 **)(a1 + 16);
  if ( v2 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    if ( !v4 )
      return 0;
    v5 = v4 - (_QWORD)v2;
    do
    {
      v6 = *(unsigned __int16 *)((char *)v2 + v5);
      v7 = *v2 - v6;
      if ( v7 )
        break;
      ++v2;
    }
    while ( v6 );
    if ( v7 )
      return 0;
  }
  else if ( *(_QWORD *)(a2 + 16) || *(_DWORD *)(a1 + 24) != *(_DWORD *)(a2 + 24) )
  {
    return 0;
  }
  return 1;
}
