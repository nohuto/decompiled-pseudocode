/*
 * XREFs of WerpParseKeyName @ 0x1C00427C8
 * Callers:
 *     WerKernelSubmitReport @ 0x1C0042EF8 (WerKernelSubmitReport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WerpParseKeyName(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        _DWORD *a4,
        _QWORD *a5,
        _DWORD *a6)
{
  unsigned int v6; // r10d
  __int64 v8; // rdx
  _WORD *v9; // rcx
  _WORD *v11; // rax
  _WORD *v12; // rax
  __int64 v13; // rcx

  v6 = 0;
  if ( !a1 || !a2 || !a3 || !a4 || !a5 || !a6 )
    return 3221225485LL;
  v8 = 2LL * a2;
  v9 = (_WORD *)(v8 + a1 - 2);
  if ( v9 )
  {
    while ( (unsigned __int64)v9 >= a1 )
    {
      if ( *v9 == 92 )
      {
        if ( !v9 )
          break;
        *a5 = v9 + 1;
        *a6 = (__int64)(a1 + v8 - (_QWORD)(v9 + 1)) >> 1;
        if ( (unsigned __int64)v9 > a1 )
        {
          v11 = v9 - 1;
          if ( v9 != (_WORD *)2 )
          {
            while ( (unsigned __int64)v11 >= a1 )
            {
              if ( *v11 == 92 )
              {
                if ( !v11 )
                  break;
                v12 = v11 + 1;
                v13 = *a5 - (_QWORD)v12;
                *a3 = v12;
                *a4 = (v13 >> 1) - 1;
                return v6;
              }
              --v11;
            }
          }
          DbgPrintEx(
            0x96u,
            0,
            "WERLIVEKERNELREPORTING:%u: ERROR Could not find \\ in the keyname looking for Report Type\n",
            435LL);
        }
        else
        {
          DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR No report type can be detected\n", 425LL);
        }
        return (unsigned int)-1073741811;
      }
      --v9;
    }
  }
  DbgPrintEx(
    0x96u,
    0,
    "WERLIVEKERNELREPORTING:%u: ERROR Could not find \\ in the keyname looking for Reportid\n",
    411LL);
  return (unsigned int)-1073741811;
}
