/*
 * XREFs of sub_1405C5930 @ 0x1405C5930
 * Callers:
 *     sub_140983B80 @ 0x140983B80 (sub_140983B80.c)
 * Callees:
 *     sub_140280EF8 @ 0x140280EF8 (sub_140280EF8.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_14030FBE0 @ 0x14030FBE0 (sub_14030FBE0.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_1405C4FB8 @ 0x1405C4FB8 (sub_1405C4FB8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_1405C5930(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v2; // rbp
  _QWORD *v3; // r12
  __int64 v4; // r13
  unsigned int v5; // r14d
  int v6; // r15d
  _QWORD *j; // rdi
  _QWORD *i; // rax
  _QWORD **v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rax
  int v15; // r15d
  __int64 *v16; // rsi
  unsigned int k; // ebp
  __int64 v18; // rdi
  _QWORD *v21; // [rsp+68h] [rbp+10h]
  _QWORD *v22; // [rsp+68h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v21 = 0LL;
  v3 = 0LL;
  v4 = *((_QWORD *)CurrentThread + 23);
  v5 = 13;
  --*((_WORD *)CurrentThread + 242);
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx(v4 + 1224, 0LL);
  *((_BYTE *)CurrentThread + 1384) |= 2u;
  if ( (*(_DWORD *)(v4 + 1124) & 0x20) != 0 )
  {
    sub_14030EA00((__int64)CurrentThread, v4);
  }
  else
  {
    v6 = *(_DWORD *)(v4 + 2140);
    j = 0LL;
    for ( i = *(_QWORD **)(v4 + 2008); i; i = (_QWORD *)*i )
      j = i;
    while ( v6 && j )
    {
      v9 = (_QWORD **)j[1];
      v10 = (__int64)j;
      v11 = j;
      if ( v9 )
      {
        v12 = *v9;
        for ( j = (_QWORD *)j[1]; v12; v12 = (_QWORD *)*v12 )
          j = v12;
      }
      else
      {
        while ( 1 )
        {
          j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !j || (_QWORD *)*j == v11 )
            break;
          v11 = j;
        }
      }
      if ( sub_14030FBE0(v10) && (*(_DWORD *)(v10 + 48) & 0xA00000) != 0xA00000 )
      {
        --*((_WORD *)CurrentThread + 243);
        ExAcquirePushLockSharedEx(v10 + 40, 0LL);
        *((_BYTE *)CurrentThread + 1385) |= 0x40u;
        if ( (*(_DWORD *)(v10 + 48) & 4) != 0 )
        {
          sub_140280EF8((__int64)CurrentThread, v10);
        }
        else
        {
          if ( v5 >= 0xD )
          {
            v13 = sub_1402828F0(256, 0x70uLL, 0x7356694Du);
            v2 = v13;
            if ( !v13 )
            {
              sub_140280EF8((__int64)CurrentThread, v10);
              break;
            }
            v5 = 0;
            if ( v3 )
              *v21 = v13;
            else
              v3 = v13;
            v21 = v13;
          }
          v14 = v5++;
          v2[v14 + 1] = v10;
          if ( !_InterlockedIncrement((volatile signed __int32 *)(v10 + 36)) )
            __fastfail(0xEu);
          sub_140280EF8((__int64)CurrentThread, v10);
          --v6;
        }
      }
    }
    sub_14030EA00((__int64)CurrentThread, v4);
    v15 = 1;
    if ( v3 )
    {
      do
      {
        v16 = v3 + 1;
        v22 = (_QWORD *)*v3;
        for ( k = 0; k < 0xD; ++k )
        {
          v18 = *v16;
          if ( !*v16 )
            break;
          --*((_WORD *)CurrentThread + 243);
          ExAcquirePushLockExclusiveEx(v18 + 40, 0LL);
          *((_BYTE *)CurrentThread + 1384) |= 0x80u;
          if ( (*(_DWORD *)(v18 + 48) & 4) == 0 && v15 )
            v15 = sub_1405C4FB8(a1, v4, v18);
          sub_14032E700((char *)v18);
          ++v16;
        }
        ExFreePoolWithTag(v3, 0);
        v3 = v22;
      }
      while ( v22 );
    }
  }
  return sub_1402F9540((__int64)CurrentThread);
}
