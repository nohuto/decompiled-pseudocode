/*
 * XREFs of sub_1406DD184 @ 0x1406DD184
 * Callers:
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_1402A1A20 @ 0x1402A1A20 (sub_1402A1A20.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_1406DD50C @ 0x1406DD50C (sub_1406DD50C.c)
 *     sub_14070AAD0 @ 0x14070AAD0 (sub_14070AAD0.c)
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140914914 @ 0x140914914 (sub_140914914.c)
 *     sub_140AB4138 @ 0x140AB4138 (sub_140AB4138.c)
 *     sub_140AB4178 @ 0x140AB4178 (sub_140AB4178.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_1406DD184(
        __int64 a1,
        const UNICODE_STRING *a2,
        int a3,
        struct _LOOKASIDE_LIST_EX *a4,
        __int64 a5,
        char a6,
        struct _KEVENT *a7,
        __int64 a8,
        char a9,
        __int64 a10,
        ULONG_PTR *a11)
{
  int v12; // r13d
  __int64 v15; // rdi
  unsigned __int16 *v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // r8
  _PRIVILEGE_SET *v20; // rax
  struct _LOOKASIDE_LIST_EX *v21; // r9
  int v22; // ebx
  PVOID v23; // rax
  int v24; // edx
  signed int v25; // eax
  signed int v26; // ebx
  ULONG_PTR v27; // rsi
  __int64 v28; // r12
  signed int v29; // eax
  __int64 v30; // r8
  unsigned __int8 *v32; // rdx
  unsigned __int8 v33; // r9
  UNICODE_STRING *p_Destination; // rax
  NTSTATUS v35; // ebx
  int v36; // ebx
  void *v37; // rcx
  NTSTATUS v38; // eax
  unsigned int v39; // r9d
  int v40; // r11d
  int v41; // r9d
  int v42; // r10d
  __int64 v43; // r15
  int v44; // r8d
  int v45; // r9d
  unsigned int Object; // [rsp+20h] [rbp-E0h]
  char v47[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v48[4]; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v49; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR v50; // [rsp+70h] [rbp-90h] BYREF
  PVOID v51; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-78h] BYREF
  __int64 v54; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR *v55; // [rsp+98h] [rbp-68h]
  struct _KEVENT *v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  __int64 v58; // [rsp+B0h] [rbp-50h]
  struct _LOOKASIDE_LIST_EX *v59; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING Destination; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61[3]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+100h] [rbp+0h] BYREF
  PPRIVILEGE_SET *v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  PVOID *v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]
  char *v67; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]
  char *v69; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]
  PVOID *v71; // [rsp+160h] [rbp+60h]
  __int64 v72; // [rsp+168h] [rbp+68h]
  __int64 v73; // [rsp+170h] [rbp+70h]
  __int64 v74; // [rsp+178h] [rbp+78h]
  __int64 v75; // [rsp+180h] [rbp+80h]
  __int64 v76; // [rsp+188h] [rbp+88h]
  __int64 v77; // [rsp+190h] [rbp+90h]
  __int64 v78; // [rsp+198h] [rbp+98h]
  __int64 v79; // [rsp+1A0h] [rbp+A0h]
  __int64 v80; // [rsp+1A8h] [rbp+A8h]
  __int64 v81; // [rsp+1B0h] [rbp+B0h]
  __int64 v82; // [rsp+1B8h] [rbp+B8h]
  __int64 v83; // [rsp+1C0h] [rbp+C0h]
  int v84; // [rsp+1C8h] [rbp+C8h]
  int v85; // [rsp+1CCh] [rbp+CCh]
  __int64 *v86; // [rsp+1D0h] [rbp+D0h]
  __int64 v87; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+1E0h] [rbp+E0h] BYREF
  PPRIVILEGE_SET *p_Privileges; // [rsp+200h] [rbp+100h]
  __int64 v90; // [rsp+208h] [rbp+108h]
  ULONG_PTR *v91; // [rsp+210h] [rbp+110h]
  __int64 v92; // [rsp+218h] [rbp+118h]
  __int64 *v93; // [rsp+220h] [rbp+120h]
  __int64 v94; // [rsp+228h] [rbp+128h]

  v54 = a5;
  v56 = a7;
  v12 = (int)a4;
  v57 = a8;
  v58 = a10;
  v15 = 0LL;
  v55 = a11;
  v16 = *(unsigned __int16 **)(a1 + 16);
  v48[0] = 0;
  Destination = 0LL;
  v59 = a4;
  memset(v61, 0, sizeof(v61));
  v50 = 0LL;
  Handle = 0LL;
  v17 = *v16;
  LODWORD(v51) = 0;
  if ( (unsigned __int16)v17 >= 2u )
  {
    LODWORD(v18) = v17 >> 1;
    if ( v17 >> 1 )
    {
      do
      {
        v19 = *(_QWORD *)(a1 + 16);
        v18 = (unsigned int)(v18 - 1);
        if ( *(_WORD *)(*(_QWORD *)(v19 + 8) + 2 * v18) != 92 )
          break;
        *(_WORD *)v19 -= 2;
      }
      while ( (_DWORD)v18 );
    }
  }
  if ( **(_WORD **)(a1 + 16) < 2u )
  {
    v26 = -1073741811;
    goto LABEL_34;
  }
  v20 = (_PRIVILEGE_SET *)Allocate(PagedPool, 0x104uLL, 0x62534D43u, a4);
  Privileges = v20;
  if ( !v20 )
  {
    v26 = -1073741670;
    goto LABEL_34;
  }
  Destination.Buffer = (wchar_t *)v20;
  Destination.MaximumLength = 260;
  if ( (unsigned __int8)sub_1406DD50C(*(PUNICODE_STRING *)(a1 + 16), &Destination) )
  {
    p_Destination = &Destination;
    if ( Destination.Length == 2 )
      p_Destination = (UNICODE_STRING *)a2;
    a2 = p_Destination;
  }
  if ( !(unsigned __int8)sub_140AB4138() )
  {
    v26 = -1073741431;
    goto LABEL_23;
  }
  v22 = ((a3 & 0x2000) != 0 ? 3 : 0) | 8;
  if ( (a3 & 0x4000) == 0 )
    v22 = (a3 & 0x2000) != 0 ? 3 : 0;
  v23 = Allocate(PagedPool, 0x1B0uLL, 0x33394D43u, v21);
  v15 = (__int64)v23;
  if ( !v23 )
  {
    v26 = -1073741670;
    goto LABEL_22;
  }
  memset(v23, 0, 0x1B0uLL);
  v47[0] = 1;
  v24 = v22 | 4;
  if ( !v54 )
    v24 = v22;
  v25 = sub_14070AAD0(
          (_DWORD)a2,
          ((a3 & 0xFFFFF221 | (2 * (a3 & 0x480 | (2 * (a3 & 0x20 | ((a3 & 4) << 6)))))) << 19) | 0x1090001,
          v24,
          v57,
          (__int64)v48,
          v15);
  v26 = v25;
  if ( v25 < 0 )
  {
    if ( v25 != -1073741757 )
    {
      sub_14020A890(v15, 0, 31, v25, 0x10u);
      v27 = v50;
      goto LABEL_20;
    }
    if ( (int)sub_140713F8C(a2, 8, v57, 0LL, 0LL, 0LL, v15) >= 0 )
    {
      v51 = 0LL;
      v35 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)qword_140C49878, 0, &v51, 0LL);
      ZwClose(Handle);
      if ( v35 < 0 )
      {
        Object = 48;
      }
      else
      {
        v36 = sub_140914914(a1, (_DWORD)v51, a3, v12, (__int64)v56, v15, a9, v58, (__int64)v55);
        ObfDereferenceObject(v51);
        if ( v36 >= 0 )
        {
          v27 = v50;
          goto LABEL_19;
        }
        Object = 64;
      }
    }
    else
    {
      Object = 32;
    }
    v26 = -1073741757;
    sub_14020A890(v15, 0, 31, 0xC0000043, Object);
    v27 = v50;
    goto LABEL_20;
  }
  v27 = v50;
  if ( (a3 & 0x2000) != 0 )
  {
    v37 = *(void **)(v50 + 1544);
    Handle = 0LL;
    v38 = ObReferenceObjectByHandle(v37, 0, *(POBJECT_TYPE *)qword_140C49878, 0, &Handle, 0LL);
    v26 = v38;
    if ( v38 < 0 )
    {
      sub_14020A890(v15, 0, 31, v38, 0x50u);
      goto LABEL_20;
    }
    v28 = (__int64)v59;
    v26 = sub_140914914(a1, (_DWORD)Handle, a3, (_DWORD)v59, (__int64)v56, v15, a9, v58, (__int64)v55);
    ObfDereferenceObject(Handle);
    if ( v26 < 0 )
    {
      if ( v26 == -1073741275 )
        goto LABEL_16;
      sub_14020A890(v15, 0, 31, v26, 0x60u);
LABEL_20:
      if ( v27 )
      {
        sub_140AB4550(v61);
        sub_14065A7E0(v27);
        sub_140AB4580(v61);
      }
      goto LABEL_22;
    }
LABEL_19:
    v26 = 0;
    goto LABEL_20;
  }
  v28 = (__int64)v59;
LABEL_16:
  if ( a6 )
    *(_DWORD *)(v27 + 4112) |= 0x2000u;
  v29 = sub_14020AABC(v27, (_QWORD *)a1, a3, v28, v54, v56, a9, v55, v47[0], v48[0], v15);
  v26 = v29;
  v27 = 0LL;
  if ( v29 >= 0 )
    goto LABEL_19;
  sub_14020A890(v15, 0, 31, v29, 0x70u);
LABEL_22:
  sub_140AB4178();
LABEL_23:
  SeFreePrivileges(Privileges);
  if ( v26 >= 0 )
  {
    if ( (unsigned int)dword_140C03868 <= 5 || !sub_1402A2000((__int64)&dword_140C03868, 0x400000000008LL) )
      goto LABEL_26;
    v54 = 0x1000000LL;
    p_Privileges = &Privileges;
    v32 = (unsigned __int8 *)&dword_14002908C;
    v94 = 8LL;
    v91 = &v50;
    v33 = 5;
    v93 = &v54;
LABEL_30:
    Privileges = (PPRIVILEGE_SET)1;
    v90 = 8LL;
    LODWORD(v50) = v26;
    v92 = 4LL;
    sub_1402A1A20((__int64)&dword_140C03868, v32, v30, v33, &v88);
    goto LABEL_26;
  }
  if ( v15 && (*(_WORD *)(v15 + 8) || *(_WORD *)(v15 + 10) || *(_BYTE *)(v15 + 394)) )
  {
    if ( (unsigned int)dword_140C03868 > 5 )
    {
      if ( sub_1402A2000((__int64)&dword_140C03868, 0x400000000008LL) )
      {
        Privileges = (PPRIVILEGE_SET)1;
        v41 = *(unsigned __int16 *)(v15 + 10);
        v42 = *(unsigned __int8 *)(v15 + 394);
        v63 = &Privileges;
        v43 = v15 + 12;
        LOWORD(v51) = v42;
        v65 = (PVOID *)&v50;
        v67 = v47;
        v69 = (char *)&v49;
        v71 = &v51;
        v79 = v15 + 108;
        v80 = (unsigned int)(12 * v41);
        v83 = v15 + 396;
        v86 = &v54;
        v49 = v41;
        v76 = (unsigned int)(12 * v40);
        v77 = v15 + 10;
        v64 = 8LL;
        LODWORD(v50) = v26;
        v66 = 4LL;
        *(_WORD *)v47 = v40;
        v68 = 2LL;
        v70 = 2LL;
        v72 = 2LL;
        v73 = v15 + 8;
        v74 = 2LL;
        v75 = v15 + 12;
        v78 = 2LL;
        v81 = v15 + 394;
        v82 = 2LL;
        v84 = 8 * v42;
        v85 = 0;
        v54 = 0x1000000LL;
        v87 = 8LL;
        sub_1402A1A20((__int64)&dword_140C03868, (unsigned __int8 *)&byte_140029125, v15 + 394, 0xEu, &v62);
        v39 = dword_140C03868;
      }
      else
      {
        v43 = v15 + 12;
      }
      if ( v39 > 5 && sub_1402A2000((__int64)&dword_140C03868, 8LL) )
      {
        LODWORD(v50) = v26;
        v63 = (PPRIVILEGE_SET *)&v50;
        LOWORD(v51) = *(_WORD *)(v15 + 8);
        v65 = &v51;
        v44 = *(unsigned __int16 *)(v15 + 10);
        v67 = (char *)&v49;
        v45 = *(unsigned __int8 *)(v15 + 394);
        v74 = 12 * (unsigned int)(unsigned __int16)v51;
        v77 = v15 + 108;
        v78 = (unsigned int)(12 * v44);
        *(_WORD *)v47 = v45;
        v81 = v15 + 396;
        v49 = v44;
        v75 = v15 + 10;
        v79 = v15 + 394;
        v82 = (unsigned int)(8 * v45);
        v64 = 4LL;
        v66 = 2LL;
        v68 = 2LL;
        v69 = v47;
        v70 = 2LL;
        v71 = (PVOID *)(v15 + 8);
        v72 = 2LL;
        v73 = v43;
        v76 = 2LL;
        v80 = 2LL;
        sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_140028F53, 0LL, 0LL, 0xCu, &v62);
      }
    }
    goto LABEL_27;
  }
LABEL_34:
  if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x400000000000LL) )
  {
    v33 = 4;
    p_Privileges = &Privileges;
    v32 = (unsigned __int8 *)&byte_1400290DF;
    v91 = &v50;
    goto LABEL_30;
  }
LABEL_26:
  if ( v15 )
LABEL_27:
    SeFreePrivileges((PPRIVILEGE_SET)v15);
  return (unsigned int)v26;
}
