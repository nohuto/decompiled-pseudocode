/*
 * XREFs of sub_1407333B0 @ 0x1407333B0
 * Callers:
 *     sub_1406E6424 @ 0x1406E6424 (sub_1406E6424.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_14094B864 @ 0x14094B864 (sub_14094B864.c)
 *     sub_14094D4C8 @ 0x14094D4C8 (sub_14094D4C8.c)
 *     sub_1409F8680 @ 0x1409F8680 (sub_1409F8680.c)
 *     sub_140B1CC84 @ 0x140B1CC84 (sub_140B1CC84.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_1402A1A20 @ 0x1402A1A20 (sub_1402A1A20.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140367AF0 @ 0x140367AF0 (sub_140367AF0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     sub_1407D557C @ 0x1407D557C (sub_1407D557C.c)
 *     ExRaiseAccessViolation @ 0x140A021F0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_1407333B0(HANDLE Handle, unsigned int a2, unsigned __int64 a3, unsigned int a4, _DWORD *a5)
{
  size_t v5; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  KPROCESSOR_MODE v13; // cl
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  NTSTATUS v18; // ebx
  _QWORD *v19; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v21; // r9d
  unsigned __int16 *v22; // r15
  int v23; // eax
  void *v24; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // eax
  KPROCESSOR_MODE v29; // r9
  unsigned int v30; // edx
  char v31; // cl
  PVOID v32; // rax
  __int64 v33; // rcx
  unsigned __int8 v34; // [rsp+40h] [rbp-218h]
  char v35; // [rsp+41h] [rbp-217h]
  char v36; // [rsp+42h] [rbp-216h]
  char v37; // [rsp+43h] [rbp-215h] BYREF
  char v38; // [rsp+44h] [rbp-214h]
  unsigned int v39; // [rsp+48h] [rbp-210h]
  int v40; // [rsp+50h] [rbp-208h]
  PVOID v41; // [rsp+58h] [rbp-200h] BYREF
  unsigned int v42; // [rsp+60h] [rbp-1F8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-1F0h] BYREF
  PVOID v44; // [rsp+70h] [rbp-1E8h] BYREF
  PVOID v45; // [rsp+78h] [rbp-1E0h] BYREF
  __int64 v46; // [rsp+80h] [rbp-1D8h]
  _QWORD v47[2]; // [rsp+88h] [rbp-1D0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+98h] [rbp-1C0h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-1B0h] BYREF
  __int128 v51; // [rsp+B0h] [rbp-1A8h] BYREF
  PVOID v52; // [rsp+C0h] [rbp-198h] BYREF
  NTSTATUS v53; // [rsp+C8h] [rbp-190h]
  int v54; // [rsp+CCh] [rbp-18Ch]
  __int128 *v55; // [rsp+D0h] [rbp-188h]
  NTSTATUS v56; // [rsp+D8h] [rbp-180h]
  __int128 v57; // [rsp+DCh] [rbp-17Ch]
  __int64 v58; // [rsp+ECh] [rbp-16Ch]
  int v59; // [rsp+F4h] [rbp-164h]
  __int128 v60; // [rsp+100h] [rbp-158h] BYREF
  __int128 v61; // [rsp+110h] [rbp-148h]
  __int128 v62; // [rsp+120h] [rbp-138h]
  __int128 v63; // [rsp+130h] [rbp-128h]
  void *Src[2]; // [rsp+140h] [rbp-118h]
  char v65; // [rsp+150h] [rbp-108h]
  _OWORD v66[4]; // [rsp+151h] [rbp-107h] BYREF
  int v67; // [rsp+191h] [rbp-C7h]
  __int16 v68; // [rsp+195h] [rbp-C3h]
  char v69; // [rsp+197h] [rbp-C1h]
  struct _EVENT_DATA_DESCRIPTOR v70[2]; // [rsp+1A0h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+1C0h] [rbp-98h] BYREF
  __int64 *v72; // [rsp+1E0h] [rbp-78h]
  __int64 v73; // [rsp+1E8h] [rbp-70h]
  char *v74; // [rsp+1F0h] [rbp-68h]
  __int64 v75; // [rsp+1F8h] [rbp-60h]
  __int64 *v76; // [rsp+200h] [rbp-58h]
  __int64 v77; // [rsp+208h] [rbp-50h]

  v5 = a4;
  v39 = a2;
  v41 = a5;
  v51 = 0LL;
  HandleInformation = 0LL;
  LODWORD(Object) = 0;
  v42 = 0;
  memset(v66, 0, sizeof(v66));
  v67 = 0;
  v68 = 0;
  v69 = 0;
  memset(v70, 0, sizeof(v70));
  v46 = 0LL;
  if ( qword_140D3B008 )
    sub_140223A20((unsigned __int64)v70, 0x20000uLL);
  v35 = 0;
  v36 = 0;
  v44 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  *(_OWORD *)Src = 0LL;
  v65 = 0;
  v47[1] = v47;
  v47[0] = v47;
  sub_140347770((__int64)&v51);
  v45 = 0LL;
  v38 = sub_140AB46D0(v10, v9, v11);
  if ( !v38 )
  {
    v18 = -1073741431;
    goto LABEL_33;
  }
  if ( a2 > 8 )
  {
    if ( qword_140D3B008 )
    {
      if ( Handle )
      {
        v29 = *((_BYTE *)KeGetCurrentThread() + 562);
        v41 = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v29, &v41, 0LL) >= 0 )
        {
          v46 = *((_QWORD *)v41 + 1);
          ObfDereferenceObject(v41);
        }
      }
    }
    v18 = -1073741811;
    goto LABEL_33;
  }
  v13 = *((_BYTE *)KeGetCurrentThread() + 562);
  v34 = v13;
  if ( v13 == 1 )
  {
    if ( (_DWORD)v5 )
    {
      v14 = a3;
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = v5 + a3 - 1;
      if ( a3 > v15 || v15 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v16 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v14 = *(_BYTE *)v14;
        v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v14 != v16 );
    }
    v17 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    v13 = 1;
  }
  Object = 0LL;
  v18 = ObReferenceObjectByHandle(
          Handle,
          ((a2 - 3) & 0xFFFFFFFB) != 0,
          (POBJECT_TYPE)CmKeyObjectType,
          v13,
          &Object,
          &HandleInformation);
  v19 = Object;
  v44 = Object;
  if ( v18 < 0 )
    goto LABEL_33;
  if ( *(_DWORD *)Object != 1803104306 )
  {
    if ( a2 != 4 )
    {
      v18 = -1073741816;
      goto LABEL_33;
    }
    *a5 = 40;
    if ( (unsigned int)v5 < 0x28 )
    {
      v18 = -1073741789;
      v40 = -1073741789;
      goto LABEL_33;
    }
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 32) = 0LL;
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(v19[1] + 96LL);
    goto LABEL_32;
  }
  if ( qword_140D3B008 )
    v46 = *((_QWORD *)Object + 1);
  if ( ((a2 - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
  {
    v18 = -1073741790;
    goto LABEL_33;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v36 = 1;
  if ( dword_140C54CA8 && !sub_1402ACD00() )
  {
    v22 = (unsigned __int16 *)Object;
    *(_QWORD *)&v60 = Object;
    DWORD2(v60) = a2;
    *(_QWORD *)&v61 = a3;
    DWORD2(v61) = v5;
    *(_QWORD *)&v62 = v41;
    LOBYTE(v21) = 1;
    v23 = sub_140735760(7, (unsigned int)&v60, 0, v21, 22, (__int64)Object, (__int64)v47);
    v18 = v23;
    if ( v23 >= 0 )
    {
      v35 = 1;
      goto LABEL_28;
    }
    if ( v23 != -1073740541 )
      goto LABEL_33;
LABEL_32:
    v18 = 0;
    goto LABEL_33;
  }
  v22 = (unsigned __int16 *)Object;
LABEL_28:
  if ( a2 == 7 )
  {
    *(_DWORD *)v41 = 4;
    if ( (unsigned int)v5 < 4 )
    {
      v18 = -1073741789;
      v40 = -1073741789;
      goto LABEL_33;
    }
    *(_DWORD *)a3 = v22[25];
    goto LABEL_32;
  }
  v18 = sub_1407CA1C0(&v44, v34, ((a2 - 3) & 0xFFFFFFFB) != 0, &v45);
  if ( v18 >= 0 )
  {
    Src[0] = (void *)a3;
    if ( !(_DWORD)v5 )
    {
      Src[1] = 0LL;
      goto LABEL_63;
    }
    if ( *((_QWORD *)&xmmword_140C490E0 + 1) && (v34 || !(unsigned __int8)sub_1407D557C(a3)) )
    {
      if ( (unsigned int)dword_140C03868 > 5 && (byte_140C03878 & 4) != 0 && (qword_140C03880 & 4) == qword_140C03880 )
      {
        v49 = 1LL;
        v72 = &v49;
        v73 = 8LL;
        v37 = 2;
        v74 = &v37;
        v75 = 1LL;
        v30 = v5;
        if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
        {
          v31 = -1;
          do
          {
            ++v31;
            v30 >>= 1;
          }
          while ( v30 );
          v30 = 1 << (v31 + 1);
        }
        v50 = v30;
        v76 = &v50;
        v77 = 8LL;
        sub_1402A1A20((__int64)&dword_140C03868, (unsigned __int8 *)&dword_14002988C, v27, 5u, &v71);
      }
      if ( v5 <= 0x40 )
      {
        memset(v66, 0, v5);
        Src[1] = v66;
        goto LABEL_63;
      }
      if ( v5 > 0x1000 )
        goto LABEL_105;
      ++dword_140CE2414;
      a3 = (unsigned __int64)ExpInterlockedPopEntrySList(&Lookaside);
      if ( !a3 )
      {
        ++dword_140CE2418;
        a3 = sub_14042A5E0((unsigned int)dword_140CE2424, (unsigned int)dword_140CE242C);
      }
      if ( a3 )
      {
        memset((void *)a3, 0, v5);
        v65 |= 1u;
      }
      else
      {
LABEL_105:
        v32 = sub_140367AF0(v26, v5, 0x42424D43u);
        a3 = (unsigned __int64)v32;
        if ( !v32 )
        {
          v18 = -1073741670;
LABEL_64:
          if ( v18 >= 0 )
          {
            v18 = sub_1407C1B70((_DWORD)v44, (_DWORD)v45, v5, (__int64)&v42);
            if ( v18 >= 0 || v18 == -2147483643 || v18 == -1073741789 )
            {
              v28 = v42;
              *(_DWORD *)v41 = v42;
              if ( v18 != -1073741789 )
              {
                if ( (unsigned int)v5 >= v28 )
                  LODWORD(v5) = v28;
                if ( Src[0] != Src[1] )
                  memmove(Src[0], Src[1], (unsigned int)v5);
              }
            }
          }
          goto LABEL_33;
        }
        memset(v32, 0, v5);
      }
    }
    Src[1] = (void *)a3;
LABEL_63:
    v18 = 0;
    goto LABEL_64;
  }
LABEL_33:
  if ( v45 )
    ObfDereferenceObject(v45);
  if ( v35 && dword_140C54CA8 && !sub_1402ACD00() && (_QWORD *)v47[0] != v47 )
  {
    v54 = 0;
    v57 = 0LL;
    v58 = 0LL;
    v59 = 0;
    v52 = v44;
    v53 = v18;
    v56 = v18;
    v55 = &v60;
    sub_140735760(22, (unsigned int)&v52, 0, 0, 22, (__int64)v44, (__int64)v47);
    v18 = v56;
  }
  if ( v36 )
    KeLeaveCriticalRegion();
  if ( v44 )
    ObfDereferenceObject(v44);
  v24 = Src[1];
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v66 )
  {
    if ( (v65 & 1) != 0 )
    {
      ++dword_140CE241C;
      if ( LOWORD(Lookaside.Alignment) >= (unsigned __int16)word_140CE2410 )
      {
        ++dword_140CE2420;
        sub_14042A5E0(Src[1], &Lookaside);
      }
      else
      {
        ExpInterlockedPushEntrySList(&Lookaside, (PSLIST_ENTRY)Src[1]);
      }
    }
    else
    {
      SeFreePrivileges((PPRIVILEGE_SET)Src[1]);
    }
  }
  if ( qword_140D3B008 )
  {
    v33 = v46;
    LOBYTE(v33) = 13;
    sub_14042A5E0(v33, v70);
  }
  if ( v38 )
    sub_140AB42A0(v24, v12);
  sub_14022EA30((__int64 *)&v51);
  return (unsigned int)v18;
}
