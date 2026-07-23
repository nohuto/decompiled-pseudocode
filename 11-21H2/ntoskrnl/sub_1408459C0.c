/*
 * XREFs of sub_1408459C0 @ 0x1408459C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403CD2B8 @ 0x1403CD2B8 (sub_1403CD2B8.c)
 *     sub_1403CD2D0 @ 0x1403CD2D0 (sub_1403CD2D0.c)
 *     sub_140846E20 @ 0x140846E20 (sub_140846E20.c)
 *     sub_140908DD4 @ 0x140908DD4 (sub_140908DD4.c)
 */

__int64 __fastcall sub_1408459C0(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  void *Src; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h]

  Src = 0LL;
  v8 = 0LL;
  *a3 = 0LL;
  v5 = sub_1403CD2D0(a1, &Src);
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      v5 = -1073741584;
    }
    else
    {
      v5 = sub_140846E20(Src);
      if ( v5 >= 0 )
      {
        *a3 = v8;
        return (unsigned int)v5;
      }
      if ( v8 )
        sub_140908DD4(v8);
    }
  }
  if ( Src )
    sub_1403CD2B8((__int64)Src);
  return (unsigned int)v5;
}
