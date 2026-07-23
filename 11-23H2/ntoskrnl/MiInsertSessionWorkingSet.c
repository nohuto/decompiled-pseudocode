/*
 * XREFs of MiInsertSessionWorkingSet @ 0x14036E56C
 * Callers:
 *     MiAllowWorkingSetExpansion @ 0x1402232B8 (MiAllowWorkingSetExpansion.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140288350 (RtlAvlInsertNodeEx.c)
 */

char __fastcall MiInsertSessionWorkingSet(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rax
  _QWORD *v4; // rdx
  bool v5; // al
  unsigned int v6; // r8d
  _QWORD *v7; // rcx

  v1 = (_QWORD *)qword_140C69908;
  v2 = (_QWORD *)(a1 + 120);
  if ( *(__int64 **)qword_140C69908 != &qword_140C69900 )
    __fastfail(3u);
  *v2 = &qword_140C69900;
  *(_QWORD *)(a1 + 128) = v1;
  *v1 = v2;
  v4 = (_QWORD *)qword_140C659F0;
  qword_140C69908 = a1 + 120;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 8);
  if ( qword_140C659F0 )
  {
    while ( 1 )
    {
      if ( v6 < *((_DWORD *)v4 - 32) )
      {
        v7 = (_QWORD *)*v4;
        if ( !*v4 )
          return RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C659F0, (unsigned __int64)v4, v5, a1 + 136);
      }
      else
      {
        v7 = (_QWORD *)v4[1];
        if ( !v7 )
        {
          v5 = 1;
          return RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C659F0, (unsigned __int64)v4, v5, a1 + 136);
        }
      }
      v4 = v7;
    }
  }
  return RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C659F0, (unsigned __int64)v4, v5, a1 + 136);
}
