/*
 * XREFs of sub_14067CE4C @ 0x14067CE4C
 * Callers:
 *     sub_14067CDE0 @ 0x14067CDE0 (sub_14067CDE0.c)
 *     sub_14069061C @ 0x14069061C (sub_14069061C.c)
 *     sub_140690FEC @ 0x140690FEC (sub_140690FEC.c)
 *     sub_1406E9A30 @ 0x1406E9A30 (sub_1406E9A30.c)
 *     sub_140811C00 @ 0x140811C00 (sub_140811C00.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140367AF0 @ 0x140367AF0 (sub_140367AF0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067D9F4 @ 0x14067D9F4 (sub_14067D9F4.c)
 *     sub_14067DA70 @ 0x14067DA70 (sub_14067DA70.c)
 *     sub_14067DB18 @ 0x14067DB18 (sub_14067DB18.c)
 *     sub_14067DE4C @ 0x14067DE4C (sub_14067DE4C.c)
 *     sub_14067FE98 @ 0x14067FE98 (sub_14067FE98.c)
 *     sub_14067FF00 @ 0x14067FF00 (sub_14067FF00.c)
 *     sub_14067FF60 @ 0x14067FF60 (sub_14067FF60.c)
 *     ObDeleteCapturedInsertInfo @ 0x140680050 (ObDeleteCapturedInsertInfo.c)
 *     sub_1406800D0 @ 0x1406800D0 (sub_1406800D0.c)
 *     sub_1406DD184 @ 0x1406DD184 (sub_1406DD184.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4138 @ 0x140AB4138 (sub_140AB4138.c)
 *     sub_140AB4178 @ 0x140AB4178 (sub_140AB4178.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 */

__int64 __fastcall sub_14067CE4C(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        ACCESS_MASK DesiredAccess,
        HANDLE *a7,
        int a8,
        __int64 a9,
        char a10,
        void *a11,
        KPROCESSOR_MODE PreviousMode)
{
  char v14; // r13
  PVOID v15; // r15
  PVOID v16; // r12
  __int64 v17; // rdx
  NTSTATUS v18; // esi
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // r8d
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned int Length; // esi
  _PRIVILEGE_SET *v26; // rax
  wchar_t *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // r9d
  PVOID v31; // rax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v33; // rbx
  int v34; // r9d
  int v35; // eax
  int v36; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  PVOID v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  POBJECT_TYPE ObjectType; // [rsp+20h] [rbp-348h]
  int AccessMode; // [rsp+28h] [rbp-340h]
  KPROCESSOR_MODE AccessModea[8]; // [rsp+28h] [rbp-340h]
  int Handle; // [rsp+30h] [rbp-338h]
  char v47; // [rsp+60h] [rbp-308h]
  char v48; // [rsp+61h] [rbp-307h]
  char v49; // [rsp+62h] [rbp-306h]
  PVOID v50; // [rsp+68h] [rbp-300h]
  char v51; // [rsp+70h] [rbp-2F8h]
  PVOID Object; // [rsp+78h] [rbp-2F0h] BYREF
  int v53; // [rsp+80h] [rbp-2E8h]
  int v54; // [rsp+84h] [rbp-2E4h]
  PVOID v55; // [rsp+88h] [rbp-2E0h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+90h] [rbp-2D8h] BYREF
  UNICODE_STRING *v57; // [rsp+98h] [rbp-2D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-2C8h] BYREF
  HANDLE *v59; // [rsp+B0h] [rbp-2B8h]
  PVOID v60; // [rsp+B8h] [rbp-2B0h] BYREF
  unsigned int v61; // [rsp+C0h] [rbp-2A8h]
  PVOID v62; // [rsp+C8h] [rbp-2A0h]
  HANDLE v63; // [rsp+D0h] [rbp-298h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+D8h] [rbp-290h]
  HANDLE v65[2]; // [rsp+E0h] [rbp-288h] BYREF
  UNICODE_STRING v66; // [rsp+F0h] [rbp-278h] BYREF
  HANDLE v67; // [rsp+100h] [rbp-268h] BYREF
  UNICODE_STRING v68; // [rsp+110h] [rbp-258h]
  HANDLE v69[2]; // [rsp+120h] [rbp-248h] BYREF
  __int128 v70; // [rsp+130h] [rbp-238h]
  __int128 v71; // [rsp+140h] [rbp-228h]
  __int128 v72; // [rsp+150h] [rbp-218h] BYREF
  __int64 v73; // [rsp+160h] [rbp-208h]
  int v74; // [rsp+168h] [rbp-200h]
  __int64 v75; // [rsp+170h] [rbp-1F8h]
  __int64 v76; // [rsp+178h] [rbp-1F0h]
  __int128 v77; // [rsp+180h] [rbp-1E8h] BYREF
  _QWORD v78[12]; // [rsp+190h] [rbp-1D8h] BYREF
  _OWORD v79[19]; // [rsp+1F0h] [rbp-178h] BYREF

  v75 = a4;
  *(_QWORD *)&v68.Length = a2;
  v59 = a7;
  v61 = a3;
  Object = a5;
  v76 = a9;
  v65[0] = a11;
  v77 = 0LL;
  *(_OWORD *)v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  DestinationString = 0LL;
  v66 = 0LL;
  v57 = 0LL;
  v67 = 0LL;
  v48 = 0;
  v74 = 0;
  v14 = 0;
  sub_140347770((__int64)&v77);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v49 = 0;
  RtlInitUnicodeString(&v66, 0LL);
  v55 = 0LL;
  BugCheckParameter4 = 0LL;
  v60 = 0LL;
  v63 = 0LL;
  v15 = 0LL;
  v50 = 0LL;
  Privileges = 0LL;
  memset(v79, 0, 0x128uLL);
  LODWORD(v79[6]) = -1;
  *((_QWORD *)&v79[9] + 1) = &v79[9];
  *(_QWORD *)&v79[9] = &v79[9];
  memset((char *)&v79[13] + 8, 0, 0x50uLL);
  v16 = 0LL;
  v62 = 0LL;
  v51 = sub_140AB4138();
  if ( v51 )
  {
    v47 = 0;
    if ( (a3 & 0xFFFF000B) != 0 || a9 && (a3 & 0xFFFF9EFF) != 0 )
      goto LABEL_120;
    if ( !a10 )
      goto LABEL_5;
    if ( a9 )
    {
      if ( (a3 & 0x4000) == 0 )
      {
LABEL_120:
        v18 = -1073741583;
        goto LABEL_13;
      }
LABEL_5:
      if ( (a3 & 0x1000) != 0 && (a3 & 0x600) != 0x600 )
        goto LABEL_120;
      v53 = a3 & 0x810;
      v18 = sub_14067DE4C();
      if ( v18 < 0 )
        goto LABEL_13;
      if ( (a3 & 0x10) == 0 && !SeSinglePrivilegeCheck(stru_140D3CA70, PreviousMode) )
      {
        v18 = -1073741727;
        goto LABEL_12;
      }
      if ( v53 )
      {
        if ( v59 )
        {
          if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
          {
            v18 = -1073741583;
LABEL_12:
            v14 = 0;
            v15 = 0LL;
            goto LABEL_13;
          }
LABEL_41:
          LOBYTE(v17) = PreviousMode;
          v18 = sub_14067DB18(*(_QWORD *)&v68.Length, v17, &v66);
          v54 = v18;
          if ( v18 < 0 )
            goto LABEL_12;
          if ( PreviousMode == 1 )
          {
            if ( (a1 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v53 )
            {
              v20 = 0x7FFFFFFF0000LL;
              if ( (unsigned __int64)v59 < 0x7FFFFFFF0000LL )
                v20 = (__int64)v59;
              *(_QWORD *)v20 = 0LL;
            }
          }
          *(_OWORD *)v69 = *(_OWORD *)a1;
          v70 = *(_OWORD *)(a1 + 16);
          v71 = *(_OWORD *)(a1 + 32);
          if ( (a3 & 0x10) != 0 && v69[1] )
          {
            v18 = -1073741585;
            v54 = -1073741585;
            v15 = 0LL;
            v14 = 0;
            goto LABEL_13;
          }
          if ( PreviousMode == 1 )
          {
            v68 = 0LL;
            v21 = v70;
            if ( (unsigned __int64)v70 >= 0x7FFFFFFF0000LL )
              v21 = 0x7FFFFFFF0000LL;
            v22 = *(_DWORD *)v21;
            *(_DWORD *)&v68.Length = v22;
            v23 = *(_QWORD *)(v21 + 8);
            v68.Buffer = (wchar_t *)v23;
            DestinationString = v68;
            if ( (_WORD)v22 )
            {
              if ( (v23 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v24 = v23 + (unsigned __int16)v22;
              if ( v24 > 0x7FFFFFFF0000LL || v24 < v23 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
          }
          else
          {
            DestinationString = *(UNICODE_STRING *)*(_QWORD *)(a1 + 16);
          }
          Length = DestinationString.Length;
          if ( DestinationString.Length )
          {
            v26 = (_PRIVILEGE_SET *)sub_140367AF0(0x7FFFFFFF0000LL, DestinationString.Length, 0x6B624D43u);
            Privileges = v26;
            if ( !v26 )
            {
              v18 = -1073741670;
              v54 = -1073741670;
              v15 = 0LL;
              v14 = 0;
              goto LABEL_13;
            }
            v27 = (wchar_t *)v26;
            memmove(v26, DestinationString.Buffer, Length);
            DestinationString.Length = Length;
            DestinationString.MaximumLength = Length;
            DestinationString.Buffer = v27;
          }
          else
          {
            RtlInitUnicodeString(&DestinationString, 0LL);
          }
          *(_QWORD *)&v70 = &DestinationString;
          *(_QWORD *)&v71 = 0LL;
          if ( v75 )
          {
            LOBYTE(v30) = PreviousMode;
            v18 = sub_140AB4630(v75, 0, v29, v30, (__int64)&v55, 0LL);
            if ( v18 < 0 )
            {
              v15 = 0LL;
              v14 = 0;
              goto LABEL_13;
            }
          }
          v31 = Object;
          if ( Object )
          {
            Object = 0LL;
            v18 = ObReferenceObjectByHandle(v31, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
            v50 = Object;
            if ( v18 < 0 )
            {
              v15 = Object;
              goto LABEL_102;
            }
          }
          if ( v76 )
          {
            LOBYTE(v30) = PreviousMode;
            v18 = sub_140AB4630(v76, 0, v29, v30, (__int64)&v60, 0LL);
            if ( v18 < 0 )
            {
LABEL_101:
              v15 = v50;
LABEL_102:
              v14 = v47;
              goto LABEL_13;
            }
          }
          if ( v65[0] )
          {
            Object = 0LL;
            v18 = ObReferenceObjectByHandle(v65[0], 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
            v16 = Object;
            v62 = Object;
            if ( v18 < 0 )
              goto LABEL_101;
            if ( *((_DWORD *)Object + 48) != 2 )
            {
              v18 = -1073741656;
              goto LABEL_101;
            }
          }
          CurrentThread = KeGetCurrentThread();
          --*((_WORD *)CurrentThread + 242);
          v49 = 1;
          LOBYTE(v29) = PreviousMode;
          v18 = sub_14067DA70(v69[1], v28, v29, 131097LL, &v63);
          if ( v18 >= 0 )
          {
            v69[1] = v63;
            v33 = 0LL;
            memset(v78, 0, sizeof(v78));
            v72 = 0LL;
            v73 = 0LL;
            v65[1] = v65;
            v65[0] = v65;
            if ( dword_140C54CA8 && !sub_1402ACD00() )
            {
              if ( v69[1] )
              {
                Object = 0LL;
                ObReferenceObjectByHandle(v69[1], 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
                v33 = Object;
              }
              v78[10] = 2LL;
              v78[0] = v33;
              v78[1] = &DestinationString;
              v78[2] = &v66;
              LODWORD(v78[3]) = a3;
              v78[4] = v55;
              v78[5] = v50;
              LODWORD(v78[6]) = DesiredAccess;
              v78[7] = v59;
              v78[11] = v16;
              *(_QWORD *)&v72 = v78;
              *((_QWORD *)&v72 + 1) = v60;
              LOBYTE(v73) = a10;
              LOBYTE(v34) = 1;
              v18 = sub_140735760(32, (unsigned int)v78, (unsigned int)&v72, v34, 33, 0LL, (__int64)v65);
            }
            if ( v18 < 0 )
            {
              if ( v18 == -1073740541 )
              {
                v18 = 0;
                v48 = 1;
              }
            }
            else
            {
              sub_14067D9F4(&v66, a3);
              v47 = 1;
              if ( (a3 & 0x10) != 0 )
              {
                LOBYTE(Handle) = PreviousMode;
                v35 = sub_14071A870(v69, &v66, a3, v55, v50, v16, Handle, &v57, &BugCheckParameter4);
              }
              else
              {
                LOBYTE(AccessMode) = a10;
                v35 = sub_1406DD184(
                        v69,
                        &v66,
                        a3,
                        v55,
                        v60,
                        AccessMode,
                        v50,
                        v16,
                        PreviousMode,
                        &v57,
                        &BugCheckParameter4);
              }
              v18 = sub_14067FF60(33, (_DWORD)v33, v35, (unsigned int)v78, (__int64)&v72, (__int64)v65);
            }
            if ( v33 )
              ObfDereferenceObject(v33);
            if ( v55 )
            {
              ObfDereferenceObject(v55);
              v55 = 0LL;
            }
            if ( v18 >= 0 && v53 && !v48 )
            {
              Object = 0LL;
              v53 = a3 & 0x10;
              v36 = v79[0];
              if ( (a3 & 0x10) != 0 )
                v36 = 64;
              LODWORD(v79[0]) = v36;
              p_DestinationString = &DestinationString;
              if ( v57 )
                p_DestinationString = v57;
              v57 = p_DestinationString;
              v18 = ObReferenceObjectByName(
                      (_DWORD)p_DestinationString,
                      64,
                      0,
                      0,
                      (__int64)CmKeyObjectType,
                      0,
                      (__int64)v79,
                      (__int64)&Object);
              if ( v18 >= 0 )
              {
                v38 = Object;
                ObDeleteCapturedInsertInfo(Object);
                v18 = ObOpenObjectByPointer(
                        v38,
                        PreviousMode != 0 ? 64 : 576,
                        0LL,
                        DesiredAccess,
                        (POBJECT_TYPE)CmKeyObjectType,
                        PreviousMode,
                        &v67);
                ObfDereferenceObject(v38);
                if ( v18 >= 0 )
                  *v59 = v67;
              }
              if ( BugCheckParameter4 )
              {
                if ( (a3 & 0x10) != 0 )
                {
                  sub_1406800D0(BugCheckParameter4);
                }
                else
                {
                  sub_140AB4370();
                  sub_14071BF40(BugCheckParameter4);
                  sub_140AB4260(v40, v39, v41, v42, ObjectType, *(_QWORD *)AccessModea);
                }
                BugCheckParameter4 = 0LL;
              }
              if ( v18 < 0 && (a3 & 0x800) != 0 )
                v18 = 0;
            }
          }
          goto LABEL_101;
        }
      }
      else if ( !v59 )
      {
        if ( Object )
        {
          v18 = -1073741581;
          goto LABEL_12;
        }
        goto LABEL_41;
      }
      v18 = -1073741579;
      goto LABEL_12;
    }
    v18 = -1073741576;
  }
  else
  {
    v18 = -1073741431;
  }
LABEL_13:
  if ( BugCheckParameter4 )
    sub_1406800D0(BugCheckParameter4);
  if ( v57 && v57 != &DestinationString )
    sub_140346D64(v57, 0x624E4D43u);
  if ( v63 )
    ZwClose(v63);
  if ( v49 )
    KeLeaveCriticalRegion();
  if ( v16 )
    ObfDereferenceObject(v16);
  if ( v60 )
    ObfDereferenceObject(v60);
  if ( v15 )
    ObfDereferenceObject(v15);
  if ( v55 )
    ObfDereferenceObject(v55);
  if ( Privileges )
    SeFreePrivileges(Privileges);
  if ( v66.Buffer )
    ExFreePoolWithTag(v66.Buffer, 0);
  sub_14067FE98(v79, 0LL);
  if ( v51 )
    sub_140AB4178();
  if ( v14 )
    sub_14067FF00((unsigned int)v18);
  sub_14022EA30((__int64 *)&v77);
  return (unsigned int)v18;
}
