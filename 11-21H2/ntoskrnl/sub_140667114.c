/*
 * XREFs of sub_140667114 @ 0x140667114
 * Callers:
 *     sub_140664220 @ 0x140664220 (sub_140664220.c)
 *     sub_140666D1C @ 0x140666D1C (sub_140666D1C.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140667554 @ 0x140667554 (sub_140667554.c)
 *     sub_1406675AC @ 0x1406675AC (sub_1406675AC.c)
 *     sub_140667810 @ 0x140667810 (sub_140667810.c)
 *     sub_140667864 @ 0x140667864 (sub_140667864.c)
 *     sub_1406679E8 @ 0x1406679E8 (sub_1406679E8.c)
 *     sub_140668294 @ 0x140668294 (sub_140668294.c)
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_1407A49B4 @ 0x1407A49B4 (sub_1407A49B4.c)
 *     sub_1407A73B0 @ 0x1407A73B0 (sub_1407A73B0.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 */

__int64 __fastcall sub_140667114(
        __int64 *a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  void *v11; // rsi
  char v12; // r12
  __int64 result; // rax
  char *v14; // r14
  __int64 v15; // rcx
  signed __int64 *v16; // rdi
  int v17; // edi
  __int64 v18; // r8
  char v19; // al
  _DWORD *v20; // rdi
  int v21; // esi
  _DWORD *v22; // rsi
  _QWORD *v23; // rax
  ULONG_PTR *v24; // r13
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 **v27; // rdx
  __int64 v28; // rdi
  NTSTATUS ClientSecurity; // eax
  _QWORD *v30; // rbx
  int v31; // ecx
  __int64 v32; // rax
  volatile signed __int64 *v33; // rdi
  PVOID v34; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v36; // [rsp+50h] [rbp-10h]
  __int64 v37; // [rsp+58h] [rbp-8h] BYREF
  char v41; // [rsp+C0h] [rbp+60h]

  v11 = 0LL;
  Object = 0LL;
  v34 = 0LL;
  v12 = *((_BYTE *)KeGetCurrentThread() + 562);
  v37 = 0LL;
  if ( a5 )
    result = sub_1406686C8(a5, 0LL, 1LL, qword_140D069D8, v12, 0LL, &v34);
  else
    result = ObReferenceObjectByName(a4, 0, 0, 1, (__int64)qword_140D069D8, v12, 0LL, (__int64)&v34);
  if ( (int)result >= 0 )
  {
    v14 = (char *)v34;
    v15 = *((unsigned int *)v34 + 104);
    if ( (*((_DWORD *)v34 + 104) & 6) != 2 )
    {
      v17 = -1073741758;
      goto LABEL_58;
    }
    if ( !a11 && (v15 & 0x1000) != 0 )
    {
      v33 = (volatile signed __int64 *)((char *)v34 + 352);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v34 + 352, 0LL);
      *((_DWORD *)v14 + 104) &= ~0x2000u;
      if ( (_InterlockedExchangeAdd64(v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v14 + 352);
      sub_1402AFC00((ULONG_PTR)(v14 + 352));
      v14 = (char *)v34;
    }
    if ( a9 || a8 )
    {
      v16 = (signed __int64 *)(v14 + 352);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v14 + 352), 0LL);
      if ( (*((_QWORD *)v14 + 3) & 1) == 0 )
        v11 = (void *)*((_QWORD *)v14 + 3);
      if ( v11 )
        ObfReferenceObjectWithTag(v11, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v16);
      sub_1402AFC00((ULONG_PTR)v16);
      if ( v11 )
      {
        v17 = sub_140668294((PEPROCESS)v11);
        ObfDereferenceObjectWithTag(v11, 0x63706C41u);
        if ( v17 >= 0 )
        {
          v14 = (char *)v34;
          goto LABEL_18;
        }
      }
      else
      {
        v17 = -1073741152;
      }
      v14 = (char *)v34;
      goto LABEL_58;
    }
LABEL_18:
    LOBYTE(v15) = v12;
    v17 = sub_1406679E8(v15, a6, &Object);
    if ( v17 >= 0 )
    {
      if ( !a7 || (v19 = 1, (*a7 & 0x40000) == 0) )
        v19 = 0;
      v20 = Object;
      LOBYTE(v18) = v19;
      v41 = v19;
      v21 = sub_140667864(Object, 2LL, v18);
      if ( v21 >= 0 )
      {
        v22 = v20 + 104;
        v20[104] |= 8u;
        v23 = (_QWORD *)sub_1407A73B0(qword_1400011C0, 80LL, 1LL);
        v36 = v23;
        if ( v23 )
        {
          *((_QWORD *)v20 + 2) = v23;
          v24 = v23 + 9;
          v23[9] = 0LL;
          v23[1] = 0LL;
          *v23 = v14;
          v23[2] = v20;
          ExAcquirePushLockExclusiveEx(*((_QWORD *)v14 + 2) - 16LL, 0LL);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 352), 0LL);
          v25 = *((_QWORD *)v14 + 2) + 24LL;
          v26 = v36 + 3;
          v27 = *(__int64 ***)(*((_QWORD *)v14 + 2) + 32LL);
          if ( *v27 != (__int64 *)v25 )
            __fastfail(3u);
          *v26 = v25;
          v26[1] = (__int64)v27;
          *v27 = v26;
          *(_QWORD *)(v25 + 8) = v26;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v14 + 352);
          sub_1402AFC00((ULONG_PTR)(v14 + 352));
          v28 = *((_QWORD *)v14 + 2);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v28 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v28 - 16);
          sub_1402AFC00(v28 - 16);
          ClientSecurity = sub_140667810(v36 + 5);
          v20 = Object;
          if ( ClientSecurity >= 0 )
          {
            v30 = v34;
            ClientSecurity = sub_1406675AC((_DWORD)Object, (_DWORD)a7, (_DWORD)v34, a10, 0, v41, a11);
            if ( ClientSecurity >= 0 )
            {
              ClientSecurity = sub_1407A49B4(v24, 48LL, 1LL);
              if ( ClientSecurity >= 0 )
              {
                ++*(_WORD *)(*v24 - 30);
                *(_DWORD *)(*v24 + 264) |= 0x80000000;
                sub_1407A7628(*v24);
                if ( a11 )
                  *v22 |= 0x1000u;
                if ( (a3 & 0x80000) != 0 )
                  *v22 |= 0x100u;
                if ( *((_BYTE *)v20 + 268) == 1 )
                {
                  *v22 |= 0x400u;
LABEL_38:
                  sub_140667554(v20, a7);
                  if ( (v30[32] & 0x1000000) != 0 )
                  {
                    v20[64] |= 0x1000000u;
                    *((_QWORD *)v20 + 34) = v30[34];
                  }
                  ObfReferenceObject(v20);
                  v31 = sub_140729C30(v20, 0LL, 0, 0LL, (__int64)&v37);
                  if ( v31 >= 0 )
                  {
                    v32 = v37;
                    *((_QWORD *)v20 + 7) = v37;
                    *a1 = v32;
                    *a2 = v20;
                    return (unsigned int)v31;
                  }
                  v21 = v31;
LABEL_55:
                  ObfDereferenceObject(v20);
                  return (unsigned int)v21;
                }
                v20 = Object;
                ClientSecurity = SeCreateClientSecurity(
                                   KeGetCurrentThread(),
                                   (PSECURITY_QUALITY_OF_SERVICE)((char *)Object + 260),
                                   0,
                                   (PSECURITY_CLIENT_CONTEXT)((char *)Object + 64));
                if ( ClientSecurity >= 0 )
                {
                  v30 = v34;
                  goto LABEL_38;
                }
              }
            }
          }
          v21 = ClientSecurity;
          goto LABEL_55;
        }
        v21 = -1073741801;
      }
      ObfDereferenceObject(v14);
      goto LABEL_55;
    }
LABEL_58:
    ObfDereferenceObject(v14);
    return (unsigned int)v17;
  }
  return result;
}
