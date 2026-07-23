/*
 * XREFs of sub_140A47990 @ 0x140A47990
 * Callers:
 *     <none>
 * Callees:
 *     sub_140258810 @ 0x140258810 (sub_140258810.c)
 *     sub_1403DE3A4 @ 0x1403DE3A4 (sub_1403DE3A4.c)
 *     sub_1403DEB4C @ 0x1403DEB4C (sub_1403DEB4C.c)
 *     SkIsSecureKernel @ 0x1403DF740 (SkIsSecureKernel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140503390 @ 0x140503390 (sub_140503390.c)
 *     sub_14050A788 @ 0x14050A788 (sub_14050A788.c)
 *     sub_14051E8FC @ 0x14051E8FC (sub_14051E8FC.c)
 *     sub_1406E2A44 @ 0x1406E2A44 (sub_1406E2A44.c)
 *     sub_1406E2A58 @ 0x1406E2A58 (sub_1406E2A58.c)
 *     MmConfigureGraphicsPtes @ 0x1407F4D40 (MmConfigureGraphicsPtes.c)
 *     sub_1407FCE14 @ 0x1407FCE14 (sub_1407FCE14.c)
 *     sub_140822DF0 @ 0x140822DF0 (sub_140822DF0.c)
 *     sub_14084476C @ 0x14084476C (sub_14084476C.c)
 *     sub_140846600 @ 0x140846600 (sub_140846600.c)
 *     sub_140856CE8 @ 0x140856CE8 (sub_140856CE8.c)
 *     sub_140863EC8 @ 0x140863EC8 (sub_140863EC8.c)
 *     sub_140864280 @ 0x140864280 (sub_140864280.c)
 *     sub_140864A38 @ 0x140864A38 (sub_140864A38.c)
 *     sub_1409088B4 @ 0x1409088B4 (sub_1409088B4.c)
 *     sub_14090A560 @ 0x14090A560 (sub_14090A560.c)
 *     sub_14090A904 @ 0x14090A904 (sub_14090A904.c)
 *     sub_14090AC50 @ 0x14090AC50 (sub_14090AC50.c)
 *     sub_140A710B8 @ 0x140A710B8 (sub_140A710B8.c)
 *     sub_140B4D598 @ 0x140B4D598 (sub_140B4D598.c)
 */

__int64 __fastcall sub_140A47990(int a1, unsigned int a2, LARGE_INTEGER *a3, unsigned int *a4)
{
  unsigned int IsSecureKernel; // ebx
  unsigned int v9; // edi
  __int64 (__fastcall ****v10)(); // r15
  unsigned int v11; // eax
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  bool v21; // cc
  int v22; // edi
  int v23; // eax
  int Src[64]; // [rsp+20h] [rbp-E0h] BYREF

  memset(Src, 0, sizeof(Src));
  IsSecureKernel = 0;
  if ( a4 )
    *a4 = 0;
  if ( a1 > 30 )
  {
    if ( a1 > 43 )
    {
      switch ( a1 )
      {
        case ',':
          return (unsigned int)sub_1407FCE14((unsigned int)a1, a2, (unsigned int *)a3, a4);
        case '/':
          return (unsigned int)sub_140864A38(a2, (int *)a4);
        case '1':
          v22 = 8;
          if ( a2 != 8 )
            return (unsigned int)-1073741820;
          v23 = sub_1406E2A44(a3);
          break;
        case '-':
          v9 = 8;
          if ( a2 == 8 )
          {
            v10 = (__int64 (__fastcall ****)())Src;
            *(_QWORD *)Src = sub_14051E8FC();
            goto LABEL_12;
          }
          return (unsigned int)-1073741820;
        case '.':
          v22 = 4;
          if ( a2 < 4 )
            return (unsigned int)-1073741820;
          v23 = sub_140503390(a3);
          break;
        case '2':
          if ( a2 < 2 )
            return (unsigned int)-1073741820;
          IsSecureKernel = sub_1406E2A58(a3);
          if ( (IsSecureKernel & 0x80000000) == 0 )
            *a4 = 2;
          return IsSecureKernel;
        default:
          if ( a1 <= 50 || a1 > 52 )
            return (unsigned int)-1073741496;
          return (unsigned int)sub_1407FCE14((unsigned int)a1, a2, (unsigned int *)a3, a4);
      }
    }
    else
    {
      if ( a1 != 43 )
      {
        v13 = a1 - 31;
        if ( !v13 )
          return (unsigned int)sub_140B4D598(a3, a2, a4);
        v14 = v13 - 2;
        if ( !v14 )
          return (unsigned int)sub_140A710B8(a3, a2, a4);
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( !v17 )
              return (unsigned int)sub_14090AC50((__int16 *)a3, a2, a4);
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 2;
              if ( !v19 )
                return (unsigned int)sub_140822DF0(a2, a3, a4);
              if ( v19 != 1 )
                return (unsigned int)-1073741496;
              if ( a2 < 0x10 )
                return (unsigned int)-1073741820;
              IsSecureKernel = sub_140846600((__int64)a3, a2);
              if ( (IsSecureKernel & 0x80000000) == 0 )
                *a4 = 16;
              return IsSecureKernel;
            }
            v10 = &off_14000A550;
            if ( a2 < 0x10 )
              v10 = 0LL;
            v9 = a2 < 0x10 ? 0 : 0x10;
            IsSecureKernel = a2 < 0x10 ? 0xC0000004 : 0;
LABEL_43:
            if ( !v9 )
              return IsSecureKernel;
            goto LABEL_35;
          }
          v10 = (__int64 (__fastcall ****)())qword_140C4D0F8;
          if ( !qword_140C4D0F8 )
            return (unsigned int)-1073741822;
          v9 = *(_DWORD *)(qword_140C4D0F8 + 4);
          v21 = v9 <= dword_140C4D0F0;
        }
        else
        {
          v10 = (__int64 (__fastcall ****)())qword_140C4D100;
          if ( !qword_140C4D100 )
            return (unsigned int)-1073741822;
          v9 = *(_DWORD *)(qword_140C4D100 + 4);
          v21 = v9 <= dword_140C4D0F4;
        }
        if ( v21 )
        {
          if ( a2 < v9 )
            goto LABEL_57;
          goto LABEL_43;
        }
        return (unsigned int)-1073741822;
      }
      v22 = 4;
      if ( (dword_140C0C60C & 4) != 0 )
        return (unsigned int)-1073741637;
      if ( a2 < 4 )
        return (unsigned int)-1073741820;
      v23 = sub_14090A560(a3);
    }
    IsSecureKernel = v23;
    if ( v23 < 0 )
      return IsSecureKernel;
    goto LABEL_51;
  }
  if ( a1 == 30 )
    return (unsigned int)sub_1403DE3A4(a3, a2, a4);
  if ( a1 > 17 )
  {
    if ( a1 != 20 )
    {
      if ( a1 != 23 )
      {
        switch ( a1 )
        {
          case 25:
            v9 = 12;
            if ( a2 >= 0xC )
            {
              v10 = (__int64 (__fastcall ****)())Src;
              v11 = sub_140258810(Src);
LABEL_11:
              IsSecureKernel = v11;
LABEL_12:
              *a4 = v9;
              memmove(a3, v10, v9);
              return IsSecureKernel;
            }
            return (unsigned int)-1073741820;
          case 26:
            v9 = 8;
            if ( a2 >= 8 )
            {
              v10 = (__int64 (__fastcall ****)())Src;
              v11 = sub_14090A904(Src);
              goto LABEL_11;
            }
            return (unsigned int)-1073741820;
          case 27:
            v9 = 12;
            if ( a2 >= 0xC )
            {
              v10 = (__int64 (__fastcall ****)())Src;
              v11 = sub_14084476C(Src);
              goto LABEL_11;
            }
            return (unsigned int)-1073741820;
          case 28:
            v9 = 56;
            if ( a2 >= 0x38 )
            {
              v10 = (__int64 (__fastcall ****)())Src;
              v11 = sub_140864280((__int64)Src);
              goto LABEL_11;
            }
            return (unsigned int)-1073741820;
          case 29:
            if ( a2 < 0x18 )
              return (unsigned int)-1073741820;
            IsSecureKernel = SkIsSecureKernel();
            if ( (IsSecureKernel & 0x80000000) == 0 )
              *a4 = 24;
            return IsSecureKernel;
        }
        return (unsigned int)-1073741496;
      }
      return (unsigned int)sub_140856CE8(a2, (__int64)a3, a4);
    }
    return (unsigned int)sub_1407FCE14((unsigned int)a1, a2, (unsigned int *)a3, a4);
  }
  switch ( a1 )
  {
    case 17:
      v22 = 8;
      if ( a2 != 8 )
        return (unsigned int)-1073741820;
      a3->QuadPart = sub_14050A788();
LABEL_51:
      *a4 = v22;
      return IsSecureKernel;
    case 1:
      return (unsigned int)sub_1407FCE14((unsigned int)a1, a2, (unsigned int *)a3, a4);
    case 7:
      return (unsigned int)sub_1409088B4();
    case 8:
      return (unsigned int)-1073741496;
    case 9:
      v10 = (__int64 (__fastcall ****)())Src;
      v9 = 4;
      Src[0] = sub_1403DEB4C();
      goto LABEL_35;
  }
  if ( a1 != 11 )
  {
    if ( a1 == 12 )
    {
      v10 = (__int64 (__fastcall ****)())Src;
      Src[0] = a3->LowPart;
      v9 = 144;
      IsSecureKernel = MmConfigureGraphicsPtes();
LABEL_35:
      if ( a2 < v9 )
        v9 = a2;
      goto LABEL_12;
    }
    if ( a1 != 13 )
    {
      if ( a1 != 16 )
        return (unsigned int)-1073741496;
      v9 = 456;
      if ( a2 >= 0x1C8 )
      {
        v10 = (__int64 (__fastcall ****)())&unk_140C02D00;
        goto LABEL_12;
      }
LABEL_57:
      *a4 = v9;
      return (unsigned int)-1073741820;
    }
    return (unsigned int)sub_1409088B4();
  }
  if ( a2 != 64 )
    return (unsigned int)-1073741820;
  IsSecureKernel = -1073741496;
  if ( qword_140C4AD18 )
  {
    IsSecureKernel = sub_140863EC8();
    if ( (IsSecureKernel & 0x80000000) == 0 )
      *a4 = 64;
  }
  return IsSecureKernel;
}
