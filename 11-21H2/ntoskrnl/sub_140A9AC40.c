/*
 * XREFs of sub_140A9AC40 @ 0x140A9AC40
 * Callers:
 *     sub_140A9C7F8 @ 0x140A9C7F8 (sub_140A9C7F8.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A9AF40 @ 0x140A9AF40 (sub_140A9AF40.c)
 */

__int64 __fastcall sub_140A9AC40(PCUNICODE_STRING String2)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  _QWORD *v4; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rdx

  v2 = 0;
  sub_140A89D58();
  v3 = sub_140A9AF40(String2);
  v4 = (_QWORD *)v3;
  if ( v3 )
  {
    if ( byte_140C1AD98 || (dword_140C1AA7C & 0x800) != 0 || *(_DWORD *)(v3 + 16) == *(_DWORD *)(v3 + 20) )
    {
      v6 = *(_QWORD *)v3;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v7 = (_QWORD *)v4[1], (_QWORD *)*v7 != v4) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      ExFreePoolWithTag(v4, 0x44536656u);
    }
    else
    {
      v2 = -1073741554;
    }
  }
  qword_140C1AD40 = 0LL;
  KeReleaseMutex(&stru_140C1AD60, 0);
  return v2;
}
