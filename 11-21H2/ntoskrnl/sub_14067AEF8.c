/*
 * XREFs of sub_14067AEF8 @ 0x14067AEF8
 * Callers:
 *     sub_14067B998 @ 0x14067B998 (sub_14067B998.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 */

__int64 __fastcall sub_14067AEF8(int a1, void *a2, _DWORD *a3)
{
  int v6; // ebx
  int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  HANDLE Handle[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  Handle[0] = 0LL;
  *a3 = 4;
  if ( (xmmword_140C15C80 & 1) == 0 )
    goto LABEL_2;
  v8 = qword_140D01918;
  if ( qword_140D01918 )
  {
    if ( qword_140D01918 == -1 )
      goto LABEL_2;
  }
  else
  {
    if ( *(_QWORD *)&qword_140D00AC0 )
      v9 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
    else
      LODWORD(v9) = 0;
    v10 = sub_14077FFEC(
            v9,
            -2147483646,
            (unsigned int)L"System\\CurrentControlSet\\Control\\ManufacturingMode\\Current\\Services\\",
            0,
            131097,
            (__int64)&qword_140D01918);
    if ( v10 == -1073741772 )
    {
      v8 = -1;
      qword_140D01918 = -1LL;
    }
    else
    {
      v8 = qword_140D01918;
    }
    if ( v10 < 0 )
      goto LABEL_2;
  }
  if ( *(_QWORD *)&qword_140D00AC0 )
    v11 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
  else
    LODWORD(v11) = 0;
  if ( (int)sub_14077FFEC(v11, v8, a1, 0, 131097, (__int64)Handle) >= 0 )
  {
    LODWORD(v15) = 4;
    sub_14077FC64(Handle[0], (__int64)&v15);
  }
  v12 = (__int64)qword_140D01910;
  if ( qword_140D01910 )
  {
    if ( qword_140D01910 == (HANDLE)-1LL )
      goto LABEL_2;
    goto LABEL_31;
  }
  if ( *(_QWORD *)&qword_140D00AC0 )
    v12 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
  v13 = sub_14077FFEC(v12, qword_140D01918, (unsigned int)L"*Driver", 0, 131097, (__int64)&qword_140D01910);
  if ( v13 == -1073741772 )
  {
    v12 = -1LL;
    qword_140D01910 = (HANDLE)-1LL;
  }
  else
  {
    v12 = (__int64)qword_140D01910;
  }
  if ( v13 >= 0 )
  {
LABEL_31:
    LODWORD(v15) = 4;
    sub_14077FC64((HANDLE)v12, (__int64)&v15);
  }
LABEL_2:
  LODWORD(v15) = 4;
  v6 = sub_14077FC64(a2, (__int64)&v15);
  if ( v6 >= 0 )
  {
    v6 = -1073741772;
    *a3 = 4;
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v6;
}
