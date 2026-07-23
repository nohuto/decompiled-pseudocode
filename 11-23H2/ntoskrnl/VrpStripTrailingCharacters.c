/*
 * XREFs of VrpStripTrailingCharacters @ 0x14068E650
 * Callers:
 *     VrpTranslatePath @ 0x14068D49C (VrpTranslatePath.c)
 *     VrpPreLoadKey @ 0x14077A634 (VrpPreLoadKey.c)
 *     VrpCreateNamespaceNode @ 0x14077BA08 (VrpCreateNamespaceNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VrpStripTrailingCharacters(unsigned __int16 *a1)
{
  unsigned __int16 v1; // dx
  __int64 result; // rax
  __int64 v3; // r8
  _WORD *v4; // r9

  v1 = *a1;
  result = *a1 >> 1;
  if ( (_DWORD)result )
  {
    v3 = (unsigned int)result - 1LL;
    v4 = (_WORD *)(*((_QWORD *)a1 + 1) + 2 * v3);
    result = 2LL;
    do
    {
      if ( *v4 != 92 )
        break;
      v1 -= 2;
      --v4;
      --v3;
      *a1 = v1;
    }
    while ( v3 >= 0 );
  }
  return result;
}
