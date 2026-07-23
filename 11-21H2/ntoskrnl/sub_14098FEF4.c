/*
 * XREFs of sub_14098FEF4 @ 0x14098FEF4
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14098FDE4 @ 0x14098FDE4 (sub_14098FDE4.c)
 *     sub_14098FFD0 @ 0x14098FFD0 (sub_14098FFD0.c)
 */

__int64 __fastcall sub_14098FEF4(char a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rdx

  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    sub_1402D66A8((ULONG_PTR)&qword_140C235E0);
    if ( HIDWORD(qword_140C235F0) == 1 )
    {
      v2 = -1072103422;
    }
    else if ( a1 == (_BYTE)qword_140C235F0 )
    {
      v2 = -1073741101;
    }
    else
    {
      qword_140C235F8 = (__int64)KeGetCurrentThread();
      HIDWORD(qword_140C235F0) = 1;
      sub_1402935D0((ULONG_PTR)&qword_140C235E0);
      if ( a1 )
      {
        LOBYTE(v4) = a1;
        sub_14098FDE4(v4, v3);
        LOBYTE(v5) = a1;
        v6 = sub_14098FFD0(v5);
      }
      else
      {
        sub_14098FFD0(0LL);
        v6 = sub_14098FDE4(0LL, v7);
      }
      v2 = v6;
      sub_1402D66A8((ULONG_PTR)&qword_140C235E0);
      HIDWORD(qword_140C235F0) = 0;
      LOBYTE(qword_140C235F0) = a1;
    }
    sub_1402935D0((ULONG_PTR)&qword_140C235E0);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v2;
}
