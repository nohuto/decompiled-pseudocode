/*
 * XREFs of sub_1406C9390 @ 0x1406C9390
 * Callers:
 *     <none>
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 *     sub_140974020 @ 0x140974020 (sub_140974020.c)
 *     sub_1409743A4 @ 0x1409743A4 (sub_1409743A4.c)
 *     sub_14097471C @ 0x14097471C (sub_14097471C.c)
 *     sub_140976F90 @ 0x140976F90 (sub_140976F90.c)
 *     sub_14097723C @ 0x14097723C (sub_14097723C.c)
 *     sub_1409777B4 @ 0x1409777B4 (sub_1409777B4.c)
 *     sub_140977B70 @ 0x140977B70 (sub_140977B70.c)
 *     sub_140977CBC @ 0x140977CBC (sub_140977CBC.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406C9390(int a1, char *a2, unsigned int a3, unsigned __int64 a4)
{
  _DWORD *v4; // r12
  SIZE_T v5; // r15
  KPROCESSOR_MODE AccessMode; // bl
  NTSTATUS v9; // ebx
  __int64 v10; // r14
  KPROCESSOR_MODE v11; // si
  __int64 CurrentServerSilo; // rbx
  int v14; // edx
  unsigned int v15; // r12d
  ULONG v16; // r8d
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned int v23; // eax
  char *v24; // rcx
  int v25; // esi
  int v26; // esi
  int v27; // esi
  KPROCESSOR_MODE v28; // [rsp+40h] [rbp-118h]
  int v29; // [rsp+44h] [rbp-114h]
  unsigned int Size; // [rsp+58h] [rbp-100h] BYREF
  int Size_4; // [rsp+5Ch] [rbp-FCh]
  unsigned __int64 v33; // [rsp+60h] [rbp-F8h]
  PVOID P; // [rsp+68h] [rbp-F0h]
  PVOID Src; // [rsp+70h] [rbp-E8h]
  PVOID v36; // [rsp+78h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int64 v38; // [rsp+90h] [rbp-C8h]
  _QWORD SourceSid[14]; // [rsp+A0h] [rbp-B8h] BYREF

  v4 = (_DWORD *)a4;
  v5 = a3;
  v38 = a4;
  v33 = a4;
  DestinationString = 0LL;
  memset(SourceSid, 0, 0x64uLL);
  P = 0LL;
  Src = 0LL;
  v36 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Size = 0;
  AccessMode = *((_BYTE *)KeGetCurrentThread() + 562);
  v28 = AccessMode;
  v29 = -1073741823;
  if ( (dword_140C533E4 & 1) == 0 )
  {
    v9 = -1073741637;
LABEL_3:
    v29 = v9;
    v10 = 0x7FFFFFFF0000LL;
LABEL_4:
    v11 = v28;
    goto LABEL_5;
  }
  if ( !byte_140C533E0 )
  {
    v9 = -1073741661;
    goto LABEL_3;
  }
  if ( a1 < 7 || a1 > 9 )
  {
    if ( !SeSinglePrivilegeCheck(PrivilegeValue, AccessMode) )
    {
      v9 = -1073741727;
      goto LABEL_3;
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( CurrentServerSilo != PsGetHostSilo() )
    {
      v9 = -1073741790;
      goto LABEL_3;
    }
    AccessMode = v28;
  }
  v14 = 0;
  Size_4 = 0;
  if ( a1 <= 5 )
  {
    if ( a1 != 5 )
    {
      if ( !a1 )
      {
LABEL_35:
        v15 = 104;
        goto LABEL_45;
      }
      if ( a1 == 1 )
      {
LABEL_32:
        v15 = 80;
LABEL_34:
        v14 = 1;
        v16 = 4;
        Size_4 = 1;
        goto LABEL_46;
      }
      if ( a1 != 2 )
      {
        if ( a1 != 3 )
        {
          if ( a1 == 4 )
            goto LABEL_32;
LABEL_41:
          v9 = -1073741821;
          goto LABEL_3;
        }
        goto LABEL_35;
      }
    }
    v15 = 96;
    goto LABEL_45;
  }
  switch ( a1 )
  {
    case 6:
      v15 = 40;
      break;
    case 7:
      v14 = 1;
      v15 = 32;
      Size_4 = 1;
      break;
    case 8:
      v15 = 48;
      break;
    case 9:
      v15 = 8;
      goto LABEL_34;
    default:
      goto LABEL_41;
  }
LABEL_45:
  v16 = 8;
LABEL_46:
  if ( (unsigned int)v5 < v15 )
  {
    v9 = -1073741820;
    v29 = -1073741820;
    v10 = 0x7FFFFFFF0000LL;
LABEL_48:
    v4 = (_DWORD *)a4;
    goto LABEL_4;
  }
  if ( AccessMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    v17 = 0x7FFFFFFF0000LL;
    if ( a4 < 0x7FFFFFFF0000LL )
      v17 = a4;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    if ( v14 )
    {
      if ( (_DWORD)v5 )
      {
        if ( ((v16 - 1) & (unsigned int)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&a2[v5] > 0x7FFFFFFF0000LL || &a2[v5] < a2 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      ProbeForWrite(a2, v5, v16);
    }
    memmove(SourceSid, a2, v15);
  }
  else
  {
    memmove(SourceSid, a2, v15);
    v10 = 0x7FFFFFFF0000LL;
  }
  if ( a1 <= 5 )
  {
    if ( a1 != 5 )
    {
      if ( !a1 )
        goto LABEL_81;
      if ( a1 == 1 )
        goto LABEL_68;
      if ( a1 != 2 )
      {
        if ( a1 != 3 )
        {
LABEL_68:
          if ( LODWORD(SourceSid[0]) == 1 )
          {
            if ( a1 != 4 )
            {
              v18 = sub_140977B70(HIDWORD(SourceSid[0]), LODWORD(SourceSid[1]));
              goto LABEL_77;
            }
            if ( RtlValidSid((char *)&SourceSid[1] + 4) )
            {
              v18 = sub_140977CBC((char *)&SourceSid[1] + 4, (char *)SourceSid + 4);
LABEL_77:
              v9 = v18;
              v19 = v18;
              v20 = (unsigned int)a1;
LABEL_79:
              v29 = v18;
              sub_14097471C(v20, SourceSid, 0LL, v19);
LABEL_80:
              v21 = 0LL;
              goto LABEL_121;
            }
            goto LABEL_75;
          }
          goto LABEL_72;
        }
LABEL_81:
        if ( LODWORD(SourceSid[0]) == 2 && LOWORD(SourceSid[1]) )
        {
          if ( AccessMode )
          {
            if ( (SourceSid[2] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v22 = SourceSid[2] + LOWORD(SourceSid[1]);
            if ( v22 > 0x7FFFFFFF0000LL || v22 < SourceSid[2] )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v9 = RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)&SourceSid[1], &DestinationString);
          v29 = v9;
          if ( v9 < 0 )
            goto LABEL_48;
          if ( a1 != 3 )
          {
            v23 = sub_140974020(&DestinationString, 1LL, (char *)&SourceSid[11] + 4, &SourceSid[12]);
            goto LABEL_94;
          }
          if ( RtlValidSid(&SourceSid[3]) )
          {
            v23 = sub_1409743A4(&DestinationString, &SourceSid[3], (char *)&SourceSid[11] + 4);
LABEL_94:
            v29 = v23;
            v9 = v23;
            sub_14097471C((unsigned int)a1, SourceSid, &DestinationString, v23);
            v21 = SourceSid;
            Size = v15;
            goto LABEL_121;
          }
LABEL_75:
          v9 = -1073741704;
          goto LABEL_74;
        }
LABEL_72:
        v9 = -1073741811;
LABEL_74:
        v29 = v9;
        goto LABEL_48;
      }
    }
    if ( LODWORD(SourceSid[0]) != 2 )
      goto LABEL_72;
    v24 = 0LL;
    if ( a1 == 5 )
    {
      if ( !RtlValidSid((char *)SourceSid + 4) )
        goto LABEL_75;
      v24 = (char *)SourceSid + 4;
    }
    v9 = sub_140976F90(v24, v5);
    v29 = v9;
    if ( v9 < 0 )
      goto LABEL_48;
    if ( Size <= (unsigned int)v5 )
    {
      v21 = P;
      goto LABEL_121;
    }
LABEL_73:
    v9 = -1073741789;
    goto LABEL_74;
  }
  v25 = a1 - 6;
  if ( v25 )
  {
    v26 = v25 - 1;
    if ( !v26 )
    {
      v18 = sub_140971DC0(SourceSid);
      v9 = v18;
      v19 = v18;
      v20 = 7LL;
      goto LABEL_79;
    }
    v27 = v26 - 1;
    if ( v27 )
    {
      if ( v27 == 1 )
      {
        if ( SourceSid[0] == 1LL )
        {
          v9 = 0;
          v29 = 0;
          goto LABEL_80;
        }
        goto LABEL_72;
      }
      v21 = 0LL;
      v9 = -1073741823;
    }
    else
    {
      if ( LODWORD(SourceSid[0]) != 1 || SourceSid[1] != -1LL || LODWORD(SourceSid[3]) )
        goto LABEL_72;
      v9 = sub_1409777B4((unsigned int)&v36, (unsigned int)&Size, (unsigned int)&SourceSid[2], 0, (__int64)a2, v5);
      v29 = v9;
      if ( v9 < 0 )
      {
        v11 = v28;
        goto LABEL_126;
      }
      if ( Size > (unsigned int)v5 )
        goto LABEL_73;
      v21 = v36;
    }
  }
  else
  {
    if ( LODWORD(SourceSid[0]) != 3 && (LODWORD(SourceSid[0]) < 2 || LODWORD(SourceSid[0]) > 3) )
      goto LABEL_72;
    v9 = sub_14097723C((HANDLE)SourceSid[1], v5, AccessMode, SourceSid[0]);
    v29 = v9;
    if ( v9 < 0 )
      goto LABEL_48;
    if ( Size > (unsigned int)v5 )
      goto LABEL_73;
    v21 = Src;
  }
LABEL_121:
  v11 = v28;
  if ( !Size_4 )
  {
    if ( v28 )
    {
      memmove(a2, v21, Size);
      v4 = (_DWORD *)a4;
      goto LABEL_5;
    }
    memmove(a2, v21, Size);
  }
LABEL_126:
  v4 = (_DWORD *)a4;
LABEL_5:
  if ( v11 )
  {
    if ( (unsigned __int64)v4 < 0x7FFFFFFF0000LL )
      v10 = v38;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    *v4 = Size;
    v9 = v29;
  }
  else
  {
    *v4 = Size;
  }
  RtlFreeUnicodeString(&DestinationString);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v36 )
    ExFreePoolWithTag(v36, 0);
  return (unsigned int)v9;
}
