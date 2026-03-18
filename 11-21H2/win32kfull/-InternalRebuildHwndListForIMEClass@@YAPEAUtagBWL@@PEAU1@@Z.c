/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C0072370
 * Callers:
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 * Callees:
 *     <none>
 */

struct tagBWL *__fastcall InternalRebuildHwndListForIMEClass(struct tagBWL *a1)
{
  struct tagBWL *v1; // r13
  _QWORD *v2; // r12
  _QWORD *v3; // r15
  _QWORD *v4; // rbx
  __int64 *v5; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rcx
  __int64 i; // rax
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax

  v1 = a1;
  v2 = (_QWORD *)Win32AllocPoolZInit(*((_QWORD *)a1 + 2) - (_QWORD)a1 + 8LL, 1819767637LL);
  v3 = v2;
  if ( !v2 )
    return v1;
  v4 = (_QWORD *)((char *)v1 + 32);
  v5 = (__int64 *)((char *)v1 + 32);
  v6 = *((_QWORD *)v1 + 4);
  if ( v6 == 1 )
    goto LABEL_3;
  do
  {
    PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( (unsigned __int64)(unsigned __int16)v6 >= *(_QWORD *)(gpsi + 8LL)
      || (v10 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v6 * *((_DWORD *)&gSharedInfo + 4),
          v12 = (__int64 *)HMPkheFromPhe(v10),
          LOWORD(v6) = WORD1(v6) & 0x7FFF,
          (WORD1(v6) & 0x7FFF) != *(_WORD *)(v10 + 26))
      && (_WORD)v6 != 0x7FFF
      && ((_WORD)v6 || !PsGetCurrentProcessWow64Process(v11))
      || (*(_BYTE *)(v10 + 25) & 1) != 0
      || *(_BYTE *)(v10 + 24) != 1
      || (v13 = *v12) == 0 )
    {
LABEL_14:
      v15 = *v5;
LABEL_16:
      *v4++ = v15;
      goto LABEL_17;
    }
    while ( 1 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v13 + 136) + 8LL);
      if ( (*(_BYTE *)(v14 + 10) & 1) != 0 || *(_WORD *)v14 == *(_WORD *)(gpsi + 898LL) )
        break;
      v13 = *(_QWORD *)(v13 + 120);
      if ( !v13 )
        goto LABEL_14;
    }
    v15 = *v5;
    if ( !v13 )
      goto LABEL_16;
    *v3++ = v15;
LABEL_17:
    v6 = v5[1];
    ++v5;
  }
  while ( v6 != 1 );
  v1 = a1;
LABEL_3:
  v7 = v2;
  *v3 = 0LL;
  for ( i = *v2; *v7; ++v4 )
  {
    *v4 = i;
    i = *++v7;
  }
  Win32FreePool(v2);
  return v1;
}
