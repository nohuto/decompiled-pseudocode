/*
 * XREFs of sub_140A24104 @ 0x140A24104
 * Callers:
 *     sub_140A23FCC @ 0x140A23FCC (sub_140A23FCC.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcsrchr @ 0x1403E34B0 (wcsrchr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     sub_14076FE20 @ 0x14076FE20 (sub_14076FE20.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_14077F934 @ 0x14077F934 (sub_14077F934.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_140862B44 @ 0x140862B44 (sub_140862B44.c)
 *     sub_140A23FCC @ 0x140A23FCC (sub_140A23FCC.c)
 *     sub_140A2A0E4 @ 0x140A2A0E4 (sub_140A2A0E4.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A24104(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  int v5; // ebx
  int v8; // r13d
  WCHAR *Pool2; // rdi
  unsigned int v10; // r15d
  int v11; // eax
  int inited; // ebx
  unsigned __int64 v13; // rax
  unsigned __int16 Length; // bx
  const WCHAR *v15; // r15
  char *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  int *p_DestinationString; // rax
  unsigned int v20; // r13d
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r8
  char *v25; // r13
  __int64 v26; // rax
  __int64 v27; // r8
  wchar_t *v28; // rax
  wchar_t *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // r8
  char *v36; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING *v37; // [rsp+50h] [rbp-21h] BYREF
  __int64 v38; // [rsp+58h] [rbp-19h]
  HANDLE v39; // [rsp+60h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-1h] BYREF

  v38 = a2;
  v5 = a4;
  LODWORD(v36) = 0;
  v37 = 0LL;
  v39 = 0LL;
  Handle = 0LL;
  v8 = 4;
  Pool2 = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    goto LABEL_73;
  v10 = (a3 & 0x200) != 0 ? 360 : 240;
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, v10, 1380994640LL);
  if ( !Pool2 )
  {
LABEL_72:
    inited = -1073741801;
    goto LABEL_74;
  }
  while ( 1 )
  {
    v11 = sub_14077F934(a1, v38, a3, v5, 0, Pool2, v10 >> 1, &v36);
    inited = v11;
    if ( v11 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    v13 = 2LL * (unsigned int)v36;
    Pool2 = 0LL;
    if ( v13 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_74;
    }
    v10 = 2 * (_DWORD)v36;
    Pool2 = (WCHAR *)ExAllocatePool2(256LL, (unsigned int)v13, 1380994640LL);
    if ( !Pool2 )
      goto LABEL_72;
    v5 = a4;
  }
  if ( v11 >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v15 = Pool2;
      v17 = 0LL;
      if ( a1 )
        v17 = *(_QWORD *)(a1 + 224);
      inited = sub_140A2CF6C(v17, 0LL, 0x2000000LL, &v39);
      if ( inited < 0 )
        goto LABEL_74;
      v16 = (char *)v39;
      goto LABEL_25;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
    if ( inited < 0 )
      goto LABEL_74;
    Length = DestinationString.Length;
    if ( DestinationString.Length < v10
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(&stru_14000AD68, &DestinationString, 1u) )
    {
      v15 = Pool2 + 25;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = Pool2 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&stru_14000AD88, &DestinationString, 1u) )
      {
        v8 = 5;
        v15 = Pool2 + 30;
      }
      else if ( RtlPrefixUnicodeString(&stru_14000AD48, &DestinationString, 1u) )
      {
        v8 = 14;
        v15 = Pool2 + 43;
      }
      inited = sub_14078014C(a1, v8, (__int64)&v37);
      if ( inited < 0 )
        goto LABEL_74;
      v16 = (char *)v37;
LABEL_25:
      v36 = v16;
      inited = sub_14077F2EC(a1, v38, 16, 0, 1, 0, (__int64)&Handle, 0LL);
      if ( inited < 0 )
        goto LABEL_74;
      if ( (unsigned __int8)a3 == 18 && (a3 & 0xF00) == 0 )
      {
        v18 = v38;
        p_DestinationString = (int *)&DestinationString;
        v37 = &DestinationString;
        v20 = 0;
        *(_DWORD *)&DestinationString.Length = 786;
        *(_DWORD *)(&DestinationString.MaximumLength + 1) = 530;
        LODWORD(DestinationString.Buffer) = 274;
        while ( 1 )
        {
          v21 = sub_140A23FCC(a1, v18, *p_DestinationString, 0);
          if ( v21 )
          {
            if ( v21 != -1073741772 && v21 != -1073741811 && v21 != -1073741637 )
              break;
          }
          ++v20;
          p_DestinationString = (int *)(&v37->MaximumLength + 1);
          v37 = (UNICODE_STRING *)((char *)v37 + 4);
          if ( v20 >= 3 )
            goto LABEL_36;
        }
        inited = v21;
        if ( v21 < 0 )
          goto LABEL_74;
LABEL_36:
        sub_140A2A0E4(a1, v18);
        v22 = sub_14076FE20(a1, v18, 0LL, 0xAu, 1u, 0LL, 0, 0);
        if ( v22 )
        {
          if ( v22 != -1073741275 && v22 != -1073741810 )
            goto LABEL_39;
        }
      }
      if ( a5 )
      {
        if ( a1 && (v23 = *(_QWORD *)(a1 + 224)) != 0 )
          v24 = *(_QWORD *)(v23 + 8);
        else
          v24 = 0LL;
        v25 = v36;
        v22 = sub_1406CB238((__int64)v36, (__int64)v15, v24, 0);
      }
      else
      {
        if ( a1 && (v26 = *(_QWORD *)(a1 + 224)) != 0 )
          v27 = *(_QWORD *)(v26 + 8);
        else
          v27 = 0LL;
        v25 = v36;
        v22 = sub_140862B44(v36, v15, v27);
      }
      if ( v22 != -1073741444 )
      {
        if ( v22 < 0 )
        {
LABEL_39:
          inited = v22;
          goto LABEL_74;
        }
        if ( (unsigned __int8)a3 != 18 && ((unsigned __int8)a3 != 17 || (a3 & 0xF00) != 0) )
        {
          v28 = wcsrchr(v15, 0x5Cu);
          if ( v28 && (*v28 = 0, (v29 = wcsrchr(v15, 0x5Cu)) != 0LL) )
          {
            if ( a1 && (v30 = *(_QWORD *)(a1 + 224)) != 0 )
              v31 = *(_QWORD *)(v30 + 8);
            else
              v31 = 0LL;
            v22 = sub_140862B44(v25, v15, v31);
            if ( v22 != -1073741535 )
            {
              if ( v22 < 0 )
                goto LABEL_39;
              *v29 = 0;
              if ( a1 && (v32 = *(_QWORD *)(a1 + 224)) != 0 )
                v33 = *(_QWORD *)(v32 + 8);
              else
                v33 = 0LL;
              v22 = sub_140862B44(v25, v15, v33);
              if ( (int)(v22 + 0x80000000) >= 0 && v22 != -1073741535 )
                goto LABEL_39;
            }
          }
          else
          {
            inited = -1073741595;
          }
        }
      }
      goto LABEL_74;
    }
LABEL_73:
    inited = -1073741811;
  }
LABEL_74:
  if ( Handle )
    ZwClose(Handle);
  if ( v39 )
    ZwClose(v39);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
