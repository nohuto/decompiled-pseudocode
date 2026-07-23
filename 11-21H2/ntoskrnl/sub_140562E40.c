/*
 * XREFs of sub_140562E40 @ 0x140562E40
 * Callers:
 *     sub_140562A80 @ 0x140562A80 (sub_140562A80.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140562E40(unsigned __int64 a1)
{
  int v1; // r9d
  __int64 v2; // r8
  unsigned int v3; // r10d
  _QWORD *i; // r8
  unsigned __int64 v5; // rdx

  v1 = 0;
  v2 = *(_QWORD *)(qword_140C448A8 + 24);
  v3 = *(_DWORD *)(v2 + 4);
  if ( !v3 )
    return 3221226021LL;
  for ( i = (_QWORD *)(v2 + 24); ; i += 2 )
  {
    v5 = *(i - 1);
    if ( a1 >= v5 && a1 <= *i + v5 - 1 )
      break;
    if ( ++v1 >= v3 )
      return 3221226021LL;
  }
  return sub_14042A5E0(*(_QWORD *)(qword_140C448A8 + 33168), a1);
}
