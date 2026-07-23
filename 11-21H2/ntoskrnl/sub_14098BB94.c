/*
 * XREFs of sub_14098BB94 @ 0x14098BB94
 * Callers:
 *     sub_14098C2AC @ 0x14098C2AC (sub_14098C2AC.c)
 *     sub_14098C45C @ 0x14098C45C (sub_14098C45C.c)
 * Callees:
 *     sub_1408025E8 @ 0x1408025E8 (sub_1408025E8.c)
 */

void sub_14098BB94()
{
  volatile signed __int32 *v0; // rdx
  volatile signed __int32 *i; // rax
  int v2; // eax
  volatile signed __int32 *v3; // rax

  v0 = (volatile signed __int32 *)qword_140C46278;
  for ( i = (volatile signed __int32 *)*((_QWORD *)qword_140C46278 + 1);
        i;
        i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
  {
    v0 = i;
  }
  while ( v0 != qword_140C46278 )
  {
    _InterlockedAnd(v0 + 74, 0xFFFFFEFF);
    *((_QWORD *)v0 + 92) = v0 + 182;
    *((_QWORD *)v0 + 94) = v0 + 186;
    *((_QWORD *)v0 + 93) = v0 + 186;
    v2 = *((_DWORD *)v0 + 190);
    *((_DWORD *)v0 + 191) = 0;
    *((_QWORD *)v0 + 91) = v0 + 182;
    *((_DWORD *)v0 + 190) = v2 & 0xFFF8FFFF;
    v3 = *(volatile signed __int32 **)v0;
    if ( *(_QWORD *)v0 )
    {
      do
      {
        v0 = v3;
        v3 = (volatile signed __int32 *)*((_QWORD *)v3 + 1);
      }
      while ( v3 );
    }
    else
    {
      v0 = (volatile signed __int32 *)*((_QWORD *)v0 + 2);
    }
  }
  sub_1408025E8();
}
