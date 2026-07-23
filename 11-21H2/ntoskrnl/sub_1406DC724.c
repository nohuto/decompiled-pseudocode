/*
 * XREFs of sub_1406DC724 @ 0x1406DC724
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     sub_140255030 @ 0x140255030 (sub_140255030.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140771524 @ 0x140771524 (sub_140771524.c)
 *     sub_14077C1C4 @ 0x14077C1C4 (sub_14077C1C4.c)
 *     sub_14077C484 @ 0x14077C484 (sub_14077C484.c)
 *     sub_14078A584 @ 0x14078A584 (sub_14078A584.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 */

__int64 __fastcall sub_1406DC724(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  int v10; // ebx
  unsigned int v11; // edi
  int v12; // ebx
  int v13; // esi
  const WCHAR *v14; // r14
  PCWSTR v15; // r13
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  PCWSTR v26; // rcx
  PCWSTR v27; // rcx
  PCWSTR v28; // rcx
  PCWSTR v29; // rax
  int v30; // ebx
  int v31; // ebx
  PCWSTR v32; // rax
  int v33; // [rsp+50h] [rbp-79h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  PCWSTR v35[10]; // [rsp+70h] [rbp-59h] BYREF

  memset(v35, 0, 0x48uLL);
  *a6 = 0;
  v10 = sub_14077C1C4(a1, a2, a5, v35);
  if ( v10 >= 0 )
  {
    v11 = 3;
    v12 = (int)v35[1];
    v13 = (int)v35[6];
    v14 = v35[2];
    v15 = v35[7];
    v33 = (int)v35[8];
    if ( HIDWORD(v35[5]) == 14 )
    {
      v26 = *(PCWSTR *)((char *)&v35[3] + 4) - 0x277EEF8E522E12A7LL;
      if ( *(PCWSTR *)((char *)&v35[3] + 4) == (PCWSTR)0x4EFDDF1CA45C254ELL )
        v26 = *(PCWSTR *)((char *)&v35[4] + 4) + 0xFD7ABDC974C6FC0LL;
      if ( !v26 )
        goto LABEL_35;
    }
    if ( HIDWORD(v35[5]) == 3 )
    {
      v27 = *(PCWSTR *)((char *)&v35[3] + 4) - 0x25863A39C06C0F53LL;
      if ( *(PCWSTR *)((char *)&v35[3] + 4) == (PCWSTR)0x4B0C747380D81EA6LL )
        v27 = *(PCWSTR *)((char *)&v35[4] + 4) + 0x3A59E9F29F0874BFLL;
      if ( !v27 )
        goto LABEL_35;
    }
    if ( HIDWORD(v35[5]) == 4 )
    {
      v28 = (PCWSTR)(*(char **)((char *)&v35[3] + 4) - 0x4F7A142C8163EB01LL);
      if ( *(PCWSTR *)((char *)&v35[3] + 4) == (PCWSTR)0x4F7A142C8163EB01LL )
        v28 = *(PCWSTR *)((char *)&v35[4] + 4) + 0x22925C19C5AE8F36LL;
      if ( !v28 )
        goto LABEL_35;
    }
    if ( HIDWORD(v35[5]) != 2 )
      goto LABEL_6;
    v29 = *(PCWSTR *)((char *)&v35[3] + 4) - 0x8E84087B5EE8FE3LL;
    if ( *(PCWSTR *)((char *)&v35[3] + 4) == (PCWSTR)0x11D0810F6BDD1FC6LL )
      v29 = *(PCWSTR *)((char *)&v35[4] + 4) - 0x1784F115800463DFLL;
    if ( v29 )
LABEL_6:
      v16 = 0;
    else
LABEL_35:
      v16 = 1;
    if ( !(unsigned __int8)sub_14078A600(v16 != 0 ? 64 : 2) )
    {
      v19 = -1073741790;
LABEL_21:
      v10 = sub_14078A584(v19, HIDWORD(v35[8]), a3, a4, a6);
      goto LABEL_22;
    }
    if ( !v14 || HIDWORD(v35[0]) || !a3 || a4 < 8 )
      goto LABEL_66;
    if ( v12 <= 6 )
    {
      if ( v12 == 6 )
      {
        v11 = 6;
      }
      else
      {
        v17 = v12 - 1;
        if ( !v17 )
        {
          v11 = 1;
          goto LABEL_16;
        }
        v21 = v17 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( !v23 )
              goto LABEL_16;
            if ( v23 == 1 )
            {
              v11 = 5;
              goto LABEL_16;
            }
            goto LABEL_66;
          }
          v11 = 4;
        }
        else
        {
          v11 = 2;
        }
      }
LABEL_16:
      v18 = sub_140771524(*(_QWORD *)&qword_140D00AC0, v14, v11, 0LL, 0LL, (char *)&v35[3] + 4, v13, v15, v33, 0);
      v19 = v18;
      if ( v18 == -1073741790 )
      {
        if ( HIDWORD(v35[5]) == 38 )
        {
          v32 = *(PCWSTR *)((char *)&v35[3] + 4) - 0x277EEF8E522E12A7LL;
          if ( *(PCWSTR *)((char *)&v35[3] + 4) == (PCWSTR)0x4EFDDF1CA45C254ELL )
            v32 = *(PCWSTR *)((char *)&v35[4] + 4) + 0xFD7ABDC974C6FC0LL;
          if ( !v32 )
            v19 = -1073741264;
        }
      }
      else if ( v18 >= 0 && v11 == 1 )
      {
        DestinationString = 0LL;
        if ( RtlInitUnicodeStringEx(&DestinationString, v14) >= 0 )
          sub_140255030(&DestinationString.Length);
      }
      goto LABEL_21;
    }
    v24 = v12 - 65537;
    if ( !v24 )
    {
      v11 = 7;
      goto LABEL_30;
    }
    v25 = v24 - 1;
    if ( !v25 )
    {
      v11 = 8;
      goto LABEL_30;
    }
    v30 = v25 - 1;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        if ( v31 == 1 )
        {
          v11 = 11;
          goto LABEL_30;
        }
LABEL_66:
        v19 = -1073741811;
        goto LABEL_21;
      }
      v11 = 10;
    }
    else
    {
      v11 = 9;
    }
LABEL_30:
    if ( qword_140D00AC8 )
      goto LABEL_16;
    goto LABEL_66;
  }
LABEL_22:
  sub_14077C484(v35);
  return (unsigned int)v10;
}
