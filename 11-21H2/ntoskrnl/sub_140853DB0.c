/*
 * XREFs of sub_140853DB0 @ 0x140853DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140208AD8 @ 0x140208AD8 (sub_140208AD8.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_140854148 @ 0x140854148 (sub_140854148.c)
 */

__int64 __fastcall sub_140853DB0(struct _DEVICE_OBJECT *a1, _WORD *a2)
{
  int v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( a1 && a2 )
  {
    v3 = sub_140854148(a1);
    if ( v3 >= 0 )
      v3 = sub_140208AD8(a2, (unsigned __int16 *)&v5);
  }
  else
  {
    v3 = -1073741811;
  }
  if ( *((_QWORD *)&v5 + 1) )
    sub_140346D64(*((void **)&v5 + 1), 0x6C687373u);
  return (unsigned int)v3;
}
