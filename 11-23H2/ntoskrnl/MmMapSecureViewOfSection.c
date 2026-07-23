/*
 * XREFs of MmMapSecureViewOfSection @ 0x14071C398
 * Callers:
 *     AlpcpCreateView @ 0x14071C524 (AlpcpCreateView.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     MiMapParametersInitialize @ 0x14072174C (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x140721860 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapSecureViewOfSection(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  __int64 result; // rax
  _QWORD v15[16]; // [rsp+40h] [rbp-88h] BYREF

  memset(v15, 0, sizeof(v15));
  result = MiMapParametersInitialize(v15, *a7, 0, 4, 0LL);
  if ( (int)result < 0
    || (v15[9] = a12,
        HIDWORD(v15[8]) = 2,
        result = MiMapViewOfSection(a1, (unsigned int)v15, (_DWORD)a3, 0, a6, 2, 1),
        (int)result < 0) )
  {
    if ( *a3 )
      ++dword_140C67F9C;
    else
      ++dword_140C67F98;
  }
  else
  {
    *a7 = v15[3];
    return (unsigned int)result;
  }
  return result;
}
