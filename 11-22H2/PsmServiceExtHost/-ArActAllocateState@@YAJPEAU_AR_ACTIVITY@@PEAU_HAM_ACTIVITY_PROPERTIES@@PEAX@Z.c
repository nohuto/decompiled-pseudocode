/*
 * XREFs of ?ArActAllocateState@@YAJPEAU_AR_ACTIVITY@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAX@Z @ 0x1800035AC
 * Callers:
 *     ?ArActCreate@@YAJPEAU_AR_ACTIVITY_HOST@@PEAU_AR_ACTIVITY_PROPERTIES@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAXPEAPEAU_AR_ACTIVITY@@@Z @ 0x18000331C (-ArActCreate@@YAJPEAU_AR_ACTIVITY_HOST@@PEAU_AR_ACTIVITY_PROPERTIES@@PEAU_HAM_ACTIVITY_PROPERTIE.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall ArActAllocateState(struct _AR_ACTIVITY *a1, struct _HAM_ACTIVITY_PROPERTIES *a2, void *a3)
{
  __int64 v3; // r10
  __int64 v4; // rax
  _OWORD *v6; // rcx
  unsigned __int64 v7; // r9
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  bool v15; // zf
  __int64 v16; // rcx
  __int64 result; // rax
  char *v18; // [rsp+20h] [rbp-1B8h]
  _DWORD v19[100]; // [rsp+30h] [rbp-1A8h] BYREF

  v3 = *((_QWORD *)a1 + 2);
  v4 = 3LL;
  v6 = v19;
  v7 = *(_QWORD *)(v3 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  do
  {
    v8 = *((_OWORD *)a2 + 1);
    *v6 = *(_OWORD *)a2;
    v9 = *((_OWORD *)a2 + 2);
    v6[1] = v8;
    v10 = *((_OWORD *)a2 + 3);
    v6[2] = v9;
    v11 = *((_OWORD *)a2 + 4);
    v6[3] = v10;
    v12 = *((_OWORD *)a2 + 5);
    v6[4] = v11;
    v13 = *((_OWORD *)a2 + 6);
    v6[5] = v12;
    v14 = *((_OWORD *)a2 + 7);
    a2 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)a2 + 128);
    v6[6] = v13;
    v6 += 8;
    *(v6 - 1) = v14;
    --v4;
  }
  while ( v4 );
  v15 = (*((_BYTE *)a1 + 24) & 1) == 0;
  *(_QWORD *)v6 = *(_QWORD *)a2;
  if ( v15 )
    v19[0] |= 0x200000u;
  v16 = *(_QWORD *)(v7 + 80);
  v18 = (char *)a1 + 8;
  if ( a3 )
    result = HamCreateActivityForProcess(v16, a1, a3, v19, v18);
  else
    result = HamCreateActivity(v16, a1, v3 + 40, v19, v18);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1) <= 1 )
      __fastfail(0xEu);
    return 0LL;
  }
  return result;
}
