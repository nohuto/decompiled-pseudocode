/*
 * XREFs of sub_140824AA0 @ 0x140824AA0
 * Callers:
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     HvlQueryConnection @ 0x1403AC4C0 (HvlQueryConnection.c)
 *     sub_1403BF6EC @ 0x1403BF6EC (sub_1403BF6EC.c)
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     sub_140544754 @ 0x140544754 (sub_140544754.c)
 *     sub_14054558C @ 0x14054558C (sub_14054558C.c)
 *     sub_14054C1A4 @ 0x14054C1A4 (sub_14054C1A4.c)
 *     sub_14054C654 @ 0x14054C654 (sub_14054C654.c)
 *     sub_140647BBC @ 0x140647BBC (sub_140647BBC.c)
 */

__int64 __fastcall sub_140824AA0(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx

  dword_140D0688C = (HviIsAnyHypervisorPresent() ? 0x1000 : 0) | dword_140D0688C & 0xFFFFEFFF;
  if ( (int)HvlQueryConnection(0LL) >= 0 || (result = sub_1403BF6EC(a1), (int)result >= 0) )
  {
    result = sub_14054558C(a1);
    if ( (int)result >= 0 )
    {
      byte_140D0688B = 1;
      sub_14054C1A4();
      result = PsGetHostSilo();
      if ( (int)result >= 0 )
      {
        if ( (dword_140D0688C & 2) != 0 && strstr(*(const char **)(qword_140D068D0 + 216), "HYPERVISORDBG") )
          dword_140D068B8 |= 8u;
        if ( (dword_140D0688C & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(qword_140D068D0 + 240) + 3492LL) & 0x2000) != 0 )
          dword_140D068B8 |= 0x800u;
        result = sub_14054C654(a1);
        if ( (int)result >= 0 )
        {
          result = sub_140544754(a1);
          v3 = result;
          if ( (int)result >= 0 )
          {
            sub_140647BBC(dword_140D072B0);
            return v3;
          }
        }
      }
    }
  }
  else if ( (_DWORD)result == -1070264320 )
  {
    return 0LL;
  }
  return result;
}
