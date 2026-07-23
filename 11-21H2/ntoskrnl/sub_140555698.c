/*
 * XREFs of sub_140555698 @ 0x140555698
 * Callers:
 *     sub_14055225C @ 0x14055225C (sub_14055225C.c)
 *     KeCapturePersistentThreadState @ 0x1405558E0 (KeCapturePersistentThreadState.c)
 * Callees:
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140555698(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  PVOID *v4; // rbx
  __int64 v5; // rsi
  unsigned int *v6; // rdi
  int v8; // ebp
  unsigned int v9; // r15d
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx

  v4 = (PVOID *)PsLoadedModuleList;
  v5 = a1 + a3;
  v6 = (unsigned int *)(a1 + a4);
  v8 = a1;
  v9 = 0;
  while ( 1 )
  {
    if ( v4 == &PsLoadedModuleList )
      return 0LL;
    if ( a2 == 1
      && (!sub_1403D7FD4((__int64)v4, 160LL) || !sub_1403D7FD4((__int64)v4[12], *((unsigned __int16 *)v4 + 44))) )
    {
      break;
    }
    v10 = *((unsigned __int16 *)v4 + 44) >> 1;
    *v6 = v10;
    memmove(v6 + 1, v4[12], 2 * v10);
    *((_WORD *)v6 + *v6 + 2) = 0;
    v11 = v9++;
    v12 = v5 + 144 * v11;
    *(_OWORD *)(v12 + 8) = *(_OWORD *)v4;
    *(_OWORD *)(v12 + 24) = *((_OWORD *)v4 + 1);
    *(_OWORD *)(v12 + 40) = *((_OWORD *)v4 + 2);
    *(_OWORD *)(v12 + 56) = *((_OWORD *)v4 + 3);
    *(_OWORD *)(v12 + 72) = *((_OWORD *)v4 + 4);
    *(_OWORD *)(v12 + 88) = *((_OWORD *)v4 + 5);
    *(_OWORD *)(v12 + 104) = *((_OWORD *)v4 + 6);
    *(_OWORD *)(v12 + 120) = *((_OWORD *)v4 + 7);
    *(_QWORD *)(v12 + 136) = v4[16];
    *(_DWORD *)(v12 + 136) = *((_DWORD *)v4 + 39);
    *(_DWORD *)(v12 + 72) = *((_DWORD *)v4 + 38);
    *(_DWORD *)v12 = (_DWORD)v6 - v8;
    v4 = (PVOID *)*v4;
    v6 = (unsigned int *)(((unsigned __int64)v6 + 2 * *v6 + 13) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return 3221225473LL;
}
