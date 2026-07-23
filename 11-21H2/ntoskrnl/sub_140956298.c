/*
 * XREFs of sub_140956298 @ 0x140956298
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     sub_140255030 @ 0x140255030 (sub_140255030.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1406E5574 @ 0x1406E5574 (sub_1406E5574.c)
 *     sub_140778F4C @ 0x140778F4C (sub_140778F4C.c)
 *     sub_140778FA0 @ 0x140778FA0 (sub_140778FA0.c)
 *     sub_1407790D0 @ 0x1407790D0 (sub_1407790D0.c)
 *     sub_14078A584 @ 0x14078A584 (sub_14078A584.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 *     sub_140A2545C @ 0x140A2545C (sub_140A2545C.c)
 */

__int64 __fastcall sub_140956298(unsigned __int64 a1, unsigned int a2, _QWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // r15
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  __int128 v14; // [rsp+58h] [rbp+7h] BYREF
  PCWSTR SourceString[2]; // [rsp+68h] [rbp+17h]
  __int128 v16; // [rsp+78h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+37h]

  v6 = a6;
  LODWORD(a6) = 0;
  v17 = 0LL;
  *v6 = 0;
  v14 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v16 = 0LL;
  v9 = sub_1407790D0(a1, a2, a5, (__int64)&v14);
  if ( v9 >= 0 )
  {
    if ( !sub_14078A600(HIDWORD(SourceString[1]) == 13 ? 64 : 2) )
    {
      v10 = -1073741790;
LABEL_19:
      v9 = sub_14078A584(v10, SHIDWORD(v17), a3, a4, v6);
      goto LABEL_20;
    }
    if ( SourceString[0] && !DWORD1(v14) && a3 && a4 >= 8 )
    {
      v10 = sub_140778FA0(SHIDWORD(SourceString[1]), &a6);
      if ( v10 < 0 )
        goto LABEL_19;
      if ( DWORD2(v14) == 1 )
      {
        v11 = sub_1406E5574(qword_140D00AC0, SourceString[0], 0, (int)a6, v16, *((unsigned int **)&v16 + 1), v17, 0);
        if ( v11 >= 0 )
        {
          DestinationString = 0LL;
          if ( RtlInitUnicodeStringEx(&DestinationString, SourceString[0]) >= 0 )
            sub_140255030(&DestinationString.Length);
        }
        goto LABEL_15;
      }
      if ( DWORD2(v14) == 2 )
      {
        v11 = sub_140A2545C(qword_140D00AC0, SourceString[0], v16, *((__int64 *)&v16 + 1), v17);
LABEL_15:
        if ( v11 == -1073741790 )
          v11 = -1073741264;
        v10 = v11;
        goto LABEL_19;
      }
    }
    v10 = -1073741811;
    goto LABEL_19;
  }
LABEL_20:
  sub_140778F4C((__int64)&v14);
  return (unsigned int)v9;
}
