/*
 * XREFs of sub_140294EBC @ 0x140294EBC
 * Callers:
 *     sub_140294DD8 @ 0x140294DD8 (sub_140294DD8.c)
 *     RtlCopyContext @ 0x140702F70 (RtlCopyContext.c)
 * Callees:
 *     sub_140242C44 @ 0x140242C44 (sub_140242C44.c)
 *     sub_140294EF0 @ 0x140294EF0 (sub_140294EF0.c)
 *     sub_1405E7C9C @ 0x1405E7C9C (sub_1405E7C9C.c)
 *     sub_1405E7DFC @ 0x1405E7DFC (sub_1405E7DFC.c)
 */

void __fastcall sub_140294EBC(char a1, __int64 a2, int a3, __int64 a4)
{
  if ( (a3 & 0x10000) != 0 )
  {
    sub_140242C44(a1, a2, a3, a4);
  }
  else if ( (a3 & 0x100000) != 0 )
  {
    sub_140294EF0();
  }
  else if ( (a3 & 0x200000) != 0 )
  {
    sub_1405E7C9C();
  }
  else if ( (a3 & 0x400000) != 0 )
  {
    sub_1405E7DFC();
  }
}
