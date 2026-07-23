/*
 * XREFs of sub_140AF6D7C @ 0x140AF6D7C
 * Callers:
 *     sub_14081E450 @ 0x14081E450 (sub_14081E450.c)
 * Callees:
 *     sub_1406EBCA0 @ 0x1406EBCA0 (sub_1406EBCA0.c)
 *     sub_14081E4C0 @ 0x14081E4C0 (sub_14081E4C0.c)
 *     sub_14081E66C @ 0x14081E66C (sub_14081E66C.c)
 */

__int64 sub_140AF6D7C()
{
  int v0; // ebx
  int v1; // ecx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  qword_140C4B0C8 = (__int64)&qword_140C4B0C0;
  qword_140C4B0C0 = (__int64)&qword_140C4B0C0;
  qword_140C4B0D0 = 0LL;
  if ( sub_1406EBCA0() )
  {
    LODWORD(dword_140C4B080) = 275;
    qword_140C4B0E8 = (__int64)&qword_140C4B0E0;
    qword_140C4B0E0 = (__int64)&qword_140C4B0E0;
    qword_140C4B098 = (__int64)sub_14051D870;
    qword_140C4B0A0 = 0LL;
    qword_140C4B0B8 = 0LL;
    qword_140C4B090 = 0LL;
    qword_140C4B0F0 = 0LL;
    byte_140C4B068 = 0;
    v0 = sub_14081E66C(&v3);
    if ( v0 >= 0 )
    {
      if ( v3 + 513 < v3 )
      {
        return (unsigned int)-1073741823;
      }
      else
      {
        dword_140C4B0F8 = 512;
        v1 = 1024;
        dword_140C4B0FC = 0;
        if ( v3 + 1 > 0x400 )
          v1 = v3 + 1;
        dword_140C4B06C = v1;
        sub_14081E4C0();
        byte_140C54BB0 = 1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v0;
}
