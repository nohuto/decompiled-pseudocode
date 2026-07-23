/*
 * XREFs of sub_140287B04 @ 0x140287B04
 * Callers:
 *     sub_14022C984 @ 0x14022C984 (sub_14022C984.c)
 *     sub_14023F8E8 @ 0x14023F8E8 (sub_14023F8E8.c)
 *     sub_14023FA50 @ 0x14023FA50 (sub_14023FA50.c)
 *     sub_140270274 @ 0x140270274 (sub_140270274.c)
 *     sub_140286AB0 @ 0x140286AB0 (sub_140286AB0.c)
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     sub_140287A8C @ 0x140287A8C (sub_140287A8C.c)
 *     sub_140287F58 @ 0x140287F58 (sub_140287F58.c)
 *     sub_14059DF58 @ 0x14059DF58 (sub_14059DF58.c)
 *     sub_14059F23C @ 0x14059F23C (sub_14059F23C.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_140287B04(__int64 a1, int a2)
{
  _QWORD *v2; // r10
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v6; // r8

  v2 = (_QWORD *)(a1 + 80);
  v3 = 0LL;
  v4 = *(__int64 **)(a1 + 80);
  if ( v4 )
  {
    do
    {
      v6 = (__int64 *)*v4;
      if ( (a2 & (_DWORD)v4[1]) != 0 )
      {
        if ( (a2 & 4) != 0 )
        {
          *((_DWORD *)v4 + 3) = 1;
        }
        else
        {
          *v4 = (__int64)v3;
          v3 = v4;
          *v2 = v6;
        }
      }
      else
      {
        v2 = v4;
      }
      v4 = v6;
    }
    while ( v6 );
  }
  return v3;
}
