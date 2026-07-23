/*
 * XREFs of sub_1407D6120 @ 0x1407D6120
 * Callers:
 *     sub_140B30770 @ 0x140B30770 (sub_140B30770.c)
 * Callees:
 *     sub_14020E0AC @ 0x14020E0AC (sub_14020E0AC.c)
 *     sub_140258040 @ 0x140258040 (sub_140258040.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035C7A4 @ 0x14035C7A4 (sub_14035C7A4.c)
 *     sub_14036D62C @ 0x14036D62C (sub_14036D62C.c)
 *     sub_140372620 @ 0x140372620 (sub_140372620.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     ZwLoadDriver @ 0x14041D8C0 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x14041EE00 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x14041F1A0 (ZwUnloadDriver.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14054EE08 @ 0x14054EE08 (sub_14054EE08.c)
 *     sub_140551D58 @ 0x140551D58 (sub_140551D58.c)
 *     sub_140552A60 @ 0x140552A60 (sub_140552A60.c)
 *     sub_1405657F8 @ 0x1405657F8 (sub_1405657F8.c)
 *     sub_1405685CC @ 0x1405685CC (sub_1405685CC.c)
 *     sub_14056A228 @ 0x14056A228 (sub_14056A228.c)
 *     sub_140572EC0 @ 0x140572EC0 (sub_140572EC0.c)
 *     sub_140578074 @ 0x140578074 (sub_140578074.c)
 *     sub_1405E00E4 @ 0x1405E00E4 (sub_1405E00E4.c)
 *     sub_1405E050C @ 0x1405E050C (sub_1405E050C.c)
 *     sub_140638B98 @ 0x140638B98 (sub_140638B98.c)
 *     sub_140638DC8 @ 0x140638DC8 (sub_140638DC8.c)
 *     sub_14063AFCC @ 0x14063AFCC (sub_14063AFCC.c)
 *     PsLookupProcessThreadByCid @ 0x140663880 (PsLookupProcessThreadByCid.c)
 *     sub_14068F5DC @ 0x14068F5DC (sub_14068F5DC.c)
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 *     sub_1406B6054 @ 0x1406B6054 (sub_1406B6054.c)
 *     sub_1406C3EEC @ 0x1406C3EEC (sub_1406C3EEC.c)
 *     sub_1406E5AA0 @ 0x1406E5AA0 (sub_1406E5AA0.c)
 *     sub_1406EB324 @ 0x1406EB324 (sub_1406EB324.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     MmLoadSystemImage @ 0x14075FC00 (MmLoadSystemImage.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 *     sub_1407D7634 @ 0x1407D7634 (sub_1407D7634.c)
 *     sub_1407F8CF0 @ 0x1407F8CF0 (sub_1407F8CF0.c)
 *     sub_14085B59C @ 0x14085B59C (sub_14085B59C.c)
 *     sub_140862300 @ 0x140862300 (sub_140862300.c)
 *     sub_140862398 @ 0x140862398 (sub_140862398.c)
 *     sub_1408642EC @ 0x1408642EC (sub_1408642EC.c)
 *     sub_1409113B4 @ 0x1409113B4 (sub_1409113B4.c)
 *     sub_140911544 @ 0x140911544 (sub_140911544.c)
 *     sub_1409118AC @ 0x1409118AC (sub_1409118AC.c)
 *     sub_1409190E8 @ 0x1409190E8 (sub_1409190E8.c)
 *     sub_140929940 @ 0x140929940 (sub_140929940.c)
 *     sub_140932A4C @ 0x140932A4C (sub_140932A4C.c)
 *     MmAddVerifierThunks @ 0x14096A0D0 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x14096BA60 (MmCreateMirror.c)
 *     sub_140983C8C @ 0x140983C8C (sub_140983C8C.c)
 *     sub_1409858C0 @ 0x1409858C0 (sub_1409858C0.c)
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 *     sub_1409F6C5C @ 0x1409F6C5C (sub_1409F6C5C.c)
 *     sub_1409F7694 @ 0x1409F7694 (sub_1409F7694.c)
 *     sub_1409F76FC @ 0x1409F76FC (sub_1409F76FC.c)
 *     sub_1409F7B3C @ 0x1409F7B3C (sub_1409F7B3C.c)
 *     sub_1409F7BE8 @ 0x1409F7BE8 (sub_1409F7BE8.c)
 *     sub_1409FB924 @ 0x1409FB924 (sub_1409FB924.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140A03DA4 @ 0x140A03DA4 (sub_140A03DA4.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140A81724 @ 0x140A81724 (sub_140A81724.c)
 *     sub_140A818B0 @ 0x140A818B0 (sub_140A818B0.c)
 *     sub_140A818E8 @ 0x140A818E8 (sub_140A818E8.c)
 *     sub_140A96CA8 @ 0x140A96CA8 (sub_140A96CA8.c)
 *     sub_140A9C668 @ 0x140A9C668 (sub_140A9C668.c)
 *     sub_140A9C7F8 @ 0x140A9C7F8 (sub_140A9C7F8.c)
 *     sub_140A9C820 @ 0x140A9C820 (sub_140A9C820.c)
 *     sub_140A9C958 @ 0x140A9C958 (sub_140A9C958.c)
 *     sub_140A9CA48 @ 0x140A9CA48 (sub_140A9CA48.c)
 *     sub_140A9CAB4 @ 0x140A9CAB4 (sub_140A9CAB4.c)
 *     sub_140A9CB44 @ 0x140A9CB44 (sub_140A9CB44.c)
 *     sub_140A9CBF8 @ 0x140A9CBF8 (sub_140A9CBF8.c)
 *     sub_140A9D738 @ 0x140A9D738 (sub_140A9D738.c)
 *     sub_140AB07F4 @ 0x140AB07F4 (sub_140AB07F4.c)
 */

signed int __fastcall sub_1407D6120(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  size_t v3; // r15
  void **v4; // r14
  int v5; // esi
  __int64 v6; // rbx
  unsigned int v7; // r13d
  __int64 v8; // r9
  KPROCESSOR_MODE v9; // r12
  __int64 v10; // rax
  signed int v11; // edi
  __int64 v12; // rcx
  char v13; // cl
  unsigned __int64 v14; // r9
  int v15; // esi
  int v16; // esi
  int v17; // esi
  signed int result; // eax
  int v20; // esi
  PVOID v21; // rsi
  void *v22; // rcx
  int v23; // esi
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // r15d
  int v28; // r8d
  char *v29; // rdx
  int SystemImage; // eax
  PVOID v31; // rbx
  PIMAGE_NT_HEADERS v32; // rax
  char *v33; // rdx
  PIMAGE_NT_HEADERS v34; // rax
  __int64 v35; // rbx
  int v36; // esi
  int v37; // esi
  int v38; // esi
  int v39; // esi
  int v40; // esi
  struct _KTHREAD *CurrentThread; // rax
  int v42; // esi
  int v43; // esi
  int v44; // esi
  int v45; // ecx
  int v46; // ecx
  int v47; // esi
  int v48; // esi
  unsigned int v49; // r15d
  unsigned __int64 v50; // rsi
  ULONG ActiveProcessorCount; // eax
  __int64 *v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rcx
  void *v56; // rcx
  int v57; // esi
  signed int v58; // eax
  __int64 v59; // rsi
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // edi
  HANDLE v63; // rax
  int v64; // esi
  int v65; // esi
  int v66; // esi
  int v67; // esi
  int v68; // esi
  int v69; // esi
  int v70; // esi
  int v71; // esi
  unsigned int v72; // edi
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r8
  __int64 v76; // r9
  UNICODE_STRING *p_Buffer; // rcx
  __int64 v78; // rcx
  __int16 v79; // ax
  int v80; // esi
  __int64 v81; // rcx
  int v82; // r15d
  char v83; // di
  __m128i v84; // xmm1
  unsigned __int16 v85; // di
  char *v86; // rcx
  PVOID PoolWithTag; // rax
  PVOID v88; // r15
  __int64 v89; // rcx
  __int64 v90; // rbx
  unsigned int v91; // r15d
  __int64 v92; // rsi
  int v93; // esi
  __int64 v94; // rcx
  bool v95; // [rsp+40h] [rbp-578h] BYREF
  BOOLEAN IsMember[8]; // [rsp+41h] [rbp-577h] BYREF
  char v97[23]; // [rsp+49h] [rbp-56Fh] BYREF
  void *Buf1[2]; // [rsp+60h] [rbp-558h] BYREF
  PVOID BaseOfImage; // [rsp+78h] [rbp-540h] BYREF
  LUID PrivilegeValue; // [rsp+80h] [rbp-538h]
  ULONG Size[4]; // [rsp+88h] [rbp-530h] BYREF
  int v103; // [rsp+98h] [rbp-520h]
  unsigned __int64 v104; // [rsp+A0h] [rbp-518h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-510h] BYREF
  int v106; // [rsp+B0h] [rbp-508h]
  PVOID Object; // [rsp+B8h] [rbp-500h] BYREF
  void *v108; // [rsp+C0h] [rbp-4F8h] BYREF
  void *v109; // [rsp+C8h] [rbp-4F0h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+D0h] [rbp-4E8h] BYREF
  __int128 v111; // [rsp+E0h] [rbp-4D8h]
  int v112; // [rsp+F0h] [rbp-4C8h]
  HANDLE v113; // [rsp+158h] [rbp-460h]
  __int64 v114; // [rsp+1E0h] [rbp-3D8h]
  int v115; // [rsp+1F8h] [rbp-3C0h]
  void *Src[2]; // [rsp+200h] [rbp-3B8h]
  HANDLE v117; // [rsp+218h] [rbp-3A0h]
  __int64 v118; // [rsp+220h] [rbp-398h]
  UNICODE_STRING v119; // [rsp+240h] [rbp-378h] BYREF
  __int128 v120; // [rsp+250h] [rbp-368h] BYREF
  __int128 v121; // [rsp+260h] [rbp-358h]
  _BYTE v122[256]; // [rsp+270h] [rbp-348h] BYREF
  char v123[256]; // [rsp+370h] [rbp-248h] BYREF
  _BYTE v124[256]; // [rsp+470h] [rbp-148h] BYREF

  v3 = (unsigned int)a3;
  v4 = (void **)a2;
  v5 = a1;
  v6 = 0LL;
  v95 = 0;
  *(_OWORD *)Buf1 = 0LL;
  BaseOfImage = 0LL;
  v7 = 1;
  v8 = 1LL;
  v108 = 0LL;
  v109 = 0LL;
  BugCheckParameter2 = 0LL;
  Object = 0LL;
  v104 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v9 )
  {
    v10 = 1LL;
    if ( (_DWORD)a1 != 89 )
      v10 = 3LL;
    if ( (_DWORD)a3 )
    {
      if ( (v10 & a2) != 0 )
        ExRaiseDatatypeMisalignment();
      a1 = a2 + (unsigned int)a3;
      if ( a1 > 0x7FFFFFFF0000LL || a1 < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v11 = 0;
  if ( v5 > 106 )
  {
    if ( v5 > 170 )
    {
      if ( v5 > 210 )
      {
        if ( v5 <= 223 )
        {
          switch ( v5 )
          {
            case 223:
              return sub_14063AFCC((void *)a2, (unsigned int)a3, v9);
            case 212:
              return sub_140911544((void *)a2, (unsigned int)a3, v9);
            case 217:
              if ( !SeSinglePrivilegeCheck(stru_140D3CA18, v9) )
                return -1073741790;
              return sub_140A9CBF8(v4, (unsigned int)v3);
            case 218:
              if ( !SeSinglePrivilegeCheck(stru_140D3CA18, v9) )
                return -1073741790;
              return sub_140A9CAB4();
          }
          if ( (unsigned int)(v5 - 219) > 1 )
            return -1073741821;
          if ( (_DWORD)a3 != 16 )
            return -1073741820;
          if ( !v9 )
            goto LABEL_422;
          if ( !SeSinglePrivilegeCheck(stru_140D3CA18, v9) )
            return -1073741727;
          result = sub_140A818B0(Buf1, v4, 1LL);
          if ( result < 0 )
            return result;
          v4 = Buf1;
          if ( LOWORD(Buf1[0]) )
          {
LABEL_422:
            v93 = v5 - 219;
            if ( !v93 )
            {
              v58 = sub_140A9CA48(v4, a2, a3, v8);
              goto LABEL_429;
            }
            if ( v93 == 1 )
            {
              v58 = sub_140A9CB44(v4, a2, a3, v8);
              goto LABEL_429;
            }
            goto LABEL_427;
          }
          return -1073741585;
        }
        if ( v5 != 224 && v5 != 225 )
        {
          if ( v5 == 226 )
          {
            if ( !SeSinglePrivilegeCheck(stru_140D3CA18, v9) )
              return -1073741727;
            LOBYTE(v94) = (_DWORD)v3 == 0;
            return sub_140A9D738(v94);
          }
          else
          {
            if ( (unsigned int)(v5 - 228) > 1 )
              return -1073741821;
            IsMember[0] = 0;
            if ( RtlCheckTokenMembership(0LL, SidToCheck, IsMember) < 0 || !IsMember[0] )
              return -1073741727;
            return sub_1405685CC(v4, (unsigned int)v3);
          }
        }
        goto LABEL_449;
      }
      if ( v5 == 210 )
        return sub_1409113B4((void *)a2, (unsigned int)a3, v9);
      if ( v5 <= 194 )
      {
        switch ( v5 )
        {
          case 194:
            if ( !(_DWORD)a3 )
            {
              if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
                return -1073741727;
              v11 = sub_14054EE08();
              if ( v11 < 0 )
                return v11;
              return sub_140552A60();
            }
            break;
          case 176:
            if ( (unsigned int)a3 < 8 )
              return -1073741820;
            v91 = a3 - 8;
            if ( (((_BYTE)a3 - 8) & 7) != 0 || v91 > 0x100 )
              return -1073741820;
            v92 = *(_QWORD *)a2;
            v118 = *(_QWORD *)a2;
            memmove(v123, (const void *)(a2 + 8), v91);
            v11 = sub_140258040(v9);
            if ( v11 < 0 )
              return v11;
            return sub_140572EC0(v91 >> 3, v123, v92);
          case 177:
            if ( (_DWORD)a3 != 8 )
            {
              if ( (_DWORD)a3 )
                return -1073741820;
              v11 = 0;
              v90 = *((_QWORD *)KeGetCurrentThread() + 23);
              Size[0] = sub_140287F30(v90);
              if ( Size[0] == -1 )
                return v11;
              return sub_1406F83A0(32, v90, 1, Size);
            }
            if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
              return -1073741727;
            v117 = *v4;
            *(_QWORD *)Size = 0LL;
            v11 = ObReferenceObjectByHandle(v117, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, (PVOID *)Size, 0LL);
            if ( v11 < 0 )
              return v11;
            v35 = *(_QWORD *)Size;
            Size[0] = sub_140287F30(*(__int64 *)Size);
            if ( Size[0] != -1 )
              v11 = sub_1406F83A0(32, v35, 1, Size);
            v22 = (void *)v35;
            goto LABEL_65;
          case 187:
            if ( (_DWORD)a3 != 24 )
              return -1073741820;
            v119 = *(UNICODE_STRING *)a2;
            *(_QWORD *)&v120 = *(_QWORD *)(a2 + 16);
            result = sub_140A818E8(&v119, 1LL, a3, 1LL);
            if ( result < 0 )
              return result;
            v11 = sub_1405E050C((__int64)&v119, v120);
            p_Buffer = &v119;
            goto LABEL_432;
          default:
            v89 = (unsigned int)(v5 - 190);
            if ( v5 == 190 )
              goto LABEL_449;
            if ( v5 != 191 )
              return -1073741821;
            if ( !(_DWORD)a3 )
            {
              if ( v9 && !SeSinglePrivilegeCheck(stru_140D3CA18, v9) )
                return -1073741727;
              return sub_140932A4C(v89, a2, a3, v8);
            }
            break;
        }
        return -1073741811;
      }
      if ( v5 != 199 )
      {
        if ( v5 != 204 )
        {
          if ( v5 != 206 )
          {
            if ( v5 != 207 )
              return -1073741821;
            if ( (_DWORD)a3 != 4 )
              return -1073741820;
            if ( !SeSinglePrivilegeCheck(stru_140D3CA18, v9) )
              return -1073741790;
            v103 = 0;
            if ( (*(_DWORD *)v4 & 4) == 0 )
            {
              dword_140C4E7B0 = dword_140C4E7B0 & 4 | *(_DWORD *)v4;
              *(_DWORD *)v4 = dword_140C4E7B0;
              return v11;
            }
            return -1073741811;
          }
          if ( (_DWORD)a3 != 8 )
            return -1073741820;
          if ( v9 && !SeSinglePrivilegeCheck(stru_140D3CB60, v9) )
            return -1073741727;
          if ( PsIsCurrentThreadInServerSilo() )
            return -1073741790;
          v95 = (unsigned __int8)*v4 != 0;
          result = sub_1409F7BE8();
          v11 = result;
          if ( result >= 0 )
          {
            *(_BYTE *)qword_140C15B58 = v95;
            return v11;
          }
          return result;
        }
        v114 = 0LL;
        if ( (unsigned int)a3 < 8 )
          return -1073741820;
        v49 = a3 - 8;
        if ( (((_BYTE)a3 - 8) & 7) != 0 || v49 > 0x100 )
          return -1073741820;
        v50 = *(_QWORD *)a2;
        memmove(v124, (const void *)(a2 + 8), v49);
        if ( v50 >= 2 )
          return -1073741811;
        v11 = sub_140258040(v9);
        if ( v11 < 0 )
          return v11;
        v27 = v49 >> 3;
        v28 = v50;
        v29 = v124;
        return sub_14020E0AC(v27, v29, v28);
      }
    }
    else
    {
      if ( v5 == 170 )
      {
        v111 = 0LL;
        if ( (_DWORD)a3 != 16 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(stru_140D3CA68, v9) )
          return -1073741727;
        return sub_140578074(*(_OWORD *)v4, WORD2(*v4), (__int64)v4[1]);
      }
      if ( v5 <= 134 )
      {
        if ( v5 == 134 )
        {
          if ( (_DWORD)a3 != 32 )
            return -1073741820;
          return sub_1406B6054(a1, a2);
        }
        else if ( v5 > 127 )
        {
          v23 = v5 - 129;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( !v24 )
            {
              if ( (((_DWORD)a3 - 16) & 0xFFFFFFE7) == 0 && (_DWORD)a3 != 40 )
              {
                if ( SeSinglePrivilegeCheck(stru_140D3CA90, v9) )
                {
                  memmove(&v119, v4, v3);
                  if ( (_DWORD)v3 == 32 )
                    v6 = *((_QWORD *)&v120 + 1);
                  v25 = sub_140372620((__int64)KeGetCurrentThread());
                  v11 = sub_1407F8CF0(
                          v25,
                          *(_QWORD *)&v119.Length,
                          (unsigned int)v120,
                          v6,
                          *((_BYTE *)KeGetCurrentThread() + 562),
                          &v109);
                  PrivilegeValue.LowPart = v11;
                  v4[1] = v109;
                  return v11;
                }
                return -1073741727;
              }
              return -1073741820;
            }
            v40 = v24 - 1;
            if ( v40 )
            {
              if ( v40 != 1 )
                return -1073741821;
              if ( (_DWORD)a3 != 4 )
                return -1073741820;
              *(_QWORD *)&DriverServiceName.Length = 7733364LL;
              DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
              if ( *(_BYTE *)a2 & 1 )
              {
                CurrentThread = KeGetCurrentThread();
                --*((_WORD *)CurrentThread + 242);
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3B228, 0LL);
                v11 = ZwLoadDriver(&DriverServiceName);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D3B228, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(&qword_140D3B228);
                sub_1402AFC00((ULONG_PTR)&qword_140D3B228);
                goto LABEL_30;
              }
              if ( !SeSinglePrivilegeCheck(::PrivilegeValue, v9) )
                return -1073741727;
              return ZwUnloadDriver(&DriverServiceName);
            }
            else
            {
              if ( v9 )
                return -1073741790;
              if ( (_DWORD)a3 != 24 )
                return -1073741820;
              return sub_140862300(*(_QWORD *)a2, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), 1LL);
            }
          }
          else
          {
            return sub_14056A228(a2, a3, v9);
          }
        }
        else
        {
          if ( v5 == 127 )
          {
            if ( (_DWORD)a3 == 16 )
            {
              if ( SeSinglePrivilegeCheck(stru_140D3CA90, v9) )
              {
                v113 = *v4;
                v11 = sub_140983C8C(v81, v113, &v108);
                PrivilegeValue.LowPart = v11;
                v4[1] = v108;
                return v11;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          v20 = v5 - 109;
          if ( v20 )
          {
            v47 = v20 - 1;
            if ( !v47 )
              return -1073741822;
            v48 = v47 - 1;
            if ( !v48 )
            {
              if ( (_DWORD)a3 != 4 )
                return -1073741820;
              if ( !SeSinglePrivilegeCheck(stru_140D3CA90, v9) )
                return -1073741790;
              MEMORY[0xFFFFF78000000248] = *(_DWORD *)v4;
              return 0;
            }
            v80 = v48 - 2;
            if ( v80 )
            {
              if ( v80 != 13 )
                return -1073741821;
              if ( v9 )
                return -1073741727;
              if ( (_DWORD)a3 != 32 )
                return -1073741820;
              return sub_140AB07F4(a1, a2, a3, 1LL);
            }
            else
            {
              return sub_1405E00E4(a2, a3, v9);
            }
          }
          else
          {
            return sub_1406E5AA0(a1, (__int128 *)a2, a3, v9);
          }
        }
      }
      switch ( v5 )
      {
        case 142:
          *(_OWORD *)Src = 0LL;
          if ( (_DWORD)a3 != 48 )
            return -1073741820;
          if ( !SeSinglePrivilegeCheck(stru_140D3CAB8, v9) )
            return -1073741727;
          if ( xmmword_140C15CA0 )
            return 0;
          v119 = *(UNICODE_STRING *)v4;
          v84 = *((__m128i *)v4 + 1);
          v121 = *((_OWORD *)v4 + 2);
          *(__m128i *)Src = v84;
          v120 = 0LL;
          v85 = _mm_cvtsi128_si32(v84);
          if ( v85 && (v85 & 1) == 0 )
          {
            if ( ((__int64)Src[1] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v86 = (char *)Src[1] + v85;
            if ( (unsigned __int64)v86 > 0x7FFFFFFF0000LL || v86 < Src[1] )
              MEMORY[0x7FFFFFFF0000] = 0;
            PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)9, v85, 0x50535845u);
            v88 = PoolWithTag;
            if ( PoolWithTag )
            {
              memmove(PoolWithTag, Src[1], v85);
              *((_QWORD *)&v120 + 1) = v88;
              LOWORD(v120) = v85;
              WORD1(v120) = v85;
            }
          }
          *(UNICODE_STRING *)&xmmword_140C15CA0 = v119;
          xmmword_140C15CB0 = v120;
          xmmword_140C15CC0 = v121;
          return 0;
        case 150:
          if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
            return -1073741727;
          return sub_140638B98(v4, (unsigned int)v3);
        case 151:
          PrivilegeValue = (LUID)19LL;
          if ( !SeSinglePrivilegeCheck((LUID)19LL, v9) )
            return -1073741727;
          v82 = v3 - 1;
          if ( v82 )
          {
            if ( v82 != 3 )
              return -1073741820;
            v7 = *(_DWORD *)v4;
            v115 = *(_DWORD *)v4;
          }
          else
          {
            v83 = *(_BYTE *)v4;
            if ( *(_BYTE *)v4 && !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
              return -1073741727;
            if ( !v83 )
              v7 = 5;
          }
          return sub_140638DC8(v7);
        case 152:
          if ( (_DWORD)a3 != 8 )
            return -1073741820;
          if ( v9 )
            return sub_1409F6C5C(*(_QWORD *)a2, a2, a3, 1LL);
          return -1073741811;
        case 155:
          return sub_1409190E8((unsigned int)(v5 - 155), a2, a3, 1LL);
        case 159:
          return -1073741637;
        case 161:
          if ( v9 )
            return -1073741790;
          if ( (_DWORD)a3 != 8 )
            return -1073741820;
          return KdInitialize(3LL, a2, &xmmword_140C31E60, 1LL);
      }
      if ( v5 != 164 )
      {
        if ( v5 != 168 )
          return -1073741821;
        if ( (a3 & 7) != 0 || (unsigned int)a3 > 0x100 )
          return -1073741820;
        memmove(v122, (const void *)a2, (unsigned int)a3);
        result = sub_140258040(v9);
        if ( result < 0 )
          return result;
        v27 = (unsigned int)v3 >> 3;
        v28 = 0;
        v29 = v122;
        return sub_14020E0AC(v27, v29, v28);
      }
    }
LABEL_449:
    if ( qword_140C1B948 )
      return sub_14042A5E0((unsigned int)v5, a2);
    return -1073741637;
  }
  if ( v5 == 106 )
    return -1073741821;
  if ( v5 > 59 )
  {
    if ( v5 <= 87 )
    {
      if ( v5 == 87 )
      {
        if ( !SeSinglePrivilegeCheck(stru_140D3CA18, v9) )
          return -1073741790;
        if ( (_DWORD)v3 == 8 )
        {
          v63 = *v4;
          dword_140D069F4 = (unsigned int)*v4;
          dword_140D05168 = BYTE4(v63) & 1;
          return v11;
        }
        return -1073741820;
      }
      if ( v5 <= 79 )
      {
        if ( v5 == 79 )
          return sub_1406AD6BC(a1, (__int128 *)a2, a3, v9);
        v36 = v5 - 69;
        if ( v36 )
        {
          v37 = v36 - 2;
          if ( !v37 )
            return -1073741637;
          v38 = v37 - 1;
          if ( v38 )
          {
            v39 = v38 - 2;
            if ( v39 )
            {
              if ( v39 != 1 )
                return -1073741821;
              LOBYTE(a3) = v9;
              return sub_14085B59C(a2, (unsigned int)v3, a3, 1LL);
            }
            return -1073741822;
          }
          if ( v9 || !a2 || (_DWORD)a3 != 8 )
            return -1073741811;
          if ( *(_DWORD *)a2 )
          {
            v60 = (unsigned int)(*(_DWORD *)a2 - 1);
            if ( *(_DWORD *)a2 == 1
              || (v60 = (unsigned int)(*(_DWORD *)a2 - 2), *(_DWORD *)a2 == 2)
              || (v60 = (unsigned int)(*(_DWORD *)a2 - 3), *(_DWORD *)a2 == 3) )
            {
              sub_14042A5E0(v60, a2);
              return 0;
            }
            if ( *(_DWORD *)a2 != 4 )
            {
              v61 = (unsigned int)(*(_DWORD *)a2 - 6);
              if ( *(_DWORD *)a2 == 6 )
              {
                LODWORD(v61) = 1;
                return sub_14042A5E0(v61, a2);
              }
              if ( *(_DWORD *)a2 == 7 )
              {
                v11 = 0;
                if ( off_140C01F28[0] == SkIsSecureKernel )
                  return -1073741822;
                return v11;
              }
              return -1073741811;
            }
          }
        }
        return -1073741637;
      }
      if ( v5 == 80 )
      {
        LOBYTE(a3) = v9;
        return sub_140862398(a2, (unsigned int)v3, a3, 1LL);
      }
      if ( v5 == 81 )
        goto LABEL_261;
      if ( v5 != 82 )
      {
        if ( v5 != 86 )
          return -1073741821;
        return sub_1409858C0(a2, (unsigned int)a3, a3, 1LL);
      }
      if ( (unsigned int)a3 < 0x18 )
        return -1073741820;
      if ( !SeSinglePrivilegeCheck(stru_140D3CA68, v9) )
        return -1073741727;
      if ( v9 )
      {
        v119 = *(UNICODE_STRING *)v4;
        *(_QWORD *)&v120 = v4[2];
        v4 = (void **)&v119;
      }
      if ( (unsigned int)(*((_DWORD *)v4 + 4) - 1) > 0x1E )
        return -1073741811;
      *(_OWORD *)Size = *(_OWORD *)v4;
      v11 = PsLookupProcessThreadByCid((__int64)Size, 0LL, &Object);
      if ( v11 < 0 )
        return v11;
      v21 = Object;
      if ( *((_BYTE *)Object + 4) )
      {
        v11 = -1073741749;
      }
      else
      {
        KeSetActualBasePriorityThread((ULONG_PTR)Object, *((_DWORD *)v4 + 4));
        v11 = 259;
      }
      v22 = v21;
LABEL_65:
      ObfDereferenceObject(v22);
      return v11;
    }
    v64 = v5 - 89;
    if ( !v64 )
    {
      if ( v9 == 1 )
      {
        if ( !SeSinglePrivilegeCheck(stru_140D3CA10, 1) )
          return -1073741727;
        v78 = *((_QWORD *)KeGetCurrentThread() + 23);
        if ( !*(_QWORD *)(v78 + 1408) )
          return sub_140929940(v4, (unsigned int)v3);
        v79 = *(_WORD *)(v78 + 2412);
        if ( v79 != 332 && v79 != 452 )
          LOBYTE(v7) = 0;
        if ( !(_BYTE)v7 )
          return sub_140929940(v4, (unsigned int)v3);
      }
      return -1073741637;
    }
    v65 = v64 - 2;
    if ( !v65 )
    {
      if ( !v9 )
      {
        if ( (_DWORD)a3 )
          return -1073741584;
        else
          return byte_140D0688B == 0 ? 0xC0351000 : 0;
      }
      return -1073741790;
    }
    v66 = v65 - 1;
    if ( !v66 )
    {
      if ( !SeSinglePrivilegeCheck(stru_140D3CA18, v9) )
        return -1073741790;
      if ( (_DWORD)v3 != 40 )
        return -1073741820;
      return sub_140A9C958(v4);
    }
    v67 = v66 - 1;
    if ( !v67 )
    {
      v72 = 172;
      goto LABEL_285;
    }
    v68 = v67 - 1;
    if ( !v68 )
    {
      if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
        return -1073741790;
      if ( (_DWORD)v3 == 8 )
      {
        *(_QWORD *)&v119.Length = *v4;
        _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, *(unsigned int *)&v119.Length);
        _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~*(_DWORD *)(&v119.MaximumLength + 1));
        return v11;
      }
      return -1073741820;
    }
    v69 = v68 - 1;
    if ( !v69 )
    {
      if ( !v9 || !SeSinglePrivilegeCheck(stru_140D3CA18, v9) )
        return -1073741790;
      if ( (unsigned int)v3 < 0x18 )
        return -1073741820;
      return sub_140A03DA4(v4, (unsigned int)v3);
    }
    v70 = v69 - 2;
    if ( v70 )
    {
      v71 = v70 - 5;
      if ( v71 )
      {
        if ( v71 != 2 )
          return -1073741821;
        LOBYTE(a3) = v9;
        return sub_1409F7694(a2, (unsigned int)v3, a3, 1LL);
      }
      v72 = 432;
LABEL_285:
      if ( (_DWORD)a3 != v72 )
        return -1073741820;
      if ( v9
        && !(unsigned __int8)sub_1409FB924((PUNICODE_STRING)&CapabilityName)
        && !SeSinglePrivilegeCheck(stru_140D3CCE8, v9) )
      {
        return -1073741727;
      }
      return sub_1409F76FC(v4, v72, a3, v8);
    }
    if ( (_DWORD)a3 != 40 )
      return -1073741820;
    if ( v9 )
    {
      if ( !SeSinglePrivilegeCheck(stru_140D3CA18, v9) )
        return -1073741727;
      v119 = *(UNICODE_STRING *)v4;
      v120 = *((_OWORD *)v4 + 1);
      *(_QWORD *)&v121 = v4[4];
      result = sub_140A818E8(&v119.Buffer, 1LL, v73, v74);
      if ( result < 0 )
        return result;
      v11 = sub_140A818E8((char *)&v120 + 8, 1LL, v75, v76);
      if ( v11 < 0 )
      {
        p_Buffer = (UNICODE_STRING *)&v119.Buffer;
        goto LABEL_432;
      }
      v4 = (void **)&v119;
    }
    v11 = sub_140A96CA8(v4, a2, a3, v8);
    if ( !v9 )
      return v11;
    sub_140A81724(v4 + 1);
    p_Buffer = (UNICODE_STRING *)(v4 + 3);
LABEL_432:
    sub_140A81724(p_Buffer);
    return v11;
  }
  if ( v5 == 59 )
  {
    if ( (_DWORD)a3 == 4 )
    {
      v59 = *(unsigned int *)a2;
      v11 = sub_1409F7B3C(v59, a2, a3, 1LL);
      if ( v11 >= 0 )
        MEMORY[0xFFFFF780000002E0] = v59;
      return v11;
    }
    return -1073741820;
  }
  if ( v5 > 38 )
  {
    if ( v5 > 48 )
    {
      v15 = v5 - 51;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 2;
          if ( !v17 )
          {
            LODWORD(v8) = 0;
            goto LABEL_100;
          }
          if ( v17 != 2 )
            return -1073741821;
          LOBYTE(v8) = v9;
          return sub_1407D7634(a1, a2, (unsigned int)a3, v8);
        }
        else
        {
          if ( v9 )
            return -1073741727;
          return MmAddVerifierThunks((PVOID)a2, a3);
        }
      }
      else
      {
        if ( !SeSinglePrivilegeCheck(stru_140D3CA18, v9) )
          return -1073741790;
        return sub_140A9C820(v4, (unsigned int)v3, 0LL);
      }
    }
    if ( v5 != 48 )
    {
      if ( v5 == 39 )
      {
        if ( (_DWORD)a3 != 4 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
          return -1073741727;
        sub_14068F5DC(1, *(_DWORD *)v4);
        return 0;
      }
      if ( v5 > 41 )
      {
        if ( v5 == 46 )
        {
          if ( (_DWORD)a3 == 8 )
          {
            if ( !v9 || SeSinglePrivilegeCheck(stru_140D3CB60, v9) )
            {
              if ( !PsIsCurrentThreadInServerSilo() )
              {
                v113 = *v4;
                if ( v113 )
                {
                  *(_QWORD *)Size = 0LL;
                  v11 = ObReferenceObjectByHandle(v113, 2u, (POBJECT_TYPE)ExEventObjectType, v9, (PVOID *)Size, 0LL);
                  v56 = *(void **)Size;
                  if ( v11 < 0 )
                    return v11;
                }
                else
                {
                  v56 = 0LL;
                  v11 = 0;
                }
                sub_1405657F8(v56);
                return v11;
              }
              return -1073741790;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        if ( v5 != 47 )
          return -1073741821;
        return -1073741822;
      }
      if ( (_DWORD)a3 != 16 )
        return -1073741820;
      if ( !v9 )
        goto LABEL_230;
      if ( !SeSinglePrivilegeCheck(stru_140D3CA18, v9) )
        return -1073741727;
      result = sub_140A818B0(Buf1, v4, 1LL);
      if ( result < 0 )
        return result;
      v4 = Buf1;
      if ( LOWORD(Buf1[0]) )
      {
LABEL_230:
        v57 = v5 - 40;
        if ( !v57 )
        {
          v58 = sub_140A9C668((PCUNICODE_STRING)v4);
          goto LABEL_429;
        }
        if ( v57 == 1 )
        {
          v58 = sub_140A9C7F8(v4, a2, a3, v8);
LABEL_429:
          v11 = v58;
          goto LABEL_430;
        }
LABEL_427:
        v11 = -1073741821;
LABEL_430:
        if ( !v9 )
          return v11;
        p_Buffer = (UNICODE_STRING *)v4;
        goto LABEL_432;
      }
      return -1073741585;
    }
    return -1073741822;
  }
  if ( v5 != 38 )
  {
    if ( v5 <= 28 )
    {
      if ( v5 == 28 )
      {
        if ( (((_DWORD)a3 - 8) & 0xFFFFFFF7) == 0 )
        {
          if ( !v9 || SeSinglePrivilegeCheck(stru_140D3CB60, v9) )
          {
            if ( !PsIsCurrentThreadInServerSilo() )
            {
              if ( (_DWORD)v3 == 16 )
              {
                v13 = *((_BYTE *)v4 + 8);
                v95 = v13;
                v104 = (unsigned __int64)*v4;
              }
              else
              {
                v13 = *((_BYTE *)v4 + 4);
                v95 = v13;
                v14 = *(unsigned int *)v4;
                v104 = v14;
                if ( v14 )
                  v104 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)DesiredTime / v14;
              }
              if ( v13 )
                v104 = MEMORY[0xFFFFF78000000300];
              LOBYTE(v12) = 1;
              sub_1407D6F54(v12);
              v11 = sub_14035C7A4(0LL, (__int64)&v104, (__int64)&v95);
              ExReleaseResourceLite(&stru_140C15AC0);
LABEL_30:
              KeLeaveCriticalRegion();
              return v11;
            }
            return -1073741790;
          }
          return -1073741727;
        }
        return -1073741820;
      }
      if ( v5 != 9 )
      {
        if ( v5 != 21 )
        {
          if ( v5 == 24 )
          {
            if ( (_DWORD)a3 == 20 )
            {
              if ( !v9 || SeSinglePrivilegeCheck(::PrivilegeValue, v9) )
              {
                v119 = *(UNICODE_STRING *)v4;
                LODWORD(v120) = *((_DWORD *)v4 + 4);
                dword_140D050C4 = (int)v119.Buffer;
                dword_140D05094 = *(_DWORD *)(&v119.MaximumLength + 1);
                dword_140D05098 = HIDWORD(v119.Buffer);
                dword_140D05170 = v120;
                sub_1406C3EEC();
                ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
                if ( ActiveProcessorCount )
                {
                  v52 = qword_140D088C0;
                  v53 = ActiveProcessorCount;
                  do
                  {
                    v54 = *v52;
                    *(_DWORD *)(v54 + 13224) = dword_140D05094;
                    *(_DWORD *)(v54 + 13232) = dword_140D050C4;
                    ++v52;
                    --v53;
                  }
                  while ( v53 );
                }
                return v11;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          if ( v5 != 26 )
          {
            if ( v5 == 27 )
            {
              if ( (_DWORD)a3 != 8 )
                return -1073741820;
              if ( v9 )
                return -1073741727;
              MmUnloadSystemImage(*(_QWORD *)a2);
              return 0;
            }
            return -1073741821;
          }
LABEL_100:
          if ( (_DWORD)a3 == 56 )
          {
            if ( !v9 )
            {
              *(_OWORD *)Buf1 = *(_OWORD *)a2;
              SystemImage = MmLoadSystemImage((int)Buf1, 0, 0, v8, (__int64)&BugCheckParameter2, (__int64)&BaseOfImage);
              v11 = SystemImage;
              if ( SystemImage < 0 )
              {
                if ( SystemImage == -1073741411 )
                  return -1073741554;
              }
              else
              {
                v31 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0, Size);
                v32 = RtlImageNtHeader(BaseOfImage);
                v4[5] = v31;
                v33 = (char *)BaseOfImage + v32->OptionalHeader.AddressOfEntryPoint;
                v4[2] = BaseOfImage;
                v4[3] = (void *)BugCheckParameter2;
                v4[4] = v33;
                *((_DWORD *)v4 + 12) = v32->OptionalHeader.SizeOfImage;
              }
              return v11;
            }
            return -1073741727;
          }
          return -1073741820;
        }
LABEL_261:
        v97[0] = 0;
        if ( (unsigned int)a3 >= 0x40 )
        {
          if ( v5 == 21 )
          {
            v62 = 0;
            v106 = 0;
          }
          else
          {
            v106 = *(_DWORD *)(a2 + 60);
            v62 = v106;
            if ( (v106 & 0xFFFFFFF0) != 0 || (v106 & 0xC) == 0xC || (v106 & 3) == 3 )
              return -1073741584;
          }
          if ( SeSinglePrivilegeCheck(stru_140D3CAF0, v9) )
            return sub_14036D62C((unsigned __int64)v4[3], (unsigned __int64)v4[4], 2, 1, v62, v97);
          return -1073741790;
        }
        return -1073741820;
      }
      if ( (_DWORD)a3 == 4 )
      {
        if ( SeSinglePrivilegeCheck(stru_140D3CA18, v9) )
        {
          NtGlobalFlag = *(_DWORD *)v4 ^ (NtGlobalFlag ^ *(_DWORD *)v4) & 0x6DCE640F;
          *(_DWORD *)v4 = NtGlobalFlag;
          return v11;
        }
        return -1073741790;
      }
      return -1073741820;
    }
    v42 = v5 - 30;
    if ( !v42 )
      return MmCreateMirror();
    v43 = v42 - 1;
    if ( !v43 )
      return sub_1409DEFB8((volatile void *)a2, (unsigned int)a3, v9);
    v44 = v43 - 3;
    if ( !v44 )
    {
      if ( v9 && !SeSinglePrivilegeCheck(stru_140D3CA18, v9) || PsIsCurrentThreadInServerSilo() )
        return -1073741727;
      if ( (_DWORD)v3 == 4 )
      {
        if ( v9 )
        {
          if ( ((unsigned __int8)v4 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)v4 + 4 > 0x7FFFFFFF0000LL || (void **)((char *)v4 + 4) < v4 )
            MEMORY[0x7FFFFFFF0000] = 0;
          v45 = *(_DWORD *)v4;
          v112 = *(_DWORD *)v4;
        }
        else
        {
          v45 = *(_DWORD *)v4;
        }
        if ( !v45 )
        {
          v55 = 0LL;
          return sub_140551D58(v55, 0);
        }
        v46 = v45 - 1;
        if ( v46 )
        {
          if ( v46 == 1 )
            return sub_1408642EC();
          return -1073741811;
        }
      }
      v55 = 1LL;
      return sub_140551D58(v55, 0);
    }
    if ( v44 != 3 )
      return -1073741821;
    if ( (_DWORD)a3 != 16 )
      return -1073741820;
    if ( v9 && !SeSinglePrivilegeCheck(stru_140D3CAF0, v9) )
      return -1073741727;
    return sub_1409118AC(v4, a2, a3, v8);
  }
  if ( (_DWORD)a3 != 16 )
    return -1073741820;
  if ( v9 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1849LL) & 1) == 0
      || !SeSinglePrivilegeCheck(::PrivilegeValue, 1) )
    {
      return -1073741727;
    }
    v26 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v4 < 0x7FFFFFFF0000LL )
      v26 = (__int64)v4;
    LODWORD(Buf1[0]) = *(_DWORD *)v26;
    Buf1[1] = *(void **)(v26 + 8);
    if ( LOWORD(Buf1[0]) == 62 )
    {
      if ( !memcmp(Buf1[1], L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
      {
        Buf1[1] = L"\\SystemRoot\\System32\\win32k.sys";
        WORD1(Buf1[0]) = 62;
        return ZwSetSystemInformation(SystemExtendServiceTableInformation, Buf1, 0x10u);
      }
      else
      {
        return -1073741727;
      }
    }
    else
    {
      return -1073741727;
    }
  }
  else
  {
    *(_OWORD *)Buf1 = *(_OWORD *)a2;
    if ( !memcmp(
            (const void *)_mm_srli_si128(*(__m128i *)Buf1, 8).m128i_i64[0],
            L"\\SystemRoot\\System32\\win32k.sys",
            0x3EuLL) )
      v7 = -2147483643;
    result = sub_14075FC44((__int64)Buf1, 0LL, 0LL, 0LL, v7, &BugCheckParameter2, (unsigned __int64 *)&BaseOfImage);
    if ( result >= 0 )
    {
      v34 = RtlImageNtHeader(BaseOfImage);
      if ( !v34 )
      {
        MmUnloadSystemImage(BugCheckParameter2);
        return -1073741701;
      }
      v11 = sub_1406EB324((__int64)BaseOfImage + v34->OptionalHeader.AddressOfEntryPoint, (__int64)BaseOfImage);
      if ( v11 < 0 )
        MmUnloadSystemImage(BugCheckParameter2);
      return v11;
    }
    if ( result == -1073741411 )
      return -1073741554;
  }
  return result;
}
