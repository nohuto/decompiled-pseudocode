/*
 * XREFs of sub_14057132C @ 0x14057132C
 * Callers:
 *     sub_1403D5E00 @ 0x1403D5E00 (sub_1403D5E00.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14057132C(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v15; // rax

  v2 = *a2;
  if ( (*a2 & 0x80u) == 0LL )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
    }
    if ( (_RBX & 0x2000000) != 0 )
    {
      *((_DWORD *)a2 + 2) = -1073676001;
      dword_140C09828 = -1073676001;
      *a2 = v2 | 0x80;
      return;
    }
    if ( !HviIsAnyHypervisorPresent() )
    {
      switch ( *(_BYTE *)(a1 + 64) )
      {
        case 0x15:
          v15 = 0x40000000000000LL;
          break;
        case 0x16:
          v15 = 0x200000000LL;
          break;
        case 0x17:
          v15 = 1024LL;
          break;
        default:
          return;
      }
      *a2 |= 0x80uLL;
      *((_DWORD *)a2 + 2) = -1073672160;
      dword_140C09828 = -1073672160;
      a2[2] = v15;
      qword_140C09820 = v15;
    }
  }
}
