/*
 * XREFs of sub_140798334 @ 0x140798334
 * Callers:
 *     sub_14066F980 @ 0x14066F980 (sub_14066F980.c)
 *     sub_140791110 @ 0x140791110 (sub_140791110.c)
 *     sub_1407920F0 @ 0x1407920F0 (sub_1407920F0.c)
 *     sub_1407931C0 @ 0x1407931C0 (sub_1407931C0.c)
 *     sub_140793B84 @ 0x140793B84 (sub_140793B84.c)
 *     sub_140794AD0 @ 0x140794AD0 (sub_140794AD0.c)
 *     sub_14079982C @ 0x14079982C (sub_14079982C.c)
 *     sub_14085EB0C @ 0x14085EB0C (sub_14085EB0C.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14066A68C @ 0x14066A68C (sub_14066A68C.c)
 *     sub_1406C4AE4 @ 0x1406C4AE4 (sub_1406C4AE4.c)
 *     sub_1406E1C68 @ 0x1406E1C68 (sub_1406E1C68.c)
 *     sub_1406E4A40 @ 0x1406E4A40 (sub_1406E4A40.c)
 *     sub_1407915C4 @ 0x1407915C4 (sub_1407915C4.c)
 *     sub_14085F8CC @ 0x14085F8CC (sub_14085F8CC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140798334(struct _EX_RUNDOWN_REF **a1, __int64 a2, __int64 a3, int a4, __int64 *Sid)
{
  __int64 v5; // r15
  char *v8; // rax
  volatile signed __int64 *v9; // rdi
  __int64 v10; // r8
  __int64 *v11; // r13
  BOOL v12; // eax
  ULONG v13; // edx
  volatile signed __int64 *v14; // r14
  struct _EX_RUNDOWN_REF *v15; // rsi
  bool v16; // zf
  int v17; // ebx
  __int64 HostSilo; // rax
  __int64 *v20; // r12
  volatile signed __int64 v21; // rax
  signed __int64 *v22; // rdi
  _QWORD **v23; // r12
  __int64 v24; // rbx
  struct _EX_RUNDOWN_REF *v25; // rax
  int v26; // ebx
  PVOID PoolWithTag; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  struct _EX_RUNDOWN_REF *v30; // rax
  __int64 v31; // rbx
  _QWORD *v32; // rax
  _QWORD *v33; // rbx
  int v34; // [rsp+30h] [rbp-40h] BYREF
  ULONG NumberOfBytes[3]; // [rsp+34h] [rbp-3Ch] BYREF
  PVOID v36; // [rsp+40h] [rbp-30h] BYREF
  __int64 v37; // [rsp+48h] [rbp-28h] BYREF
  __int64 v38; // [rsp+50h] [rbp-20h] BYREF
  PVOID P; // [rsp+58h] [rbp-18h]

  v5 = a4;
  v38 = 0LL;
  v36 = 0LL;
  P = 0LL;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) && (unsigned int)(a4 - 4) > 1 )
  {
    v8 = (char *)sub_140347DB0();
  }
  else
  {
    HostSilo = PsGetHostSilo();
    v8 = (char *)sub_140204738(HostSilo);
  }
  v9 = (volatile signed __int64 *)(v8 + 912);
  if ( !*((_QWORD *)v8 + 114) )
  {
    v17 = sub_14085F8CC(&v36);
    if ( v17 < 0 )
      return (unsigned int)v17;
    if ( _InterlockedCompareExchange64(v9, (signed __int64)v36, 0LL) )
      ExFreePoolWithTag(v36, 0x20666E57u);
  }
  v37 = *(_QWORD *)(a2 + 2152);
  v10 = v37;
  if ( !v37 )
  {
    v17 = sub_1406C4AE4(a2, &v37);
    if ( v17 < 0 )
      return (unsigned int)v17;
    v10 = v37;
  }
  v11 = Sid;
  v12 = !Sid && !a3;
  v34 = v12;
  v13 = 8;
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 4 )
    {
      v14 = (volatile signed __int64 *)(*v9 + 16);
    }
    else
    {
      if ( (_DWORD)v5 != 5 )
      {
        v14 = (volatile signed __int64 *)(v10 + 8 * ((unsigned int)(v5 - 1) + 4LL));
        goto LABEL_12;
      }
      v14 = (volatile signed __int64 *)(*v9 + 24);
    }
  }
  else
  {
    v14 = (volatile signed __int64 *)(*v9 + 8);
  }
  v34 = 1;
LABEL_12:
  v15 = (struct _EX_RUNDOWN_REF *)*v14;
  *(_QWORD *)&NumberOfBytes[1] = *v14;
  if ( v34 && v15 )
    goto LABEL_14;
  if ( Sid )
  {
    if ( (_DWORD)v5 )
    {
      switch ( (_DWORD)v5 )
      {
        case 1:
          v13 = 4;
          goto LABEL_49;
        case 2:
          v13 = RtlLengthSid(Sid);
          goto LABEL_49;
        case 3:
LABEL_49:
          NumberOfBytes[0] = v13;
          v34 = 0;
          goto LABEL_31;
      }
    }
    v13 = 0;
    goto LABEL_49;
  }
  NumberOfBytes[0] = 8;
  v20 = &v38;
  v17 = sub_14066A68C(a2, a3, v5, &v38, NumberOfBytes, &v34);
  if ( v17 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20666E57u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v20 = (__int64 *)PoolWithTag;
    v17 = sub_14066A68C(a2, a3, v5, (__int64 *)PoolWithTag, NumberOfBytes, &v34);
  }
  if ( v17 < 0 )
    goto LABEL_17;
  if ( NumberOfBytes[0] )
    v11 = v20;
LABEL_31:
  if ( v34 && v15 )
  {
LABEL_14:
    v16 = sub_140347810(v15 + 1) == 0;
    goto LABEL_15;
  }
  v21 = *v9;
  v22 = (signed __int64 *)(*v9 + 8 * (3 * v5 + 4));
  v23 = (_QWORD **)(v21 + 8 * (3 * v5 + 5));
  v24 = sub_140347C10((__int64)v22, 0LL);
  if ( _InterlockedCompareExchange64(v22, 17LL, 0LL) )
    sub_14029F350(v22, 0, v24, (__int64)v22);
  if ( v24 )
    *(_BYTE *)(v24 + 18) = 1;
  v25 = (struct _EX_RUNDOWN_REF *)sub_1407915C4(v23, v11, NumberOfBytes[0]);
  v15 = v25;
  if ( v25 )
  {
    v26 = sub_140347810(v25 + 1);
    if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v22);
    sub_1402AFC00((ULONG_PTR)v22);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v22);
    sub_1402AFC00((ULONG_PTR)v22);
    v17 = sub_1406E4A40(&NumberOfBytes[1], v5, v11, NumberOfBytes[0]);
    if ( v17 < 0 )
      goto LABEL_17;
    v28 = sub_140347C10((__int64)v22, 0LL);
    v29 = v28;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
      sub_14029F120((unsigned __int64 *)v22, v28, (__int64)v22);
    if ( v29 )
      *(_BYTE *)(v29 + 18) = 1;
    v30 = (struct _EX_RUNDOWN_REF *)sub_1407915C4(v23, v11, NumberOfBytes[0]);
    v15 = v30;
    if ( !v30 )
    {
      v31 = *(_QWORD *)&NumberOfBytes[1];
      sub_140347810((struct _EX_RUNDOWN_REF *)(*(_QWORD *)&NumberOfBytes[1] + 8LL));
      v32 = *v23;
      v33 = (_QWORD *)(v31 + 32);
      if ( (_QWORD **)(*v23)[1] != v23 )
        __fastfail(3u);
      *v33 = v32;
      v33[1] = v23;
      v32[1] = v33;
      *v23 = v33;
      if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v22);
      sub_1402AFC00((ULONG_PTR)v22);
      if ( v34 )
        _InterlockedCompareExchange64(v14, *(signed __int64 *)&NumberOfBytes[1], 0LL);
      v15 = *(struct _EX_RUNDOWN_REF **)&NumberOfBytes[1];
      goto LABEL_16;
    }
    v26 = sub_140347810(v30 + 1);
    if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v22);
    sub_1402AFC00((ULONG_PTR)v22);
    sub_1406E1C68(*(struct _EX_RUNDOWN_REF **)&NumberOfBytes[1], 0);
  }
  v16 = v26 == 0;
LABEL_15:
  if ( !v16 )
  {
LABEL_16:
    v17 = 0;
    *a1 = v15;
    goto LABEL_17;
  }
  v17 = -1073741772;
LABEL_17:
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)v17;
}
