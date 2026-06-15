/*
 * XREFs of ?IsPidInParentList@CProcess@@UEAA_NK@Z @ 0x180027870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CProcess::IsPidInParentList(CProcess *this, int a2)
{
  _DWORD *i; // rax

  for ( i = (_DWORD *)*((_QWORD *)this + 16); ; ++i )
  {
    if ( i == *((_DWORD **)this + 17) )
      return 0;
    if ( *i == a2 )
      break;
  }
  return 1;
}
