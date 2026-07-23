/*
 * XREFs of sub_140B27B30 @ 0x140B27B30
 * Callers:
 *     sub_140B27AFC @ 0x140B27AFC (sub_140B27AFC.c)
 * Callees:
 *     sub_140261ADC @ 0x140261ADC (sub_140261ADC.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_140A7C548 @ 0x140A7C548 (sub_140A7C548.c)
 *     sub_140A82328 @ 0x140A82328 (sub_140A82328.c)
 *     sub_140A83024 @ 0x140A83024 (sub_140A83024.c)
 *     sub_140A94644 @ 0x140A94644 (sub_140A94644.c)
 *     sub_140B27D40 @ 0x140B27D40 (sub_140B27D40.c)
 *     sub_140B27D88 @ 0x140B27D88 (sub_140B27D88.c)
 *     sub_140B53650 @ 0x140B53650 (sub_140B53650.c)
 */

void __fastcall sub_140B27B30(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  int v4; // edi
  int v5; // eax
  const char *v6; // rcx
  int v7; // eax
  LARGE_INTEGER v8; // rdx
  LARGE_INTEGER v9; // rcx
  LARGE_INTEGER v10; // r8
  LARGE_INTEGER v11; // r9
  int v12; // eax
  unsigned int v13; // eax
  __int64 *v14; // rdi
  __int64 v15; // r15
  unsigned __int64 v16; // rdx
  __int64 *QuadPart; // rbx
  unsigned __int64 v18; // rdx
  int v19; // edx
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF

  String2 = 0LL;
  v1 = *(_QWORD *)(a1 + 240);
  v3 = *(_QWORD *)(v1 + 280);
  v4 = *(_DWORD *)(v1 + 132) & 2;
  LOBYTE(byte_140C5B0E0) = 1;
  dword_140C5B0E8 = 32;
  v5 = dword_140C1AA7C & 0x1FFF;
  dword_140C1AA7C = v5;
  if ( (v5 & 4) != 0 )
    dword_140C0CFEC = 7;
  if ( (v5 & 0x80u) != 0 )
    sub_140A83024();
  sub_140261ADC((__int64)&stru_140C1AD60, 0, 1, 0);
  qword_140C1B2C8 = (__int64)&qword_140C1B2C0;
  qword_140C1B2C0 = (__int64)&qword_140C1B2C0;
  qword_140C1ADC8 = (__int64)&qword_140C1ADC0;
  qword_140C1ADC0 = (__int64)&qword_140C1ADC0;
  qword_140C1ADB8 = (__int64)&qword_140C1ADB0;
  qword_140C1ADB0 = (__int64)&qword_140C1ADB0;
  if ( dword_140C0B1F8 == -1 )
  {
    dword_140C0B1F8 = (qword_140D01450 & 0x400000) != 0 ? 2 : 4;
    dword_140C2A044 = dword_140C0B1F8;
  }
  if ( dword_140C0C848 == -1 )
  {
    if ( (_DWORD)qword_140D01450 )
    {
      dword_140C0C848 = 0;
      qword_140D01450 = 0LL;
      LODWORD(dword_140D68150) = -1;
      dword_140D57508 = 0;
      dword_140C1AA70 = 0;
      dword_140C1ACBC = 0;
      if ( (dword_140C1AA7C & 0x410) != 0 )
        dword_140C1AA78 = 1;
      return;
    }
  }
  else
  {
    LODWORD(qword_140D01450) = dword_140C0C848;
  }
  if ( !v4 && v3 )
  {
    *(_QWORD *)&BugCheckCode = *(unsigned int *)(v3 + 56);
    BugCheckParameter1 = *(_QWORD *)(v3 + 64);
    qword_140D57540 = *(_QWORD *)(v3 + 72);
    *(_OWORD *)&xmmword_140D57548 = *(_OWORD *)(v3 + 80);
  }
  qword_140C1B2D0 = qword_140D01450;
  if ( (dword_140C1AA7C & 0x410) == 0
    || dword_140C0C848 == -1
    || (((_DWORD)dword_140D68150 + 1) & 0xFFFFFFFE) == 0 && !dword_140D57508
    || (v12 = 1, v4) )
  {
    v12 = 0;
  }
  v6 = *(const char **)(a1 + 216);
  dword_140C1AA78 = v12;
  if ( strstr(v6, "SAFEBOOT:") )
  {
    v7 = 1;
    goto LABEL_33;
  }
  v7 = 0;
  if ( dword_140C1AA78 )
  {
LABEL_33:
    dword_140C0C848 = 0;
    qword_140D01450 = 0LL;
    LODWORD(dword_140D68150) = -1;
    dword_140D57508 = 0;
    dword_140C1AA70 = 0;
    dword_140C1ACBC = v7;
    return;
  }
  sub_140B27D88(a1);
  sub_140A7C548();
  if ( dword_140C0C848 == -1 )
    goto LABEL_15;
  if ( !dword_140D57508 && (_DWORD)dword_140D68150 == -1 )
    sub_140B53650(qword_140B359B0);
  if ( dword_140C0C848 == -1 || (dword_140C0C848 & 0x400000) == 0 )
LABEL_15:
    dword_140D57508 = 0;
  if ( dword_140D57508 )
  {
    v13 = HIWORD(dword_140D57508);
    dword_140D5752C = v13;
    HIWORD(dword_140D57508) = 0;
    if ( v13 >= 3 )
    {
      if ( v13 > 0x200 )
        dword_140D5752C = 512;
    }
    else
    {
      dword_140D5752C = 256;
    }
  }
  dword_140D576B8 = KeQueryPerformanceCounter(0LL).LowPart;
  if ( dword_140C1AA70 == 1 )
    goto LABEL_45;
  if ( dword_140C1AA70 == 2 )
  {
    dword_140C1AA70 = 1;
    dword_140C1ACA4 = 1;
    dword_140C1ACC0 = 1;
LABEL_45:
    LODWORD(dword_140D68150) = 0;
    goto LABEL_46;
  }
  if ( (_DWORD)dword_140D68150 == -1 )
  {
    if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))sub_140B27D40)(
                          (LARGE_INTEGER)v9.QuadPart,
                          (LARGE_INTEGER)v8.QuadPart) )
      return;
    LODWORD(dword_140D68150) = 0;
    if ( dword_140C0B1F8 > 2 )
      sub_140A94644(2);
    goto LABEL_47;
  }
LABEL_46:
  dword_140D57508 = 0;
LABEL_47:
  if ( (dword_140C1AA7C & 1) != 0 && !dword_140D57508 )
  {
LABEL_76:
    dword_140C1AA70 = 1;
    goto LABEL_77;
  }
  if ( !dword_140C1AA70 && !dword_140D57508 )
  {
    v9.QuadPart = (LONGLONG)qword_140D6A8E0;
    v14 = (__int64 *)((char *)qword_140D6A8E0 + 2 * (((unsigned __int64)(unsigned int)dword_140D68150 - 2) >> 1));
    if ( qword_140D6A8E0 < v14 )
    {
      v15 = 0x100002601LL;
      do
      {
        v16 = *(unsigned __int16 *)v9.QuadPart;
        if ( (unsigned __int16)v16 <= 0x20u && _bittest64(&v15, v16) || (_WORD)v16 == 12288 )
        {
          QuadPart = (__int64 *)v9.QuadPart;
        }
        else
        {
          if ( (_DWORD)v16 == 42 )
            goto LABEL_76;
          QuadPart = (__int64 *)(v9.QuadPart + 2);
          if ( (_DWORD)v16 == 34 )
          {
            v9.QuadPart += 2LL;
            while ( 1 )
            {
              QuadPart = (__int64 *)((char *)QuadPart + 2);
              if ( QuadPart >= v14 )
                goto LABEL_77;
              if ( *(_WORD *)QuadPart == 34 )
                goto LABEL_69;
            }
          }
          while ( QuadPart < v14 )
          {
            v18 = *(unsigned __int16 *)QuadPart;
            if ( (unsigned __int16)v18 <= 0x20u )
            {
              if ( _bittest64(&v15, v18) )
                break;
            }
            if ( (_WORD)v18 == 12288 )
              break;
            QuadPart = (__int64 *)((char *)QuadPart + 2);
          }
LABEL_69:
          v19 = 2 * (((__int64)QuadPart - v9.QuadPart) >> 1);
          if ( v19 )
          {
            String2.Length = 2 * (((__int64)QuadPart - v9.QuadPart) >> 1);
            String2.MaximumLength = v19 + 2;
            if ( (unsigned __int16)(v19 + 2) < (unsigned __int16)v19 )
              break;
            String2.Buffer = (wchar_t *)v9.QuadPart;
            if ( RtlEqualUnicodeString(&stru_140A75038, &String2, 1u) )
            {
              dword_140C1ACA4 = 1;
              break;
            }
          }
        }
        v9.QuadPart = (LONGLONG)QuadPart + 2;
      }
      while ( (__int64 *)((char *)QuadPart + 2) < v14 );
    }
  }
LABEL_77:
  sub_140A82328(v9.QuadPart, 1, v10.QuadPart, v11.QuadPart);
}
