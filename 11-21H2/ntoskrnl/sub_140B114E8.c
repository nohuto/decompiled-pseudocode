/*
 * XREFs of sub_140B114E8 @ 0x140B114E8
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_140253DD4 @ 0x140253DD4 (sub_140253DD4.c)
 *     sub_140253E78 @ 0x140253E78 (sub_140253E78.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D21B8 @ 0x1402D21B8 (sub_1402D21B8.c)
 *     sub_1402D26C0 @ 0x1402D26C0 (sub_1402D26C0.c)
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_1403C5C64 @ 0x1403C5C64 (sub_1403C5C64.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403FEE54 @ 0x1403FEE54 (sub_1403FEE54.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14055F1E8 @ 0x14055F1E8 (sub_14055F1E8.c)
 *     sub_14067B694 @ 0x14067B694 (sub_14067B694.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_1406DF254 @ 0x1406DF254 (sub_1406DF254.c)
 *     sub_140772A24 @ 0x140772A24 (sub_140772A24.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     sub_14082E998 @ 0x14082E998 (sub_14082E998.c)
 *     sub_14082EB8C @ 0x14082EB8C (sub_14082EB8C.c)
 *     sub_14082EF44 @ 0x14082EF44 (sub_14082EF44.c)
 *     sub_14082EF8C @ 0x14082EF8C (sub_14082EF8C.c)
 *     sub_14082EFB8 @ 0x14082EFB8 (sub_14082EFB8.c)
 *     sub_140A22D7C @ 0x140A22D7C (sub_140A22D7C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140AF7328 @ 0x140AF7328 (sub_140AF7328.c)
 *     sub_140B0E52C @ 0x140B0E52C (sub_140B0E52C.c)
 *     sub_140B0F20C @ 0x140B0F20C (sub_140B0F20C.c)
 *     sub_140B10CAC @ 0x140B10CAC (sub_140B10CAC.c)
 *     sub_140B10D78 @ 0x140B10D78 (sub_140B10D78.c)
 *     sub_140B10F48 @ 0x140B10F48 (sub_140B10F48.c)
 *     sub_140B1131C @ 0x140B1131C (sub_140B1131C.c)
 *     sub_140B11D58 @ 0x140B11D58 (sub_140B11D58.c)
 *     sub_140B1244C @ 0x140B1244C (sub_140B1244C.c)
 *     sub_140B12560 @ 0x140B12560 (sub_140B12560.c)
 *     sub_140B125BC @ 0x140B125BC (sub_140B125BC.c)
 *     sub_140B12720 @ 0x140B12720 (sub_140B12720.c)
 *     sub_140B26B08 @ 0x140B26B08 (sub_140B26B08.c)
 *     sub_140B286CC @ 0x140B286CC (sub_140B286CC.c)
 *     sub_140B2ABA4 @ 0x140B2ABA4 (sub_140B2ABA4.c)
 *     sub_140B30860 @ 0x140B30860 (sub_140B30860.c)
 *     sub_140B4F76C @ 0x140B4F76C (sub_140B4F76C.c)
 *     sub_140B550AC @ 0x140B550AC (sub_140B550AC.c)
 *     sub_140B55478 @ 0x140B55478 (sub_140B55478.c)
 *     sub_140B55668 @ 0x140B55668 (sub_140B55668.c)
 *     sub_140B55A38 @ 0x140B55A38 (sub_140B55A38.c)
 */

__int64 __fastcall sub_140B114E8(__int64 a1)
{
  NTSTATUS v2; // ebx
  PVOID v3; // r12
  int v4; // eax
  char *v5; // rdx
  unsigned int v6; // r8d
  unsigned __int16 i; // cx
  __int64 v8; // rax
  char *v9; // rax
  unsigned __int16 v10; // bx
  unsigned __int16 v11; // si
  __int64 v12; // r14
  UNICODE_STRING *v13; // r14
  __int64 *v14; // rax
  __int64 v15; // rcx
  UNICODE_STRING *v16; // rbx
  _QWORD *Pool2; // rax
  _QWORD *v18; // rsi
  unsigned int v19; // ebx
  unsigned __int16 v20; // ax
  __int64 **v21; // rdx
  __int64 *j; // rcx
  unsigned __int16 v23; // r15
  __int64 v24; // r13
  _QWORD *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // rbx
  __int64 v31; // rcx
  int v32; // r13d
  unsigned __int16 v33; // r12
  void **v34; // rdx
  void *v35; // rbx
  __int64 v37; // rsi
  _QWORD *v38; // r14
  int v39; // eax
  void **v40; // rax
  __int64 v41; // rdi
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  PVOID v46; // r14
  void *v47; // rsi
  __int64 v48; // rcx
  unsigned __int16 *v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  PVOID v53; // r15
  __int64 v54; // [rsp+30h] [rbp-D0h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  int v57; // [rsp+60h] [rbp-A0h] BYREF
  int v58; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  int v60; // [rsp+70h] [rbp-90h]
  void *v61; // [rsp+78h] [rbp-88h] BYREF
  void *v62; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v63; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING Destination; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v66[2]; // [rsp+B8h] [rbp-48h] BYREF
  const wchar_t *v67; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING String1; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+D8h] [rbp-28h] BYREF
  WCHAR v70[64]; // [rsp+F0h] [rbp-10h] BYREF

  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v58 = 0;
  Handle = 0LL;
  P = 0LL;
  String2 = 0LL;
  *(_DWORD *)(&v63.MaximumLength + 1) = 0;
  String1 = 0LL;
  v66[1] = 0;
  v62 = 0LL;
  v61 = 0LL;
  v57 = 0;
  DestinationString = 0LL;
  Object = 0LL;
  sub_1402D21B8(&stru_14000E5D8, 0, 0LL);
  dword_140D68664 = 3;
  v63.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\EarlyLaunch";
  *(_DWORD *)&v63.Length = 8388734;
  if ( sub_14082EF44(&Handle, 0LL, &v63, 0x20019u) >= 0
    || (*(_DWORD *)&v63.Length = 8257660,
        v63.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\EarlyLaunch",
        sub_14082EF44(&Handle, 0LL, &v63, 0x20019u) >= 0) )
  {
    v2 = sub_14067B838(Handle, L"DriverLoadPolicy", 0, &P);
    ZwClose(Handle);
    if ( v2 >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
        dword_140D68664 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( dword_140D68664 == 8 )
  {
    dword_140D68664 = 0;
  }
  else if ( (dword_140D68664 & 0xFFFFFFF8) != 0 )
  {
    dword_140D68664 = 3;
  }
  sub_140B10CAC((UNICODE_STRING *)a1);
  sub_140B0F20C(a1);
  v66[0] = 2097182;
  v67 = L"\\FileSystem\\RAW";
  Destination.Buffer = (wchar_t *)&word_140B33460;
  *(_DWORD *)&Destination.Length = 0x20000;
  sub_140B11D58((unsigned int)v66, (unsigned int)&Destination, (unsigned int)sub_140B229D0, 0, a1 + 16, 0, 0);
  v3 = Object;
  if ( !Object )
    return 0LL;
  v4 = (unsigned __int16)sub_140B1244C(0LL);
  dword_140C46B40 = v4;
  v60 = 0xFFFF;
  if ( (unsigned __int16)v4 == 0xFFFF
    || (qword_140C46B50 = (PVOID)ExAllocatePool2(256LL, 16LL * (unsigned __int16)v4, 0x6E697050u),
        (v5 = (char *)qword_140C46B50) == 0LL) )
  {
LABEL_106:
    sub_1402D26C0();
    return 0LL;
  }
  v6 = dword_140C46B40;
  for ( i = 0; i < v6; *(_QWORD *)v9 = v9 )
  {
    v8 = i++;
    v9 = &v5[16 * v8];
    *((_QWORD *)v9 + 1) = v9;
  }
  sub_140B10F48(2, a1);
  RtlInitUnicodeString(&DestinationString, L"System Reserved");
  RtlInitUnicodeString(&String2, L"Boot Bus Extender");
  v10 = 0;
  v11 = 0;
  if ( !word_140C54E9C )
    goto LABEL_18;
  do
  {
    v12 = 16LL * v11;
    if ( !RtlCompareUnicodeString((PCUNICODE_STRING)((char *)qword_140C54EA0 + v12), &DestinationString, 1u) )
      goto LABEL_20;
    if ( !RtlCompareUnicodeString((PCUNICODE_STRING)((char *)qword_140C54EA0 + v12), &String2, 1u) )
    {
      LOWORD(v60) = v11;
LABEL_20:
      ++v10;
    }
    if ( v10 >= 2u )
      break;
    ++v11;
  }
  while ( v11 < (unsigned __int16)word_140C54E9C );
  v3 = Object;
LABEL_18:
  v13 = *(UNICODE_STRING **)(a1 + 48);
  while ( v13 != (UNICODE_STRING *)(a1 + 48) )
  {
    v16 = v13;
    v13 = *(UNICODE_STRING **)&v13->Length;
    if ( SLODWORD(v16[3].Buffer) >= 0 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 0x30uLL, 0x6E697050u);
      v18 = Pool2;
      if ( Pool2 )
      {
        Pool2[1] = Pool2;
        *Pool2 = Pool2;
        Pool2[3] = v16;
        if ( sub_14082EF44(&Handle, 0LL, v16 + 2, 0x20019u) < 0 )
        {
          ExFreePoolWithTag(v18, 0);
        }
        else
        {
          v18[4] = Handle;
          v19 = (unsigned __int16)sub_140B1244C(Handle);
          v20 = sub_140B1131C(Handle);
          *((_WORD *)v18 + 22) = v20;
          v21 = (__int64 **)((char *)qword_140C46B50 + 16 * v19);
          for ( j = *v21; j != (__int64 *)v21 && *((_WORD *)j + 22) <= v20; j = (__int64 *)*j )
            ;
          v14 = (__int64 *)j[1];
          v15 = *v14;
          if ( *(__int64 **)(*v14 + 8) != v14 )
            goto LABEL_133;
          *v18 = v15;
          v18[1] = v14;
          *(_QWORD *)(v15 + 8) = v18;
          *v14 = (__int64)v18;
        }
      }
    }
  }
  sub_140B12720(1LL);
  v23 = 0;
  if ( dword_140C46B40 )
  {
    while ( 1 )
    {
      v24 = 16LL * v23;
      v25 = *(_QWORD **)((char *)qword_140C46B50 + v24);
      if ( v25 != (_QWORD *)((char *)qword_140C46B50 + v24) )
        break;
LABEL_33:
      if ( v23 == (_WORD)v60 )
      {
        sub_140AF7328(0LL, 0);
        byte_140C46299 = 1;
        qword_140C45DF8 = (__int64)sub_140820280;
      }
      if ( ++v23 >= (unsigned int)dword_140C46B40 )
        goto LABEL_36;
    }
    v37 = 0LL;
    while ( 2 )
    {
      Handle = (HANDLE)v25[4];
      v38 = (_QWORD *)v25[3];
      Object = v38;
      *(_QWORD *)&DestinationString.Length = v38[6];
      *((_BYTE *)v25 + 47) = 1;
      if ( (int)sub_14067B694(Handle, &Destination) < 0 )
      {
        *((_BYTE *)v25 + 46) = 1;
      }
      else
      {
        if ( sub_14067B838(Handle, L"Group", 0, &P) >= 0 )
        {
          v38 = P;
          if ( *((_DWORD *)P + 3) )
          {
            String1.Length = *((_WORD *)P + 6);
            String1.MaximumLength = String1.Length;
            String1.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
            v37 = sub_140B125BC(&String1);
          }
          ExFreePoolWithTag(v38, 0);
          LODWORD(v38) = (_DWORD)Object;
        }
        v3 = 0LL;
        if ( !(unsigned int)sub_140B12560(Handle) )
          goto LABEL_92;
        v3 = (PVOID)v25[2];
        Object = v3;
        if ( v3 || *((_BYTE *)v25 + 46) )
        {
LABEL_68:
          if ( !v3 )
            goto LABEL_92;
          if ( v37 )
            ++*(_DWORD *)(v37 + 28);
          v25[2] = v3;
        }
        else
        {
          v39 = sub_140B11D58(
                  (unsigned int)&Destination,
                  (int)v38 + 32,
                  *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 56LL),
                  *(_DWORD *)&DestinationString.Length,
                  a1 + 16,
                  0,
                  1);
          v3 = Object;
          *((_DWORD *)v25 + 10) = v39;
          if ( v3 )
          {
            ObfReferenceObject(v3);
            goto LABEL_68;
          }
LABEL_92:
          *((_BYTE *)v25 + 46) = 1;
        }
        ExFreePoolWithTag(Destination.Buffer, 0);
        v37 = 0LL;
      }
      if ( !*((_BYTE *)v25 + 46) )
      {
        sub_140253E78();
        sub_140B4F76C((__int64)v3);
        sub_140253DD4();
        sub_14082EFB8();
        sub_1402DCF44(0LL, 7, 0, 0LL, 0LL, 0LL, 0LL);
      }
      if ( sub_14082EF8C() < 0 )
        goto LABEL_106;
      v25 = (_QWORD *)*v25;
      if ( v25 == (_QWORD *)((char *)qword_140C46B50 + v24) )
        goto LABEL_33;
      continue;
    }
  }
LABEL_36:
  sub_140B12720(2LL);
  sub_140B26B08(a1);
  byte_140C46298 = 1;
  sub_1402DCF44(0LL, 0, 0, 0LL, 0LL, 0LL, 0LL);
  if ( !sub_140B10D78()
    || (unsigned __int8)sub_140B2ABA4() && !sub_140B10D78()
    || !(unsigned int)sub_1403FEE54(*(_QWORD *)(a1 + 184), "ramdisk(", 8LL)
    && (int)sub_140B550AC(a1) >= 0
    && !sub_140B10D78()
    || (int)sub_140B30860(a1) >= 0 && !sub_140B10D78() )
  {
    goto LABEL_106;
  }
  if ( (int)sub_140B0E52C(a1) < 0 )
    return 0LL;
  sub_1403C5C64(a1, 1, (__int64)sub_140B0E670, 0LL);
  v26 = *(_QWORD *)(a1 + 240);
  byte_140C4629A = 1;
  if ( (*(_DWORD *)(v26 + 132) & 0x400) != 0
    && ((int)sub_140B55668() < 0 || (int)sub_140B55A38() < 0 || (int)sub_140B55478() < 0) )
  {
    return 0LL;
  }
  v27 = *(_QWORD *)(a1 + 336);
  v28 = 0LL;
  if ( v27 )
  {
    v43 = sub_1403C5C64(a1, 3, (__int64)&sub_140B4F790, v27);
    v28 = (unsigned int)v43;
    if ( v43 < 0 )
      return 0LL;
  }
  v29 = *(_QWORD *)(a1 + 240) + 312LL;
  v30 = *(__int64 **)v29;
  if ( *(_QWORD *)v29 != v29 )
  {
    do
    {
      v29 = *((unsigned int *)v30 + 6);
      if ( (v29 & 0x80u) != 0LL )
      {
        v44 = sub_1403C5C64(a1, 4, (__int64)&sub_140B4F790, v30[11]);
        v28 = (unsigned int)v44;
        if ( v44 < 0 )
          return 0LL;
      }
      v30 = (__int64 *)*v30;
    }
    while ( v30 != (__int64 *)(*(_QWORD *)(a1 + 240) + 312LL) );
    if ( (int)v28 < 0 )
      return 0LL;
  }
  if ( (int)sub_140B286CC(v29, v28) < 0 )
    return 0LL;
  v70[0] = 0;
  v32 = sub_14082E998(v31, &v58);
  if ( v32 >= 0 )
  {
    LODWORD(v54) = v58;
    v32 = sub_1402DFBC4(v70, 0x40uLL, 0LL, 0LL, 0x800u, L"%d", v54);
  }
  v33 = 0;
  if ( dword_140C46B40 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v34 = (void **)((char *)qword_140C46B50 + 16 * v33);
        v35 = *v34;
        if ( *v34 != v34 )
          break;
        if ( ++v33 >= (unsigned int)dword_140C46B40 )
          goto LABEL_56;
      }
      if ( *((void ***)v35 + 1) != v34 )
        break;
      v40 = *(void ***)v35;
      if ( *(void **)(*(_QWORD *)v35 + 8LL) != v35 )
        break;
      *v34 = v40;
      v40[1] = v34;
      v41 = *((_QWORD *)v35 + 2);
      if ( v32 >= 0 && !*((_BYTE *)v35 + 46) && !*(_QWORD *)(v41 + 8) )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v41 + 48) + 8LL) )
        {
          v42 = *(_DWORD *)(v41 + 16);
          if ( (v42 & 0x400) == 0 && (v42 & 8) == 0 && sub_14067B838(*((HANDLE *)v35 + 4), L"Start", 0, &P) >= 0 )
          {
            v46 = P;
            if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
            {
              v57 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
              if ( !v57 )
              {
                v57 = 3;
                if ( (int)sub_1406DF254((UNICODE_STRING *)(*(_QWORD *)(v41 + 48) + 24LL), v45, &v62) >= 0 )
                {
                  v47 = v62;
                }
                else
                {
                  v47 = (void *)*((_QWORD *)v35 + 4);
                  v62 = v47;
                }
                if ( (int)sub_140772A24(
                            *(__int64 *)&qword_140D00AC0,
                            (__int64)v47,
                            (__int64)L"StartOverride",
                            0,
                            2u,
                            0LL,
                            (__int64)&v61,
                            0LL) >= 0 )
                {
                  sub_140A22D7C(4LL, v61, v70, 4u, &v57, 4u);
                  sub_14082EB8C(v48, v61);
                  v61 = 0LL;
                  if ( (byte_140C0DD4B & 1) != 0 )
                  {
                    v49 = (unsigned __int16 *)(*(_QWORD *)(v41 + 48) + 24LL);
                    Object = 0LL;
                    if ( (int)sub_140779CA0((__int16 **)&Object, 0LL, v49) >= 0 )
                    {
                      v53 = Object;
                      if ( (byte_140C0DD4B & 1) != 0 )
                        sub_14055F1E8(v51, v50, v52, v58, (const wchar_t *)Object, v57);
                      sub_14077BAB8(v53, *(_QWORD *)(v41 + 48) + 24LL);
                    }
                  }
                }
                if ( v47 != *((void **)v35 + 4) )
                {
                  ZwClose(v47);
                  v62 = 0LL;
                }
              }
            }
            ExFreePoolWithTag(v46, 0);
          }
        }
      }
      if ( v41 )
        ObfDereferenceObject((PVOID)v41);
      if ( *((_BYTE *)v35 + 46) )
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v35 + 3) + 48LL) + 104LL) |= 0x20000u;
      ZwClose(*((HANDLE *)v35 + 4));
      ExFreePoolWithTag(v35, 0);
    }
LABEL_133:
    __fastfail(3u);
  }
LABEL_56:
  ExFreePoolWithTag(qword_140C46B50, 0);
  sub_1402D21B8(&stru_14000E5C8, 0, 0LL);
  return 1LL;
}
