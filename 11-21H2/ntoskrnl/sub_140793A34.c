/*
 * XREFs of sub_140793A34 @ 0x140793A34
 * Callers:
 *     sub_1407927AC @ 0x1407927AC (sub_1407927AC.c)
 *     sub_1407938B0 @ 0x1407938B0 (sub_1407938B0.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_140793A34(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v6; // r15
  volatile signed __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // r14d
  int v12; // eax
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  int v15; // edx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  v6 = *(_QWORD *)(v2 + 2152);
  v7 = (volatile signed __int64 *)(v6 + 104);
  v8 = sub_140347C10(v6 + 104, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 104), 0LL) )
    sub_14029F120((unsigned __int64 *)(v6 + 104), v8, v6 + 104);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v10 = *(_DWORD *)(a1 + 100) & a2;
  if ( !v10 )
  {
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 104);
    sub_1402AFC00(v6 + 104);
    return 0LL;
  }
  v12 = *(_DWORD *)(a1 + 120);
  if ( v12 )
  {
    if ( v12 != 3 )
      goto LABEL_15;
  }
  else
  {
    v13 = *(_QWORD **)(v6 + 120);
    v14 = (_QWORD *)(a1 + 104);
    if ( *v13 != v6 + 112 )
      __fastfail(3u);
    *v14 = v6 + 112;
    *(_QWORD *)(a1 + 112) = v13;
    *v13 = v14;
    *(_QWORD *)(v6 + 120) = v14;
  }
  v3 = 1;
  *(_DWORD *)(a1 + 120) = 1;
LABEL_15:
  v15 = *(_DWORD *)(a1 + 124);
  if ( (((unsigned __int8)v15 | *(_BYTE *)(a1 + 128)) & 1) == 0 && (v10 & 1) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 164LL), 1u);
    v15 = *(_DWORD *)(a1 + 124);
  }
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 100) & (v10 | v15);
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6 + 104);
  sub_1402AFC00(v6 + 104);
  return v3;
}
