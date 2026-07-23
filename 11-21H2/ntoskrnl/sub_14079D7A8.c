/*
 * XREFs of sub_14079D7A8 @ 0x14079D7A8
 * Callers:
 *     sub_14079D6B0 @ 0x14079D6B0 (sub_14079D6B0.c)
 * Callees:
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402ED77C @ 0x1402ED77C (sub_1402ED77C.c)
 *     sub_1402EE0C8 @ 0x1402EE0C8 (sub_1402EE0C8.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406DD778 @ 0x1406DD778 (sub_1406DD778.c)
 *     sub_1406E97B4 @ 0x1406E97B4 (sub_1406E97B4.c)
 *     sub_1406EBA90 @ 0x1406EBA90 (sub_1406EBA90.c)
 *     sub_14096D000 @ 0x14096D000 (sub_14096D000.c)
 *     sub_14097EE60 @ 0x14097EE60 (sub_14097EE60.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14079D7A8(volatile signed __int64 *P, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // rdi
  int v6; // r12d
  __int64 v7; // r13
  char v8; // dl
  __int64 v9; // rax
  int v10; // eax
  int v11; // ebp
  __int64 v12; // rdi
  int v13; // eax
  __int64 result; // rax
  int v15; // edi
  unsigned int v16; // eax
  ULONG_PTR *v17; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 32);
  v6 = *(_DWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 24);
  v19 = v4;
  memmove(
    (void *)P,
    (const void *)v2,
    (-(__int64)((*(_DWORD *)(v2 + 48) & 0x200000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136);
  *((_DWORD *)P + 9) = 0;
  v8 = 15;
  *((_QWORD *)P + 7) &= 0xFuLL;
  *((_QWORD *)P + 2) = -2LL;
  v9 = *(unsigned int *)(v2 + 52);
  LODWORD(v9) = v9 & 0x7FFFFFFF;
  if ( (v9 | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 31)) == 0x7FFFFFFFDLL )
  {
    *((_DWORD *)P + 13) = *((_DWORD *)P + 13) & 0x80000000 | 0x7FFFFFFD;
  }
  else
  {
    *((_DWORD *)P + 13) &= 0x80000000;
    v8 = 0;
  }
  *((_BYTE *)P + 34) = v8;
  v10 = *((_DWORD *)P + 12);
  *((_QWORD *)P + 5) = 0LL;
  if ( (v10 & 0x70) != 0x40 || (unsigned int)sub_1406E97B4((__int64)P) )
  {
    if ( sub_1402EE0C8(v2, 128LL) )
    {
      v15 = sub_14097EE60(P);
      if ( v15 < 0 )
      {
        if ( (P[6] & 0x70) == 0x40 )
          sub_14096D000(P);
        goto LABEL_33;
      }
      v4 = v19;
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    if ( v6 == 1 || v6 == 3 && !*(_QWORD *)a2 )
    {
      v12 = ((unsigned __int64)(v4 + 1) >> 12)
          - (*((unsigned int *)P + 6) | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32));
    }
    else
    {
      *((_DWORD *)P + 7) = (unsigned __int64)(v7 - 1) >> 12;
      *((_BYTE *)P + 33) = (unsigned __int64)(v7 - 1) >> 44;
      v12 = 0LL;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 5), 0LL);
    sub_1402ED77C((__int64)P, v12);
    if ( (_InterlockedExchangeAdd64(P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(P + 5);
    sub_1402AFC00((ULONG_PTR)(P + 5));
    if ( (*(_DWORD *)(v2 + 48) & 0x200000) == 0 )
    {
      v16 = P[8] & 0xFDFFFFFF;
      *((_QWORD *)P + 15) = 0LL;
      *((_DWORD *)P + 16) = v16;
    }
    v13 = P[6] & 0x70;
    if ( v13 != 16 && v13 != 64
      || !sub_1406DD778(
            (*((unsigned int *)P + 6) | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12,
            ((*((unsigned int *)P + 7) | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF,
            0)
      || (v17 = (ULONG_PTR *)sub_14032A72C(*((_QWORD *)KeGetCurrentThread() + 23)),
          (unsigned int)sub_1402821F4(v17, v18, 128LL)) )
    {
      *P = *(_QWORD *)a2;
      result = 0LL;
      *(_QWORD *)a2 = P;
      return result;
    }
    if ( (P[6] & 0x70) == 0x40 )
      sub_14096D000(P);
    if ( v11 )
      sub_1406EBA90((__int64)P);
  }
  v15 = -1073741670;
LABEL_33:
  ExFreePoolWithTag((PVOID)P, 0);
  return (unsigned int)v15;
}
