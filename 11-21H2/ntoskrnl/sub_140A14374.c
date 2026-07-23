/*
 * XREFs of sub_140A14374 @ 0x140A14374
 * Callers:
 *     sub_140A1392C @ 0x140A1392C (sub_140A1392C.c)
 *     sub_140A139FC @ 0x140A139FC (sub_140A139FC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 */

__int64 __fastcall sub_140A14374(_WORD *a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 *v4; // rdx
  __int64 *v5; // rax
  int v6; // ebx

  *a1 = 0;
  if ( a3 && a3 < 10 )
  {
    v3 = 1LL;
    v4 = &qword_14000A3B0;
    while ( *(_DWORD *)v4 != a3 )
    {
      ++v3;
      v4 += 4;
      if ( v3 >= 0xA )
        goto LABEL_8;
    }
    v5 = &qword_14000A390[4 * v3];
    if ( !v5 )
    {
LABEL_8:
      sub_1406E0C3C(1LL, (__int64)"SdbpGetSystemSdbFilePath");
      return (unsigned int)-1073741275;
    }
    if ( v5[2] )
    {
      v6 = sub_14042A5E0(a1, 260LL);
      if ( v6 >= 0 )
        return 0;
      else
        sub_1406E0C3C(1LL, (__int64)"SdbpGetSystemSdbFilePath");
    }
    else
    {
      sub_1406E0C3C(1LL, (__int64)"SdbpGetSystemSdbFilePath");
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    return (unsigned int)-1073741583;
  }
  return (unsigned int)v6;
}
