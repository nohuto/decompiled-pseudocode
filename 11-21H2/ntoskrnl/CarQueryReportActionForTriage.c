/*
 * XREFs of CarQueryReportActionForTriage @ 0x140603BD0
 * Callers:
 *     CarQueryReportAction @ 0x140603BA0 (CarQueryReportAction.c)
 *     CarReportRuleViolationForTriage @ 0x140604030 (CarReportRuleViolationForTriage.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 * Callees:
 *     sub_14060392C @ 0x14060392C (sub_14060392C.c)
 *     sub_140603B80 @ 0x140603B80 (sub_140603B80.c)
 */

__int64 __fastcall CarQueryReportActionForTriage(int a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v4; // r9d
  __int64 v5; // rbx
  __int64 *i; // rax
  __int64 *v7; // r8
  __int64 v9; // r8
  int v10; // r11d
  _QWORD *v11; // rax
  _DWORD *v12; // r10

  if ( a3 )
  {
    if ( dword_140C1A8C4 )
    {
      v5 = dword_140C18FD8;
      *(_QWORD *)a3 = qword_140041D30[dword_140C18FD8];
      for ( i = (__int64 *)qword_140C1A8E0; ; i = (__int64 *)*i )
      {
        if ( i == &qword_140C1A8E0 )
          return (unsigned int)-1073741275;
        v7 = i - 11;
        if ( *((_DWORD *)i - 6) < a2 && *((_DWORD *)v7 + 17) >= a2 && *(_DWORD *)v7 == a1 )
          break;
      }
      if ( i == (__int64 *)88 )
        return (unsigned int)-1073741275;
      sub_140603B80(a3, &v7[v5 + 1]);
      v11 = sub_14060392C((_QWORD **)(v9 + 72), v10);
      if ( v11 )
        sub_140603B80(v12, (_DWORD *)&v11[v5] + 1);
      if ( dword_140C18FD8 < 5 && (dword_140C18FD0 & 1) != 0 )
        *v12 = 4;
    }
    else
    {
      return (unsigned int)-1073741822;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
