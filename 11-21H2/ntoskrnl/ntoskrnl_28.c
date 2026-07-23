/*
 * XREFs of ntoskrnl_28 @ 0x1409F98E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 ntoskrnl_28()
{
  __int64 v0; // rcx
  unsigned int v1; // r10d
  unsigned int v2; // r11d

  v0 = *((_QWORD *)sub_140347DB0() + 113);
  if ( qword_140D3B4B8 )
    return (unsigned int)sub_14042A5E0(v0, v2);
  return v1;
}
