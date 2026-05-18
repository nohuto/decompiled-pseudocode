/*
 * XREFs of sub_180092984 @ 0x180092984
 * Callers:
 *     sub_180055F4C @ 0x180055F4C (sub_180055F4C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18008EB54 @ 0x18008EB54 (sub_18008EB54.c)
 *     sub_18008EE60 @ 0x18008EE60 (sub_18008EE60.c)
 *     sub_18008F14C @ 0x18008F14C (sub_18008F14C.c)
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 *     sub_180090418 @ 0x180090418 (sub_180090418.c)
 *     sub_1800907CC @ 0x1800907CC (sub_1800907CC.c)
 *     sub_1800908C0 @ 0x1800908C0 (sub_1800908C0.c)
 *     sub_180091754 @ 0x180091754 (sub_180091754.c)
 */

__int64 __fastcall sub_180092984(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  char *v18; // rax
  int v19; // ecx
  __int64 v20; // r9
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // r8
  void *v28; // rcx
  __int64 v30; // rax
  Spectre::Utils::SpectreException *v32; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v33[56]; // [rsp+30h] [rbp-58h] BYREF

  sub_180090418(*(_QWORD *)(a1 + 16));
  try
  {
    v4 = sub_18008FBE8(*(_QWORD *)(a1 + 16), a2, 1);
    v5 = *(_QWORD *)(a1 + 16);
  }
  catch ( Spectre::Utils::SpectreException *v32 )
  {
    v30 = sub_1800488AC(a1 + 16);
    sub_180090304(v30);
    sub_1800189AC((__int64)v33, (__int64)v32);
    throw (Spectre::Utils::SpectreException *)v33;
  }
  sub_180090304(v5);
  v6 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(v6 + 1242);
  v7 = sub_1800907CC(v6, v4);
  v10 = v7;
  if ( *(_DWORD *)(v7 + 36) == 8 )
  {
    v11 = *(_QWORD *)(v9 + 104) + 40LL * *(unsigned int *)(v7 + 40);
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 == *(_QWORD *)(a1 + 72) )
    {
      sub_18008EB54((__int64 *)(a1 + 56), v12, v11);
    }
    else
    {
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 8) = 0LL;
      v13 = *(_QWORD *)(v11 + 8);
      if ( v13 )
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      *(_QWORD *)v12 = *(_QWORD *)v11;
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(v11 + 8);
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_QWORD *)(v12 + 24) = 0LL;
      v14 = *(_QWORD *)(v11 + 24);
      if ( v14 )
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      *(_QWORD *)(v12 + 16) = *(_QWORD *)(v11 + 16);
      *(_QWORD *)(v12 + 24) = *(_QWORD *)(v11 + 24);
      *(_DWORD *)(v12 + 32) = *(_DWORD *)(v11 + 32);
      *(_QWORD *)(a1 + 64) += 40LL;
    }
    return v4;
  }
  v15 = sub_1800908C0(v8);
  v16 = *(_QWORD *)(a1 + 32);
  v17 = (*(_QWORD *)(a1 + 40) - v16) >> 2;
  if ( v15 >= v17 )
  {
    if ( v15 <= v17 )
      goto LABEL_17;
    if ( v15 > (unsigned __int64)((*(_QWORD *)(a1 + 48) - v16) >> 2) )
    {
      sub_18008EE60((__int64 *)(a1 + 32), v15);
      goto LABEL_17;
    }
    v18 = sub_18008F14C(*(char **)(a1 + 40), v15 - v17);
  }
  else
  {
    v18 = (char *)(v16 + 4LL * v15);
  }
  *(_QWORD *)(a1 + 40) = v18;
LABEL_17:
  v19 = *(_DWORD *)(v10 + 36);
  v20 = 0LL;
  if ( v19 && (v21 = v19 - 1) != 0 && (v22 = v21 - 1) != 0 )
  {
    v23 = v22 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 && (v26 = v25 - 1) != 0 )
        {
          if ( v26 == 1 )
            v20 = 64LL;
        }
        else
        {
          v20 = 16LL;
        }
      }
      else
      {
        v20 = 12LL;
      }
    }
    else
    {
      v20 = 8LL;
    }
  }
  else
  {
    v20 = 4LL;
  }
  v27 = *(unsigned int *)(v10 + 40);
  v28 = (void *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 80LL) + 4 * v27);
  sub_180091754(v28, (__int64)v28 + v20, (void *)(*(_QWORD *)(a1 + 32) + 4 * v27));
  ++*(_DWORD *)(a1 + 80);
  return v4;
}
