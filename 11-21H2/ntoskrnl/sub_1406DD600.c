/*
 * XREFs of sub_1406DD600 @ 0x1406DD600
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 */

__int64 __fastcall sub_1406DD600(__int64 a1, __int64 a2)
{
  int v2; // ebx
  char v3; // cl

  v2 = *(_DWORD *)(a2 + 48);
  if ( v2 >= 0 )
  {
    v3 = **(_BYTE **)(a2 + 184);
    switch ( v3 )
    {
      case 0:
      case 2:
        goto LABEL_6;
      case 14:
        v2 = -1073741637;
        break;
      case 18:
LABEL_6:
        v2 = 0;
        break;
    }
  }
  *(_DWORD *)(a2 + 48) = v2;
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v2;
}
