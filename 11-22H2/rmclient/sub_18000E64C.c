/*
 * XREFs of sub_18000E64C @ 0x18000E64C
 * Callers:
 *     sub_18000DED0 @ 0x18000DED0 (sub_18000DED0.c)
 * Callees:
 *     sub_18000E368 @ 0x18000E368 (sub_18000E368.c)
 *     sub_18000E4B8 @ 0x18000E4B8 (sub_18000E4B8.c)
 */

__int64 __fastcall sub_18000E64C(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax

  v1 = 0LL;
  if ( qword_180032908 )
  {
    v2 = sub_18000E4B8(a1);
    v3 = v2;
    if ( v2 )
    {
      v4 = sub_18000E368(v2 + 8);
      v1 = v4;
      if ( v4 )
      {
        if ( !*(_QWORD *)(v4 + 8) )
          *(_QWORD *)(v4 + 8) = v3 + 4;
      }
    }
  }
  return v1;
}
