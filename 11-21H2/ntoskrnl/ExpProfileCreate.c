/*
 * XREFs of ExpProfileCreate @ 0x140A062C8
 * Callers:
 *     NtCreateProfile @ 0x140A069C0 (NtCreateProfile.c)
 *     NtCreateProfileEx @ 0x140A06AA0 (NtCreateProfileEx.c)
 * Callees:
 *     KeVerifyGroupAffinity @ 0x1402585E8 (KeVerifyGroupAffinity.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExIsRestrictedCaller @ 0x1406C5900 (ExIsRestrictedCaller.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpProfileCreate(
        __int64 *a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        unsigned int Length,
        int a8,
        unsigned __int16 a9,
        unsigned __int64 a10,
        char a11)
{
  __int128 *v14; // rbx
  __int64 result; // rax
  unsigned __int64 v16; // rcx
  char PreviousMode; // di
  __int64 v18; // rcx
  __int64 v19; // rax
  int inserted; // ebx
  char *v21; // rdi
  __int64 Tag; // [rsp+20h] [rbp-208h]
  int v23; // [rsp+54h] [rbp-1D4h] BYREF
  PVOID Object; // [rsp+58h] [rbp-1D0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-1C8h]
  PVOID v26; // [rsp+68h] [rbp-1C0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-1B8h] BYREF
  __int64 *v28; // [rsp+78h] [rbp-1B0h]
  __int128 v29; // [rsp+80h] [rbp-1A8h] BYREF
  __int128 v30; // [rsp+98h] [rbp-190h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-180h]
  __int128 v32; // [rsp+B0h] [rbp-178h] BYREF
  __int128 v33; // [rsp+C0h] [rbp-168h]
  __int128 v34; // [rsp+D0h] [rbp-158h]
  _DWORD v35[68]; // [rsp+E0h] [rbp-148h] BYREF

  v28 = a1;
  Address = a6;
  v14 = (__int128 *)a10;
  memset(&v35[2], 0, 0x100uLL);
  v29 = 0LL;
  v27 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  *(_QWORD *)&v34 = 0LL;
  DWORD2(v34) = 0;
  Object = 0LL;
  v26 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( !Length )
    return 3221225717LL;
  if ( (unsigned int)(a5 - 2) > 0x1D )
    return 3221225485LL;
  v16 = (a4 >> a5) + 1;
  if ( !(a4 % (1LL << a5)) )
    v16 = a4 >> a5;
  if ( v16 > (unsigned __int64)Length >> 2 )
    return 3221225507LL;
  if ( a3 + a4 < a4 )
    return 2147483653LL;
  LODWORD(v30) = a8;
  v23 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, __int128 *, int *))off_140C020D8[0])(1LL, 24LL, &v30, &v23) < 0
    || v23 != 24
    || !BYTE4(v30) )
  {
    return 3221225659LL;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v18 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v28 < 0x7FFFFFFF0000LL )
      v18 = (__int64)v28;
    *(_QWORD *)v18 = *(_QWORD *)v18;
    ProbeForWrite(Address, Length, 4u);
    if ( !a11 )
    {
      v19 = 16LL * a9;
      if ( v19 )
      {
        if ( (a10 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v19 + a10 > 0x7FFFFFFF0000LL || v19 + a10 < a10 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  v35[0] = 2097153;
  memset(&v35[1], 0, 0x104uLL);
  while ( a9 )
  {
    if ( !PreviousMode || a11 )
      v29 = *v14;
    else
      v29 = *v14;
    if ( !KeVerifyGroupAffinity((__int64)&v29, 0) )
      return 3221225485LL;
    if ( LOWORD(v35[0]) <= WORD4(v29) )
    {
      if ( HIWORD(v35[0]) <= WORD4(v29) )
        goto LABEL_34;
      LOWORD(v35[0]) = WORD4(v29) + 1;
    }
    *(_QWORD *)&v35[2 * WORD4(v29) + 2] |= v29;
LABEL_34:
    --a9;
    ++v14;
  }
  if ( a2 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a2,
               1024,
               (__int64)PsProcessType,
               PreviousMode,
               0x66507845u,
               &Object,
               0LL,
               0LL);
    if ( (int)result >= 0 )
      goto LABEL_42;
  }
  else
  {
    if ( a3 <= 0x7FFFFFFEFFFFLL && PreviousMode && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
      return 3221225569LL;
    Object = 0LL;
LABEL_42:
    if ( ExIsRestrictedCaller(PreviousMode) && a4 && (a3 + a4 > 0x7FFFFFFF0000LL || a3 + a4 < a3) )
      MEMORY[0x7FFFFFFF0000] = 0;
    LODWORD(v32) = 48;
    *((_QWORD *)&v32 + 1) = 0LL;
    DWORD2(v33) = 32;
    *(_QWORD *)&v33 = 0LL;
    v34 = 0LL;
    inserted = ObCreateObjectEx(0, ExProfileObjectType, (int)&v32, PreviousMode, Tag, 336, 0, 688, &v26, 0LL);
    if ( inserted < 0 )
    {
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x66507845u);
    }
    else
    {
      v21 = (char *)v26;
      *(_QWORD *)v26 = Object;
      *((_QWORD *)v21 + 1) = a3;
      *((_QWORD *)v21 + 2) = a4;
      *((_QWORD *)v21 + 3) = Address;
      *((_DWORD *)v21 + 8) = Length;
      *((_DWORD *)v21 + 9) = a5;
      *((_QWORD *)v21 + 6) = 0LL;
      *((_DWORD *)v21 + 16) = 0;
      *((_DWORD *)v21 + 17) = a8;
      *((_QWORD *)v21 + 9) = 2097153LL;
      memset(v21 + 80, 0, 0x100uLL);
      KiCopyAffinityEx((__int64)(v21 + 72), *((_WORD *)v21 + 37), (unsigned __int16 *)v35);
      inserted = ObInsertObjectEx(v21, 0LL, 1u, 0, 0, 0LL, &v27);
      LODWORD(Address) = inserted;
      if ( inserted >= 0 )
        *v28 = v27;
    }
    return (unsigned int)inserted;
  }
  return result;
}
