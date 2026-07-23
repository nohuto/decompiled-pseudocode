/*
 * XREFs of sub_14071FAA0 @ 0x14071FAA0
 * Callers:
 *     sub_1406A5770 @ 0x1406A5770 (sub_1406A5770.c)
 *     sub_1409F8680 @ 0x1409F8680 (sub_1409F8680.c)
 *     sub_140B0E88C @ 0x140B0E88C (sub_140B0E88C.c)
 *     sub_140B18840 @ 0x140B18840 (sub_140B18840.c)
 *     sub_140B1D10C @ 0x140B1D10C (sub_140B1D10C.c)
 *     sub_140B4B918 @ 0x140B4B918 (sub_140B4B918.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_14023BD3C @ 0x14023BD3C (sub_14023BD3C.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140367AF0 @ 0x140367AF0 (sub_140367AF0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067FF60 @ 0x14067FF60 (sub_14067FF60.c)
 *     sub_140720224 @ 0x140720224 (sub_140720224.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_140915D20 @ 0x140915D20 (sub_140915D20.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14071FAA0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        size_t Size)
{
  char v7; // r14
  char v8; // r15
  char v9; // r13
  unsigned __int8 v10; // bl
  char v11; // si
  unsigned __int64 v12; // rdx
  int v13; // r8d
  signed int v14; // ebx
  unsigned __int8 v15; // al
  unsigned __int16 Length; // bx
  unsigned int v17; // edi
  void *v18; // r12
  unsigned int v19; // r15d
  unsigned int v20; // r14d
  unsigned int v21; // esi
  unsigned int v22; // r13d
  __int64 v23; // rcx
  PPRIVILEGE_SET v24; // rsi
  size_t v25; // r8
  wchar_t *v26; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v28; // r9d
  unsigned int v29; // r13d
  int v30; // r14d
  PVOID v31; // rcx
  int v33; // r8d
  bool v34; // zf
  __int64 v35; // rcx
  unsigned __int8 v36; // [rsp+40h] [rbp-1B8h]
  char v37; // [rsp+41h] [rbp-1B7h]
  char v38; // [rsp+43h] [rbp-1B5h]
  int v39; // [rsp+44h] [rbp-1B4h]
  char v40; // [rsp+49h] [rbp-1AFh]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-1A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-198h] BYREF
  void *Src; // [rsp+68h] [rbp-190h]
  void *v44; // [rsp+70h] [rbp-188h]
  unsigned int v45; // [rsp+78h] [rbp-180h]
  int v46; // [rsp+7Ch] [rbp-17Ch] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-178h]
  unsigned int v48; // [rsp+88h] [rbp-170h]
  __int64 v49; // [rsp+90h] [rbp-168h] BYREF
  __int64 v50; // [rsp+98h] [rbp-160h]
  __int64 v51; // [rsp+A0h] [rbp-158h]
  _QWORD v52[2]; // [rsp+A8h] [rbp-150h] BYREF
  int v53; // [rsp+B8h] [rbp-140h]
  _PRIVILEGE_SET *v54; // [rsp+C0h] [rbp-138h]
  __int128 v55; // [rsp+D0h] [rbp-128h]
  __int128 v56; // [rsp+E0h] [rbp-118h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F0h] [rbp-108h] BYREF
  _QWORD v58[8]; // [rsp+110h] [rbp-E8h] BYREF
  _OWORD v59[2]; // [rsp+150h] [rbp-A8h] BYREF
  _BYTE v60[64]; // [rsp+170h] [rbp-88h] BYREF

  v45 = a4;
  v48 = a3;
  v50 = a1;
  Src = a5;
  v56 = 0LL;
  DestinationString = 0LL;
  v49 = 0LL;
  memset(v59, 0, sizeof(v59));
  v51 = 0LL;
  if ( qword_140D3B008 )
    sub_140223A20((unsigned __int64)v59, 0x20000uLL);
  sub_140347770((__int64)&v56);
  v7 = 0;
  v38 = 0;
  v8 = 0;
  Object = 0LL;
  v9 = 0;
  v37 = 0;
  v53 = -1;
  v52[1] = v52;
  v52[0] = v52;
  memset(v58, 0, sizeof(v58));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v44 = 0LL;
  v54 = 0LL;
  v46 = 0;
  Privileges = 0LL;
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  v36 = v10;
  v11 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v40 = sub_140AB46D0();
  if ( !v40 )
  {
    v14 = -1073741431;
    v39 = -1073741431;
    goto LABEL_73;
  }
  v14 = sub_140AB4630(v50, 2, v13, v10, (__int64)&Object, (__int64)&v49);
  v39 = v14;
  if ( v14 != -1073741790 )
    goto LABEL_5;
  SeCaptureSubjectContext(&SubjectContext);
  v11 = 1;
  if ( !sub_14023BD3C((__int64)&SubjectContext, (__int64)&v46) )
  {
    v14 = -1073741790;
    v39 = -1073741790;
    goto LABEL_73;
  }
  v14 = sub_140AB4630(v50, 131097, v33, v36, (__int64)&Object, (__int64)&v49);
  v39 = v14;
  if ( v14 >= 0 )
  {
    if ( !(unsigned __int8)sub_140915D20(Object) )
    {
      v14 = -1073741790;
      v39 = -1073741790;
      goto LABEL_73;
    }
    v9 = 1;
    v37 = 1;
LABEL_5:
    v11 = v9;
    if ( v14 < 0 )
      goto LABEL_73;
    if ( qword_140D3B008 && Object )
      v51 = *((_QWORD *)Object + 1);
    v15 = v36;
    if ( v36 == 1 )
    {
      v55 = 0LL;
      if ( a2 >= 0x7FFFFFFF0000LL )
        a2 = 0x7FFFFFFF0000LL;
      LODWORD(v55) = *(_DWORD *)a2;
      *((_QWORD *)&v55 + 1) = *(_QWORD *)(a2 + 8);
      DestinationString = (UNICODE_STRING)v55;
      DestinationString.MaximumLength = v55;
      Length = v55;
      if ( (_WORD)v55 )
      {
        if ( ((__int64)DestinationString.Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = (unsigned __int64)DestinationString.Buffer + (unsigned __int16)v55;
        if ( v12 > 0x7FFFFFFF0000LL || (wchar_t *)v12 < DestinationString.Buffer )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          Length = DestinationString.Length;
        }
      }
      v17 = Size;
      v18 = Src;
      if ( (_DWORD)Size
        && ((unsigned __int64)Src + (unsigned int)Size > 0x7FFFFFFF0000LL || (char *)Src + (unsigned int)Size < Src) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        Length = DestinationString.Length;
      }
    }
    else
    {
      DestinationString = *(UNICODE_STRING *)a2;
      v44 = 0LL;
      v17 = Size;
      if ( !(_DWORD)Size )
      {
        Length = DestinationString.Length;
        v18 = Src;
LABEL_18:
        if ( Length > 0x7FFFu || (DestinationString.Length & 1) != 0 || v17 > 0x7FFFF000 )
        {
          v14 = -1073741811;
          v39 = -1073741811;
          v11 = v9;
          goto LABEL_73;
        }
        v19 = Length;
        v20 = (Length + 7) & 0xFFFFFFF8;
        v21 = v20 + v17;
        if ( v20 + v17 < v17 )
        {
          v14 = -1073741811;
          v39 = -1073741811;
          v11 = v9;
          v7 = 0;
          v8 = 0;
          goto LABEL_73;
        }
        v22 = (char)v15;
        if ( (unsigned __int8)sub_140720224((unsigned int)(char)v15, DestinationString.Buffer)
          || (unsigned __int8)sub_140720224(v22, v18) )
        {
          if ( v21 )
          {
            if ( v21 <= 0x40 )
              goto LABEL_25;
            if ( v17 <= 0x40 )
            {
              if ( Length <= 0x40u && v17 < Length )
                v19 = v17;
            }
            else
            {
              v19 = Length > 0x40u ? v20 + v17 : v17;
            }
            if ( v19 )
            {
              Privileges = (PPRIVILEGE_SET)sub_140367AF0(v23, v19, 0x6E566D43u);
              if ( !Privileges )
              {
                v14 = -1073741670;
                v39 = -1073741670;
                v11 = v37;
                v7 = 0;
                v8 = 0;
                goto LABEL_73;
              }
              Length = DestinationString.Length;
              if ( v19 == v17 )
              {
                v44 = v60;
                v24 = Privileges;
              }
              else
              {
                v44 = Privileges;
                if ( v19 == DestinationString.Length )
                  v24 = (PPRIVILEGE_SET)v60;
                else
                  v24 = (PPRIVILEGE_SET)((char *)Privileges + v20);
              }
            }
            else
            {
LABEL_25:
              v44 = v60;
              v24 = (PPRIVILEGE_SET)&v60[v20];
            }
          }
          else
          {
            v24 = v54;
          }
          if ( Length )
          {
            v25 = Length;
            v26 = (wchar_t *)v44;
            memmove(v44, DestinationString.Buffer, v25);
            DestinationString.Buffer = v26;
            Length = DestinationString.Length;
          }
          else
          {
            DestinationString.Buffer = 0LL;
          }
          if ( v17 )
          {
            memmove(v24, v18, v17);
            Src = v24;
            Length = DestinationString.Length;
          }
          else
          {
            Src = 0LL;
          }
        }
        if ( Length )
        {
          v12 = 65534LL;
          do
          {
            if ( DestinationString.Buffer[((unsigned __int64)Length >> 1) - 1] )
              break;
            v34 = Length == 2;
            Length -= 2;
            DestinationString.Length = Length;
          }
          while ( !v34 );
        }
        if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) == 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --*((_WORD *)CurrentThread + 242);
          if ( !dword_140C54CA8 || sub_1402ACD00() )
          {
            v30 = (int)Src;
            v29 = v45;
          }
          else
          {
            v58[0] = Object;
            v58[1] = &DestinationString;
            v58[2] = __PAIR64__(v45, v48);
            v29 = v45;
            v30 = (int)Src;
            v58[3] = Src;
            LODWORD(v58[4]) = v17;
            LOBYTE(v28) = 1;
            v14 = sub_140735760(1, (unsigned int)v58, 0, v28, 16, (__int64)Object, (__int64)v52);
            if ( v14 < 0 )
            {
              if ( v14 == -1073740541 )
                v14 = 0;
              v39 = v14;
              v11 = v37;
              v7 = 0;
              goto LABEL_72;
            }
            v38 = 1;
          }
          if ( !v37 || (v14 = sub_14091607C(&Object, v36, 2LL, &SubjectContext, &v46), v39 = v14, v11 = v37, v14 >= 0) )
          {
            v14 = sub_140720260((_DWORD)Object, (unsigned int)&DestinationString, v29, v30, v17, v50, (v49 & 4) != 0);
            v39 = v14;
            v11 = v37;
          }
          v7 = v38;
LABEL_72:
          v8 = 1;
          goto LABEL_73;
        }
        v14 = -1073741790;
        v39 = -1073741790;
        v11 = v37;
        v7 = 0;
        v8 = 0;
        goto LABEL_73;
      }
      Length = DestinationString.Length;
      v18 = Src;
    }
    v15 = v36;
    goto LABEL_18;
  }
LABEL_73:
  if ( v11 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v7 )
  {
    v14 = sub_14067FF60(16, (__int64)Object, v14, (__int64)v58, 0LL, v52);
    v39 = v14;
  }
  if ( v8 )
  {
    sub_1402F9540((__int64)KeGetCurrentThread());
    v14 = v39;
  }
  v31 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( qword_140D3B008 )
  {
    v35 = v51;
    LOBYTE(v35) = 14;
    sub_14042A5E0(v35, v59);
  }
  if ( Privileges )
    SeFreePrivileges(Privileges);
  if ( v40 )
    sub_140AB42A0(v31, v12);
  sub_14022EA30((__int64 *)&v56);
  return (unsigned int)v14;
}
