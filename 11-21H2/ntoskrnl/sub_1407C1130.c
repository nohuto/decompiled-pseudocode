/*
 * XREFs of sub_1407C1130 @ 0x1407C1130
 * Callers:
 *     sub_14084CD18 @ 0x14084CD18 (sub_14084CD18.c)
 *     sub_1409F8680 @ 0x1409F8680 (sub_1409F8680.c)
 *     sub_140B1CC84 @ 0x140B1CC84 (sub_140B1CC84.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     sub_1407C16A0 @ 0x1407C16A0 (sub_1407C16A0.c)
 *     sub_1407C1A00 @ 0x1407C1A00 (sub_1407C1A00.c)
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     ExRaiseAccessViolation @ 0x140A021F0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_1407C1130(
        HANDLE Handle,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        size_t Size,
        _DWORD *a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // r8d
  unsigned int v14; // r14d
  int v15; // ebx
  unsigned int v16; // edi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v22; // eax
  unsigned int v23; // eax
  struct _KTHREAD *v24; // rcx
  void *v26; // rcx
  KPROCESSOR_MODE v28; // r9
  char v29; // [rsp+40h] [rbp-1A8h]
  char v30; // [rsp+41h] [rbp-1A7h]
  char v31; // [rsp+42h] [rbp-1A6h]
  PVOID Object; // [rsp+48h] [rbp-1A0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-198h]
  _DWORD v35[4]; // [rsp+58h] [rbp-190h] BYREF
  PVOID v36; // [rsp+68h] [rbp-180h] BYREF
  __int64 v37; // [rsp+70h] [rbp-178h]
  PVOID v38; // [rsp+78h] [rbp-170h] BYREF
  _QWORD v39[2]; // [rsp+80h] [rbp-168h] BYREF
  __int128 v40; // [rsp+90h] [rbp-158h] BYREF
  PVOID v41; // [rsp+A0h] [rbp-148h] BYREF
  int v42; // [rsp+A8h] [rbp-140h]
  int v43; // [rsp+ACh] [rbp-13Ch]
  _QWORD *v44; // [rsp+B0h] [rbp-138h]
  int v45; // [rsp+B8h] [rbp-130h]
  __int128 v46; // [rsp+BCh] [rbp-12Ch]
  __int64 v47; // [rsp+CCh] [rbp-11Ch]
  int v48; // [rsp+D4h] [rbp-114h]
  _QWORD v49[8]; // [rsp+E0h] [rbp-108h] BYREF
  void *Src[2]; // [rsp+120h] [rbp-C8h] BYREF
  char v51; // [rsp+130h] [rbp-B8h]
  _BYTE v52[71]; // [rsp+131h] [rbp-B7h] BYREF
  _OWORD v53[2]; // [rsp+180h] [rbp-68h] BYREF

  v35[2] = a2;
  v40 = 0LL;
  LODWORD(v36) = 0;
  memset(v52, 0, sizeof(v52));
  memset(v53, 0, sizeof(v53));
  v34 = 0LL;
  v37 = 0LL;
  if ( qword_140D3B008 )
    sub_140223A20((unsigned __int64)v53, 0x20000uLL);
  v29 = 0;
  v30 = 0;
  memset(v49, 0, sizeof(v49));
  Object = 0LL;
  v35[0] = 0;
  *(_OWORD *)Src = 0LL;
  v51 = 0;
  v39[1] = v39;
  v39[0] = v39;
  sub_140347770((__int64)&v40);
  v38 = 0LL;
  v31 = sub_140AB46D0(v10, v9, v11);
  if ( !v31 )
  {
    v15 = -1073741431;
    goto LABEL_32;
  }
  if ( a3 > 2 )
  {
    if ( qword_140D3B008 )
    {
      if ( Handle )
      {
        v28 = *((_BYTE *)KeGetCurrentThread() + 562);
        v36 = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v28, &v36, 0LL) >= 0 )
          ObfDereferenceObject(v36);
      }
    }
    v15 = -1073741811;
  }
  else
  {
    v14 = *((char *)KeGetCurrentThread() + 562);
    v15 = sub_140AB4630((_DWORD)Handle, 8, v13, (unsigned __int8)v14, (__int64)&Object, 0LL);
    if ( v15 < 0 )
      goto LABEL_32;
    if ( qword_140D3B008 && Object )
    {
      v34 = *((_QWORD *)Object + 1);
      v37 = v34;
    }
    if ( (_BYTE)v14 == 1 )
    {
      v16 = Size;
      if ( (_DWORD)Size )
      {
        v17 = a4;
        if ( (a4 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = a4 + (unsigned int)Size - 1LL;
        if ( a4 > v18 || v18 >= 0x7FFFFFFF0000LL )
          ExRaiseAccessViolation();
        v19 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v17 = *(_BYTE *)v17;
          v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v17 != v19 );
      }
      v20 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v20 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v20 = *(_DWORD *)v20;
    }
    else
    {
      v16 = Size;
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v30 = 1;
    if ( !dword_140C54CA8 || sub_1402ACD00() )
      goto LABEL_24;
    v49[0] = Object;
    v49[1] = __PAIR64__(a3, a2);
    v49[2] = a4;
    LODWORD(v49[3]) = v16;
    v49[4] = a6;
    v22 = sub_140735760(5u, (__int64)v49, 0LL, 1, 0x14u, (__int64)Object, (__int64)v39);
    v15 = v22;
    if ( v22 >= 0 )
    {
      v29 = 1;
LABEL_24:
      v15 = sub_1407CA1C0(&Object, (unsigned __int8)v14, 8LL, &v38);
      if ( v15 >= 0 )
      {
        v15 = sub_1407C1A00(Src, a4, v16, v14, 0);
        if ( v15 >= 0 )
        {
          v15 = sub_1407C16A0((_DWORD)Object, (_DWORD)v38, a2, a3, (__int64)Src[1], v16, (__int64)v35);
          if ( v15 >= 0 || v15 == -2147483643 || v15 == -1073741789 )
          {
            v23 = v35[0];
            *a6 = v35[0];
            if ( v15 != -1073741789 )
            {
              if ( v16 >= v23 )
                v16 = v23;
              if ( Src[0] != Src[1] )
                memmove(Src[0], Src[1], v16);
            }
          }
        }
      }
      goto LABEL_32;
    }
    if ( v22 == -1073740541 )
      v15 = 0;
  }
LABEL_32:
  if ( v38 )
    ObfDereferenceObject(v38);
  if ( v29 && dword_140C54CA8 && !sub_1402ACD00() && (_QWORD *)v39[0] != v39 )
  {
    v43 = 0;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0;
    v41 = Object;
    v42 = v15;
    v45 = v15;
    v44 = v49;
    sub_140735760(0x14u, (__int64)&v41, 0LL, 0, 0x14u, (__int64)Object, (__int64)v39);
    v15 = v45;
  }
  if ( v30 )
  {
    v24 = KeGetCurrentThread();
    if ( (*((_WORD *)v24 + 242))++ == 0xFFFF
      && *((struct _KTHREAD **)v24 + 19) != (struct _KTHREAD *)((char *)v24 + 152)
      && !*((_WORD *)v24 + 243) )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  v26 = Src[1];
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v52 )
  {
    if ( (v51 & 1) != 0 )
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
    LOBYTE(v26) = 17;
    sub_14042A5E0(v26, v53);
  }
  if ( v31 )
    sub_140AB42A0(v26, v12);
  sub_14022EA30((__int64 *)&v40);
  return (unsigned int)v15;
}
