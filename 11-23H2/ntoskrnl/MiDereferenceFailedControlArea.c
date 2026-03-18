/*
 * XREFs of MiDereferenceFailedControlArea @ 0x1408633E0
 * Callers:
 *     MiFinishCreateSection @ 0x140722D30 (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x140723350 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiDereferenceControlAreaBySection @ 0x14029F8AC (MiDereferenceControlAreaBySection.c)
 *     MiAweControlArea @ 0x1402A0EA4 (MiAweControlArea.c)
 *     MiDeleteSectionAwe @ 0x14064993C (MiDeleteSectionAwe.c)
 */

__int64 __fastcall MiDereferenceFailedControlArea(int *a1)
{
  int v1; // edx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = *a1;
  v2 = *((_QWORD *)a1 + 8);
  if ( (v1 & 4) != 0 )
    return MiDereferenceControlAreaBySection(v2, (v1 & 1) == 0);
  result = MiAweControlArea(v2);
  if ( (_DWORD)result )
    return MiDeleteSectionAwe(v4);
  return result;
}
