/*
 * XREFs of sub_1407C64A0 @ 0x1407C64A0
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140657398 @ 0x140657398 (sub_140657398.c)
 *     sub_1406B67A0 @ 0x1406B67A0 (sub_1406B67A0.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071A6D4 @ 0x14071A6D4 (sub_14071A6D4.c)
 *     sub_14071A730 @ 0x14071A730 (sub_14071A730.c)
 *     sub_14071B99C @ 0x14071B99C (sub_14071B99C.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140916454 @ 0x140916454 (sub_140916454.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 */

__int64 __fastcall sub_1407C64A0(
        __int64 a1,
        _DWORD *a2,
        char a3,
        __int64 a4,
        char a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6)
{
  int v10; // ebx
  char v12; // bl
  void *v13; // rcx
  ULONG_PTR v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  unsigned int v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h] BYREF
  volatile signed __int32 *v20; // [rsp+40h] [rbp-38h] BYREF
  ULONG_PTR v21; // [rsp+48h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-28h] BYREF

  v18 = 0;
  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  *(_OWORD *)P = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
  sub_1407C97FC(&v19);
  if ( byte_140C097BD )
  {
    if ( (a2[6] & 0x10) != 0 )
    {
      v10 = -1073741199;
    }
    else if ( *(_WORD *)(a1 + 66) )
    {
      v10 = -1073741199;
    }
    else if ( (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 8) & 0x7FE00000u) > 0xA00000 )
      {
        if ( sub_1406B67A0(a5, a6, a2 + 4) )
        {
          v10 = -1073741199;
        }
        else if ( byte_140C097BD && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
        {
          v10 = -1073741199;
        }
        else
        {
          if ( (a2[40] & 1) == 0 )
          {
            sub_140AB4550(a2 + 42);
            a2[40] |= 1u;
          }
          v10 = sub_140916454(a1, P);
          if ( v10 >= 0 )
          {
            v10 = sub_14071B99C(0LL, 16, &v20);
            if ( v10 < 0 )
            {
              if ( v20 )
                sub_14071A730(0LL, 16, v20);
            }
            else
            {
              v12 = sub_140657398(0LL, (__m128i *)P, 0LL, 16, &v18, &v21);
              sub_14071A730(0LL, 16, v20);
              if ( v12 )
              {
                v13 = *(void **)(a4 + 8);
                if ( v13 )
                  ExFreePoolWithTag(v13, 0);
                *(_OWORD *)a4 = *(_OWORD *)P;
                RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
                *a2 |= 8u;
                v10 = 260;
              }
              else if ( a3 || (sub_140AB4300(a1), sub_1407C0854(a1), !sub_14071A6D4(a1, 0LL)) )
              {
                ExAcquirePushLockSharedEx(*(_QWORD *)(a1 + 32) + 72LL, 0LL);
                v14 = *(_QWORD *)(a1 + 32);
                if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
                  v15 = sub_1406BF400(v14, *(unsigned int *)(a1 + 40), &v19);
                else
                  v15 = sub_1407C9820(v14);
                v16 = v15;
                if ( v15 )
                {
                  v10 = sub_14071F300(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 40), 1);
                  if ( v10 >= 0 )
                  {
                    *(_WORD *)(v16 + 2) |= 0x100u;
                    *(_WORD *)(a1 + 186) |= 0x100u;
                    *a2 |= 8u;
                    v10 = 260;
                  }
                  v17 = *(_QWORD *)(a1 + 32);
                  if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
                    sub_1406BF450(v17, &v19);
                  else
                    sub_1407C97C0(v17, &v19);
                }
                else
                {
                  v10 = -1073741670;
                }
                if ( v14 )
                {
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 72), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v14 + 72));
                  sub_1402AFC00(v14 + 72);
                }
              }
              else
              {
                v10 = -1073741772;
              }
            }
          }
        }
      }
      else
      {
        v10 = -1073741199;
      }
    }
    else
    {
      v10 = -1073741199;
    }
  }
  else
  {
    v10 = -1073741199;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return (unsigned int)v10;
}
