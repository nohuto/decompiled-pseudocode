/*
 * XREFs of sub_1403D9620 @ 0x1403D9620
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1403D9620(__int64 *a1, int *a2, int a3)
{
  __int64 v3; // rax
  unsigned int v6; // edx
  __int64 v7; // r8
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx

  v3 = *a1;
  v6 = -1073741811;
  v7 = 0x4F03E31C1D077298LL - *a1;
  if ( *a1 == 0x4F03E31C1D077298LL )
    v7 = 0x291D1BB67374E99DLL - a1[1];
  if ( v7 )
  {
    v8 = 0x4619B909ADED5E82LL - v3;
    if ( v3 == 0x4619B909ADED5E82LL )
      v8 = 0xCB0BAC1DD7F54999uLL - a1[1];
    if ( v8 )
    {
      v9 = 0x4165A960F1FBFDE2LL - v3;
      if ( v3 == 0x4165A960F1FBFDE2LL )
        v9 = 0x96CE11796650889FuLL - a1[1];
      if ( v9 )
      {
        v10 = 0x40979553FBD9AA66LL - v3;
        if ( v3 == 0x40979553FBD9AA66LL )
          v10 = 0xB8EA659D6EED44BAuLL - a1[1];
        if ( v10 )
        {
          v11 = 0x474AF74E13D09884LL - v3;
          if ( v3 == 0x474AF74E13D09884LL )
            v11 = 0xA803ADE8BDB652A8uLL - a1[1];
          if ( v11 )
          {
            v12 = 0x4B948B4317AAA29BLL - v3;
            if ( v3 == 0x4B948B4317AAA29BLL )
              v12 = 0xEEF1AA4DF635FEAAuLL - a1[1];
            if ( !v12 && a3 == 4 && a2 )
            {
              sub_140A48330(a1, 3221225485LL);
              dword_140C232EC = *a2;
              goto LABEL_25;
            }
          }
          else if ( a3 == 4 && a2 )
          {
            sub_140A48330(a1, 3221225485LL);
            dword_140C23300 = *a2;
            goto LABEL_25;
          }
        }
        else if ( a3 == 4 && a2 )
        {
          sub_140A48330(a1, 3221225485LL);
          dword_140C232FC = *a2;
          goto LABEL_25;
        }
      }
      else if ( a3 == 4 && a2 )
      {
        sub_140A48330(a1, 3221225485LL);
        HIDWORD(qword_140C232F0) = *a2;
        goto LABEL_25;
      }
    }
    else if ( a3 == 4 && a2 )
    {
      sub_140A48330(a1, 3221225485LL);
      LODWORD(qword_140C232F0) = *a2;
      goto LABEL_25;
    }
  }
  else if ( a3 == 4 && a2 )
  {
    if ( !*a2 )
      return 0;
    sub_140A48330(a1, 3221225485LL);
    BYTE10(xmmword_140C23400) = 1;
LABEL_25:
    sub_140A47CF8(v14, v13);
    return 0;
  }
  return v6;
}
