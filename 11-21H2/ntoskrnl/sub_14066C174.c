/*
 * XREFs of sub_14066C174 @ 0x14066C174
 * Callers:
 *     sub_14070AFEC @ 0x14070AFEC (sub_14070AFEC.c)
 *     sub_140712868 @ 0x140712868 (sub_140712868.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     sub_1409EAFC8 @ 0x1409EAFC8 (sub_1409EAFC8.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_1407B6370 @ 0x1407B6370 (sub_1407B6370.c)
 */

__int64 __fastcall sub_14066C174(struct _EX_RUNDOWN_REF *a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  ULONG_PTR v5; // rax
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0;
  v5 = sub_14066B3D8(a1);
  if ( v5 )
  {
    sub_1407B6370(v5, &v7, a2);
    sub_1402AD030(a1 + 139);
    return v7;
  }
  else if ( a2 )
  {
    *a2 = 0;
  }
  return v2;
}
