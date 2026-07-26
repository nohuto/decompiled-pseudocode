/*
 * XREFs of PrivateULongMult @ 0x1C00CC130
 * Callers:
 *     Duplicate802_11AttachAttributesCommon @ 0x1C00CB660 (Duplicate802_11AttachAttributesCommon.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PrivateULongMult(unsigned int a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int64 v3; // r9

  v3 = a2 * (unsigned __int64)a1;
  if ( v3 > 0xFFFFFFFF )
  {
    *a3 = -1;
    return 3221291029LL;
  }
  else
  {
    *a3 = v3;
    return 0LL;
  }
}
