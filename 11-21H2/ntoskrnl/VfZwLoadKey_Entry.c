/*
 * XREFs of VfZwLoadKey_Entry @ 0x140A951A0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140A958B4 (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x140A959C8 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwLoadKey_Entry(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckObjectAttributes(a1[2], *a1);
    return ViZwCheckObjectAttributes(a1[1], *a1);
  }
  return result;
}
