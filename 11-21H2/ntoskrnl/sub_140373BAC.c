/*
 * XREFs of sub_140373BAC @ 0x140373BAC
 * Callers:
 *     sub_14038A880 @ 0x14038A880 (sub_14038A880.c)
 *     sub_1407F5540 @ 0x1407F5540 (sub_1407F5540.c)
 * Callees:
 *     sub_140256548 @ 0x140256548 (sub_140256548.c)
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_14030EC40 @ 0x14030EC40 (sub_14030EC40.c)
 *     sub_14032E910 @ 0x14032E910 (sub_14032E910.c)
 */

__int64 __fastcall sub_140373BAC(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rbp
  _QWORD *v6; // rax
  unsigned int v7; // edi
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = *((_QWORD *)CurrentThread + 23);
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx(v5 + 1224, 0LL);
  *((_BYTE *)CurrentThread + 1384) |= 2u;
  if ( (*(_DWORD *)(v5 + 1124) & 0x20) != 0 )
  {
    v7 = -1073741558;
  }
  else
  {
    v6 = *(_QWORD **)(v5 + 2008);
    v7 = 0;
    v8 = 0LL;
    while ( v6 )
    {
      v8 = (unsigned __int64)v6;
      v6 = (_QWORD *)*v6;
    }
    while ( v8 )
    {
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
      *((_BYTE *)CurrentThread + 1384) |= 0x80u;
      if ( (*(_DWORD *)(v8 + 48) & 4) == 0 && sub_14032E910(v8) && !sub_14030EC40(v8) )
        sub_140256548(
          a1,
          a2 | 2,
          (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12,
          ((*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) << 12) | 0xFFF);
      sub_140281C44((__int64)CurrentThread, v8);
      v10 = *(_QWORD **)(v8 + 8);
      v11 = v8;
      if ( v10 )
      {
        v9 = (_QWORD *)*v10;
        v8 = *(_QWORD *)(v8 + 8);
        if ( *v10 )
        {
          do
          {
            v8 = (unsigned __int64)v9;
            v9 = (_QWORD *)*v9;
          }
          while ( v9 );
        }
      }
      else
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v8 || *(_QWORD *)v8 == v11 )
            break;
          v11 = v8;
        }
      }
    }
  }
  sub_14030EA00((__int64)CurrentThread, v5);
  return v7;
}
