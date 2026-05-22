/*
 * XREFs of ?WriteHitTestBuffer@CPrimitiveGroup@DirectComposition@@IEAAXPEAEI@Z @ 0x180033AAC
 * Callers:
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CPrimitiveGroup::WriteHitTestBuffer(
        DirectComposition::CPrimitiveGroup *this,
        unsigned __int8 *a2)
{
  DirectComposition::CPrimitiveGroup *i; // rax
  char *v4; // r8
  char v5; // dl
  unsigned __int8 *v6; // r10

  for ( i = (DirectComposition::CPrimitiveGroup *)*((_QWORD *)this + 35);
        ;
        i = (DirectComposition::CPrimitiveGroup *)*((_QWORD *)v4 + 3) )
  {
    v4 = (char *)i - 24;
    if ( i == (DirectComposition::CPrimitiveGroup *)((char *)this + 280) )
      v4 = 0LL;
    if ( !v4 )
      break;
    v5 = v4[176];
    v6 = a2;
    a2[16] = (v5 & 2) == 0;
    a2 += 17;
    if ( (v5 & 2) != 0 )
    {
      *(_OWORD *)v6 = *(_OWORD *)(v4 + 184);
    }
    else
    {
      *(_OWORD *)v6 = *(_OWORD *)(v4 + 136);
      *(_OWORD *)a2 = *(_OWORD *)(v4 + 72);
      *((_QWORD *)a2 + 2) = *((_QWORD *)v4 + 11);
      a2 += 24;
    }
  }
}
