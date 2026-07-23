/*
 * XREFs of sub_1402680C0 @ 0x1402680C0
 * Callers:
 *     sub_140265BE4 @ 0x140265BE4 (sub_140265BE4.c)
 *     sub_140265D40 @ 0x140265D40 (sub_140265D40.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 *     sub_1405AA320 @ 0x1405AA320 (sub_1405AA320.c)
 *     sub_1405ADCD4 @ 0x1405ADCD4 (sub_1405ADCD4.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     sub_140268998 @ 0x140268998 (sub_140268998.c)
 *     sub_140268AB0 @ 0x140268AB0 (sub_140268AB0.c)
 *     sub_14026A230 @ 0x14026A230 (sub_14026A230.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1402680C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  __int64 v5; // rsi
  unsigned __int8 v6; // r12
  int v7; // r13d
  unsigned int v8; // ebp
  int v9; // r14d
  __int64 v10; // rdi
  __int64 v11; // rdi
  int v12; // r8d
  unsigned int v13; // r11d
  unsigned int v14; // ecx
  char v15; // al
  __int64 *v16; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  bool v20; // zf
  int v21; // [rsp+88h] [rbp+20h]

  if ( a1 )
  {
    v4 = a2;
    v5 = a1;
    v6 = 17;
    v7 = 0;
    do
    {
      v8 = 0;
      v9 = 1;
      v10 = v5;
      do
      {
        if ( v8 >= 0x1000 )
          break;
        if ( v8 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
            break;
        }
        else
        {
          v6 = sub_1402F2700(v10);
        }
        if ( (*(_BYTE *)(v10 + 34) & 0xC0) != 0xC0 )
          v9 = 0;
        sub_140268998(v10, a2);
        v10 = *(_QWORD *)(v10 + 16);
        ++v8;
      }
      while ( v10 );
      if ( v9 || (sub_14026A230(a1, a2), v8 < dword_140C5074C) || v4 == 1 )
      {
        v21 = 0;
        v11 = v5;
        v12 = 0;
      }
      else
      {
        ++dword_140C50744;
        KeInvalidateAllCaches();
        v12 = 1;
        v11 = v5;
        v21 = 1;
      }
      v13 = v6 + 1;
      LOBYTE(a2) = (_BYTE)v4 << 6;
      do
      {
        v14 = *(unsigned __int8 *)(v11 + 34);
        v15 = a2 | v14 & 0x3F;
        a1 = v14 >> 6;
        *(_BYTE *)(v11 + 34) = v15;
        if ( !v12 && !v9 && v4 != 1 && (_DWORD)a1 == 1 )
        {
          ++dword_140C50748;
          sub_140268AB0(0xAAAAAAAAAAAAAAABuLL * ((v11 + 0x220000000000LL) >> 4), 1LL, v4);
          v13 = v6 + 1;
        }
        *(_QWORD *)(v11 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
        ++v7;
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v7 == v8 )
        {
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                a1 = v13;
                v19 = *((_QWORD *)CurrentPrcb + 4375);
                a2 = ~(unsigned __int16)(-1LL << v13);
                v20 = ((unsigned int)a2 & *(_DWORD *)(v19 + 20)) == 0;
                *(_DWORD *)(v19 + 20) &= a2;
                if ( v20 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(v6);
          v16 = (__int64 *)(v11 + 16);
          v11 = 0LL;
          v5 = *v16;
        }
        else
        {
          v16 = (__int64 *)(v11 + 16);
          v11 = *(_QWORD *)(v11 + 16);
        }
        if ( a3 != -1 )
          *v16 = a3;
        LOBYTE(a2) = (_BYTE)v4 << 6;
        v12 = v21;
        v13 = v6 + 1;
      }
      while ( v11 );
      v7 = 0;
    }
    while ( v5 );
  }
}
