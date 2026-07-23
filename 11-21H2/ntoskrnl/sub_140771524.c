/*
 * XREFs of sub_140771524 @ 0x140771524
 * Callers:
 *     sub_1406DC724 @ 0x1406DC724 (sub_1406DC724.c)
 *     sub_14076DD0C @ 0x14076DD0C (sub_14076DD0C.c)
 *     sub_14076E714 @ 0x14076E714 (sub_14076E714.c)
 *     sub_14077139C @ 0x14077139C (sub_14077139C.c)
 *     sub_14080D8A8 @ 0x14080D8A8 (sub_14080D8A8.c)
 *     sub_14080DA78 @ 0x14080DA78 (sub_14080DA78.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_140778D60 @ 0x140778D60 (sub_140778D60.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     sub_14095B658 @ 0x14095B658 (sub_14095B658.c)
 *     sub_14095B69C @ 0x14095B69C (sub_14095B69C.c)
 *     sub_140A295FC @ 0x140A295FC (sub_140A295FC.c)
 *     sub_140A297B0 @ 0x140A297B0 (sub_140A297B0.c)
 */

__int64 __fastcall sub_140771524(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        PCWSTR SourceString,
        unsigned int a9,
        int a10)
{
  unsigned int v11; // r12d
  unsigned int v13; // r15d
  int v14; // edx
  __int64 *v15; // r9
  unsigned int i; // r10d
  _QWORD *v17; // r8
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r13
  int v21; // ebx
  int v22; // esi
  int v23; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // r10d
  __int64 (**v28)[2]; // r8
  unsigned int v29; // r9d
  __int64 *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  struct _KTHREAD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // eax
  struct _KTHREAD *v46; // rax
  __int64 v49; // r9
  __int64 v50; // r8
  char v51; // [rsp+60h] [rbp-81h]
  char v52; // [rsp+61h] [rbp-80h]
  int v53; // [rsp+64h] [rbp-7Dh] BYREF
  int v54; // [rsp+68h] [rbp-79h] BYREF
  unsigned int v55; // [rsp+6Ch] [rbp-75h] BYREF
  int v56; // [rsp+70h] [rbp-71h] BYREF
  int v57; // [rsp+74h] [rbp-6Dh] BYREF
  unsigned int v58; // [rsp+78h] [rbp-69h]
  __int64 v59; // [rsp+80h] [rbp-61h]
  __int64 v60; // [rsp+88h] [rbp-59h]
  int v61; // [rsp+90h] [rbp-51h]
  int v62; // [rsp+94h] [rbp-4Dh]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-49h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-39h]
  __int128 v65; // [rsp+B0h] [rbp-31h] BYREF
  GUID Guid; // [rsp+C0h] [rbp-21h] BYREF

  v60 = a1;
  v11 = 5;
  v59 = a4;
  v64 = a5;
  v62 = 0;
  v13 = 0;
  v61 = 0;
  v53 = 0;
  v57 = 0;
  v55 = 0;
  v58 = 0;
  v54 = 0;
  v56 = 0;
  v52 = 0;
  v51 = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  v65 = 0LL;
  if ( a3 != 1 )
  {
    if ( a3 == 3 )
    {
      if ( *(_DWORD *)(a6 + 16) == 256 )
      {
        v43 = *(_QWORD *)a6 - 0x4ACA104A78C34FC8LL;
        if ( *(_QWORD *)a6 == 0x4ACA104A78C34FC8LL )
          v43 = *(_QWORD *)(a6 + 8) - 0x576E99524D52A49ELL;
        if ( !v43 )
          return (unsigned int)-1073741790;
      }
    }
    else if ( a3 == 5 )
    {
      v27 = *(_DWORD *)(a6 + 16);
      v28 = &off_140007EC0;
      v29 = 0;
      while ( 1 )
      {
        v30 = (__int64 *)*v28;
        if ( v27 == LODWORD((**v28)[2]) )
        {
          v38 = *(_QWORD *)a6 - *v30;
          if ( *(_QWORD *)a6 == *v30 )
            v38 = *(_QWORD *)(a6 + 8) - v30[1];
          if ( !v38 )
            return (unsigned int)-1073741790;
        }
        ++v29;
        ++v28;
        if ( v29 >= 2 )
        {
          if ( v27 != 105 )
            break;
          v31 = *(_QWORD *)a6 - 0x4ACA104A78C34FC8LL;
          if ( *(_QWORD *)a6 == 0x4ACA104A78C34FC8LL )
            v31 = *(_QWORD *)(a6 + 8) - 0x576E99524D52A49ELL;
          if ( v31 || a7 == 7 )
            break;
          return (unsigned int)-1073741811;
        }
      }
    }
LABEL_17:
    v20 = v60;
    v21 = sub_14077198C(v60, (_DWORD)a2, a3, v64, a6, a7, (__int64)SourceString, a9, a10);
    v22 = a3 - 1;
    if ( v22 )
    {
      if ( v22 == 2 && v21 >= 0 && *(_DWORD *)(a6 + 16) == 9 )
      {
        v25 = *(_QWORD *)a6 - 0x45BC8B40540B947ELL;
        if ( *(_QWORD *)a6 == 0x45BC8B40540B947ELL )
          v25 = *(_QWORD *)(a6 + 8) + 0x5D42B376F4955D58LL;
        if ( !v25 )
          sub_140A297B0(v20, a2, v59);
      }
      goto LABEL_20;
    }
    v23 = *(_DWORD *)(a6 + 16);
    if ( v23 == 12 )
    {
      v42 = *(_QWORD *)a6 - 0x4EFDDF1CA45C254ELL;
      if ( *(_QWORD *)a6 == 0x4EFDDF1CA45C254ELL )
        v42 = *(_QWORD *)(a6 + 8) + 0x1FAF57B92E98DF80LL;
      if ( !v42 )
      {
        if ( v51 )
        {
          if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
          {
            RtlInitUnicodeString(&DestinationString, a2);
            LOBYTE(v49) = v21 >= 0;
            sub_14095B658(&DestinationString, v55, v58, v49);
          }
        }
      }
      goto LABEL_20;
    }
    if ( v23 == 5 )
    {
      v36 = *(_QWORD *)a6 - 0x408897A683DA6326LL;
      if ( *(_QWORD *)a6 == 0x408897A683DA6326LL )
        v36 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
      if ( !v36 && v51 && (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        if ( v56 == -536870328 )
        {
          if ( v13 == -536870328 )
            goto LABEL_20;
          v11 = 6;
        }
        else if ( v13 != -536870328 )
        {
          goto LABEL_20;
        }
        LOBYTE(v50) = v21 >= 0;
        sub_14095B69C(&DestinationString, v11, v50);
      }
    }
LABEL_20:
    if ( v52 )
    {
      ExReleaseResourceLite(&stru_140C462A0);
      KeLeaveCriticalRegion();
    }
    return (unsigned int)v21;
  }
  v14 = *(_DWORD *)(a6 + 16);
  v15 = &off_140007ED0;
  for ( i = 0; i < 0x10; ++i )
  {
    v17 = (_QWORD *)*v15;
    if ( v14 == *(_DWORD *)(*v15 + 16) )
    {
      v26 = *(_QWORD *)a6 - *v17;
      if ( *(_QWORD *)a6 == *v17 )
        v26 = *(_QWORD *)(a6 + 8) - v17[1];
      if ( !v26 )
        return (unsigned int)-1073741790;
    }
    ++v15;
  }
  if ( v14 == 12 )
  {
    v39 = *(_QWORD *)a6 - 0x4EFDDF1CA45C254ELL;
    if ( *(_QWORD *)a6 == 0x4EFDDF1CA45C254ELL )
      v39 = *(_QWORD *)(a6 + 8) + 0x1FAF57B92E98DF80LL;
    if ( v39 || SourceString && a9 == 4 )
      goto LABEL_14;
  }
  else
  {
    if ( v14 == 3 )
    {
      v32 = *(_QWORD *)a6 - 0x4EFDDF1CA45C254ELL;
      if ( *(_QWORD *)a6 == 0x4EFDDF1CA45C254ELL )
        v32 = *(_QWORD *)(a6 + 8) + 0x1FAF57B92E98DF80LL;
      if ( !v32 )
      {
LABEL_92:
        if ( !(unsigned __int8)sub_140778D60(a2) )
          return (unsigned int)-1073741790;
        goto LABEL_14;
      }
    }
    if ( v14 == 4 )
    {
      v37 = *(_QWORD *)a6 - 0x4EFDDF1CA45C254ELL;
      if ( *(_QWORD *)a6 == 0x4EFDDF1CA45C254ELL )
        v37 = *(_QWORD *)(a6 + 8) + 0x1FAF57B92E98DF80LL;
      if ( !v37 )
        goto LABEL_92;
LABEL_14:
      v19 = *(_DWORD *)(a6 + 16);
      switch ( v19 )
      {
        case 10:
          v33 = *(_QWORD *)a6 - 0x4EFDDF1CA45C254ELL;
          if ( *(_QWORD *)a6 == 0x4EFDDF1CA45C254ELL )
            v33 = *(_QWORD *)(a6 + 8) + 0x1FAF57B92E98DF80LL;
          if ( !v33 )
          {
            CurrentThread = KeGetCurrentThread();
            --*((_WORD *)CurrentThread + 242);
            ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
            v52 = 1;
          }
          break;
        case 12:
          v40 = *(_QWORD *)a6 - 0x4EFDDF1CA45C254ELL;
          if ( *(_QWORD *)a6 == 0x4EFDDF1CA45C254ELL )
            v40 = *(_QWORD *)(a6 + 8) + 0x1FAF57B92E98DF80LL;
          if ( !v40 )
          {
            v41 = KeGetCurrentThread();
            --*((_WORD *)v41 + 242);
            ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
            v52 = 1;
            if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
            {
              v51 = 1;
              v53 = 4;
              v45 = sub_14077CD90(v60, (_DWORD)a2, v59, 11, (__int64)&v57, (__int64)&v55, (__int64)&v53, 0);
              if ( v45 < 0 || v53 != 4 || v57 != 4 )
                v55 = 0;
              v58 = *(_DWORD *)SourceString;
            }
          }
          break;
        case 5:
          v35 = *(_QWORD *)a6 - 0x408897A683DA6326LL;
          if ( *(_QWORD *)a6 == 0x408897A683DA6326LL )
            v35 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
          if ( !v35 )
          {
            v46 = KeGetCurrentThread();
            --*((_WORD *)v46 + 242);
            ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
            v52 = 1;
            if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
            {
              v53 = 4;
              v51 = 1;
              if ( (int)sub_14077DA5C(
                          v60,
                          (_DWORD)a2,
                          1,
                          v59,
                          0LL,
                          (__int64)&qword_140010A48,
                          (__int64)&v54,
                          (__int64)&v56,
                          4,
                          (__int64)&v53,
                          0) < 0
                || v53 != 4
                || v54 != 23 )
              {
                v56 = 0;
              }
              if ( a9 == 4 && a7 == 23 )
                v13 = *(_DWORD *)SourceString;
            }
          }
          break;
      }
      goto LABEL_17;
    }
    if ( v14 != 2 )
      goto LABEL_14;
    v18 = *(_QWORD *)a6 - 0x4BFF97A98DBC9C86LL;
    if ( *(_QWORD *)a6 == 0x4BFF97A98DBC9C86LL )
      v18 = *(_QWORD *)(a6 + 8) + 0x5292C1A216403965LL;
    if ( v18 )
      goto LABEL_14;
    if ( SourceString
      && a9 >= 2
      && a7 == 18
      && !SourceString[((unsigned __int64)a9 >> 1) - 1]
      && (int)sub_140A295FC(SourceString, &Guid) >= 0
      && (int)sub_14077DA5C(
                v60,
                (_DWORD)a2,
                1,
                v59,
                0LL,
                (__int64)&qword_140010A78,
                (__int64)&v54,
                (__int64)&v65,
                16,
                (__int64)&v53,
                0) >= 0
      && v54 == 13
      && v53 == 16 )
    {
      v44 = v65 - *(_QWORD *)&Guid.Data1;
      if ( (_QWORD)v65 == *(_QWORD *)&Guid.Data1 )
        v44 = *((_QWORD *)&v65 + 1) - *(_QWORD *)Guid.Data4;
      if ( !v44 )
        goto LABEL_14;
    }
  }
  return (unsigned int)-1073741811;
}
