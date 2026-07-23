/*
 * XREFs of NtSetInformationToken @ 0x140754810
 * Callers:
 *     <none>
 * Callees:
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 *     sub_140254F94 @ 0x140254F94 (sub_140254F94.c)
 *     sub_14025CB88 @ 0x14025CB88 (sub_14025CB88.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1402ED9BC @ 0x1402ED9BC (sub_1402ED9BC.c)
 *     RtlSubAuthorityCountSid @ 0x1402EF420 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140663448 @ 0x140663448 (sub_140663448.c)
 *     sub_1406651C8 @ 0x1406651C8 (sub_1406651C8.c)
 *     sub_140668444 @ 0x140668444 (sub_140668444.c)
 *     sub_14066846C @ 0x14066846C (sub_14066846C.c)
 *     sub_140696EC8 @ 0x140696EC8 (sub_140696EC8.c)
 *     sub_1406AB17C @ 0x1406AB17C (sub_1406AB17C.c)
 *     sub_1406BBF6C @ 0x1406BBF6C (sub_1406BBF6C.c)
 *     sub_1406E6FE8 @ 0x1406E6FE8 (sub_1406E6FE8.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407530D0 @ 0x1407530D0 (sub_1407530D0.c)
 *     sub_1407531C4 @ 0x1407531C4 (sub_1407531C4.c)
 *     sub_1407532AC @ 0x1407532AC (sub_1407532AC.c)
 *     sub_1407532F8 @ 0x1407532F8 (sub_1407532F8.c)
 *     sub_140753358 @ 0x140753358 (sub_140753358.c)
 *     sub_140753E4C @ 0x140753E4C (sub_140753E4C.c)
 *     sub_140753F8C @ 0x140753F8C (sub_140753F8C.c)
 *     sub_1407546B8 @ 0x1407546B8 (sub_1407546B8.c)
 *     sub_140754718 @ 0x140754718 (sub_140754718.c)
 *     sub_14075563C @ 0x14075563C (sub_14075563C.c)
 *     sub_1407556D4 @ 0x1407556D4 (sub_1407556D4.c)
 *     sub_140799DB0 @ 0x140799DB0 (sub_140799DB0.c)
 *     sub_1409C6248 @ 0x1409C6248 (sub_1409C6248.c)
 *     sub_1409C64AC @ 0x1409C64AC (sub_1409C64AC.c)
 *     sub_1409C6518 @ 0x1409C6518 (sub_1409C6518.c)
 *     sub_1409C6578 @ 0x1409C6578 (sub_1409C6578.c)
 *     sub_1409CA42C @ 0x1409CA42C (sub_1409CA42C.c)
 *     sub_1409CA904 @ 0x1409CA904 (sub_1409CA904.c)
 *     sub_1409CA9E4 @ 0x1409CA9E4 (sub_1409CA9E4.c)
 *     sub_1409CD6CC @ 0x1409CD6CC (sub_1409CD6CC.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  NTSTATUS v8; // edi
  KPROCESSOR_MODE v9; // r15
  __int64 v10; // rcx
  ACCESS_MASK v11; // edx
  NTSTATUS result; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  PERESOURCE *v15; // rsi
  __int32 v16; // ebx
  __int32 v17; // ebx
  __int32 v18; // ebx
  __int32 v19; // ebx
  int v20; // ebx
  int v21; // ebx
  struct _KTHREAD *v22; // rax
  PVOID v23; // rsi
  char v24; // bl
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  struct _KTHREAD *v28; // rax
  struct _ERESOURCE *v29; // rcx
  NTSTATUS v30; // ebx
  PERESOURCE *v31; // rcx
  __int32 v32; // ebx
  __int32 v33; // ebx
  __int32 v34; // ebx
  __int32 v35; // ebx
  int v36; // eax
  int v37; // ebx
  struct _KTHREAD *v38; // rax
  PVOID v39; // r15
  int v40; // ebx
  int v41; // r14d
  PVOID v42; // rbx
  bool v43; // si
  struct _KTHREAD *v44; // rax
  PERESOURCE *v45; // r13
  int *v46; // rdx
  _DWORD *v47; // rbx
  char *v48; // rcx
  struct _KTHREAD *v49; // rax
  PERESOURCE *v50; // rsi
  PVOID v51; // rbx
  unsigned int v52; // edx
  __int64 v53; // r8
  __int64 v54; // r9
  char *v55; // rcx
  __int64 v56; // rcx
  ACL *v57; // r14
  unsigned int v58; // ebx
  __int64 v59; // r8
  __int64 v60; // r9
  void *v61; // r13
  unsigned __int16 *v62; // rbx
  int v63; // ecx
  int v64; // ecx
  ULONG v65; // r12d
  struct _KTHREAD *v66; // rax
  char *v67; // rbx
  PSID *v68; // rax
  PSID *v69; // rsi
  PSID v70; // r13
  int v71; // ecx
  ULONG v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // ebx
  struct _KTHREAD *v76; // rax
  PERESOURCE *v77; // rbx
  _QWORD *v78; // rdx
  void *v79; // rcx
  void *v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rdx
  struct _KTHREAD *v83; // rax
  int v84; // eax
  unsigned int v85; // eax
  unsigned int v86; // ebx
  struct _KTHREAD *v87; // rax
  char v88; // al
  struct _KTHREAD *CurrentThread; // rax
  PVOID v90; // rbx
  _QWORD *v91; // rdx
  int v92; // eax
  unsigned int v93; // eax
  struct _KTHREAD *v94; // rax
  _QWORD *v95; // r8
  char *v96; // rbx
  _OWORD *v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rdx
  unsigned int v100; // esi
  struct _KTHREAD *v101; // rax
  PERESOURCE *v102; // r13
  _QWORD *v103; // rbx
  __int64 v104; // rax
  int v105; // ebx
  struct _KTHREAD *v106; // rax
  PERESOURCE *v107; // rbx
  unsigned int v108; // ebx
  signed __int32 v109[8]; // [rsp+0h] [rbp-118h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F0h]
  __int64 v112; // [rsp+30h] [rbp-E8h]
  PVOID v113; // [rsp+50h] [rbp-C8h] BYREF
  NTSTATUS v114; // [rsp+58h] [rbp-C0h]
  char v115; // [rsp+5Ch] [rbp-BCh]
  KPROCESSOR_MODE v116; // [rsp+5Dh] [rbp-BBh]
  unsigned int v117; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v119; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v120; // [rsp+70h] [rbp-A8h] BYREF
  PSID Sid1; // [rsp+78h] [rbp-A0h] BYREF
  PVOID v122; // [rsp+80h] [rbp-98h] BYREF
  _OWORD *v123; // [rsp+88h] [rbp-90h] BYREF
  unsigned int v124; // [rsp+90h] [rbp-88h] BYREF
  int v125; // [rsp+94h] [rbp-84h]
  int v126; // [rsp+98h] [rbp-80h] BYREF
  int v127; // [rsp+9Ch] [rbp-7Ch]
  __int64 v128; // [rsp+A0h] [rbp-78h] BYREF
  PVOID P; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v130; // [rsp+B0h] [rbp-68h] BYREF
  PERESOURCE *v131; // [rsp+B8h] [rbp-60h]
  PVOID v132; // [rsp+C0h] [rbp-58h]
  int v133; // [rsp+C8h] [rbp-50h]
  int v134; // [rsp+CCh] [rbp-4Ch]
  int v135; // [rsp+D0h] [rbp-48h]
  int v136; // [rsp+D4h] [rbp-44h]
  int v137; // [rsp+D8h] [rbp-40h]
  __int64 v138; // [rsp+E0h] [rbp-38h]
  void *v139; // [rsp+E8h] [rbp-30h]
  struct _KTHREAD *v140; // [rsp+F0h] [rbp-28h]

  v8 = 0;
  v115 = 0;
  v117 = 0;
  v124 = 0;
  Sid1 = 0LL;
  v120 = 0LL;
  v119 = 0LL;
  P = 0LL;
  v130 = 0LL;
  LODWORD(v128) = 0;
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  v116 = v9;
  if ( v9 && TokenInformationLength )
  {
    if ( ((unsigned __int8)TokenInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)TokenInformation + TokenInformationLength > 0x7FFFFFFF0000LL
      || (char *)TokenInformation + TokenInformationLength < TokenInformation )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( (unsigned int)TokenInformationClass > TokenChildProcessFlags )
    return -1073741821;
  v10 = 0x24800F8B5070LL;
  if ( !_bittest64(&v10, TokenInformationClass) )
    return -1073741821;
  v11 = 128;
  if ( TokenInformationClass == TokenSessionId )
  {
    v11 = 384;
  }
  else if ( TokenInformationClass == TokenLinkedToken )
  {
    v11 = 136;
  }
  v113 = 0LL;
  result = ObReferenceObjectByHandle(TokenHandle, v11, (POBJECT_TYPE)SeTokenObjectType, v9, &v113, 0LL);
  v15 = (PERESOURCE *)v113;
  v132 = v113;
  if ( result < 0 )
    return result;
  if ( TokenInformationClass > TokenVirtualizationAllowed )
  {
    v32 = TokenInformationClass - 24;
    if ( !v32 )
    {
      if ( TokenInformationLength == 4 )
      {
        v137 = *(_DWORD *)TokenInformation;
        sub_1406E6FE8((__int64)v113, v137);
        v30 = 0;
        goto LABEL_28;
      }
      goto LABEL_144;
    }
    v33 = v32 - 1;
    if ( v33 )
    {
      v34 = v33 - 1;
      if ( !v34 )
      {
        if ( TokenInformationLength == 4 )
        {
          v127 = *(_DWORD *)TokenInformation;
          if ( !v127 || SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
          {
            CurrentThread = KeGetCurrentThread();
            --*((_WORD *)CurrentThread + 242);
            v90 = v113;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v113 + 6), 1u);
            _InterlockedOr(v109, 0);
            v91 = v113;
            v92 = *((_DWORD *)v113 + 50);
            if ( v127 )
              v93 = v92 | 0x1000;
            else
              v93 = v92 & 0xFFFFEFFF;
            *((_DWORD *)v113 + 50) = v93;
            v91[7] = _InterlockedIncrement64(&qword_140C0DA70);
            _InterlockedOr(v109, 0);
            v29 = (struct _ERESOURCE *)*((_QWORD *)v90 + 6);
            goto LABEL_26;
          }
          goto LABEL_149;
        }
        goto LABEL_144;
      }
      v35 = v34 - 1;
      if ( v35 )
      {
        v40 = v35 - 12;
        if ( !v40 )
        {
          v122 = 0LL;
          if ( TokenInformation && TokenInformationLength >= 0x10 )
          {
            v41 = sub_140753F8C(TokenInformation, v9, &v122);
            if ( v41 >= 0 )
            {
              sub_1402D6B0C((__int64)&unk_140CE2170, 0xFC13FCu, 0, 0, (__int64)&qword_14000FFC8, 0);
              if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
                v41 = -1073741727;
              v114 = v41;
              if ( v41 >= 0 )
              {
                v42 = v122;
                v43 = sub_1407546B8(*((_DWORD **)v122 + 1), *(_QWORD *)v122) != 0;
                v44 = KeGetCurrentThread();
                --*((_WORD *)v44 + 242);
                v45 = (PERESOURCE *)v113;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)v113 + 6), 1u);
                _InterlockedOr(v109, 0);
                v46 = (int *)*((_QWORD *)v42 + 1);
                v47 = v113;
                v114 = sub_140204870(*((_QWORD *)v113 + 97), v46, *(_QWORD *)v122);
                if ( v114 >= 0 && v43 )
                  v47[50] |= 0x20000u;
                *((_QWORD *)v47 + 7) = _InterlockedIncrement64(&qword_140C0DA70);
                _InterlockedOr(v109, 0);
                ExReleaseResourceLite(v45[6]);
                sub_1402F9540((__int64)KeGetCurrentThread());
                sub_140754718((PVOID *)v122, v9);
                v30 = v114;
                goto LABEL_27;
              }
              sub_140754718((PVOID *)v122, v9);
            }
            v30 = v41;
            goto LABEL_28;
          }
          goto LABEL_144;
        }
        v105 = v40 - 3;
        if ( !v105 )
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_144;
          v108 = *(_DWORD *)TokenInformation;
          v136 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
            goto LABEL_149;
          v36 = sub_1409C6248(v15, v108);
          goto LABEL_40;
        }
        if ( v105 == 3 )
        {
          if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
            goto LABEL_149;
          if ( TokenInformationLength == 4 )
          {
            v135 = *(_DWORD *)TokenInformation;
            if ( !v135 && ((_DWORD)v15[25] & 0x80000) != 0 )
            {
              v106 = KeGetCurrentThread();
              --*((_WORD *)v106 + 242);
              v107 = (PERESOURCE *)v113;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)v113 + 6), 1u);
              _InterlockedOr(v109, 0);
              *((_DWORD *)v15 + 50) &= ~0x80000u;
              *((_QWORD *)v113 + 7) = _InterlockedIncrement64(&qword_140C0DA70);
              _InterlockedOr(v109, 0);
              ExReleaseResourceLite(v107[6]);
              sub_1402F9540((__int64)KeGetCurrentThread());
              v15 = (PERESOURCE *)v113;
            }
            ObfDereferenceObject(v15);
            return 0;
          }
          goto LABEL_144;
        }
        return -1073741811;
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_144;
      v126 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
        goto LABEL_149;
      if ( *((_BYTE *)v15 + 204) )
      {
        v30 = -1073741525;
        goto LABEL_28;
      }
      v36 = sub_14075563C(v15, &v126);
LABEL_40:
      v30 = v36;
      goto LABEL_28;
    }
    if ( TokenInformationLength < 0x10 )
      goto LABEL_144;
    v36 = sub_140799DB0(TokenInformation, 0, (int)HandleInformation, v112, (__int64)&v130, (__int64)&v128);
    v114 = v36;
    if ( v36 < 0 )
      goto LABEL_40;
    v61 = (void *)v130;
    v62 = *(unsigned __int16 **)v130;
    v63 = *(_DWORD *)(*(_QWORD *)v130 + 2LL) - *(_DWORD *)(qword_140C1B9C0 + 2);
    if ( !v63 )
      v63 = v62[3] - *(unsigned __int16 *)(qword_140C1B9C0 + 6);
    if ( !v63 )
    {
      v64 = *RtlSubAuthorityCountSid(*(PSID *)v130);
      if ( !(_BYTE)v64 )
      {
        v65 = 0;
LABEL_85:
        v66 = KeGetCurrentThread();
        --*((_WORD *)v66 + 242);
        v131 = (PERESOURCE *)v113;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v113 + 6), 1u);
        _InterlockedOr(v109, 0);
        v67 = (char *)v113;
        v68 = (PSID *)sub_1402ED9BC((__int64)v113);
        v69 = v68;
        if ( v68 )
        {
          v70 = *v68;
          v71 = *RtlSubAuthorityCountSid(*v68);
          if ( (_BYTE)v71 )
            v72 = *RtlSubAuthoritySid(v70, v71 - 1);
          else
            v72 = 0;
          if ( v65 <= v72 )
          {
LABEL_89:
            v73 = *((unsigned __int8 *)*v69 + 1);
            if ( (_BYTE)v73 )
            {
              *RtlSubAuthoritySid(*v69, v73 - 1) = v65;
              if ( v65 < 0x3000 )
              {
                *((_QWORD *)v67 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
                *((_QWORD *)v67 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
              }
              v74 = *((_DWORD *)v67 + 50);
              if ( v65 >= 0x2000 )
              {
                if ( (v74 & 0x4000) != 0 )
                {
                  sub_140254F94((__int64)v67, *((_QWORD *)v67 + 98));
                  *((_DWORD *)v67 + 50) &= ~0x4000u;
                  v79 = (void *)*((_QWORD *)v67 + 98);
                  if ( v79 )
                  {
                    ExFreePoolWithTag(v79, 0);
                    *((_QWORD *)v67 + 98) = 0LL;
                  }
                  v80 = (void *)*((_QWORD *)v67 + 99);
                  if ( v80 )
                  {
                    ExFreePoolWithTag(v80, 0);
                    *((_QWORD *)v67 + 99) = 0LL;
                    *((_DWORD *)v67 + 200) = 0;
                    memset(v67 + 808, 0, 0x110uLL);
                  }
                  v81 = *((_QWORD *)v67 + 135);
                  if ( v81 )
                  {
                    sub_1406AB17C(*((_DWORD *)v67 + 30), v81);
                    *((_QWORD *)v67 + 135) = 0LL;
                  }
                  v82 = *((_QWORD *)v67 + 136);
                  if ( v82 )
                  {
                    sub_140696EC8(*((_QWORD *)v67 + 27), v82);
                    *((_QWORD *)v67 + 136) = 0LL;
                  }
                }
                *((_DWORD *)v67 + 50) |= 0x2000u;
              }
              else
              {
                *((_QWORD *)v67 + 9) &= 0x202800000uLL;
                *((_QWORD *)v67 + 10) &= 0x202800000uLL;
                *((_DWORD *)v67 + 50) = v74 & 0xFFFFDFFF;
              }
              *((_QWORD *)v67 + 7) = _InterlockedIncrement64(&qword_140C0DA70);
              v30 = 0;
            }
            else
            {
              v30 = -1073741811;
            }
            goto LABEL_95;
          }
          if ( SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
          {
            if ( !v67[204] )
              goto LABEL_89;
            v30 = -1073741525;
          }
          else
          {
            v30 = -1073741727;
          }
        }
        else
        {
          v30 = -1073740730;
        }
LABEL_95:
        _InterlockedOr(v109, 0);
        ExReleaseResourceLite(v131[6]);
        sub_1402F9540((__int64)KeGetCurrentThread());
        ObfDereferenceObject(v113);
        sub_1406651C8((void *)v130, v9);
        return v30;
      }
      v65 = *RtlSubAuthoritySid(v62, v64 - 1);
      if ( v65 <= 0x4000 )
        goto LABEL_85;
    }
    ObfDereferenceObject(v15);
    sub_1406651C8(v61, v9);
    return -1073740730;
  }
  if ( TokenInformationClass == TokenVirtualizationAllowed )
  {
    if ( TokenInformationLength == 4 )
    {
      v125 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(stru_140D3CB28, v9) )
        goto LABEL_149;
      v83 = KeGetCurrentThread();
      --*((_WORD *)v83 + 242);
      v77 = (PERESOURCE *)v113;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v113 + 6), 1u);
      _InterlockedOr(v109, 0);
      v78 = v113;
      v84 = *((_DWORD *)v113 + 50);
      if ( v125 )
        v85 = v84 | 0x200;
      else
        v85 = v84 & 0xFFFFFDFF;
      *((_DWORD *)v113 + 50) = v85;
      goto LABEL_103;
    }
LABEL_144:
    v30 = -1073741820;
    goto LABEL_28;
  }
  v16 = TokenInformationClass - 4;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 6;
        if ( v19 )
        {
          v20 = v19 - 2;
          if ( !v20 )
          {
            if ( TokenInformationLength == 4 )
            {
              v37 = *(_DWORD *)TokenInformation;
              v133 = *(_DWORD *)TokenInformation;
              if ( SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
              {
                if ( v37 )
                {
                  v30 = -1073741811;
                  goto LABEL_28;
                }
                v38 = KeGetCurrentThread();
                --*((_WORD *)v38 + 242);
                v39 = v113;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)v113 + 6), 1u);
                _InterlockedOr(v109, 0);
                v15 = (PERESOURCE *)v113;
                if ( (*((_DWORD *)v113 + 50) & 0x20) == 0 )
                {
                  if ( HIDWORD(NlsMbOemCodePageTag) )
                    sub_1409CD6CC(v113);
                  v30 = sub_1407556D4(v15);
                  v114 = v30;
                  if ( v30 < 0 )
                    goto LABEL_28;
                }
                _InterlockedOr(v109, 0);
                v29 = (struct _ERESOURCE *)*((_QWORD *)v39 + 6);
                goto LABEL_26;
              }
              goto LABEL_149;
            }
            goto LABEL_144;
          }
          v21 = v20 - 2;
          if ( !v21 )
          {
            v123 = 0LL;
            if ( SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
            {
              v22 = KeGetCurrentThread();
              --*((_WORD *)v22 + 242);
              v23 = v113;
              ExAcquireResourceSharedLite(*((PERESOURCE *)v113 + 6), 1u);
              v24 = *((_BYTE *)v23 + 118);
              ExReleaseResourceLite(*((PERESOURCE *)v23 + 6));
              sub_1402F9540((__int64)KeGetCurrentThread());
              if ( v24 )
              {
                v30 = -1073741811;
                goto LABEL_27;
              }
              if ( !TokenInformation )
              {
                v28 = KeGetCurrentThread();
                --*((_WORD *)v28 + 242);
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)v23 + 6), 1u);
                _InterlockedOr(v109, 0);
                *((_BYTE *)v23 + 118) = 1;
                *((_QWORD *)v113 + 7) = _InterlockedIncrement64(&qword_140C0DA70);
                _InterlockedOr(v109, 0);
                v29 = (struct _ERESOURCE *)*((_QWORD *)v23 + 6);
LABEL_26:
                ExReleaseResourceLite(v29);
                sub_1402F9540((__int64)KeGetCurrentThread());
                v30 = 0;
LABEL_27:
                v15 = (PERESOURCE *)v113;
LABEL_28:
                v31 = v15;
LABEL_29:
                ObfDereferenceObject(v31);
                return v30;
              }
              LOBYTE(v25) = v9;
              v30 = sub_1409CA42C(
                      (_DWORD)TokenInformation,
                      v25,
                      v26,
                      v27,
                      (_DWORD)Object,
                      (_DWORD)HandleInformation,
                      (__int64)&v123);
              v114 = v30;
              if ( v30 < 0 )
                goto LABEL_27;
              v94 = KeGetCurrentThread();
              --*((_WORD *)v94 + 242);
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)v23 + 6), 1u);
              _InterlockedOr(v109, 0);
              *((_BYTE *)v23 + 118) = 2;
              v95 = v113;
              v96 = (char *)v113 + 88;
              v97 = v123;
              *(_OWORD *)((char *)v113 + 88) = *v123;
              *((_QWORD *)v96 + 2) = *((_QWORD *)v97 + 2);
              *((_DWORD *)v96 + 6) = *((_DWORD *)v97 + 6);
              *((_WORD *)v96 + 14) = *((_WORD *)v97 + 14);
              v95[7] = _InterlockedIncrement64(&qword_140C0DA70);
              _InterlockedOr(v109, 0);
              ExReleaseResourceLite(*((PERESOURCE *)v23 + 6));
              sub_1402F9540((__int64)KeGetCurrentThread());
              LOBYTE(v98) = 1;
              sub_1409C6578(v96, v98);
              ObfDereferenceObject(v113);
              LOBYTE(v99) = v9;
              sub_1409CA904(v123, v99);
              return 0;
            }
LABEL_149:
            v30 = -1073741727;
            goto LABEL_28;
          }
          v75 = v21 - 1;
          if ( !v75 )
          {
            if ( TokenInformationLength == 8 )
            {
              v138 = *(_QWORD *)TokenInformation;
              if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
                goto LABEL_149;
              v76 = KeGetCurrentThread();
              --*((_WORD *)v76 + 242);
              v77 = (PERESOURCE *)v113;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)v113 + 6), 1u);
              _InterlockedOr(v109, 0);
              v78 = v113;
              if ( !*((_QWORD *)v113 + 28) )
                *((_QWORD *)v113 + 28) = v138;
LABEL_103:
              v78[7] = _InterlockedIncrement64(&qword_140C0DA70);
              _InterlockedOr(v109, 0);
              ExReleaseResourceLite(v77[6]);
              sub_1402F9540((__int64)KeGetCurrentThread());
              v30 = 0;
              goto LABEL_27;
            }
            goto LABEL_144;
          }
          if ( v75 == 2 )
          {
            if ( TokenInformationLength != 8 )
              goto LABEL_144;
            v139 = *(void **)TokenInformation;
            v36 = sub_14025CB88((__int64)v113, v139, v9);
            goto LABEL_40;
          }
          return -1073741811;
        }
        if ( TokenInformationLength == 4 )
        {
          v58 = *(_DWORD *)TokenInformation;
          v134 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
            goto LABEL_149;
          v36 = sub_1407530D0((__int64)v15, v58, v59, v60);
          goto LABEL_40;
        }
LABEL_169:
        ObfDereferenceObject(v113);
        return -1073741820;
      }
      if ( TokenInformationLength < 8 )
        goto LABEL_169;
      v48 = *(char **)TokenInformation;
      v119 = (__int64)v48;
      if ( v48 )
      {
        v30 = sub_140753E4C(v48, v9, v13, v14, 1, (int)HandleInformation, (PVOID *)&v119, &v117);
        v114 = v30;
      }
      else
      {
        v117 = 0;
        v30 = 0;
        v114 = 0;
      }
      if ( v30 < 0 )
        goto LABEL_28;
      v49 = KeGetCurrentThread();
      --*((_WORD *)v49 + 242);
      v50 = (PERESOURCE *)v113;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v113 + 6), 1u);
      _InterlockedOr(v109, 0);
      v51 = v113;
      v52 = v117 + 8 + 4 * *(unsigned __int8 *)(*((_QWORD *)v113 + 21) + 1LL);
      v117 = v52;
      if ( v52 > *((_DWORD *)v113 + 34) )
      {
        _InterlockedOr(v109, 0);
        ExReleaseResourceLite(v50[6]);
        sub_1402F9540((__int64)KeGetCurrentThread());
        ObfDereferenceObject(v113);
        if ( v119 )
          sub_140663448((void *)v119, v9);
        return -1073741671;
      }
      else
      {
        v114 = sub_1407531C4((__int64)v113, v52);
        if ( v114 >= 0 )
        {
          v55 = (char *)*((_QWORD *)v51 + 23);
          if ( !v55 || (v114 = sub_140753E4C(v55, 0, v53, v54, 1, (int)HandleInformation, &P, &v124), v114 >= 0) )
          {
            sub_1407532AC((__int64)v51);
            v57 = (ACL *)v119;
            if ( v119 )
              sub_1407532F8((__int64)v51, (unsigned __int16 *)v119);
            sub_140753358(v56, (__int64)v51, (__int64)TokenHandle, (ACL *)P, v57);
            *((_QWORD *)v51 + 7) = _InterlockedIncrement64(&qword_140C0DA70);
            _InterlockedOr(v109, 0);
            ExReleaseResourceLite(v50[6]);
            sub_1402F9540((__int64)KeGetCurrentThread());
            ObfDereferenceObject(v113);
            if ( v119 )
              sub_140663448((void *)v119, v9);
            if ( P )
              ExFreePoolWithTag(P, 0);
            return 0;
          }
        }
        _InterlockedOr(v109, 0);
        ExReleaseResourceLite(v50[6]);
        sub_1402F9540((__int64)KeGetCurrentThread());
        ObfDereferenceObject(v113);
        if ( v119 )
          sub_140663448((void *)v119, v9);
        return v114;
      }
    }
    else
    {
      if ( TokenInformationLength < 8 )
        goto LABEL_169;
      v120 = *(_QWORD *)TokenInformation;
      v30 = sub_14066846C((char *)v120, v9, v13, v14, (int)Object, 1, (PSID *)&v120);
      v114 = v30;
      v31 = v15;
      if ( v30 < 0 )
        goto LABEL_29;
      if ( (unsigned __int8)sub_1409CA9E4(v15, v120) )
      {
        v100 = 4 * *(unsigned __int8 *)(v120 + 1) + 8;
        v117 = v100;
        v101 = KeGetCurrentThread();
        --*((_WORD *)v101 + 242);
        v102 = (PERESOURCE *)v113;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v113 + 6), 1u);
        _InterlockedOr(v109, 0);
        v103 = v113;
        v104 = *((_QWORD *)v113 + 23);
        if ( v104 )
        {
          v100 += *(unsigned __int16 *)(v104 + 2);
          v117 = v100;
        }
        if ( v100 <= *((_DWORD *)v113 + 34) )
        {
          v114 = sub_1407531C4((__int64)v113, v117);
          if ( v114 >= 0 )
          {
            sub_1409C6518(v103);
            sub_1409C64AC(v103, v120);
            v103[7] = _InterlockedIncrement64(&qword_140C0DA70);
            _InterlockedOr(v109, 0);
            ExReleaseResourceLite(v102[6]);
            sub_1402F9540((__int64)KeGetCurrentThread());
          }
          else
          {
            _InterlockedOr(v109, 0);
            ExReleaseResourceLite(v102[6]);
            sub_1402F9540((__int64)KeGetCurrentThread());
            v8 = v114;
          }
        }
        else
        {
          _InterlockedOr(v109, 0);
          ExReleaseResourceLite(v102[6]);
          sub_1402F9540((__int64)KeGetCurrentThread());
          v8 = -1073741671;
        }
        v15 = (PERESOURCE *)v113;
      }
      else
      {
        v8 = -1073741733;
      }
      ObfDereferenceObject(v15);
      sub_140668444((void *)v120, v9, 1);
      return v8;
    }
  }
  else
  {
    if ( TokenInformationLength < 8 )
      goto LABEL_169;
    Sid1 = *(PSID *)TokenInformation;
    v30 = sub_14066846C((char *)Sid1, v9, v13, v14, (int)Object, 1, &Sid1);
    v114 = v30;
    if ( v30 < 0 )
      goto LABEL_28;
    v86 = 0;
    v87 = KeGetCurrentThread();
    --*((_WORD *)v87 + 242);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v113 + 6), 1u);
    _InterlockedOr(v109, 0);
    while ( 1 )
    {
      if ( v86 >= *((_DWORD *)v15 + 31) )
      {
        _InterlockedOr(v109, 0);
        ExReleaseResourceLite(v15[6]);
        sub_1402F9540((__int64)KeGetCurrentThread());
        ObfDereferenceObject(v15);
        sub_140668444(Sid1, v9, 1);
        return -1073741734;
      }
      if ( RtlEqualSid(Sid1, (&v15[19]->SystemResourcesList.Flink)[2 * v86]) )
        break;
      ++v86;
    }
    if ( sub_1406BBF6C((__int64)v15, v86) )
    {
      *((_DWORD *)v15 + 36) = v86;
      v88 = 1;
      v115 = 1;
      v114 = 0;
    }
    else
    {
      v114 = -1073741734;
      v88 = v115;
    }
    if ( v88 )
    {
      v131 = (PERESOURCE *)_InterlockedIncrement64(&qword_140C0DA70);
      v15[7] = (PERESOURCE)v131;
    }
    _InterlockedOr(v109, 0);
    ExReleaseResourceLite(v15[6]);
    v140 = KeGetCurrentThread();
    sub_1402F9540((__int64)v140);
    ObfDereferenceObject(v15);
    sub_140668444(Sid1, v9, 1);
    return v114;
  }
}
