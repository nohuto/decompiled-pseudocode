/*
 * XREFs of sub_140965C1C @ 0x140965C1C
 * Callers:
 *     sub_1409660C0 @ 0x1409660C0 (sub_1409660C0.c)
 *     sub_140966240 @ 0x140966240 (sub_140966240.c)
 * Callees:
 *     sub_140666BAC @ 0x140666BAC (sub_140666BAC.c)
 *     PsDereferencePrimaryToken @ 0x1406DADF0 (PsDereferencePrimaryToken.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7C84 @ 0x1407A7C84 (sub_1407A7C84.c)
 *     sub_1407ABD80 @ 0x1407ABD80 (sub_1407ABD80.c)
 *     sub_1407BB560 @ 0x1407BB560 (sub_1407BB560.c)
 */

NTSTATUS __fastcall sub_140965C1C(
        char a1,
        void *a2,
        unsigned __int64 a3,
        unsigned int a4,
        char *Address,
        SIZE_T Length,
        __int64 *a7)
{
  unsigned __int64 v7; // r12
  struct _OBJECT_HANDLE_INFORMATION *HandleInformation; // r10
  KPROCESSOR_MODE v12; // r15
  size_t v13; // rdi
  __int64 *v14; // r9
  __int64 *v15; // rsi
  NTSTATUS result; // eax
  __int64 v17; // r9
  signed int v18; // ebx
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rcx
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v26; // rcx
  ULONG_PTR v27; // r8
  char *v28; // r9
  char *v29; // rdx
  ULONG_PTR v30; // [rsp+48h] [rbp-70h] BYREF
  PVOID PrimaryToken; // [rsp+50h] [rbp-68h] BYREF
  __int64 v32; // [rsp+58h] [rbp-60h] BYREF
  __m128i v33; // [rsp+60h] [rbp-58h]
  __int128 v34; // [rsp+70h] [rbp-48h] BYREF
  __int128 v35; // [rsp+80h] [rbp-38h]
  __int64 v36; // [rsp+90h] [rbp-28h]

  v7 = a4;
  HandleInformation = 0LL;
  v30 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v12 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v12 )
  {
    v13 = Length;
    if ( a1 )
    {
      if ( Length && ((unsigned __int64)&Address[Length] > 0x7FFFFFFF0000LL || &Address[Length] < Address) )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      ProbeForWrite(Address, Length, 1u);
    }
    sub_140666BAC(a3, (__int64)&v34, 0);
    v15 = a7;
    if ( a7 )
    {
      if ( a7 < v14 )
        v14 = a7;
      *v14 = *v14;
    }
  }
  else
  {
    v34 = *(_OWORD *)a3;
    v35 = *(_OWORD *)(a3 + 16);
    v36 = *(_QWORD *)(a3 + 32);
    v15 = a7;
    v13 = Length;
  }
  if ( !WORD3(v34) )
    return -1073741811;
  PrimaryToken = HandleInformation;
  result = ObReferenceObjectByHandle(a2, 1u, qword_140D069D8, v12, &PrimaryToken, HandleInformation);
  if ( result >= 0 )
  {
    v18 = sub_1407ABD80((__int64)PrimaryToken, SDWORD2(v35), v36, v17, &v30);
    if ( v18 < 0 )
    {
LABEL_35:
      PsDereferencePrimaryToken(PrimaryToken);
      return v18;
    }
    v19 = *(_QWORD *)(v30 + 32);
    if ( v19 )
    {
      v18 = -1073741811;
      if ( *(_WORD *)(v30 + 246) )
      {
        v20 = sub_1407A7C84(v30);
        v24 = *(unsigned __int16 *)(v21 + 242);
        if ( v20 <= v24 )
          v24 = v20;
        if ( v23 >= v24 || v7 >= (v24 - v23) >> 4 )
          goto LABEL_34;
        if ( *(_DWORD *)(v21 + v22 + 240) > (unsigned int)v7 )
        {
          v33 = *(__m128i *)(v21 + v22 + 16 * v7 + 248);
          v18 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v33, 8)) < v13 ? 0xC000000D : 0;
        }
      }
      if ( v18 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( a1 )
        {
          v26 = *((_QWORD *)CurrentThread + 23);
          v27 = *(_QWORD *)(v19 + 544);
          v28 = (char *)v33.m128i_i64[0];
          v29 = Address;
        }
        else
        {
          v27 = *((_QWORD *)CurrentThread + 23);
          v26 = *(_QWORD *)(v19 + 544);
          v28 = Address;
          v29 = (char *)v33.m128i_i64[0];
        }
        v18 = sub_1407BB560(v26, v29, v27, v28, v13, v12, (size_t *)&v32, 0);
        if ( v18 >= 0 )
        {
          if ( v15 )
            *v15 = v32;
        }
      }
    }
    else
    {
      v18 = -1073741790;
    }
LABEL_34:
    sub_1407A7628(v30);
    goto LABEL_35;
  }
  return result;
}
