/*
 * XREFs of sub_1407A4E8C @ 0x1407A4E8C
 * Callers:
 *     sub_1407A9A80 @ 0x1407A9A80 (sub_1407A9A80.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406F60E8 @ 0x1406F60E8 (sub_1406F60E8.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     sub_1407A4A8C @ 0x1407A4A8C (sub_1407A4A8C.c)
 *     sub_1407A4E68 @ 0x1407A4E68 (sub_1407A4E68.c)
 *     sub_1407A58A4 @ 0x1407A58A4 (sub_1407A58A4.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A66CC @ 0x1407A66CC (sub_1407A66CC.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407A7F84 @ 0x1407A7F84 (sub_1407A7F84.c)
 *     sub_1407B0F40 @ 0x1407B0F40 (sub_1407B0F40.c)
 */

__int64 __fastcall sub_1407A4E8C(PVOID Object, __int64 a2)
{
  ULONG_PTR v2; // rdi
  int v5; // r14d
  ULONG_PTR i; // rsi
  _QWORD *v7; // rax
  __int64 v8; // r9
  ULONG_PTR v9; // rbx
  int v10; // eax
  ULONG_PTR v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // eax
  ULONG_PTR v17; // rax
  __int64 v18; // r9
  __int64 v19; // r9
  _QWORD *v20; // [rsp+20h] [rbp-40h]
  _OWORD v21[3]; // [rsp+28h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a2 + 144);
  memset(v21, 0, sizeof(v21));
  v5 = 0;
  for ( i = *(_QWORD *)(v2 + 16); ; sub_1407B0F40(i) )
  {
    sub_1407A6A34(i);
    v7 = sub_1407A4E68(i, (__int64)Object);
    v20 = v7;
    v9 = (ULONG_PTR)v7;
    if ( !v7 || sub_1407A7F84((ULONG_PTR)v7) > 0 )
      break;
  }
  if ( (*(_DWORD *)(i + 48) & 1) != 0 )
  {
    if ( v9 == *(_QWORD *)(i + 80) )
    {
LABEL_12:
      *(_DWORD *)(a2 + 40) |= 0x4000u;
      *(_QWORD *)(a2 + 144) = v9;
      ++*(_DWORD *)(v9 + 76);
      goto LABEL_13;
    }
    if ( v9 && v9 == *(_QWORD *)(i + 72) )
    {
      v16 = *(_DWORD *)(v2 + 72);
      if ( (v16 & 8) == 0 )
      {
        v17 = sub_1407A4A8C(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48), v8);
        if ( !v17 )
        {
          if ( *(_QWORD *)(v9 + 64) )
          {
            sub_14030D5C0(*(_QWORD *)(v9 + 32), 0LL, (__int64)v21, v18);
            MmUnsecureVirtualMemory(*(HANDLE *)(v9 + 64));
            sub_1402D0930((__int64)v21, 0LL);
            *(_QWORD *)(v9 + 64) = 0LL;
          }
          *(_DWORD *)(v9 + 72) |= 1u;
          sub_1407A5A54(v9);
          *(_QWORD *)(i + 72) = 0LL;
          *(_QWORD *)(i + 80) = 0LL;
          *(_DWORD *)(i + 48) &= ~1u;
          goto LABEL_12;
        }
        *(_QWORD *)(v2 + 64) = v17;
        v16 = *(_DWORD *)(v2 + 72);
      }
      *(_DWORD *)(v2 + 72) = v16 & 0xFFFFFFFE;
      sub_1407A7F84(v2);
      if ( *(_QWORD *)(v9 + 64) )
      {
        sub_14030D5C0(*(_QWORD *)(v9 + 32), 0LL, (__int64)v21, v19);
        MmUnsecureVirtualMemory(*(HANDLE *)(v9 + 64));
        sub_1402D0930((__int64)v21, 0LL);
        *(_QWORD *)(v9 + 64) = 0LL;
      }
      *(_DWORD *)(v9 + 72) |= 1u;
      *(_QWORD *)(i + 72) = v2;
      *(_QWORD *)(i + 80) = v9;
      sub_1407A5A54(v9);
      goto LABEL_12;
    }
    v10 = *(_DWORD *)(v2 + 72);
    if ( (v10 & 8) != 0 )
      goto LABEL_9;
    v11 = sub_1407A4A8C(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48), v8);
    if ( v11 )
    {
      *(_QWORD *)(v2 + 64) = v11;
      v10 = *(_DWORD *)(v2 + 72);
LABEL_9:
      *(_DWORD *)(v2 + 72) = v10 & 0xFFFFFFFE;
      sub_1407A7F84(v2);
      *(_QWORD *)(i + 80) = 0LL;
      *(_QWORD *)(i + 72) = v2;
      if ( v9 )
      {
        *(_QWORD *)(i + 80) = v9;
        goto LABEL_12;
      }
      v5 = sub_1407A66CC(i, Object);
      if ( v5 >= 0 )
        goto LABEL_11;
      sub_1406F60E8(v2, v12, v13, v14);
      sub_1407A5A54(v2);
      goto LABEL_35;
    }
    *(_QWORD *)(i + 72) = 0LL;
    *(_QWORD *)(i + 80) = 0LL;
    *(_DWORD *)(i + 48) &= ~1u;
  }
  else if ( v9 )
  {
    goto LABEL_12;
  }
  v5 = sub_1407A66CC(i, Object);
  if ( v5 >= 0 )
  {
LABEL_11:
    v9 = (ULONG_PTR)v20;
    goto LABEL_12;
  }
LABEL_35:
  *(_QWORD *)(a2 + 144) = 0LL;
LABEL_13:
  --*(_DWORD *)(v2 + 76);
  if ( (*(_DWORD *)(v2 + 72) & 2) != 0 )
  {
    sub_1407A58A4(v2);
    *(_DWORD *)(v2 + 72) &= ~2u;
  }
  sub_1407B0F40(i);
  sub_1407A5A54(v2);
  return (unsigned int)v5;
}
