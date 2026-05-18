/*
 * XREFs of sub_1800CB628 @ 0x1800CB628
 * Callers:
 *     sub_1800CA060 @ 0x1800CA060 (sub_1800CA060.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800CB628(__int64 *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rax

  v3 = (__int64 *)*a1;
  v4 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( *a3 >= *((_DWORD *)v4 + 8) )
    {
      v4 = (__int64 *)v4[2];
    }
    else
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
  }
  *a2 = v3;
  return a2;
}
