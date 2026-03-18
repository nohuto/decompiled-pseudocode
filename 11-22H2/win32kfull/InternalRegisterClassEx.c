/*
 * XREFs of InternalRegisterClassEx @ 0x1C00CB7A0
 * Callers:
 *     RegisterIconTitleClass @ 0x1C00C9744 (RegisterIconTitleClass.c)
 *     RegisterDefaultClass @ 0x1C00CC1BC (RegisterDefaultClass.c)
 *     _RegisterClassEx @ 0x1C013A6EC (_RegisterClassEx.c)
 * Callees:
 *     ??$UserAllocateIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C001FFA0 (--$UserAllocateIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00A69D0 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     AllocateUnicodeString @ 0x1C00B1008 (AllocateUnicodeString.c)
 *     MapClientToServerPfn @ 0x1C00CC3D0 (MapClientToServerPfn.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C00CC9D4 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A654 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A674 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01BDFA0 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C01BE0C8 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C01BE108 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 */

__int64 __fastcall InternalRegisterClassEx(__int64 a1, unsigned __int16 a2, __int16 a3, _DWORD *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // r14
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 *v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // r9
  __int64 *v17; // rcx
  _WORD *v18; // rdx
  __int64 v19; // rsi
  unsigned int v20; // r14d
  __int64 v21; // rbx
  char *Heap; // rax
  __int64 *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  BOOL v27; // r14d
  __int64 *v28; // r13
  __int64 v29; // rbx
  __int64 v30; // r12
  __int64 v31; // r14
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // r8
  bool v35; // zf
  int v36; // eax
  _QWORD *v37; // rbx
  int v38; // eax
  _QWORD *v39; // rbx
  int v40; // eax
  __int64 *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  int v45; // r13d
  unsigned __int16 v46; // ax
  __int64 v47; // rax
  int v48; // r14d
  unsigned __int16 v49; // ax
  __int64 v50; // rdx
  const WCHAR *v51; // rdx
  unsigned int v52; // ebx
  char *v53; // rax
  __int64 v54; // r8
  const WCHAR *v55; // rdx
  __int64 v56; // rbx
  __int64 v58; // rax
  int v59; // r8d
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  PWSTR Buffer; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned int v67; // r9d
  _DWORD *v68; // r8
  __int64 v69; // rcx
  __int64 v70; // rcx
  _QWORD v71[2]; // [rsp+20h] [rbp-F8h] BYREF
  int v72; // [rsp+30h] [rbp-E8h]
  int v73; // [rsp+34h] [rbp-E4h]
  struct tagDESKTOP *v74; // [rsp+38h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v76[2]; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD *v77; // [rsp+70h] [rbp-A8h]
  struct _STRING v78; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD v79[2]; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v80[2]; // [rsp+A0h] [rbp-78h] BYREF
  _QWORD v81[2]; // [rsp+B0h] [rbp-68h] BYREF
  struct _UNICODE_STRING v82; // [rsp+C0h] [rbp-58h] BYREF
  BOOL v84; // [rsp+130h] [rbp+18h]

  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v71);
  DestinationString = 0LL;
  v78 = 0LL;
  v72 = 0;
  v9 = gptiCurrent;
  v76[0] = gptiCurrent;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = a3 & 1;
  v73 = v11;
  if ( (a3 & 1) == 0 && v10 == hModuleWin && *(_WORD *)(gptiCurrent + 632LL) >= 0x400u )
  {
LABEL_111:
    v61 = 87LL;
    goto LABEL_91;
  }
  v12 = *(_QWORD *)(a1 + 80);
  if ( (v12 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    LOWORD(v12) = UserFindAtom(*(_QWORD *)(a1 + 80), v7, v12, v8);
    v11 = v73;
  }
  if ( a4 )
    *a4 = 0;
  if ( !(_WORD)v12 || v11 )
    goto LABEL_16;
  v13 = *(_QWORD *)(gptiCurrent + 424LL);
  v14 = (__int64 *)(v13 + 344);
  v15 = *(__int64 **)(v13 + 344);
  if ( v15 )
  {
    while ( 1 )
    {
      v16 = v15[1];
      if ( *(_WORD *)v16 == (_WORD)v12
        && (!v10 || WORD1(*(_QWORD *)(v16 + 64)) == WORD1(v10))
        && (*(_WORD *)(v16 + 6) & 4) == 0 )
      {
        break;
      }
      v14 = v15;
      v15 = (__int64 *)*v15;
      if ( !v15 )
        goto LABEL_12;
    }
    if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
      goto LABEL_90;
    if ( !a4 )
      goto LABEL_114;
LABEL_113:
    *a4 = 1;
LABEL_114:
    v56 = *v14;
LABEL_74:
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v71);
    return v56;
  }
LABEL_12:
  if ( (*(_DWORD *)(a1 + 4) & 0x4000) == 0 || (v14 = (__int64 *)(v13 + 352), (v17 = *(__int64 **)(v13 + 352)) == 0LL) )
  {
LABEL_16:
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
      v19 = 0LL;
    else
      v19 = *(_QWORD *)(gptiCurrent + 456LL);
    v74 = (struct tagDESKTOP *)v19;
    v20 = *(_DWORD *)(a1 + 16) + 88;
    if ( *(_DWORD *)(a1 + 16) >= 0xFFFFFFA8 )
      goto LABEL_111;
    if ( v19 )
    {
      if ( *gpUserTypeIsolation )
      {
        v21 = (__int64)NSInstrumentation::CTypeIsolation<36864,144>::Allocate((__int64)*gpUserTypeIsolation);
        if ( v21 )
        {
          Heap = (char *)RtlAllocateHeap(*(PVOID *)(v19 + 136), 0, v20);
          *(_QWORD *)(v21 + 8) = Heap;
          if ( Heap )
          {
            *(_QWORD *)(v21 + 16) = &Heap[-*(_QWORD *)(v19 + 16)];
          }
          else
          {
            UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(v21);
            v21 = 0LL;
          }
LABEL_24:
          if ( v21 )
          {
            if ( !gpStackRefLookAside )
              KeBugCheck(4u);
            v23 = (__int64 *)Win32AllocateFromPagedLookasideList(gpStackRefLookAside);
            *(_QWORD *)(v21 + 128) = v23;
            if ( v23 )
            {
              *v23 = v21;
              *(_DWORD *)(*(_QWORD *)(v21 + 128) + 8LL) = 0;
              *(_BYTE *)(*(_QWORD *)(v21 + 128) + 12LL) = 0;
            }
            else
            {
              ClassFree((struct tagDESKTOP *)v19, (struct tagCLS *)v21);
              v21 = 0LL;
            }
          }
          if ( v21 != *(_QWORD *)v71[0] )
          {
            if ( v71[0] != gSmartObjNullRef && !--*(_DWORD *)(v71[0] + 8LL) )
            {
              if ( *(_BYTE *)(v71[0] + 12LL) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v71[0]);
            }
            if ( v21 )
            {
              v71[0] = *(_QWORD *)(v21 + 128);
              ++*(_DWORD *)(v71[0] + 8LL);
            }
            else
            {
              v71[0] = gSmartObjNullRef;
            }
          }
          if ( !*(_QWORD *)v71[0] )
            goto LABEL_92;
          LockObjectAssignment(*(_QWORD *)v71[0] + 32LL, v19);
          *(_QWORD *)(*(_QWORD *)v71[0] + 56LL) = *(_QWORD *)v71[0];
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 8LL) = *(_DWORD *)(a1 + 4);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 32LL) = *(_QWORD *)(a1 + 8);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 12LL) = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 80LL) = *(_DWORD *)(a1 + 20);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 64LL) = *(_QWORD *)(a1 + 24);
          *(_OWORD *)(*(_QWORD *)v71[0] + 80LL) = *(_OWORD *)(a1 + 32);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 72LL) = *(_QWORD *)(a1 + 48);
          v24 = *(_QWORD *)v71[0];
          *(_OWORD *)(v24 + 96) = *(_OWORD *)(a1 + 56);
          *(_QWORD *)(v24 + 112) = *(_QWORD *)(a1 + 72);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 84LL) = *(_DWORD *)(a1 + 88);
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 6LL) = a3;
          v25 = a2;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 4LL) = a2;
          if ( a2 )
          {
            v58 = *(_QWORD *)(*(_QWORD *)v71[0] + 8LL);
            if ( *(_DWORD *)(a1 + 92) == 1 )
              v59 = *(_DWORD *)(v58 + 84);
            else
              v59 = *(_DWORD *)(v58 + 80);
            v25 = (a2 & 0x2FFFu) - 666;
            *(_WORD *)(gpsi + 2LL * (unsigned int)v25 + 328) = v59 + 328;
          }
          if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 6LL) & 1) == 0 )
          {
            v26 = MapClientToServerPfn(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 32LL));
            if ( v26 )
            {
              v67 = 0;
              *(_WORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 6LL) |= 1u;
              *(_WORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 6LL) &= ~2u;
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 32LL) = v26;
              v25 = (unsigned __int64)&unk_1C0309480;
              while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 32LL) != *(_QWORD *)v25 )
              {
                ++v67;
                v25 += 48LL;
                if ( v67 >= 8 )
                  goto LABEL_36;
              }
              v25 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 80LL);
              v68 = (_DWORD *)((char *)&unk_1C0309488 + 48 * v67);
              if ( (int)v25 >= *v68 )
              {
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 84LL) = *v68;
                v25 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 80LL) - *v68);
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 80LL) = v25;
              }
            }
          }
LABEL_36:
          v27 = (a3 & 0x40) != 0;
          v84 = v27;
          v28 = (__int64 *)(*(_QWORD *)v71[0] + 88LL);
          v29 = *v28;
          if ( !*v28 )
            goto LABEL_44;
          v30 = 0LL;
          PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( (unsigned __int64)(unsigned __int16)v29 >= *(_QWORD *)(gpsi + 8LL) )
          {
LABEL_42:
            if ( !v30 && v27 )
            {
              UserSetLastError(87LL);
              v36 = 0;
              v9 = v76[0];
LABEL_45:
              if ( !v36 )
              {
LABEL_154:
                v74 = *(struct tagDESKTOP **)(*(_QWORD *)v71[0] + 32LL);
                *(_QWORD *)(*(_QWORD *)v71[0] + 32LL) = 0LL;
                ClassFree((struct tagDESKTOP *)v19, *(struct tagCLS **)v71[0]);
                UnlockObjectAssignment(&v74);
                goto LABEL_92;
              }
              v37 = (_QWORD *)(*(_QWORD *)v71[0] + 80LL);
              if ( *v37 )
              {
                LOBYTE(v25) = 3;
                v60 = HMValidateHandleNoSecure(*v37, v25);
                if ( !v60 && v27 )
                {
                  UserSetLastError(87LL);
                  v38 = 0;
LABEL_48:
                  if ( !v38 )
                  {
LABEL_153:
                    HMAssignmentUnlock(*(_QWORD *)v71[0] + 88LL);
                    goto LABEL_154;
                  }
                  v39 = (_QWORD *)(*(_QWORD *)v71[0] + 112LL);
                  if ( *v39 )
                  {
                    LOBYTE(v25) = 3;
                    v62 = HMValidateHandleNoSecure(*v39, v25);
                    if ( !v62 && v27 )
                    {
                      UserSetLastError(87LL);
                      v40 = 0;
                      goto LABEL_51;
                    }
                    *v39 = 0LL;
                    v80[0] = v39;
                    v80[1] = v62;
                    HMAssignmentLock(v80, 0LL);
                  }
                  v40 = 1;
LABEL_51:
                  if ( v40 )
                  {
                    v41 = *(__int64 **)(*(_QWORD *)v71[0] + 112LL);
                    v42 = *(_QWORD *)v71[0] + 112LL;
                    if ( v41 )
                      v43 = *v41;
                    else
                      v43 = 0LL;
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 56LL) = v43;
                    v81[0] = v42;
                    v81[1] = v41;
                    HMAssignmentLock(v81, 0LL);
                    v44 = *(_QWORD *)(a1 + 64);
                    if ( (v44 & 0xFFFFFFFFFFFF0000uLL) != 0 )
                    {
                      v45 = 1;
                      v46 = UserAddAtomEx(v44, 0LL, 2LL);
                    }
                    else
                    {
                      v46 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(v9 + 424), v44);
                      v45 = 0;
                    }
                    if ( v46 )
                    {
                      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 2LL) = v46;
                      v47 = *(_QWORD *)(a1 + 80);
                      if ( (v47 & 0xFFFFFFFFFFFF0000uLL) != 0 )
                      {
                        v48 = 1;
                        v72 = 1;
                        v49 = UserAddAtomEx(v47, 0LL, 2LL);
                      }
                      else
                      {
                        v49 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(v9 + 424), v47);
                        v48 = 0;
                      }
                      v50 = v49;
                      if ( v49 )
                      {
                        **(_WORD **)(*(_QWORD *)v71[0] + 8LL) = v49;
                        v51 = *(const WCHAR **)(a1 + 64);
                        if ( ((unsigned __int64)v51 & 0xFFFFFFFFFFFF0000uLL) != 0 )
                        {
                          RtlInitUnicodeString(&DestinationString, v51);
                          v52 = DestinationString.Length + 1;
                        }
                        else
                        {
                          v52 = 7;
                        }
                        if ( v19 )
                          v53 = (char *)RtlAllocateHeap(*(PVOID *)(v19 + 136), 0, v52);
                        else
                          v53 = (char *)Win32AllocPoolZInit(v52, 1818456917LL);
                        if ( v53 )
                        {
                          if ( v19 )
                          {
                            v54 = *(_QWORD *)v71[0];
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 48LL) = &v53[-(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL)
                                                                                            - *(_QWORD *)(*(_QWORD *)v71[0] + 16LL))];
                            *(_QWORD *)(v54 + 104) = v53;
                          }
                          else
                          {
                            *(_QWORD *)(*(_QWORD *)v71[0] + 104LL) = v53;
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 48LL) = 0LL;
                          }
                          if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
                          {
                            v78.MaximumLength = v52;
                            v78.Buffer = *(PCHAR *)(*(_QWORD *)v71[0] + 104LL);
                            RtlUnicodeStringToAnsiString(&v78, &DestinationString, 0);
                          }
                          else
                          {
                            **(_BYTE **)(*(_QWORD *)v71[0] + 104LL) = 35;
                            RtlIntegerToChar(
                              *(unsigned __int16 *)(a1 + 64),
                              0xAu,
                              v52 - 1,
                              (PCHAR)(*(_QWORD *)(*(_QWORD *)v71[0] + 104LL) + 1LL));
                          }
                          v55 = *(const WCHAR **)(*(_QWORD *)v71[0] + 96LL);
                          if ( !v55 || ((unsigned __int64)v55 & 0xFFFFFFFFFFFF0000uLL) == 0 )
                          {
LABEL_70:
                            if ( v73 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 8LL) & 0x4000) != 0 )
                            {
                              **(_QWORD **)v71[0] = *(_QWORD *)(*(_QWORD *)(v9 + 424) + 352LL);
                              *(_QWORD *)(*(_QWORD *)(v9 + 424) + 352LL) = *(_QWORD *)v71[0];
                            }
                            else
                            {
                              **(_QWORD **)v71[0] = *(_QWORD *)(*(_QWORD *)(v9 + 424) + 344LL);
                              *(_QWORD *)(*(_QWORD *)(v9 + 424) + 344LL) = *(_QWORD *)v71[0];
                            }
                            v56 = *(_QWORD *)v71[0];
                            goto LABEL_74;
                          }
                          RtlInitUnicodeString(&DestinationString, v55);
                          if ( !DestinationString.Length )
                          {
                            v69 = *(_QWORD *)v71[0];
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 40LL) = 0LL;
                            *(_QWORD *)(v69 + 96) = 0LL;
                            goto LABEL_70;
                          }
                          v82 = 0LL;
                          if ( (unsigned int)AllocateUnicodeString(&v82, (const void **)&DestinationString) )
                          {
                            v63 = *(_QWORD *)v71[0];
                            Buffer = v82.Buffer;
                            v65 = *(_QWORD *)(*(_QWORD *)v71[0] + 8LL);
                            if ( ((unsigned __int64)v82.Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
                              *(_QWORD *)(v65 + 40) = -1LL;
                            else
                              *(_QWORD *)(v65 + 40) = v82.Buffer;
                            *(_QWORD *)(v63 + 96) = Buffer;
                            goto LABEL_70;
                          }
                          ClassFree((struct tagDESKTOP *)v19, *(char **)(*(_QWORD *)v71[0] + 104LL));
                        }
                        if ( v48 )
                          UserDeleteAtom(**(unsigned __int16 **)(*(_QWORD *)v71[0] + 8LL), v50);
                      }
                      if ( v45 )
                        UserDeleteAtom(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 2LL), v50);
                    }
                    v70 = *(_QWORD *)v71[0] + 112LL;
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL) + 56LL) = 0LL;
                    HMAssignmentUnlock(v70);
                  }
                  HMAssignmentUnlock(*(_QWORD *)v71[0] + 80LL);
                  goto LABEL_153;
                }
                *v37 = 0LL;
                v76[0] = v37;
                v76[1] = v60;
                HMAssignmentLock(v76, 0LL);
              }
              v38 = 1;
              goto LABEL_48;
            }
            *v28 = 0LL;
            v79[0] = v28;
            v79[1] = v30;
            HMAssignmentLock(v79, 0LL);
            v9 = v76[0];
LABEL_44:
            v36 = 1;
            goto LABEL_45;
          }
          v31 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v29;
          v33 = (_QWORD *)HMPkheFromPhe(v31);
          v77 = v33;
          LOWORD(v29) = WORD1(v29) & 0x7FFF;
          if ( (WORD1(v29) & 0x7FFF) != *(_WORD *)(v31 + 26) && (_WORD)v29 != 0x7FFF )
          {
            if ( (_WORD)v29 || !PsGetCurrentProcessWow64Process(v33, v32, v34) )
            {
LABEL_137:
              v27 = v84;
              goto LABEL_42;
            }
            v33 = v77;
          }
          if ( (*(_BYTE *)(v31 + 25) & 1) == 0 )
          {
            v35 = *(_BYTE *)(v31 + 24) == 3;
            v27 = v84;
            if ( v35 )
              v30 = *v33;
            goto LABEL_42;
          }
          goto LABEL_137;
        }
      }
    }
    else
    {
      v21 = UserAllocateIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>();
      if ( !v21 )
        goto LABEL_24;
      v66 = Win32AllocPoolZInit(v20, 1818456917LL);
      *(_QWORD *)(v21 + 8) = v66;
      if ( v66 )
      {
        *(_QWORD *)(v21 + 16) = 0LL;
        goto LABEL_24;
      }
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(v21);
    }
    v21 = 0LL;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v18 = (_WORD *)v17[1];
    if ( *v18 == (_WORD)v12 && (v18[3] & 4) == 0 )
      break;
    v14 = v17;
    v17 = (__int64 *)*v17;
    if ( !v17 )
      goto LABEL_16;
  }
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
  {
    if ( !a4 )
      goto LABEL_114;
    goto LABEL_113;
  }
LABEL_90:
  v61 = 1410LL;
LABEL_91:
  UserSetLastError(v61);
LABEL_92:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v71);
  return 0LL;
}
