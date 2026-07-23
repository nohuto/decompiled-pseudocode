/*
 * XREFs of sub_1402F27B0 @ 0x1402F27B0
 * Callers:
 *     sub_1402A8980 @ 0x1402A8980 (sub_1402A8980.c)
 *     sub_1403951E0 @ 0x1403951E0 (sub_1403951E0.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14022F244 @ 0x14022F244 (sub_14022F244.c)
 *     sub_1402595B0 @ 0x1402595B0 (sub_1402595B0.c)
 *     sub_1402D4358 @ 0x1402D4358 (sub_1402D4358.c)
 *     sub_1402F2AD0 @ 0x1402F2AD0 (sub_1402F2AD0.c)
 *     sub_1402F2CA0 @ 0x1402F2CA0 (sub_1402F2CA0.c)
 *     sub_1402F3248 @ 0x1402F3248 (sub_1402F3248.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F332C @ 0x1402F332C (sub_1402F332C.c)
 *     sub_140340390 @ 0x140340390 (sub_140340390.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1402F27B0(__int64 a1, unsigned __int64 a2, char a3, char a4)
{
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // r14
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  _QWORD *v15; // rdi
  _QWORD *v16; // rdi
  char v17; // r14
  volatile signed __int32 *v18; // rsi
  char v19; // al
  signed __int32 v20; // edx
  signed __int32 v21; // eax
  _QWORD *v22; // rax
  __int64 v23; // rax
  int v24; // edx
  volatile signed __int32 *v25; // rcx
  char v26; // al
  char v27; // r8
  signed __int32 v28; // edx
  _BYTE v29[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v30; // [rsp+38h] [rbp-80h]
  _QWORD *v31; // [rsp+40h] [rbp-78h] BYREF
  _QWORD **v32; // [rsp+48h] [rbp-70h]
  int v33; // [rsp+50h] [rbp-68h]
  __int128 v34; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v35[2]; // [rsp+68h] [rbp-50h] BYREF

  result = qword_140C2B938;
  v29[0] = 0;
  v34 = 0LL;
  if ( a2 < qword_140C2B938 )
    return result;
  v32 = &v31;
  v31 = &v31;
  LOBYTE(v33) = 0;
  KeAcquireSpinLockAtDpcLevel(&qword_140D31380);
  v9 = 5LL;
  v10 = 0LL;
  v30 = 5LL;
  if ( !a4 )
  {
    if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 )
    {
      BYTE8(v34) = 1;
      v35[0] = &v34;
      *(_QWORD *)&v34 = a2;
      v35[1] = 16LL;
      sub_14035EDE4((unsigned int)v35, 1, 1073872896, 3920, 1538);
    }
    v10 = 1LL;
    if ( a3 )
    {
      v9 = 3LL;
      v30 = 3LL;
    }
    else
    {
      v9 = 2LL;
      v30 = 2LL;
    }
  }
  v11 = (unsigned __int64)&unk_140C2B8C0 + 24 * v10;
  do
  {
    v12 = *(_QWORD *)(v11 + 8);
    if ( (v12 & 1) != 0 )
    {
      if ( v12 == 1 )
        goto LABEL_11;
      v13 = v12 ^ (v11 | 1);
    }
    else
    {
      v13 = *(_QWORD *)(v11 + 8);
    }
    if ( v13 )
    {
      v14 = 0LL;
      if ( v10 >= 2 )
        v14 = 24LL;
      do
      {
        v15 = (_QWORD *)(v13 - v14);
        if ( a2 < v15[6] )
          break;
        sub_1402F2AD0(v15 - 3);
        v20 = *((_DWORD *)v15 - 6);
        v21 = _InterlockedCompareExchange((volatile signed __int32 *)v15 - 6, v20 & 0xFFFFF0FF | 0x200, v20);
        if ( v20 != v21 )
        {
          do
          {
            v28 = v21;
            v21 = _InterlockedCompareExchange((volatile signed __int32 *)v15 - 6, v21 & 0xFFFFF0FF | 0x200, v21);
          }
          while ( v28 != v21 );
        }
        v22 = v32;
        if ( *v32 != &v31 )
          __fastfail(3u);
        v15[1] = v32;
        *v15 = &v31;
        *v22 = v15;
        v23 = *(_QWORD *)(v11 + 8);
        v32 = (_QWORD **)v15;
        if ( (v23 & 1) != 0 )
        {
          if ( v23 == 1 )
            break;
          v13 = v23 ^ (v11 | 1);
        }
        else
        {
          v13 = v23;
        }
      }
      while ( v13 );
      v9 = v30;
    }
LABEL_11:
    ++v10;
    v11 += 24LL;
  }
  while ( v10 < v9 );
  KeReleaseSpinLockFromDpcLevel(&qword_140D31380);
  v16 = v31;
  if ( v31 == &v31 )
    goto LABEL_21;
  v17 = v33;
  while ( 2 )
  {
    v18 = (volatile signed __int32 *)(v16 - 3);
    v16 = (_QWORD *)*v16;
    sub_1402F3290(v18);
    v19 = *((_BYTE *)v18 + 1);
    if ( (v19 & 2) != 0 )
    {
      if ( (*((_BYTE *)v18 + 129) & 2) != 0 )
        v17 = 1;
      goto LABEL_17;
    }
    v24 = 0;
    v25 = v18;
    if ( (v19 & 8) != 0 )
    {
      v26 = sub_1402F332C(v18, 0LL, v29);
      v25 = v18;
      if ( v26 )
      {
        v27 = 0;
        v24 = 1;
        goto LABEL_44;
      }
      if ( (*((_BYTE *)v18 + 129) & 2) != 0 )
        v17 = 1;
LABEL_17:
      sub_1402F2CA0((PVOID)v18);
    }
    else
    {
      v27 = 4;
LABEL_44:
      sub_1402D4358(v25, v24, v27);
    }
    if ( v16 != &v31 )
      continue;
    break;
  }
  if ( v17 )
    sub_1402595B0();
LABEL_21:
  if ( *(_QWORD *)(a1 + 11528) )
    sub_140340390(a1, 1LL, 0LL, 2LL);
  result = sub_1402F3248(MEMORY[0xFFFFF78000000008], qword_140C2B8E8);
  if ( (_BYTE)result )
    return sub_14022F244();
  return result;
}
