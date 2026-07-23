/*
 * XREFs of KeRemoveSystemServiceTable @ 0x140960C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 */

char __fastcall KeRemoveSystemServiceTable(int a1)
{
  __int64 v3; // rcx

  if ( (unsigned int)sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23)) )
    return 1;
  if ( (unsigned int)(a1 - 1) <= 1
    && ((_QWORD)xmmword_140E018E0 || (_QWORD)xmmword_140D06FA0 || (_QWORD)xmmword_140D07120) )
  {
    if ( a1 == 1 )
    {
      *(_QWORD *)&xmmword_140D06FA0 = 0LL;
      LODWORD(xmmword_140D06FB0) = 0;
      *((_QWORD *)&xmmword_140D06FB0 + 1) = 0LL;
    }
    else
    {
      v3 = 2LL * (unsigned int)(a1 - 1);
      *(_QWORD *)&xmmword_140D07100[v3] = 0LL;
      LODWORD(xmmword_140D07100[v3 + 1]) = 0;
      *((_QWORD *)&xmmword_140D07100[v3 + 1] + 1) = 0LL;
    }
    return 1;
  }
  return 0;
}
